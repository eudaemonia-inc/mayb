// maybe.cpp - invoke another program if input arrives
// Copyright (C) 2018, 2019  Eudaemonia Inc

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <poll.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <unistd.h>

int
main(int ac, char **av, char **ep)
{
  struct pollfd p;
  p.fd = 0;
  p.events = POLLIN;
  poll(&p, 1, -1);

  int count;
  ioctl(0, FIONREAD, &count);
  if (count) {
    execvpe(av[1],  av + 1, ep);
  } else {
    exit(0);
  }
}
