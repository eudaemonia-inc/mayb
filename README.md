This is the README.md file for Eudaemonia maybe.

Maybe is a program along the lines of cat and tee, intended for use in
pipelines. It does not do anything except wait for input and, if it
receives any, invokes another program to process that input.

  Copyright (C) 2018, 2019 Eudaemonia Inc
  Copyright (C) 1992, 1993, 1995, 1996, 1997, 1998, 1999, 2000, 2001,
  2002, 2004, 2005, 2006, 2010, 2013, 2014 Free Software Foundation,
  Inc.

  Copying and distribution of this file, with or without modification,
  are permitted in any medium without royalty provided the copyright
  notice and this notice are preserved.

See the files ./INSTALL* for building and installation instructions.

Primary distribution point: git@github.com:eudaemonia-inc/mayb.git

Home page: http://www.eudaemonia.org

Developer page: http://www.eudaemonia.org/projects/mayb/
- please file bug reports, patches and feature requests here if
  possible (otherwise, feel free to use the mailing list)
- significant contributions require a copyright assignment to the
  Eudaemonia Inc. The maintainer will be happy to answer questions
  about the process.

Mailing list: bug-mayb@eudaemonia.org
- please use this list for all discussion
- archived at: http://lists.gnu.org/pipermail/bug-hello
- anyone is welcome to join the list; to do so, visit
  http://lists.gnu.org/mailman/listinfo/bug-hello

Bug reports:
 Please include enough information for the maintainers to reproduce the
 problem.  Generally speaking, that means:
- the contents of any input files necessary to reproduce the bug
  and command line invocations of the program(s) involved (crucial!).
- a description of the problem and any samples of the erroneous output.
- the version number of the program(s) involved (use --version).
- hardware, operating system, and compiler versions (uname -a).
- unusual options you gave to configure, if any (see config.status).
- anything else that you think would be helpful.

Patching process:
- All changes must be sent to mailing list.
- Changes are reviewed by maintainers.
- Maintainer does not review own changes.
  * In case of single maintainer, or unresponsive co-maintainer, mailing
    list subscribers may perform the review.
- Review means either a patch approval, comments to author, or a reject.
  * Approved patches are taken to upstream git.
  * Commented patches will require work before they can be approved.
    Comments can be untechnical, such as a change author must submit a
    copyright assignment to FSF.
  * Authors are encouraged to discontinue work with rejected changes, as
    the reject is permanent.
- Maintainers keep track of rejected changes so that developers can avoid
  proposing the same in future.

Patches are most welcome; if possible, please make them in git-am
format, and include a suitable commit message.

See README-dev for information on the development environment -- any
interested parties are welcome.  If you're a programmer and wish to
contribute, this should get you started.  If you're not a programmer,
your help in writing test cases, checking the documentation against the
implementation, translating the program strings to other languages,
etc., would still be very much appreciated.

The basic idea is to provide syntactic sugar for shell scripts where a
step in a pipeline need not be run if its input is empty. For example,
a sanity-checking script that reports problems on standard output and
reports nothing if no problems are found could be used in this way:

check-frobnicator | mayb mail -s "frobnicator problems" frobnicator-owner@example.com

Eudaemonia maybe is free software.  See the file COPYING for copying conditions.
