#ifndef _VERSION_H
#define _VERSION_H

#define program_name	"pcs"
#define program_version v0.1.0-4-gc81de77M
#if defined(DEBUG) || defined(_DEBUG)
#  define program_full_name program_name "(debug) " program_version
#else
#  define program_full_name program_name " v" program_version
#endif

#endif