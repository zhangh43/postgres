# 1 "vtype.c"
# 1 "/home/u/src/postgres.git/contrib/vectorize_engine//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "vtype.c"
# 20 "vtype.c"
# 1 "../../src/include/postgres.h" 1
# 47 "../../src/include/postgres.h"
# 1 "../../src/include/c.h" 1
# 48 "../../src/include/c.h"
# 1 "../../src/include/postgres_ext.h" 1
# 26 "../../src/include/postgres_ext.h"
# 1 "../../src/include/pg_config_ext.h" 1
# 27 "../../src/include/postgres_ext.h" 2




typedef unsigned int Oid;
# 43 "../../src/include/postgres_ext.h"
typedef long int pg_int64;
# 49 "../../src/include/c.h" 2




# 1 "../../src/include/pg_config.h" 1
# 54 "../../src/include/c.h" 2
# 1 "../../src/include/pg_config_manual.h" 1
# 55 "../../src/include/c.h" 2
# 66 "../../src/include/c.h"
# 1 "../../src/include/pg_config_os.h" 1
# 67 "../../src/include/c.h" 2
# 81 "../../src/include/c.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 446 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 460 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 461 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 462 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 447 "/usr/include/features.h" 2 3 4
# 470 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 471 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4

# 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 39 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4





typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;






typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 164 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 183 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 237 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 587 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 662 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 750 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 873 "/usr/include/stdio.h" 3 4

# 82 "../../src/include/c.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 321 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 140 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64x strtof64x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 232 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 272 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 273 "/usr/include/stdlib.h" 2 3 4

extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 316 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 62 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 9 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
};
# 78 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 118 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;
# 148 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
  int __kind;
 




  short __spins; short __elision;
  __pthread_list_t __list;
# 165 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
 
};




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)));



extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 569 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 675 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 688 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 698 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 710 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 720 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 731 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 742 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 752 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 762 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 774 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 784 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;





extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 800 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 872 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 957 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1013 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1014 "/usr/include/stdlib.h" 2 3 4
# 1023 "/usr/include/stdlib.h" 3 4

# 83 "../../src/include/c.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 42 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 90 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 103 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 114 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 225 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 252 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 265 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 302 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 329 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 359 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 420 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 432 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 486 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 498 "/usr/include/string.h" 3 4

# 84 "../../src/include/c.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
} max_align_t;
# 85 "../../src/include/c.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 86 "../../src/include/c.h" 2




# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 2 3 4
# 91 "../../src/include/c.h" 2


# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4








extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern char *program_invocation_name;
extern char *program_invocation_short_name;

# 1 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 3 4
typedef int error_t;
# 49 "/usr/include/errno.h" 2 3 4




# 94 "../../src/include/c.h" 2



# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4


# 51 "/usr/include/locale.h" 3 4
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 118 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));
# 141 "/usr/include/locale.h" 3 4
extern locale_t newlocale (int __category_mask, const char *__locale,
      locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
# 176 "/usr/include/locale.h" 3 4
extern locale_t duplocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern locale_t uselocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));








# 98 "../../src/include/c.h" 2
# 244 "../../src/include/c.h"

# 244 "../../src/include/c.h"
typedef char bool;
# 257 "../../src/include/c.h"
typedef bool *BoolPtr;
# 288 "../../src/include/c.h"
typedef char *Pointer;
# 297 "../../src/include/c.h"
typedef signed char int8;
typedef signed short int16;
typedef signed int int32;
# 309 "../../src/include/c.h"
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;






typedef uint8 bits8;
typedef uint16 bits16;
typedef uint32 bits32;
# 329 "../../src/include/c.h"
typedef long int int64;


typedef unsigned long int uint64;
# 368 "../../src/include/c.h"
typedef __int128 int128

__attribute__((aligned(8)))

;

typedef unsigned __int128 uint128

__attribute__((aligned(8)))

;
# 418 "../../src/include/c.h"
typedef size_t Size;
# 427 "../../src/include/c.h"
typedef unsigned int Index;
# 437 "../../src/include/c.h"
typedef signed int Offset;




typedef float float4;
typedef double float8;
# 456 "../../src/include/c.h"
typedef Oid regproc;
typedef regproc RegProcedure;

typedef uint32 TransactionId;

typedef uint32 LocalTransactionId;

typedef uint32 SubTransactionId;





typedef TransactionId MultiXactId;

typedef uint32 MultiXactOffset;

typedef uint32 CommandId;
# 482 "../../src/include/c.h"
typedef struct
{
 int indx[6];
} IntArray;
# 500 "../../src/include/c.h"
struct varlena
{
 char vl_len_[4];
 char vl_dat[];
};
# 513 "../../src/include/c.h"
typedef struct varlena bytea;
typedef struct varlena text;
typedef struct varlena BpChar;
typedef struct varlena VarChar;
# 528 "../../src/include/c.h"
typedef struct
{
 int32 vl_len_;
 int ndim;
 int32 dataoffset;
 Oid elemtype;
 int dim1;
 int lbound1;
 int16 values[];
} int2vector;

typedef struct
{
 int32 vl_len_;
 int ndim;
 int32 dataoffset;
 Oid elemtype;
 int dim1;
 int lbound1;
 Oid values[];
} oidvector;





typedef struct nameData
{
 char data[64];
} NameData;
typedef NameData *Name;
# 971 "../../src/include/c.h"
typedef union PGAlignedBlock
{
 char data[8192];
 double force_align_d;
 int64 force_align_i64;
} PGAlignedBlock;


typedef union PGAlignedXLogBlock
{
 char data[8192];
 double force_align_d;
 int64 force_align_i64;
} PGAlignedXLogBlock;
# 1180 "../../src/include/c.h"
# 1 "../../src/include/port.h" 1
# 16 "../../src/include/port.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 108 "/usr/include/ctype.h" 3 4
extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));




extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));




extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ , __leaf__));






extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 251 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 327 "/usr/include/ctype.h" 3 4

# 17 "../../src/include/port.h" 2
# 1 "/usr/include/netdb.h" 1 3 4
# 27 "/usr/include/netdb.h" 3 4
# 1 "/usr/include/netinet/in.h" 1 3 4
# 23 "/usr/include/netinet/in.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/socket.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 2 3 4


struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 27 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/socket.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4





typedef __socklen_t socklen_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
# 39 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 175 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 176 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 191 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,



    MSG_TRYHARD = MSG_DONTROUTE,


    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_BATCH = 0x40000,

    MSG_ZEROCOPY = 0x4000000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 305 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ , __leaf__));
# 332 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};




# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4




# 1 "/usr/include/linux/posix_types.h" 1 3 4




# 1 "/usr/include/linux/stddef.h" 1 3 4
# 6 "/usr/include/linux/posix_types.h" 2 3 4
# 25 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types.h" 1 3 4






# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 3 4
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;


typedef unsigned long __kernel_old_dev_t;


# 1 "/usr/include/asm-generic/posix_types.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 12 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 6 "/usr/include/asm-generic/posix_types.h" 2 3 4
# 15 "/usr/include/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;



typedef unsigned int __kernel_mode_t;



typedef int __kernel_pid_t;



typedef int __kernel_ipc_pid_t;



typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;



typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
# 72 "/usr/include/asm-generic/posix_types.h" 3 4
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;




typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 19 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 2 3 4
# 8 "/usr/include/x86_64-linux-gnu/asm/posix_types.h" 2 3 4
# 37 "/usr/include/linux/posix_types.h" 2 3 4
# 6 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 2 3 4
# 7 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 2 3 4
# 355 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4






struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 34 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_osockaddr.h" 1 3 4





struct osockaddr
{
  unsigned short int sa_family;
  unsigned char sa_data[14];
};
# 37 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 79 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
typedef union { struct sockaddr *__restrict __sockaddr__; struct sockaddr_at *__restrict __sockaddr_at__; struct sockaddr_ax25 *__restrict __sockaddr_ax25__; struct sockaddr_dl *__restrict __sockaddr_dl__; struct sockaddr_eon *__restrict __sockaddr_eon__; struct sockaddr_in *__restrict __sockaddr_in__; struct sockaddr_in6 *__restrict __sockaddr_in6__; struct sockaddr_inarp *__restrict __sockaddr_inarp__; struct sockaddr_ipx *__restrict __sockaddr_ipx__; struct sockaddr_iso *__restrict __sockaddr_iso__; struct sockaddr_ns *__restrict __sockaddr_ns__; struct sockaddr_un *__restrict __sockaddr_un__; struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __SOCKADDR_ARG __attribute__ ((__transparent_union__));


typedef union { const struct sockaddr *__restrict __sockaddr__; const struct sockaddr_at *__restrict __sockaddr_at__; const struct sockaddr_ax25 *__restrict __sockaddr_ax25__; const struct sockaddr_dl *__restrict __sockaddr_dl__; const struct sockaddr_eon *__restrict __sockaddr_eon__; const struct sockaddr_in *__restrict __sockaddr_in__; const struct sockaddr_in6 *__restrict __sockaddr_in6__; const struct sockaddr_inarp *__restrict __sockaddr_inarp__; const struct sockaddr_ipx *__restrict __sockaddr_ipx__; const struct sockaddr_iso *__restrict __sockaddr_iso__; const struct sockaddr_ns *__restrict __sockaddr_ns__; const struct sockaddr_un *__restrict __sockaddr_un__; const struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __CONST_SOCKADDR_ARG __attribute__ ((__transparent_union__));





struct mmsghdr
  {
    struct msghdr msg_hdr;
    unsigned int msg_len;

  };






extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ , __leaf__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ , __leaf__));


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     __attribute__ ((__nothrow__ , __leaf__));


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));
# 126 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ , __leaf__));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
# 163 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);







extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags);







extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);







extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       struct timespec *__tmo);






extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ , __leaf__));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ , __leaf__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ , __leaf__));
# 232 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __addr_len);






extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len, int __flags);
# 250 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ , __leaf__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ , __leaf__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ , __leaf__));
# 272 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4

# 24 "/usr/include/netinet/in.h" 2 3 4






typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


# 1 "/usr/include/x86_64-linux-gnu/bits/in.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 38 "/usr/include/netinet/in.h" 2 3 4


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_MPLS = 137,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
# 212 "/usr/include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];
 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];
      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
# 238 "/usr/include/netinet/in.h" 3 4
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr)
      - (sizeof (unsigned short int))
      - sizeof (in_port_t)
      - sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
# 375 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 387 "/usr/include/netinet/in.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 388 "/usr/include/netinet/in.h" 2 3 4
# 503 "/usr/include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__ , __leaf__));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__ , __leaf__));
# 533 "/usr/include/netinet/in.h" 3 4
struct cmsghdr;



struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
  };



extern int inet6_option_space (int __nbytes)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_init (void *__bp, struct cmsghdr **__cmsgp,
         int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_append (struct cmsghdr *__cmsg,
    const uint8_t *__typep, int __multx,
    int __plusy) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern uint8_t *inet6_option_alloc (struct cmsghdr *__cmsg, int __datalen,
        int __multx, int __plusy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_next (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
extern int inet6_option_find (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int inet6_opt_init (void *__extbuf, socklen_t __extlen) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_append (void *__extbuf, socklen_t __extlen, int __offset,
        uint8_t __type, socklen_t __len, uint8_t __align,
        void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_finish (void *__extbuf, socklen_t __extlen, int __offset)
     __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_set_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_next (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t *__typep, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_find (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t __type, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_opt_get_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ , __leaf__));



extern socklen_t inet6_rth_space (int __type, int __segments) __attribute__ ((__nothrow__ , __leaf__));
extern void *inet6_rth_init (void *__bp, socklen_t __bp_len, int __type,
        int __segments) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_add (void *__bp, const struct in6_addr *__addr) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_reverse (const void *__in, void *__out) __attribute__ ((__nothrow__ , __leaf__));
extern int inet6_rth_segments (const void *__bp) __attribute__ ((__nothrow__ , __leaf__));
extern struct in6_addr *inet6_rth_getaddr (const void *__bp, int __index)
     __attribute__ ((__nothrow__ , __leaf__));





extern int getipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t *__fmode,
    uint32_t *__numsrc, struct in_addr *__slist)
     __attribute__ ((__nothrow__ , __leaf__));


extern int setipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t __fmode,
    uint32_t __numsrc,
    const struct in_addr *__slist)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t *__fmode,
       uint32_t *__numsrc,
       struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ , __leaf__));


extern int setsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t __fmode,
       uint32_t __numsrc,
       const struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ , __leaf__));



# 28 "/usr/include/netdb.h" 2 3 4




# 1 "/usr/include/rpc/netdb.h" 1 3 4
# 42 "/usr/include/rpc/netdb.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 43 "/usr/include/rpc/netdb.h" 2 3 4



struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) __attribute__ ((__nothrow__ , __leaf__));
extern void endrpcent (void) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbyname (const char *__name) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcbynumber (int __number) __attribute__ ((__nothrow__ , __leaf__));
extern struct rpcent *getrpcent (void) __attribute__ ((__nothrow__ , __leaf__));


extern int getrpcbyname_r (const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) __attribute__ ((__nothrow__ , __leaf__));



# 33 "/usr/include/netdb.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 3 4
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 3 4
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
# 37 "/usr/include/netdb.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 41 "/usr/include/netdb.h" 2 3 4
# 51 "/usr/include/netdb.h" 3 4








extern int *__h_errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 90 "/usr/include/netdb.h" 3 4
extern void herror (const char *__str) __attribute__ ((__nothrow__ , __leaf__));


extern const char *hstrerror (int __err_num) __attribute__ ((__nothrow__ , __leaf__));




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;



};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (const char *__name);
# 153 "/usr/include/netdb.h" 3 4
extern struct hostent *gethostbyname2 (const char *__name, int __af);
# 165 "/usr/include/netdb.h" 3 4
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
# 196 "/usr/include/netdb.h" 3 4
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (const char *__name);
# 235 "/usr/include/netdb.h" 3 4
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (const char *__name, const char *__proto);






extern struct servent *getservbyport (int __port, const char *__proto);
# 306 "/usr/include/netdb.h" 3 4
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (const char *__restrict __name,
       const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (const char *__name);





extern struct protoent *getprotobynumber (int __proto);
# 372 "/usr/include/netdb.h" 3 4
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
# 393 "/usr/include/netdb.h" 3 4
extern int setnetgrent (const char *__netgroup);







extern void endnetgrent (void);
# 410 "/usr/include/netdb.h" 3 4
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
# 421 "/usr/include/netdb.h" 3 4
extern int innetgr (const char *__netgroup, const char *__host,
      const char *__user, const char *__domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
# 449 "/usr/include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   const char *__restrict __locuser,
   const char *__restrict __remuser,
   const char *__restrict __cmd, int *__restrict __fd2p);
# 461 "/usr/include/netdb.h" 3 4
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      const char *__restrict __locuser,
      const char *__restrict __remuser,
      const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
# 477 "/usr/include/netdb.h" 3 4
extern int rexec (char **__restrict __ahost, int __rport,
    const char *__restrict __name,
    const char *__restrict __pass,
    const char *__restrict __cmd, int *__restrict __fd2p);
# 489 "/usr/include/netdb.h" 3 4
extern int rexec_af (char **__restrict __ahost, int __rport,
       const char *__restrict __name,
       const char *__restrict __pass,
       const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
# 503 "/usr/include/netdb.h" 3 4
extern int ruserok (const char *__rhost, int __suser,
      const char *__remuser, const char *__locuser);
# 513 "/usr/include/netdb.h" 3 4
extern int ruserok_af (const char *__rhost, int __suser,
         const char *__remuser, const char *__locuser,
         sa_family_t __af);
# 526 "/usr/include/netdb.h" 3 4
extern int iruserok (uint32_t __raddr, int __suser,
       const char *__remuser, const char *__locuser);
# 537 "/usr/include/netdb.h" 3 4
extern int iruserok_af (const void *__raddr, int __suser,
   const char *__remuser, const char *__locuser,
   sa_family_t __af);
# 549 "/usr/include/netdb.h" 3 4
extern int rresvport (int *__alport);
# 558 "/usr/include/netdb.h" 3 4
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};



struct gaicb
{
  const char *ar_name;
  const char *ar_service;
  const struct addrinfo *ar_request;
  struct addrinfo *ar_result;

  int __return;
  int __glibc_reserved[5];
};
# 660 "/usr/include/netdb.h" 3 4
extern int getaddrinfo (const char *__restrict __name,
   const char *__restrict __service,
   const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) __attribute__ ((__nothrow__ , __leaf__));


extern const char *gai_strerror (int __ecode) __attribute__ ((__nothrow__ , __leaf__));





extern int getnameinfo (const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, int __flags);
# 690 "/usr/include/netdb.h" 3 4
extern int getaddrinfo_a (int __mode, struct gaicb *__list[__restrict],
     int __ent, struct sigevent *__restrict __sig);
# 701 "/usr/include/netdb.h" 3 4
extern int gai_suspend (const struct gaicb *const __list[], int __ent,
   const struct timespec *__timeout);


extern int gai_error (struct gaicb *__req) __attribute__ ((__nothrow__ , __leaf__));


extern int gai_cancel (struct gaicb *__gaicbp) __attribute__ ((__nothrow__ , __leaf__));



# 18 "../../src/include/port.h" 2
# 1 "/usr/include/pwd.h" 1 3 4
# 27 "/usr/include/pwd.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 33 "/usr/include/pwd.h" 2 3 4
# 49 "/usr/include/pwd.h" 3 4
struct passwd
{
  char *pw_name;
  char *pw_passwd;

  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
# 72 "/usr/include/pwd.h" 3 4
extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
# 94 "/usr/include/pwd.h" 3 4
extern struct passwd *fgetpwent (FILE *__stream) __attribute__ ((__nonnull__ (1)));







extern int putpwent (const struct passwd *__restrict __p,
       FILE *__restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name) __attribute__ ((__nonnull__ (1)));
# 139 "/usr/include/pwd.h" 3 4
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         __attribute__ ((__nonnull__ (1, 2, 4)));


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         __attribute__ ((__nonnull__ (2, 3, 5)));

extern int getpwnam_r (const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         __attribute__ ((__nonnull__ (1, 2, 3, 5)));
# 166 "/usr/include/pwd.h" 3 4
extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result)
   __attribute__ ((__nonnull__ (1, 2, 3, 5)));
# 184 "/usr/include/pwd.h" 3 4
extern int getpw (__uid_t __uid, char *__buffer);



# 19 "../../src/include/port.h" 2




# 22 "../../src/include/port.h"
typedef int pgsocket;
# 32 "../../src/include/port.h"
extern bool pg_set_noblock(pgsocket sock);
extern bool pg_set_block(pgsocket sock);



extern bool has_drive_prefix(const char *filename);
extern char *first_dir_separator(const char *filename);
extern char *last_dir_separator(const char *filename);
extern char *first_path_var_separator(const char *pathlist);
extern void join_path_components(char *ret_path,
      const char *head, const char *tail);
extern void canonicalize_path(char *path);
extern void make_native_path(char *path);
extern void cleanup_path(char *path);
extern bool path_contains_parent_reference(const char *path);
extern bool path_is_relative_and_below_cwd(const char *path);
extern bool path_is_prefix_of_path(const char *path1, const char *path2);
extern char *make_absolute_path(const char *path);
extern const char *get_progname(const char *argv0);
extern void get_share_path(const char *my_exec_path, char *ret_path);
extern void get_etc_path(const char *my_exec_path, char *ret_path);
extern void get_include_path(const char *my_exec_path, char *ret_path);
extern void get_pkginclude_path(const char *my_exec_path, char *ret_path);
extern void get_includeserver_path(const char *my_exec_path, char *ret_path);
extern void get_lib_path(const char *my_exec_path, char *ret_path);
extern void get_pkglib_path(const char *my_exec_path, char *ret_path);
extern void get_locale_path(const char *my_exec_path, char *ret_path);
extern void get_doc_path(const char *my_exec_path, char *ret_path);
extern void get_html_path(const char *my_exec_path, char *ret_path);
extern void get_man_path(const char *my_exec_path, char *ret_path);
extern bool get_home_path(char *ret_path);
extern void get_parent_directory(char *path);


extern char **pgfnames(const char *path);
extern void pgfnames_cleanup(char **filenames);
# 94 "../../src/include/port.h"
extern void set_pglocale_pgservice(const char *argv0, const char *app);


extern int find_my_exec(const char *argv0, char *retpath);
extern int find_other_exec(const char *argv0, const char *target,
    const char *versionstr, char *retpath);
# 120 "../../src/include/port.h"
extern void pg_usleep(long microsec);


extern int pg_strcasecmp(const char *s1, const char *s2);
extern int pg_strncasecmp(const char *s1, const char *s2, size_t n);
extern unsigned char pg_toupper(unsigned char ch);
extern unsigned char pg_tolower(unsigned char ch);
extern unsigned char pg_ascii_toupper(unsigned char ch);
extern unsigned char pg_ascii_tolower(unsigned char ch);
# 206 "../../src/include/port.h"
extern char *simple_prompt(const char *prompt, int maxlen, bool echo);







extern int pclose_check(FILE *stream);
# 259 "../../src/include/port.h"
extern bool rmtree(const char *path, bool rmtopdir);
# 361 "../../src/include/port.h"
extern double pg_erand48(unsigned short xseed[3]);
extern long pg_lrand48(void);
extern void pg_srand48(long seed);


extern int fls(int mask);
# 375 "../../src/include/port.h"
extern int getpeereid(int sock, uid_t *uid, gid_t *gid);
# 397 "../../src/include/port.h"
extern size_t strlcat(char *dst, const char *src, size_t siz);



extern size_t strlcpy(char *dst, const char *src, size_t siz);
# 421 "../../src/include/port.h"
extern char *pqStrerror(int errnum, char *strerrbuf, size_t buflen);


extern int pqGetpwuid(uid_t uid, struct passwd * resultbuf, char *buffer,
     size_t buflen, struct passwd ** result);


extern int pqGethostbyname(const char *name,
    struct hostent * resultbuf,
    char *buffer, size_t buflen,
    struct hostent ** result,
    int *herrno);

extern void pg_qsort(void *base, size_t nel, size_t elsize,
   int (*cmp) (const void *, const void *));
extern int pg_qsort_strcmp(const void *a, const void *b);



typedef int (*qsort_arg_comparator) (const void *a, const void *b, void *arg);

extern void qsort_arg(void *base, size_t nel, size_t elsize,
    qsort_arg_comparator cmp, void *arg);


extern int pg_get_encoding_from_locale(const char *ctype, bool write_message);






extern char *inet_net_ntop(int af, const void *src, int bits,
     char *dst, size_t size);


extern int pg_check_dir(const char *dir);


extern int pg_mkdir_p(char *path, int omode);


typedef void (*pqsigfunc) (int signo);
extern pqsigfunc pqsignal(int signo, pqsigfunc func);

extern pqsigfunc pqsignal_no_restart(int signo, pqsigfunc func);





extern char *escape_single_quotes_ascii(const char *src);


extern char *wait_result_to_str(int exit_status);
# 1181 "../../src/include/c.h" 2
# 48 "../../src/include/postgres.h" 2
# 1 "../../src/include/utils/elog.h" 1
# 17 "../../src/include/utils/elog.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4





# 31 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };


typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 67 "/usr/include/setjmp.h" 3 4
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));





extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 93 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 103 "/usr/include/setjmp.h" 3 4

# 18 "../../src/include/utils/elog.h" 2
# 71 "../../src/include/utils/elog.h"
# 1 "../../src/include/utils/errcodes.h" 1
# 72 "../../src/include/utils/elog.h" 2
# 127 "../../src/include/utils/elog.h"

# 127 "../../src/include/utils/elog.h"
extern bool errstart(int elevel, const char *filename, int lineno,
   const char *funcname, const char *domain);
extern void errfinish(int dummy,...);

extern int errcode(int sqlerrcode);

extern int errcode_for_file_access(void);
extern int errcode_for_socket_access(void);

extern int errmsg(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
extern int errmsg_internal(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errmsg_plural(const char *fmt_singular, const char *fmt_plural,
 unsigned long n,...) __attribute__((format(gnu_printf, 1, 4))) __attribute__((format(gnu_printf, 2, 4)));

extern int errdetail(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
extern int errdetail_internal(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errdetail_log(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errdetail_log_plural(const char *fmt_singular,
      const char *fmt_plural,
 unsigned long n,...) __attribute__((format(gnu_printf, 1, 4))) __attribute__((format(gnu_printf, 2, 4)));

extern int errdetail_plural(const char *fmt_singular, const char *fmt_plural,
 unsigned long n,...) __attribute__((format(gnu_printf, 1, 4))) __attribute__((format(gnu_printf, 2, 4)));

extern int errhint(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
# 166 "../../src/include/utils/elog.h"
extern int set_errcontext_domain(const char *domain);

extern int errcontext_msg(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));

extern int errhidestmt(bool hide_stmt);
extern int errhidecontext(bool hide_ctx);

extern int errfunction(const char *funcname);
extern int errposition(int cursorpos);

extern int internalerrposition(int cursorpos);
extern int internalerrquery(const char *query);

extern int err_generic_string(int field, const char *str);

extern int geterrcode(void);
extern int geterrposition(void);
extern int getinternalerrposition(void);
# 224 "../../src/include/utils/elog.h"
extern void elog_start(const char *filename, int lineno, const char *funcname);
extern void elog_finish(int elevel, const char *fmt,...) __attribute__((format(gnu_printf, 2, 3)));




extern void pre_format_elog_string(int errnumber, const char *domain);
extern char *format_elog_string(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));




typedef struct ErrorContextCallback
{
 struct ErrorContextCallback *previous;
 void (*callback) (void *arg);
 void *arg;
} ErrorContextCallback;

extern ErrorContextCallback *error_context_stack;
# 318 "../../src/include/utils/elog.h"
extern sigjmp_buf *PG_exception_stack;
# 329 "../../src/include/utils/elog.h"
typedef struct ErrorData
{
 int elevel;
 bool output_to_server;
 bool output_to_client;
 bool show_funcname;
 bool hide_stmt;
 bool hide_ctx;
 const char *filename;
 int lineno;
 const char *funcname;
 const char *domain;
 const char *context_domain;
 int sqlerrcode;
 char *message;
 char *detail;
 char *detail_log;
 char *hint;
 char *context;
 const char *message_id;
 char *schema_name;
 char *table_name;
 char *column_name;
 char *datatype_name;
 char *constraint_name;
 int cursorpos;
 int internalpos;
 char *internalquery;
 int saved_errno;


 struct MemoryContextData *assoc_context;
} ErrorData;

extern void EmitErrorReport(void);
extern ErrorData *CopyErrorData(void);
extern void FreeErrorData(ErrorData *edata);
extern void FlushErrorState(void);
extern void ReThrowError(ErrorData *edata) __attribute__((noreturn));
extern void ThrowErrorData(ErrorData *edata);
extern void pg_re_throw(void) __attribute__((noreturn));

extern char *GetErrorContextStack(void);


typedef void (*emit_log_hook_type) (ErrorData *edata);
extern emit_log_hook_type emit_log_hook;




typedef enum
{
 PGERROR_TERSE,
 PGERROR_DEFAULT,
 PGERROR_VERBOSE
} PGErrorVerbosity;

extern int Log_error_verbosity;
extern char *Log_line_prefix;
extern int Log_destination;
extern char *Log_destination_string;
extern bool syslog_sequence_numbers;
extern bool syslog_split_messages;
# 401 "../../src/include/utils/elog.h"
extern void DebugFileOpen(void);
extern char *unpack_sql_state(int sql_state);
extern bool in_error_recursion_trouble(void);


extern void set_syslog_parameters(const char *ident, int facility);







extern void write_stderr(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
# 49 "../../src/include/postgres.h" 2
# 1 "../../src/include/utils/palloc.h" 1
# 36 "../../src/include/utils/palloc.h"
typedef struct MemoryContextData *MemoryContext;
# 45 "../../src/include/utils/palloc.h"
typedef void (*MemoryContextCallbackFunction) (void *arg);

typedef struct MemoryContextCallback
{
 MemoryContextCallbackFunction func;
 void *arg;
 struct MemoryContextCallback *next;
} MemoryContextCallback;






extern MemoryContext CurrentMemoryContext;
# 71 "../../src/include/utils/palloc.h"
extern void *MemoryContextAlloc(MemoryContext context, Size size);
extern void *MemoryContextAllocZero(MemoryContext context, Size size);
extern void *MemoryContextAllocZeroAligned(MemoryContext context, Size size);
extern void *MemoryContextAllocExtended(MemoryContext context,
         Size size, int flags);

extern void *palloc(Size size);
extern void *palloc0(Size size);
extern void *palloc_extended(Size size, int flags);
extern void *repalloc(void *pointer, Size size);
extern void pfree(void *pointer);
# 97 "../../src/include/utils/palloc.h"
extern void *MemoryContextAllocHuge(MemoryContext context, Size size);
extern void *repalloc_huge(void *pointer, Size size);
# 108 "../../src/include/utils/palloc.h"
static inline MemoryContext
MemoryContextSwitchTo(MemoryContext context)
{
 MemoryContext old = CurrentMemoryContext;

 CurrentMemoryContext = context;
 return old;
}



extern void MemoryContextRegisterResetCallback(MemoryContext context,
           MemoryContextCallback *cb);





extern char *MemoryContextStrdup(MemoryContext context, const char *string);
extern char *pstrdup(const char *in);
extern char *pnstrdup(const char *in, Size len);


extern char *psprintf(const char *fmt,...) __attribute__((format(gnu_printf, 1, 2)));
extern size_t pvsnprintf(char *buf, size_t len, const char *fmt, va_list args) __attribute__((format(gnu_printf, 3, 0)));
# 50 "../../src/include/postgres.h" 2
# 68 "../../src/include/postgres.h"
typedef struct varatt_external
{
 int32 va_rawsize;
 int32 va_extsize;
 Oid va_valueid;
 Oid va_toastrelid;
} varatt_external;
# 85 "../../src/include/postgres.h"
typedef struct varatt_indirect
{
 struct varlena *pointer;
} varatt_indirect;
# 100 "../../src/include/postgres.h"
typedef struct ExpandedObjectHeader ExpandedObjectHeader;

typedef struct varatt_expanded
{
 ExpandedObjectHeader *eohptr;
} varatt_expanded;






typedef enum vartag_external
{
 VARTAG_INDIRECT = 1,
 VARTAG_EXPANDED_RO = 2,
 VARTAG_EXPANDED_RW = 3,
 VARTAG_ONDISK = 18
} vartag_external;
# 139 "../../src/include/postgres.h"
typedef union
{
 struct
 {
  uint32 va_header;
  char va_data[];
 } va_4byte;
 struct
 {
  uint32 va_header;
  uint32 va_rawsize;
  char va_data[];
 } va_compressed;
} varattrib_4b;

typedef struct
{
 uint8 va_header;
 char va_data[];
} varattrib_1b;


typedef struct
{
 uint8 va_header;
 uint8 va_tag;
 char va_data[];
} varattrib_1b_e;
# 374 "../../src/include/postgres.h"
typedef uintptr_t Datum;



typedef Datum *DatumPtr;
# 667 "../../src/include/postgres.h"
extern float4 DatumGetFloat4(Datum X);
# 680 "../../src/include/postgres.h"
extern Datum Float4GetDatum(float4 X);
# 690 "../../src/include/postgres.h"
extern float8 DatumGetFloat8(Datum X);
# 703 "../../src/include/postgres.h"
extern Datum Float8GetDatum(float8 X);
# 745 "../../src/include/postgres.h"
extern void ExceptionalCondition(const char *conditionName,
      const char *errorType,
      const char *fileName, int lineNumber) __attribute__((noreturn));
# 21 "vtype.c" 2
# 1 "../../src/include/catalog/pg_type.h" 1
# 22 "../../src/include/catalog/pg_type.h"
# 1 "../../src/include/catalog/genbki.h" 1
# 23 "../../src/include/catalog/pg_type.h" 2
# 37 "../../src/include/catalog/pg_type.h"
typedef struct FormData_pg_type
{
 NameData typname;
 Oid typnamespace;
 Oid typowner;
# 50 "../../src/include/catalog/pg_type.h"
 int16 typlen;
# 60 "../../src/include/catalog/pg_type.h"
 bool typbyval;
# 69 "../../src/include/catalog/pg_type.h"
 char typtype;







 char typcategory;

 bool typispreferred;





 bool typisdefined;

 char typdelim;

 Oid typrelid;
# 102 "../../src/include/catalog/pg_type.h"
 Oid typelem;





 Oid typarray;




 regproc typinput;
 regproc typoutput;
 regproc typreceive;
 regproc typsend;




 regproc typmodin;
 regproc typmodout;




 regproc typanalyze;
# 153 "../../src/include/catalog/pg_type.h"
 char typalign;
# 165 "../../src/include/catalog/pg_type.h"
 char typstorage;
# 175 "../../src/include/catalog/pg_type.h"
 bool typnotnull;





 Oid typbasetype;






 int32 typtypmod;





 int32 typndims;





 Oid typcollation;
# 226 "../../src/include/catalog/pg_type.h"
} FormData_pg_type;






typedef FormData_pg_type *Form_pg_type;
# 286 "../../src/include/catalog/pg_type.h"
extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;





extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;




extern int no_such_variable;
extern int no_such_variable;
# 383 "../../src/include/catalog/pg_type.h"
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;



extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;





extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;



extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;




extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;



extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;


extern int no_such_variable;
extern int no_such_variable;

extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
extern int no_such_variable;
# 667 "../../src/include/catalog/pg_type.h"
extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;

extern int no_such_variable;
# 22 "vtype.c" 2
# 1 "../../src/include/utils/builtins.h" 1
# 17 "../../src/include/utils/builtins.h"
# 1 "../../src/include/fmgr.h" 1
# 22 "../../src/include/fmgr.h"
typedef struct Node *fmNodePtr;
typedef struct Aggref *fmAggrefPtr;


typedef void (*fmExprContextCallbackFunction) (Datum arg);


typedef struct StringInfoData *fmStringInfo;
# 38 "../../src/include/fmgr.h"
typedef struct FunctionCallInfoData *FunctionCallInfo;

typedef Datum (*PGFunction) (FunctionCallInfo fcinfo);
# 53 "../../src/include/fmgr.h"
typedef struct FmgrInfo
{
 PGFunction fn_addr;
 Oid fn_oid;
 short fn_nargs;
 bool fn_strict;
 bool fn_retset;
 unsigned char fn_stats;
 void *fn_extra;
 MemoryContext fn_mcxt;
 fmNodePtr fn_expr;
} FmgrInfo;




typedef struct FunctionCallInfoData
{
 FmgrInfo *flinfo;
 fmNodePtr context;
 fmNodePtr resultinfo;
 Oid fncollation;
 bool isnull;
 short nargs;
 Datum arg[100];
 bool argnull[100];
} FunctionCallInfoData;





extern void fmgr_info(Oid functionId, FmgrInfo *finfo);






extern void fmgr_info_cxt(Oid functionId, FmgrInfo *finfo,
     MemoryContext mcxt);
# 102 "../../src/include/fmgr.h"
extern void fmgr_info_copy(FmgrInfo *dstinfo, FmgrInfo *srcinfo,
      MemoryContext destcxt);
# 190 "../../src/include/fmgr.h"
extern struct varlena *pg_detoast_datum(struct varlena * datum);
extern struct varlena *pg_detoast_datum_copy(struct varlena * datum);
extern struct varlena *pg_detoast_datum_slice(struct varlena * datum,
        int32 first, int32 count);
extern struct varlena *pg_detoast_datum_packed(struct varlena * datum);
# 336 "../../src/include/fmgr.h"
typedef struct
{
 int api_version;

} Pg_finfo_record;


typedef const Pg_finfo_record *(*PGFInfoFunction) (void);
# 395 "../../src/include/fmgr.h"
typedef struct
{
 int len;
 int version;
 int funcmaxargs;
 int indexmaxkeys;
 int namedatalen;
 int float4byval;
 int float8byval;
} Pg_magic_struct;
# 422 "../../src/include/fmgr.h"
typedef const Pg_magic_struct *(*PGModuleMagicFunction) (void);
# 447 "../../src/include/fmgr.h"
extern Datum DirectFunctionCall1Coll(PGFunction func, Oid collation,
      Datum arg1);
extern Datum DirectFunctionCall2Coll(PGFunction func, Oid collation,
      Datum arg1, Datum arg2);
extern Datum DirectFunctionCall3Coll(PGFunction func, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3);
extern Datum DirectFunctionCall4Coll(PGFunction func, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4);
extern Datum DirectFunctionCall5Coll(PGFunction func, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5);
extern Datum DirectFunctionCall6Coll(PGFunction func, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6);
extern Datum DirectFunctionCall7Coll(PGFunction func, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7);
extern Datum DirectFunctionCall8Coll(PGFunction func, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7, Datum arg8);
extern Datum DirectFunctionCall9Coll(PGFunction func, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7, Datum arg8,
      Datum arg9);





extern Datum FunctionCall1Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1);
extern Datum FunctionCall2Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1, Datum arg2);
extern Datum FunctionCall3Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3);
extern Datum FunctionCall4Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4);
extern Datum FunctionCall5Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5);
extern Datum FunctionCall6Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6);
extern Datum FunctionCall7Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7);
extern Datum FunctionCall8Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7, Datum arg8);
extern Datum FunctionCall9Coll(FmgrInfo *flinfo, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7, Datum arg8,
      Datum arg9);







extern Datum OidFunctionCall0Coll(Oid functionId, Oid collation);
extern Datum OidFunctionCall1Coll(Oid functionId, Oid collation,
      Datum arg1);
extern Datum OidFunctionCall2Coll(Oid functionId, Oid collation,
      Datum arg1, Datum arg2);
extern Datum OidFunctionCall3Coll(Oid functionId, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3);
extern Datum OidFunctionCall4Coll(Oid functionId, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4);
extern Datum OidFunctionCall5Coll(Oid functionId, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5);
extern Datum OidFunctionCall6Coll(Oid functionId, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6);
extern Datum OidFunctionCall7Coll(Oid functionId, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7);
extern Datum OidFunctionCall8Coll(Oid functionId, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7, Datum arg8);
extern Datum OidFunctionCall9Coll(Oid functionId, Oid collation,
      Datum arg1, Datum arg2,
      Datum arg3, Datum arg4, Datum arg5,
      Datum arg6, Datum arg7, Datum arg8,
      Datum arg9);
# 614 "../../src/include/fmgr.h"
extern Datum InputFunctionCall(FmgrInfo *flinfo, char *str,
      Oid typioparam, int32 typmod);
extern Datum OidInputFunctionCall(Oid functionId, char *str,
      Oid typioparam, int32 typmod);
extern char *OutputFunctionCall(FmgrInfo *flinfo, Datum val);
extern char *OidOutputFunctionCall(Oid functionId, Datum val);
extern Datum ReceiveFunctionCall(FmgrInfo *flinfo, fmStringInfo buf,
     Oid typioparam, int32 typmod);
extern Datum OidReceiveFunctionCall(Oid functionId, fmStringInfo buf,
        Oid typioparam, int32 typmod);
extern bytea *SendFunctionCall(FmgrInfo *flinfo, Datum val);
extern bytea *OidSendFunctionCall(Oid functionId, Datum val);





extern const Pg_finfo_record *fetch_finfo_record(void *filehandle, char *funcname);
extern void clear_external_function_hash(void *filehandle);
extern Oid fmgr_internal_function(const char *proname);
extern Oid get_fn_expr_rettype(FmgrInfo *flinfo);
extern Oid get_fn_expr_argtype(FmgrInfo *flinfo, int argnum);
extern Oid get_call_expr_argtype(fmNodePtr expr, int argnum);
extern bool get_fn_expr_arg_stable(FmgrInfo *flinfo, int argnum);
extern bool get_call_expr_arg_stable(fmNodePtr expr, int argnum);
extern bool get_fn_expr_variadic(FmgrInfo *flinfo);
extern bool CheckFunctionValidatorAccess(Oid validatorOid, Oid functionOid);




extern char *Dynamic_library_path;

extern PGFunction load_external_function(char *filename, char *funcname,
        bool signalNotFound, void **filehandle);
extern PGFunction lookup_external_function(void *filehandle, char *funcname);
extern void load_file(const char *filename, bool restricted);
extern void **find_rendezvous_variable(const char *varName);
extern Size EstimateLibraryStateSpace(void);
extern void SerializeLibraryState(Size maxsize, char *start_address);
extern void RestoreLibraryState(char *start_address);
# 667 "../../src/include/fmgr.h"
extern int AggCheckCallContext(FunctionCallInfo fcinfo,
     MemoryContext *aggcontext);
extern fmAggrefPtr AggGetAggref(FunctionCallInfo fcinfo);
extern MemoryContext AggGetTempMemoryContext(FunctionCallInfo fcinfo);
extern void AggRegisterCallback(FunctionCallInfo fcinfo,
     fmExprContextCallbackFunction func,
     Datum arg);
# 684 "../../src/include/fmgr.h"
typedef enum FmgrHookEventType
{
 FHET_START,
 FHET_END,
 FHET_ABORT
} FmgrHookEventType;

typedef bool (*needs_fmgr_hook_type) (Oid fn_oid);

typedef void (*fmgr_hook_type) (FmgrHookEventType event,
           FmgrInfo *flinfo, Datum *arg);

extern needs_fmgr_hook_type needs_fmgr_hook;
extern fmgr_hook_type fmgr_hook;
# 715 "../../src/include/fmgr.h"
extern char *fmgr(Oid procedureId,...);
# 18 "../../src/include/utils/builtins.h" 2
# 1 "../../src/include/nodes/parsenodes.h" 1
# 23 "../../src/include/nodes/parsenodes.h"
# 1 "../../src/include/nodes/bitmapset.h" 1
# 29 "../../src/include/nodes/bitmapset.h"
typedef uint32 bitmapword;
typedef int32 signedbitmapword;

typedef struct Bitmapset
{
 int nwords;
 bitmapword words[];
} Bitmapset;



typedef enum
{
 BMS_EQUAL,
 BMS_SUBSET1,
 BMS_SUBSET2,
 BMS_DIFFERENT
} BMS_Comparison;


typedef enum
{
 BMS_EMPTY_SET,
 BMS_SINGLETON,
 BMS_MULTIPLE
} BMS_Membership;






extern Bitmapset *bms_copy(const Bitmapset *a);
extern bool bms_equal(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_make_singleton(int x);
extern void bms_free(Bitmapset *a);

extern Bitmapset *bms_union(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_intersect(const Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_difference(const Bitmapset *a, const Bitmapset *b);
extern bool bms_is_subset(const Bitmapset *a, const Bitmapset *b);
extern BMS_Comparison bms_subset_compare(const Bitmapset *a, const Bitmapset *b);
extern bool bms_is_member(int x, const Bitmapset *a);
extern bool bms_overlap(const Bitmapset *a, const Bitmapset *b);
extern bool bms_nonempty_difference(const Bitmapset *a, const Bitmapset *b);
extern int bms_singleton_member(const Bitmapset *a);
extern bool bms_get_singleton_member(const Bitmapset *a, int *member);
extern int bms_num_members(const Bitmapset *a);


extern BMS_Membership bms_membership(const Bitmapset *a);
extern bool bms_is_empty(const Bitmapset *a);



extern Bitmapset *bms_add_member(Bitmapset *a, int x);
extern Bitmapset *bms_del_member(Bitmapset *a, int x);
extern Bitmapset *bms_add_members(Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_int_members(Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_del_members(Bitmapset *a, const Bitmapset *b);
extern Bitmapset *bms_join(Bitmapset *a, Bitmapset *b);


extern int bms_first_member(Bitmapset *a);
extern int bms_next_member(const Bitmapset *a, int prevbit);


extern uint32 bms_hash_value(const Bitmapset *a);
# 24 "../../src/include/nodes/parsenodes.h" 2
# 1 "../../src/include/nodes/lockoptions.h" 1
# 21 "../../src/include/nodes/lockoptions.h"
typedef enum LockClauseStrength
{
 LCS_NONE,
 LCS_FORKEYSHARE,
 LCS_FORSHARE,
 LCS_FORNOKEYUPDATE,
 LCS_FORUPDATE
} LockClauseStrength;







typedef enum LockWaitPolicy
{

 LockWaitBlock,

 LockWaitSkip,

 LockWaitError
} LockWaitPolicy;
# 25 "../../src/include/nodes/parsenodes.h" 2
# 1 "../../src/include/nodes/primnodes.h" 1
# 20 "../../src/include/nodes/primnodes.h"
# 1 "../../src/include/access/attnum.h" 1
# 21 "../../src/include/access/attnum.h"
typedef int16 AttrNumber;
# 21 "../../src/include/nodes/primnodes.h" 2
# 1 "../../src/include/nodes/pg_list.h" 1
# 40 "../../src/include/nodes/pg_list.h"
# 1 "../../src/include/nodes/nodes.h" 1
# 26 "../../src/include/nodes/nodes.h"
typedef enum NodeTag
{
 T_Invalid = 0,




 T_IndexInfo = 10,
 T_ExprContext,
 T_ProjectionInfo,
 T_JunkFilter,
 T_ResultRelInfo,
 T_EState,
 T_TupleTableSlot,




 T_Plan = 100,
 T_Result,
 T_ModifyTable,
 T_Append,
 T_MergeAppend,
 T_RecursiveUnion,
 T_BitmapAnd,
 T_BitmapOr,
 T_Scan,
 T_SeqScan,
 T_SampleScan,
 T_IndexScan,
 T_IndexOnlyScan,
 T_BitmapIndexScan,
 T_BitmapHeapScan,
 T_TidScan,
 T_SubqueryScan,
 T_FunctionScan,
 T_ValuesScan,
 T_CteScan,
 T_WorkTableScan,
 T_ForeignScan,
 T_CustomScan,
 T_Join,
 T_NestLoop,
 T_MergeJoin,
 T_HashJoin,
 T_Material,
 T_Sort,
 T_Group,
 T_Agg,
 T_WindowAgg,
 T_Unique,
 T_Gather,
 T_Hash,
 T_SetOp,
 T_LockRows,
 T_Limit,

 T_NestLoopParam,
 T_PlanRowMark,
 T_PlanInvalItem,






 T_PlanState = 200,
 T_ResultState,
 T_ModifyTableState,
 T_AppendState,
 T_MergeAppendState,
 T_RecursiveUnionState,
 T_BitmapAndState,
 T_BitmapOrState,
 T_ScanState,
 T_SeqScanState,
 T_SampleScanState,
 T_IndexScanState,
 T_IndexOnlyScanState,
 T_BitmapIndexScanState,
 T_BitmapHeapScanState,
 T_TidScanState,
 T_SubqueryScanState,
 T_FunctionScanState,
 T_ValuesScanState,
 T_CteScanState,
 T_WorkTableScanState,
 T_ForeignScanState,
 T_CustomScanState,
 T_JoinState,
 T_NestLoopState,
 T_MergeJoinState,
 T_HashJoinState,
 T_MaterialState,
 T_SortState,
 T_GroupState,
 T_AggState,
 T_WindowAggState,
 T_UniqueState,
 T_GatherState,
 T_HashState,
 T_SetOpState,
 T_LockRowsState,
 T_LimitState,




 T_Alias = 300,
 T_RangeVar,
 T_Expr,
 T_Var,
 T_Const,
 T_Param,
 T_Aggref,
 T_GroupingFunc,
 T_WindowFunc,
 T_ArrayRef,
 T_FuncExpr,
 T_NamedArgExpr,
 T_OpExpr,
 T_DistinctExpr,
 T_NullIfExpr,
 T_ScalarArrayOpExpr,
 T_BoolExpr,
 T_SubLink,
 T_SubPlan,
 T_AlternativeSubPlan,
 T_FieldSelect,
 T_FieldStore,
 T_RelabelType,
 T_CoerceViaIO,
 T_ArrayCoerceExpr,
 T_ConvertRowtypeExpr,
 T_CollateExpr,
 T_CaseExpr,
 T_CaseWhen,
 T_CaseTestExpr,
 T_ArrayExpr,
 T_RowExpr,
 T_RowCompareExpr,
 T_CoalesceExpr,
 T_MinMaxExpr,
 T_XmlExpr,
 T_NullTest,
 T_BooleanTest,
 T_CoerceToDomain,
 T_CoerceToDomainValue,
 T_SetToDefault,
 T_CurrentOfExpr,
 T_InferenceElem,
 T_TargetEntry,
 T_RangeTblRef,
 T_JoinExpr,
 T_FromExpr,
 T_OnConflictExpr,
 T_IntoClause,







 T_ExprState = 400,
 T_GenericExprState,
 T_WholeRowVarExprState,
 T_AggrefExprState,
 T_GroupingFuncExprState,
 T_WindowFuncExprState,
 T_ArrayRefExprState,
 T_FuncExprState,
 T_ScalarArrayOpExprState,
 T_BoolExprState,
 T_SubPlanState,
 T_AlternativeSubPlanState,
 T_FieldSelectState,
 T_FieldStoreState,
 T_CoerceViaIOState,
 T_ArrayCoerceExprState,
 T_ConvertRowtypeExprState,
 T_CaseExprState,
 T_CaseWhenState,
 T_ArrayExprState,
 T_RowExprState,
 T_RowCompareExprState,
 T_CoalesceExprState,
 T_MinMaxExprState,
 T_XmlExprState,
 T_NullTestState,
 T_CoerceToDomainState,
 T_DomainConstraintState,




 T_PlannerInfo = 500,
 T_PlannerGlobal,
 T_RelOptInfo,
 T_IndexOptInfo,
 T_ForeignKeyOptInfo,
 T_ParamPathInfo,
 T_Path,
 T_IndexPath,
 T_BitmapHeapPath,
 T_BitmapAndPath,
 T_BitmapOrPath,
 T_TidPath,
 T_SubqueryScanPath,
 T_ForeignPath,
 T_CustomPath,
 T_NestPath,
 T_MergePath,
 T_HashPath,
 T_AppendPath,
 T_MergeAppendPath,
 T_ResultPath,
 T_MaterialPath,
 T_UniquePath,
 T_GatherPath,
 T_ProjectionPath,
 T_SortPath,
 T_GroupPath,
 T_UpperUniquePath,
 T_AggPath,
 T_GroupingSetsPath,
 T_MinMaxAggPath,
 T_WindowAggPath,
 T_SetOpPath,
 T_RecursiveUnionPath,
 T_LockRowsPath,
 T_ModifyTablePath,
 T_LimitPath,

 T_EquivalenceClass,
 T_EquivalenceMember,
 T_PathKey,
 T_PathTarget,
 T_RestrictInfo,
 T_PlaceHolderVar,
 T_SpecialJoinInfo,
 T_AppendRelInfo,
 T_PlaceHolderInfo,
 T_MinMaxAggInfo,
 T_PlannerParamItem,




 T_MemoryContext = 600,
 T_AllocSetContext,




 T_Value = 650,
 T_Integer,
 T_Float,
 T_String,
 T_BitString,
 T_Null,




 T_List,
 T_IntList,
 T_OidList,




 T_ExtensibleNode,




 T_Query = 700,
 T_PlannedStmt,
 T_InsertStmt,
 T_DeleteStmt,
 T_UpdateStmt,
 T_SelectStmt,
 T_AlterTableStmt,
 T_AlterTableCmd,
 T_AlterDomainStmt,
 T_SetOperationStmt,
 T_GrantStmt,
 T_GrantRoleStmt,
 T_AlterDefaultPrivilegesStmt,
 T_ClosePortalStmt,
 T_ClusterStmt,
 T_CopyStmt,
 T_CreateStmt,
 T_DefineStmt,
 T_DropStmt,
 T_TruncateStmt,
 T_CommentStmt,
 T_FetchStmt,
 T_IndexStmt,
 T_CreateFunctionStmt,
 T_AlterFunctionStmt,
 T_DoStmt,
 T_RenameStmt,
 T_RuleStmt,
 T_NotifyStmt,
 T_ListenStmt,
 T_UnlistenStmt,
 T_TransactionStmt,
 T_ViewStmt,
 T_LoadStmt,
 T_CreateDomainStmt,
 T_CreatedbStmt,
 T_DropdbStmt,
 T_VacuumStmt,
 T_ExplainStmt,
 T_CreateTableAsStmt,
 T_CreateSeqStmt,
 T_AlterSeqStmt,
 T_VariableSetStmt,
 T_VariableShowStmt,
 T_DiscardStmt,
 T_CreateTrigStmt,
 T_CreatePLangStmt,
 T_CreateRoleStmt,
 T_AlterRoleStmt,
 T_DropRoleStmt,
 T_LockStmt,
 T_ConstraintsSetStmt,
 T_ReindexStmt,
 T_CheckPointStmt,
 T_CreateSchemaStmt,
 T_AlterDatabaseStmt,
 T_AlterDatabaseSetStmt,
 T_AlterRoleSetStmt,
 T_CreateConversionStmt,
 T_CreateCastStmt,
 T_CreateOpClassStmt,
 T_CreateOpFamilyStmt,
 T_AlterOpFamilyStmt,
 T_PrepareStmt,
 T_ExecuteStmt,
 T_DeallocateStmt,
 T_DeclareCursorStmt,
 T_CreateTableSpaceStmt,
 T_DropTableSpaceStmt,
 T_AlterObjectDependsStmt,
 T_AlterObjectSchemaStmt,
 T_AlterOwnerStmt,
 T_AlterOperatorStmt,
 T_DropOwnedStmt,
 T_ReassignOwnedStmt,
 T_CompositeTypeStmt,
 T_CreateEnumStmt,
 T_CreateRangeStmt,
 T_AlterEnumStmt,
 T_AlterTSDictionaryStmt,
 T_AlterTSConfigurationStmt,
 T_CreateFdwStmt,
 T_AlterFdwStmt,
 T_CreateForeignServerStmt,
 T_AlterForeignServerStmt,
 T_CreateUserMappingStmt,
 T_AlterUserMappingStmt,
 T_DropUserMappingStmt,
 T_AlterTableSpaceOptionsStmt,
 T_AlterTableMoveAllStmt,
 T_SecLabelStmt,
 T_CreateForeignTableStmt,
 T_ImportForeignSchemaStmt,
 T_CreateExtensionStmt,
 T_AlterExtensionStmt,
 T_AlterExtensionContentsStmt,
 T_CreateEventTrigStmt,
 T_AlterEventTrigStmt,
 T_RefreshMatViewStmt,
 T_ReplicaIdentityStmt,
 T_AlterSystemStmt,
 T_CreatePolicyStmt,
 T_AlterPolicyStmt,
 T_CreateTransformStmt,
 T_CreateAmStmt,




 T_A_Expr = 900,
 T_ColumnRef,
 T_ParamRef,
 T_A_Const,
 T_FuncCall,
 T_A_Star,
 T_A_Indices,
 T_A_Indirection,
 T_A_ArrayExpr,
 T_ResTarget,
 T_MultiAssignRef,
 T_TypeCast,
 T_CollateClause,
 T_SortBy,
 T_WindowDef,
 T_RangeSubselect,
 T_RangeFunction,
 T_RangeTableSample,
 T_TypeName,
 T_ColumnDef,
 T_IndexElem,
 T_Constraint,
 T_DefElem,
 T_RangeTblEntry,
 T_RangeTblFunction,
 T_TableSampleClause,
 T_WithCheckOption,
 T_SortGroupClause,
 T_GroupingSet,
 T_WindowClause,
 T_FuncWithArgs,
 T_AccessPriv,
 T_CreateOpClassItem,
 T_TableLikeClause,
 T_FunctionParameter,
 T_LockingClause,
 T_RowMarkClause,
 T_XmlSerialize,
 T_WithClause,
 T_InferClause,
 T_OnConflictClause,
 T_CommonTableExpr,
 T_RoleSpec,




 T_IdentifySystemCmd,
 T_BaseBackupCmd,
 T_CreateReplicationSlotCmd,
 T_DropReplicationSlotCmd,
 T_StartReplicationCmd,
 T_TimeLineHistoryCmd,
# 474 "../../src/include/nodes/nodes.h"
 T_TriggerData = 950,
 T_EventTriggerData,
 T_ReturnSetInfo,
 T_WindowObjectData,
 T_TIDBitmap,
 T_InlineCodeBlock,
 T_FdwRoutine,
 T_IndexAmRoutine,
 T_TsmRoutine,
 T_ForeignKeyCacheInfo
} NodeTag;







typedef struct Node
{
 NodeTag type;
} Node;
# 553 "../../src/include/nodes/nodes.h"
static inline Node *
castNodeImpl(NodeTag type, void *ptr)
{
 do { if (!(ptr == 
# 556 "../../src/include/nodes/nodes.h" 3 4
((void *)0) 
# 556 "../../src/include/nodes/nodes.h"
|| (((const Node*)(ptr))->type) == type)) ExceptionalCondition("!(ptr == ((void *)0) || (((const Node*)(ptr))->type) == type)", ("FailedAssertion"), "../../src/include/nodes/nodes.h", 556); } while (0);
 return (Node *) ptr;
}
# 573 "../../src/include/nodes/nodes.h"
extern char *nodeToString(const void *obj);

struct Bitmapset;
struct StringInfoData;
extern void outNode(struct StringInfoData *str, const void *obj);
extern void outToken(struct StringInfoData *str, const char *s);
extern void outBitmapset(struct StringInfoData *str,
    const struct Bitmapset *bms);
extern void outDatum(struct StringInfoData *str, uintptr_t value,
   int typlen, bool typbyval);




extern void *stringToNode(char *str);
extern struct Bitmapset *readBitmapset(void);
extern uintptr_t readDatum(bool typbyval);
extern bool *readBoolCols(int numCols);
extern int *readIntCols(int numCols);
extern Oid *readOidCols(int numCols);
extern int16 *readAttrNumberCols(int numCols);




extern void *copyObject(const void *obj);




extern bool equal(const void *a, const void *b);
# 614 "../../src/include/nodes/nodes.h"
typedef double Selectivity;
typedef double Cost;
# 624 "../../src/include/nodes/nodes.h"
typedef enum CmdType
{
 CMD_UNKNOWN,
 CMD_SELECT,
 CMD_UPDATE,
 CMD_INSERT,
 CMD_DELETE,
 CMD_UTILITY,

 CMD_NOTHING

} CmdType;
# 648 "../../src/include/nodes/nodes.h"
typedef enum JoinType
{




 JOIN_INNER,
 JOIN_LEFT,
 JOIN_FULL,
 JOIN_RIGHT,
# 668 "../../src/include/nodes/nodes.h"
 JOIN_SEMI,
 JOIN_ANTI,





 JOIN_UNIQUE_OUTER,
 JOIN_UNIQUE_INNER




} JoinType;
# 710 "../../src/include/nodes/nodes.h"
typedef enum AggStrategy
{
 AGG_PLAIN,
 AGG_SORTED,
 AGG_HASHED
} AggStrategy;
# 731 "../../src/include/nodes/nodes.h"
typedef enum AggSplit
{

 AGGSPLIT_SIMPLE = 0,

 AGGSPLIT_INITIAL_SERIAL = 0x02 | 0x04,

 AGGSPLIT_FINAL_DESERIAL = 0x01 | 0x08
} AggSplit;
# 753 "../../src/include/nodes/nodes.h"
typedef enum SetOpCmd
{
 SETOPCMD_INTERSECT,
 SETOPCMD_INTERSECT_ALL,
 SETOPCMD_EXCEPT,
 SETOPCMD_EXCEPT_ALL
} SetOpCmd;

typedef enum SetOpStrategy
{
 SETOP_SORTED,
 SETOP_HASHED
} SetOpStrategy;







typedef enum OnConflictAction
{
 ONCONFLICT_NONE,
 ONCONFLICT_NOTHING,
 ONCONFLICT_UPDATE
} OnConflictAction;
# 41 "../../src/include/nodes/pg_list.h" 2


typedef struct ListCell ListCell;

typedef struct List
{
 NodeTag type;
 int length;
 ListCell *head;
 ListCell *tail;
} List;

struct ListCell
{
 union
 {
  void *ptr_value;
  int int_value;
  Oid oid_value;
 } data;
 ListCell *next;
};
# 76 "../../src/include/nodes/pg_list.h"
static inline ListCell *
list_head(const List *l)
{
 return l ? l->head : 
# 79 "../../src/include/nodes/pg_list.h" 3 4
                     ((void *)0)
# 79 "../../src/include/nodes/pg_list.h"
                         ;
}

static inline ListCell *
list_tail(List *l)
{
 return l ? l->tail : 
# 85 "../../src/include/nodes/pg_list.h" 3 4
                     ((void *)0)
# 85 "../../src/include/nodes/pg_list.h"
                         ;
}

static inline int
list_length(const List *l)
{
 return l ? l->length : 0;
}
# 194 "../../src/include/nodes/pg_list.h"
extern List *lappend(List *list, void *datum);
extern List *lappend_int(List *list, int datum);
extern List *lappend_oid(List *list, Oid datum);

extern ListCell *lappend_cell(List *list, ListCell *prev, void *datum);
extern ListCell *lappend_cell_int(List *list, ListCell *prev, int datum);
extern ListCell *lappend_cell_oid(List *list, ListCell *prev, Oid datum);

extern List *lcons(void *datum, List *list);
extern List *lcons_int(int datum, List *list);
extern List *lcons_oid(Oid datum, List *list);

extern List *list_concat(List *list1, List *list2);
extern List *list_truncate(List *list, int new_size);

extern ListCell *list_nth_cell(const List *list, int n);
extern void *list_nth(const List *list, int n);
extern int list_nth_int(const List *list, int n);
extern Oid list_nth_oid(const List *list, int n);


extern bool list_member(const List *list, const void *datum);
extern bool list_member_ptr(const List *list, const void *datum);
extern bool list_member_int(const List *list, int datum);
extern bool list_member_oid(const List *list, Oid datum);

extern List *list_delete(List *list, void *datum);
extern List *list_delete_ptr(List *list, void *datum);
extern List *list_delete_int(List *list, int datum);
extern List *list_delete_oid(List *list, Oid datum);
extern List *list_delete_first(List *list);
extern List *list_delete_cell(List *list, ListCell *cell, ListCell *prev);

extern List *list_union(const List *list1, const List *list2);
extern List *list_union_ptr(const List *list1, const List *list2);
extern List *list_union_int(const List *list1, const List *list2);
extern List *list_union_oid(const List *list1, const List *list2);

extern List *list_intersection(const List *list1, const List *list2);
extern List *list_intersection_int(const List *list1, const List *list2);



extern List *list_difference(const List *list1, const List *list2);
extern List *list_difference_ptr(const List *list1, const List *list2);
extern List *list_difference_int(const List *list1, const List *list2);
extern List *list_difference_oid(const List *list1, const List *list2);

extern List *list_append_unique(List *list, void *datum);
extern List *list_append_unique_ptr(List *list, void *datum);
extern List *list_append_unique_int(List *list, int datum);
extern List *list_append_unique_oid(List *list, Oid datum);

extern List *list_concat_unique(List *list1, List *list2);
extern List *list_concat_unique_ptr(List *list1, List *list2);
extern List *list_concat_unique_int(List *list1, List *list2);
extern List *list_concat_unique_oid(List *list1, List *list2);

extern void list_free(List *list);
extern void list_free_deep(List *list);

extern List *list_copy(const List *list);
extern List *list_copy_tail(const List *list, int nskip);
# 22 "../../src/include/nodes/primnodes.h" 2
# 38 "../../src/include/nodes/primnodes.h"
typedef struct Alias
{
 NodeTag type;
 char *aliasname;
 List *colnames;
} Alias;

typedef enum InhOption
{
 INH_NO,
 INH_YES,
 INH_DEFAULT
} InhOption;


typedef enum OnCommitAction
{
 ONCOMMIT_NOOP,
 ONCOMMIT_PRESERVE_ROWS,
 ONCOMMIT_DELETE_ROWS,
 ONCOMMIT_DROP
} OnCommitAction;
# 69 "../../src/include/nodes/primnodes.h"
typedef struct RangeVar
{
 NodeTag type;
 char *catalogname;
 char *schemaname;
 char *relname;
 InhOption inhOpt;

 char relpersistence;
 Alias *alias;
 int location;
} RangeVar;
# 90 "../../src/include/nodes/primnodes.h"
typedef struct IntoClause
{
 NodeTag type;

 RangeVar *rel;
 List *colNames;
 List *options;
 OnCommitAction onCommit;
 char *tableSpaceName;
 Node *viewQuery;
 bool skipData;
} IntoClause;
# 117 "../../src/include/nodes/primnodes.h"
typedef struct Expr
{
 NodeTag type;
} Expr;
# 148 "../../src/include/nodes/primnodes.h"
typedef struct Var
{
 Expr xpr;
 Index varno;

 AttrNumber varattno;

 Oid vartype;
 int32 vartypmod;
 Oid varcollid;
 Index varlevelsup;


 Index varnoold;
 AttrNumber varoattno;
 int location;
} Var;
# 174 "../../src/include/nodes/primnodes.h"
typedef struct Const
{
 Expr xpr;
 Oid consttype;
 int32 consttypmod;
 Oid constcollid;
 int constlen;
 Datum constvalue;
 bool constisnull;

 bool constbyval;



 int location;
} Const;
# 218 "../../src/include/nodes/primnodes.h"
typedef enum ParamKind
{
 PARAM_EXTERN,
 PARAM_EXEC,
 PARAM_SUBLINK,
 PARAM_MULTIEXPR
} ParamKind;

typedef struct Param
{
 Expr xpr;
 ParamKind paramkind;
 int paramid;
 Oid paramtype;
 int32 paramtypmod;
 Oid paramcollid;
 int location;
} Param;
# 276 "../../src/include/nodes/primnodes.h"
typedef struct Aggref
{
 Expr xpr;
 Oid aggfnoid;
 Oid aggtype;
 Oid aggcollid;
 Oid inputcollid;
 Oid aggtranstype;
 List *aggargtypes;
 List *aggdirectargs;
 List *args;
 List *aggorder;
 List *aggdistinct;
 Expr *aggfilter;
 bool aggstar;
 bool aggvariadic;

 char aggkind;
 Index agglevelsup;
 AggSplit aggsplit;
 int location;
} Aggref;
# 323 "../../src/include/nodes/primnodes.h"
typedef struct GroupingFunc
{
 Expr xpr;
 List *args;

 List *refs;
 List *cols;
 Index agglevelsup;
 int location;
} GroupingFunc;




typedef struct WindowFunc
{
 Expr xpr;
 Oid winfnoid;
 Oid wintype;
 Oid wincollid;
 Oid inputcollid;
 List *args;
 Expr *aggfilter;
 Index winref;
 bool winstar;
 bool winagg;
 int location;
} WindowFunc;
# 381 "../../src/include/nodes/primnodes.h"
typedef struct ArrayRef
{
 Expr xpr;
 Oid refarraytype;
 Oid refelemtype;
 int32 reftypmod;
 Oid refcollid;
 List *refupperindexpr;

 List *reflowerindexpr;

 Expr *refexpr;

 Expr *refassgnexpr;

} ArrayRef;







typedef enum CoercionContext
{
 COERCION_IMPLICIT,
 COERCION_ASSIGNMENT,
 COERCION_EXPLICIT
} CoercionContext;
# 420 "../../src/include/nodes/primnodes.h"
typedef enum CoercionForm
{
 COERCE_EXPLICIT_CALL,
 COERCE_EXPLICIT_CAST,
 COERCE_IMPLICIT_CAST
} CoercionForm;




typedef struct FuncExpr
{
 Expr xpr;
 Oid funcid;
 Oid funcresulttype;
 bool funcretset;
 bool funcvariadic;

 CoercionForm funcformat;
 Oid funccollid;
 Oid inputcollid;
 List *args;
 int location;
} FuncExpr;
# 459 "../../src/include/nodes/primnodes.h"
typedef struct NamedArgExpr
{
 Expr xpr;
 Expr *arg;
 char *name;
 int argnumber;
 int location;
} NamedArgExpr;
# 477 "../../src/include/nodes/primnodes.h"
typedef struct OpExpr
{
 Expr xpr;
 Oid opno;
 Oid opfuncid;
 Oid opresulttype;
 bool opretset;
 Oid opcollid;
 Oid inputcollid;
 List *args;
 int location;
} OpExpr;
# 500 "../../src/include/nodes/primnodes.h"
typedef OpExpr DistinctExpr;







typedef OpExpr NullIfExpr;
# 520 "../../src/include/nodes/primnodes.h"
typedef struct ScalarArrayOpExpr
{
 Expr xpr;
 Oid opno;
 Oid opfuncid;
 bool useOr;
 Oid inputcollid;
 List *args;
 int location;
} ScalarArrayOpExpr;
# 538 "../../src/include/nodes/primnodes.h"
typedef enum BoolExprType
{
 AND_EXPR, OR_EXPR, NOT_EXPR
} BoolExprType;

typedef struct BoolExpr
{
 Expr xpr;
 BoolExprType boolop;
 List *args;
 int location;
} BoolExpr;
# 602 "../../src/include/nodes/primnodes.h"
typedef enum SubLinkType
{
 EXISTS_SUBLINK,
 ALL_SUBLINK,
 ANY_SUBLINK,
 ROWCOMPARE_SUBLINK,
 EXPR_SUBLINK,
 MULTIEXPR_SUBLINK,
 ARRAY_SUBLINK,
 CTE_SUBLINK
} SubLinkType;


typedef struct SubLink
{
 Expr xpr;
 SubLinkType subLinkType;
 int subLinkId;
 Node *testexpr;
 List *operName;
 Node *subselect;
 int location;
} SubLink;
# 664 "../../src/include/nodes/primnodes.h"
typedef struct SubPlan
{
 Expr xpr;

 SubLinkType subLinkType;

 Node *testexpr;
 List *paramIds;

 int plan_id;

 char *plan_name;

 Oid firstColType;
 int32 firstColTypmod;
 Oid firstColCollation;


 bool useHashTable;

 bool unknownEqFalse;




 List *setParam;

 List *parParam;
 List *args;

 Cost startup_cost;
 Cost per_call_cost;
} SubPlan;
# 706 "../../src/include/nodes/primnodes.h"
typedef struct AlternativeSubPlan
{
 Expr xpr;
 List *subplans;
} AlternativeSubPlan;
# 721 "../../src/include/nodes/primnodes.h"
typedef struct FieldSelect
{
 Expr xpr;
 Expr *arg;
 AttrNumber fieldnum;
 Oid resulttype;

 int32 resulttypmod;
 Oid resultcollid;
} FieldSelect;
# 747 "../../src/include/nodes/primnodes.h"
typedef struct FieldStore
{
 Expr xpr;
 Expr *arg;
 List *newvals;
 List *fieldnums;
 Oid resulttype;

} FieldStore;
# 770 "../../src/include/nodes/primnodes.h"
typedef struct RelabelType
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;
 int32 resulttypmod;
 Oid resultcollid;
 CoercionForm relabelformat;
 int location;
} RelabelType;
# 790 "../../src/include/nodes/primnodes.h"
typedef struct CoerceViaIO
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;

 Oid resultcollid;
 CoercionForm coerceformat;
 int location;
} CoerceViaIO;
# 813 "../../src/include/nodes/primnodes.h"
typedef struct ArrayCoerceExpr
{
 Expr xpr;
 Expr *arg;
 Oid elemfuncid;
 Oid resulttype;
 int32 resulttypmod;
 Oid resultcollid;
 bool isExplicit;
 CoercionForm coerceformat;
 int location;
} ArrayCoerceExpr;
# 838 "../../src/include/nodes/primnodes.h"
typedef struct ConvertRowtypeExpr
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;

 CoercionForm convertformat;
 int location;
} ConvertRowtypeExpr;
# 855 "../../src/include/nodes/primnodes.h"
typedef struct CollateExpr
{
 Expr xpr;
 Expr *arg;
 Oid collOid;
 int location;
} CollateExpr;
# 885 "../../src/include/nodes/primnodes.h"
typedef struct CaseExpr
{
 Expr xpr;
 Oid casetype;
 Oid casecollid;
 Expr *arg;
 List *args;
 Expr *defresult;
 int location;
} CaseExpr;




typedef struct CaseWhen
{
 Expr xpr;
 Expr *expr;
 Expr *result;
 int location;
} CaseWhen;
# 915 "../../src/include/nodes/primnodes.h"
typedef struct CaseTestExpr
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
} CaseTestExpr;
# 931 "../../src/include/nodes/primnodes.h"
typedef struct ArrayExpr
{
 Expr xpr;
 Oid array_typeid;
 Oid array_collid;
 Oid element_typeid;
 List *elements;
 bool multidims;
 int location;
} ArrayExpr;
# 965 "../../src/include/nodes/primnodes.h"
typedef struct RowExpr
{
 Expr xpr;
 List *args;
 Oid row_typeid;
# 980 "../../src/include/nodes/primnodes.h"
 CoercionForm row_format;
 List *colnames;
 int location;
} RowExpr;
# 999 "../../src/include/nodes/primnodes.h"
typedef enum RowCompareType
{

 ROWCOMPARE_LT = 1,
 ROWCOMPARE_LE = 2,
 ROWCOMPARE_EQ = 3,
 ROWCOMPARE_GE = 4,
 ROWCOMPARE_GT = 5,
 ROWCOMPARE_NE = 6
} RowCompareType;

typedef struct RowCompareExpr
{
 Expr xpr;
 RowCompareType rctype;
 List *opnos;
 List *opfamilies;
 List *inputcollids;
 List *largs;
 List *rargs;
} RowCompareExpr;




typedef struct CoalesceExpr
{
 Expr xpr;
 Oid coalescetype;
 Oid coalescecollid;
 List *args;
 int location;
} CoalesceExpr;




typedef enum MinMaxOp
{
 IS_GREATEST,
 IS_LEAST
} MinMaxOp;

typedef struct MinMaxExpr
{
 Expr xpr;
 Oid minmaxtype;
 Oid minmaxcollid;
 Oid inputcollid;
 MinMaxOp op;
 List *args;
 int location;
} MinMaxExpr;
# 1064 "../../src/include/nodes/primnodes.h"
typedef enum XmlExprOp
{
 IS_XMLCONCAT,
 IS_XMLELEMENT,
 IS_XMLFOREST,
 IS_XMLPARSE,
 IS_XMLPI,
 IS_XMLROOT,
 IS_XMLSERIALIZE,
 IS_DOCUMENT
} XmlExprOp;

typedef enum
{
 XMLOPTION_DOCUMENT,
 XMLOPTION_CONTENT
} XmlOptionType;

typedef struct XmlExpr
{
 Expr xpr;
 XmlExprOp op;
 char *name;
 List *named_args;
 List *arg_names;
 List *args;
 XmlOptionType xmloption;
 Oid type;
 int32 typmod;
 int location;
} XmlExpr;
# 1115 "../../src/include/nodes/primnodes.h"
typedef enum NullTestType
{
 IS_NULL, IS_NOT_NULL
} NullTestType;

typedef struct NullTest
{
 Expr xpr;
 Expr *arg;
 NullTestType nulltesttype;
 bool argisrow;
 int location;
} NullTest;
# 1138 "../../src/include/nodes/primnodes.h"
typedef enum BoolTestType
{
 IS_TRUE, IS_NOT_TRUE, IS_FALSE, IS_NOT_FALSE, IS_UNKNOWN, IS_NOT_UNKNOWN
} BoolTestType;

typedef struct BooleanTest
{
 Expr xpr;
 Expr *arg;
 BoolTestType booltesttype;
 int location;
} BooleanTest;
# 1160 "../../src/include/nodes/primnodes.h"
typedef struct CoerceToDomain
{
 Expr xpr;
 Expr *arg;
 Oid resulttype;
 int32 resulttypmod;
 Oid resultcollid;
 CoercionForm coercionformat;
 int location;
} CoerceToDomain;
# 1180 "../../src/include/nodes/primnodes.h"
typedef struct CoerceToDomainValue
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
 int location;
} CoerceToDomainValue;
# 1196 "../../src/include/nodes/primnodes.h"
typedef struct SetToDefault
{
 Expr xpr;
 Oid typeId;
 int32 typeMod;
 Oid collation;
 int location;
} SetToDefault;
# 1217 "../../src/include/nodes/primnodes.h"
typedef struct CurrentOfExpr
{
 Expr xpr;
 Index cvarno;
 char *cursor_name;
 int cursor_param;
} CurrentOfExpr;
# 1232 "../../src/include/nodes/primnodes.h"
typedef struct InferenceElem
{
 Expr xpr;
 Node *expr;
 Oid infercollid;
 Oid inferopclass;
} InferenceElem;
# 1294 "../../src/include/nodes/primnodes.h"
typedef struct TargetEntry
{
 Expr xpr;
 Expr *expr;
 AttrNumber resno;
 char *resname;
 Index ressortgroupref;

 Oid resorigtbl;
 AttrNumber resorigcol;
 bool resjunk;

} TargetEntry;
# 1346 "../../src/include/nodes/primnodes.h"
typedef struct RangeTblRef
{
 NodeTag type;
 int rtindex;
} RangeTblRef;
# 1375 "../../src/include/nodes/primnodes.h"
typedef struct JoinExpr
{
 NodeTag type;
 JoinType jointype;
 bool isNatural;
 Node *larg;
 Node *rarg;
 List *usingClause;
 Node *quals;
 Alias *alias;
 int rtindex;
} JoinExpr;
# 1397 "../../src/include/nodes/primnodes.h"
typedef struct FromExpr
{
 NodeTag type;
 List *fromlist;
 Node *quals;
} FromExpr;
# 1413 "../../src/include/nodes/primnodes.h"
typedef struct OnConflictExpr
{
 NodeTag type;
 OnConflictAction action;


 List *arbiterElems;

 Node *arbiterWhere;
 Oid constraint;


 List *onConflictSet;
 Node *onConflictWhere;
 int exclRelIndex;
 List *exclRelTlist;
} OnConflictExpr;
# 26 "../../src/include/nodes/parsenodes.h" 2
# 1 "../../src/include/nodes/value.h" 1
# 42 "../../src/include/nodes/value.h"
typedef struct Value
{
 NodeTag type;
 union ValUnion
 {
  long ival;
  char *str;
 } val;
} Value;





extern Value *makeInteger(long i);
extern Value *makeFloat(char *numericStr);
extern Value *makeString(char *str);
extern Value *makeBitString(char *str);
# 27 "../../src/include/nodes/parsenodes.h" 2


typedef enum QuerySource
{
 QSRC_ORIGINAL,
 QSRC_PARSER,
 QSRC_INSTEAD_RULE,
 QSRC_QUAL_INSTEAD_RULE,
 QSRC_NON_INSTEAD_RULE
} QuerySource;


typedef enum SortByDir
{
 SORTBY_DEFAULT,
 SORTBY_ASC,
 SORTBY_DESC,
 SORTBY_USING
} SortByDir;

typedef enum SortByNulls
{
 SORTBY_NULLS_DEFAULT,
 SORTBY_NULLS_FIRST,
 SORTBY_NULLS_LAST
} SortByNulls;
# 61 "../../src/include/nodes/parsenodes.h"
typedef uint32 AclMode;
# 99 "../../src/include/nodes/parsenodes.h"
typedef struct Query
{
 NodeTag type;

 CmdType commandType;

 QuerySource querySource;

 uint32 queryId;

 bool canSetTag;

 Node *utilityStmt;


 int resultRelation;


 bool hasAggs;
 bool hasWindowFuncs;
 bool hasSubLinks;
 bool hasDistinctOn;
 bool hasRecursive;
 bool hasModifyingCTE;
 bool hasForUpdate;
 bool hasRowSecurity;

 List *cteList;

 List *rtable;
 FromExpr *jointree;

 List *targetList;

 OnConflictExpr *onConflict;

 List *returningList;

 List *groupClause;

 List *groupingSets;

 Node *havingQual;

 List *windowClause;

 List *distinctClause;

 List *sortClause;

 Node *limitOffset;
 Node *limitCount;

 List *rowMarks;

 Node *setOperations;


 List *constraintDeps;


 List *withCheckOptions;



} Query;
# 188 "../../src/include/nodes/parsenodes.h"
typedef struct TypeName
{
 NodeTag type;
 List *names;
 Oid typeOid;
 bool setof;
 bool pct_type;
 List *typmods;
 int32 typemod;
 List *arrayBounds;
 int location;
} TypeName;
# 214 "../../src/include/nodes/parsenodes.h"
typedef struct ColumnRef
{
 NodeTag type;
 List *fields;
 int location;
} ColumnRef;




typedef struct ParamRef
{
 NodeTag type;
 int number;
 int location;
} ParamRef;




typedef enum A_Expr_Kind
{
 AEXPR_OP,
 AEXPR_OP_ANY,
 AEXPR_OP_ALL,
 AEXPR_DISTINCT,
 AEXPR_NOT_DISTINCT,
 AEXPR_NULLIF,
 AEXPR_OF,
 AEXPR_IN,
 AEXPR_LIKE,
 AEXPR_ILIKE,
 AEXPR_SIMILAR,
 AEXPR_BETWEEN,
 AEXPR_NOT_BETWEEN,
 AEXPR_BETWEEN_SYM,
 AEXPR_NOT_BETWEEN_SYM,
 AEXPR_PAREN
} A_Expr_Kind;

typedef struct A_Expr
{
 NodeTag type;
 A_Expr_Kind kind;
 List *name;
 Node *lexpr;
 Node *rexpr;
 int location;
} A_Expr;




typedef struct A_Const
{
 NodeTag type;
 Value val;
 int location;
} A_Const;




typedef struct TypeCast
{
 NodeTag type;
 Node *arg;
 TypeName *typeName;
 int location;
} TypeCast;




typedef struct CollateClause
{
 NodeTag type;
 Node *arg;
 List *collname;
 int location;
} CollateClause;




typedef enum RoleSpecType
{
 ROLESPEC_CSTRING,
 ROLESPEC_CURRENT_USER,
 ROLESPEC_SESSION_USER,
 ROLESPEC_PUBLIC
} RoleSpecType;

typedef struct RoleSpec
{
 NodeTag type;
 RoleSpecType roletype;
 char *rolename;
 int location;
} RoleSpec;
# 329 "../../src/include/nodes/parsenodes.h"
typedef struct FuncCall
{
 NodeTag type;
 List *funcname;
 List *args;
 List *agg_order;
 Node *agg_filter;
 bool agg_within_group;
 bool agg_star;
 bool agg_distinct;
 bool func_variadic;
 struct WindowDef *over;
 int location;
} FuncCall;







typedef struct A_Star
{
 NodeTag type;
} A_Star;







typedef struct A_Indices
{
 NodeTag type;
 bool is_slice;
 Node *lidx;
 Node *uidx;
} A_Indices;
# 384 "../../src/include/nodes/parsenodes.h"
typedef struct A_Indirection
{
 NodeTag type;
 Node *arg;
 List *indirection;
} A_Indirection;




typedef struct A_ArrayExpr
{
 NodeTag type;
 List *elements;
 int location;
} A_ArrayExpr;
# 419 "../../src/include/nodes/parsenodes.h"
typedef struct ResTarget
{
 NodeTag type;
 char *name;
 List *indirection;
 Node *val;
 int location;
} ResTarget;
# 437 "../../src/include/nodes/parsenodes.h"
typedef struct MultiAssignRef
{
 NodeTag type;
 Node *source;
 int colno;
 int ncolumns;
} MultiAssignRef;




typedef struct SortBy
{
 NodeTag type;
 Node *node;
 SortByDir sortby_dir;
 SortByNulls sortby_nulls;
 List *useOp;
 int location;
} SortBy;
# 466 "../../src/include/nodes/parsenodes.h"
typedef struct WindowDef
{
 NodeTag type;
 char *name;
 char *refname;
 List *partitionClause;
 List *orderClause;
 int frameOptions;
 Node *startOffset;
 Node *endOffset;
 int location;
} WindowDef;
# 514 "../../src/include/nodes/parsenodes.h"
typedef struct RangeSubselect
{
 NodeTag type;
 bool lateral;
 Node *subquery;
 Alias *alias;
} RangeSubselect;
# 536 "../../src/include/nodes/parsenodes.h"
typedef struct RangeFunction
{
 NodeTag type;
 bool lateral;
 bool ordinality;
 bool is_rowsfrom;
 List *functions;
 Alias *alias;
 List *coldeflist;

} RangeFunction;
# 558 "../../src/include/nodes/parsenodes.h"
typedef struct RangeTableSample
{
 NodeTag type;
 Node *relation;
 List *method;
 List *args;
 Node *repeatable;
 int location;
} RangeTableSample;
# 586 "../../src/include/nodes/parsenodes.h"
typedef struct ColumnDef
{
 NodeTag type;
 char *colname;
 TypeName *typeName;
 int inhcount;
 bool is_local;
 bool is_not_null;
 bool is_from_type;
 char storage;
 Node *raw_default;
 Node *cooked_default;
 CollateClause *collClause;
 Oid collOid;
 List *constraints;
 List *fdwoptions;
 int location;
} ColumnDef;




typedef struct TableLikeClause
{
 NodeTag type;
 RangeVar *relation;
 bits32 options;
} TableLikeClause;

typedef enum TableLikeOption
{
 CREATE_TABLE_LIKE_DEFAULTS = 1 << 0,
 CREATE_TABLE_LIKE_CONSTRAINTS = 1 << 1,
 CREATE_TABLE_LIKE_INDEXES = 1 << 2,
 CREATE_TABLE_LIKE_STORAGE = 1 << 3,
 CREATE_TABLE_LIKE_COMMENTS = 1 << 4,
 CREATE_TABLE_LIKE_ALL = (0x7FFFFFFF)
} TableLikeOption;
# 632 "../../src/include/nodes/parsenodes.h"
typedef struct IndexElem
{
 NodeTag type;
 char *name;
 Node *expr;
 char *indexcolname;
 List *collation;
 List *opclass;
 SortByDir ordering;
 SortByNulls nulls_ordering;
} IndexElem;
# 654 "../../src/include/nodes/parsenodes.h"
typedef enum DefElemAction
{
 DEFELEM_UNSPEC,
 DEFELEM_SET,
 DEFELEM_ADD,
 DEFELEM_DROP
} DefElemAction;

typedef struct DefElem
{
 NodeTag type;
 char *defnamespace;
 char *defname;
 Node *arg;
 DefElemAction defaction;
} DefElem;
# 680 "../../src/include/nodes/parsenodes.h"
typedef struct LockingClause
{
 NodeTag type;
 List *lockedRels;
 LockClauseStrength strength;
 LockWaitPolicy waitPolicy;
} LockingClause;




typedef struct XmlSerialize
{
 NodeTag type;
 XmlOptionType xmloption;
 Node *expr;
 TypeName *typeName;
 int location;
} XmlSerialize;
# 778 "../../src/include/nodes/parsenodes.h"
typedef enum RTEKind
{
 RTE_RELATION,
 RTE_SUBQUERY,
 RTE_JOIN,
 RTE_FUNCTION,
 RTE_VALUES,
 RTE_CTE
} RTEKind;

typedef struct RangeTblEntry
{
 NodeTag type;

 RTEKind rtekind;
# 803 "../../src/include/nodes/parsenodes.h"
 Oid relid;
 char relkind;
 struct TableSampleClause *tablesample;




 Query *subquery;
 bool security_barrier;
# 830 "../../src/include/nodes/parsenodes.h"
 JoinType jointype;
 List *joinaliasvars;
# 841 "../../src/include/nodes/parsenodes.h"
 List *functions;
 bool funcordinality;




 List *values_lists;
 List *values_collations;




 char *ctename;
 Index ctelevelsup;
 bool self_reference;
 List *ctecoltypes;
 List *ctecoltypmods;
 List *ctecolcollations;




 Alias *alias;
 Alias *eref;
 bool lateral;
 bool inh;
 bool inFromCl;
 AclMode requiredPerms;
 Oid checkAsUser;
 Bitmapset *selectedCols;
 Bitmapset *insertedCols;
 Bitmapset *updatedCols;
 List *securityQuals;
} RangeTblEntry;
# 892 "../../src/include/nodes/parsenodes.h"
typedef struct RangeTblFunction
{
 NodeTag type;

 Node *funcexpr;
 int funccolcount;

 List *funccolnames;
 List *funccoltypes;
 List *funccoltypmods;
 List *funccolcollations;

 Bitmapset *funcparams;
} RangeTblFunction;






typedef struct TableSampleClause
{
 NodeTag type;
 Oid tsmhandler;
 List *args;
 Expr *repeatable;
} TableSampleClause;







typedef enum WCOKind
{
 WCO_VIEW_CHECK,
 WCO_RLS_INSERT_CHECK,
 WCO_RLS_UPDATE_CHECK,
 WCO_RLS_CONFLICT_CHECK
} WCOKind;

typedef struct WithCheckOption
{
 NodeTag type;
 WCOKind kind;
 char *relname;
 char *polname;
 Node *qual;
 bool cascaded;
} WithCheckOption;
# 1002 "../../src/include/nodes/parsenodes.h"
typedef struct SortGroupClause
{
 NodeTag type;
 Index tleSortGroupRef;
 Oid eqop;
 Oid sortop;
 bool nulls_first;
 bool hashable;
} SortGroupClause;
# 1062 "../../src/include/nodes/parsenodes.h"
typedef enum
{
 GROUPING_SET_EMPTY,
 GROUPING_SET_SIMPLE,
 GROUPING_SET_ROLLUP,
 GROUPING_SET_CUBE,
 GROUPING_SET_SETS
} GroupingSetKind;

typedef struct GroupingSet
{
 NodeTag type;
 GroupingSetKind kind;
 List *content;
 int location;
} GroupingSet;
# 1093 "../../src/include/nodes/parsenodes.h"
typedef struct WindowClause
{
 NodeTag type;
 char *name;
 char *refname;
 List *partitionClause;
 List *orderClause;
 int frameOptions;
 Node *startOffset;
 Node *endOffset;
 Index winref;
 bool copiedOrder;
} WindowClause;
# 1119 "../../src/include/nodes/parsenodes.h"
typedef struct RowMarkClause
{
 NodeTag type;
 Index rti;
 LockClauseStrength strength;
 LockWaitPolicy waitPolicy;
 bool pushedDown;
} RowMarkClause;
# 1135 "../../src/include/nodes/parsenodes.h"
typedef struct WithClause
{
 NodeTag type;
 List *ctes;
 bool recursive;
 int location;
} WithClause;







typedef struct InferClause
{
 NodeTag type;
 List *indexElems;
 Node *whereClause;
 char *conname;
 int location;
} InferClause;







typedef struct OnConflictClause
{
 NodeTag type;
 OnConflictAction action;
 InferClause *infer;
 List *targetList;
 Node *whereClause;
 int location;
} OnConflictClause;







typedef struct CommonTableExpr
{
 NodeTag type;
 char *ctename;
 List *aliascolnames;

 Node *ctequery;
 int location;

 bool cterecursive;
 int cterefcount;

 List *ctecolnames;
 List *ctecoltypes;
 List *ctecoltypmods;
 List *ctecolcollations;
} CommonTableExpr;
# 1218 "../../src/include/nodes/parsenodes.h"
typedef struct InsertStmt
{
 NodeTag type;
 RangeVar *relation;
 List *cols;
 Node *selectStmt;
 OnConflictClause *onConflictClause;
 List *returningList;
 WithClause *withClause;
} InsertStmt;





typedef struct DeleteStmt
{
 NodeTag type;
 RangeVar *relation;
 List *usingClause;
 Node *whereClause;
 List *returningList;
 WithClause *withClause;
} DeleteStmt;





typedef struct UpdateStmt
{
 NodeTag type;
 RangeVar *relation;
 List *targetList;
 Node *whereClause;
 List *fromClause;
 List *returningList;
 WithClause *withClause;
} UpdateStmt;
# 1271 "../../src/include/nodes/parsenodes.h"
typedef enum SetOperation
{
 SETOP_NONE = 0,
 SETOP_UNION,
 SETOP_INTERSECT,
 SETOP_EXCEPT
} SetOperation;

typedef struct SelectStmt
{
 NodeTag type;




 List *distinctClause;

 IntoClause *intoClause;
 List *targetList;
 List *fromClause;
 Node *whereClause;
 List *groupClause;
 Node *havingClause;
 List *windowClause;
# 1304 "../../src/include/nodes/parsenodes.h"
 List *valuesLists;





 List *sortClause;
 Node *limitOffset;
 Node *limitCount;
 List *lockingClause;
 WithClause *withClause;




 SetOperation op;
 bool all;
 struct SelectStmt *larg;
 struct SelectStmt *rarg;

} SelectStmt;
# 1346 "../../src/include/nodes/parsenodes.h"
typedef struct SetOperationStmt
{
 NodeTag type;
 SetOperation op;
 bool all;
 Node *larg;
 Node *rarg;



 List *colTypes;
 List *colTypmods;
 List *colCollations;
 List *groupClauses;

} SetOperationStmt;
# 1381 "../../src/include/nodes/parsenodes.h"
typedef enum ObjectType
{
 OBJECT_ACCESS_METHOD,
 OBJECT_AGGREGATE,
 OBJECT_AMOP,
 OBJECT_AMPROC,
 OBJECT_ATTRIBUTE,
 OBJECT_CAST,
 OBJECT_COLUMN,
 OBJECT_COLLATION,
 OBJECT_CONVERSION,
 OBJECT_DATABASE,
 OBJECT_DEFAULT,
 OBJECT_DEFACL,
 OBJECT_DOMAIN,
 OBJECT_DOMCONSTRAINT,
 OBJECT_EVENT_TRIGGER,
 OBJECT_EXTENSION,
 OBJECT_FDW,
 OBJECT_FOREIGN_SERVER,
 OBJECT_FOREIGN_TABLE,
 OBJECT_FUNCTION,
 OBJECT_INDEX,
 OBJECT_LANGUAGE,
 OBJECT_LARGEOBJECT,
 OBJECT_MATVIEW,
 OBJECT_OPCLASS,
 OBJECT_OPERATOR,
 OBJECT_OPFAMILY,
 OBJECT_POLICY,
 OBJECT_ROLE,
 OBJECT_RULE,
 OBJECT_SCHEMA,
 OBJECT_SEQUENCE,
 OBJECT_TABCONSTRAINT,
 OBJECT_TABLE,
 OBJECT_TABLESPACE,
 OBJECT_TRANSFORM,
 OBJECT_TRIGGER,
 OBJECT_TSCONFIGURATION,
 OBJECT_TSDICTIONARY,
 OBJECT_TSPARSER,
 OBJECT_TSTEMPLATE,
 OBJECT_TYPE,
 OBJECT_USER_MAPPING,
 OBJECT_VIEW
} ObjectType;
# 1437 "../../src/include/nodes/parsenodes.h"
typedef struct CreateSchemaStmt
{
 NodeTag type;
 char *schemaname;
 Node *authrole;
 List *schemaElts;
 bool if_not_exists;
} CreateSchemaStmt;

typedef enum DropBehavior
{
 DROP_RESTRICT,
 DROP_CASCADE
} DropBehavior;





typedef struct AlterTableStmt
{
 NodeTag type;
 RangeVar *relation;
 List *cmds;
 ObjectType relkind;
 bool missing_ok;
} AlterTableStmt;

typedef enum AlterTableType
{
 AT_AddColumn,
 AT_AddColumnRecurse,
 AT_AddColumnToView,
 AT_ColumnDefault,
 AT_DropNotNull,
 AT_SetNotNull,
 AT_SetStatistics,
 AT_SetOptions,
 AT_ResetOptions,
 AT_SetStorage,
 AT_DropColumn,
 AT_DropColumnRecurse,
 AT_AddIndex,
 AT_ReAddIndex,
 AT_AddConstraint,
 AT_AddConstraintRecurse,
 AT_ReAddConstraint,
 AT_AlterConstraint,
 AT_ValidateConstraint,
 AT_ValidateConstraintRecurse,
 AT_ProcessedConstraint,

 AT_AddIndexConstraint,
 AT_DropConstraint,
 AT_DropConstraintRecurse,
 AT_ReAddComment,
 AT_AlterColumnType,
 AT_AlterColumnGenericOptions,
 AT_ChangeOwner,
 AT_ClusterOn,
 AT_DropCluster,
 AT_SetLogged,
 AT_SetUnLogged,
 AT_AddOids,
 AT_AddOidsRecurse,
 AT_DropOids,
 AT_SetTableSpace,
 AT_SetRelOptions,
 AT_ResetRelOptions,
 AT_ReplaceRelOptions,
 AT_EnableTrig,
 AT_EnableAlwaysTrig,
 AT_EnableReplicaTrig,
 AT_DisableTrig,
 AT_EnableTrigAll,
 AT_DisableTrigAll,
 AT_EnableTrigUser,
 AT_DisableTrigUser,
 AT_EnableRule,
 AT_EnableAlwaysRule,
 AT_EnableReplicaRule,
 AT_DisableRule,
 AT_AddInherit,
 AT_DropInherit,
 AT_AddOf,
 AT_DropOf,
 AT_ReplicaIdentity,
 AT_EnableRowSecurity,
 AT_DisableRowSecurity,
 AT_ForceRowSecurity,
 AT_NoForceRowSecurity,
 AT_GenericOptions
} AlterTableType;

typedef struct ReplicaIdentityStmt
{
 NodeTag type;
 char identity_type;
 char *name;
} ReplicaIdentityStmt;

typedef struct AlterTableCmd
{
 NodeTag type;
 AlterTableType subtype;
 char *name;

 Node *newowner;
 Node *def;

 DropBehavior behavior;
 bool missing_ok;
} AlterTableCmd;
# 1559 "../../src/include/nodes/parsenodes.h"
typedef struct AlterDomainStmt
{
 NodeTag type;
 char subtype;







 List *typeName;
 char *name;
 Node *def;
 DropBehavior behavior;
 bool missing_ok;
} AlterDomainStmt;






typedef enum GrantTargetType
{
 ACL_TARGET_OBJECT,
 ACL_TARGET_ALL_IN_SCHEMA,
 ACL_TARGET_DEFAULTS
} GrantTargetType;

typedef enum GrantObjectType
{
 ACL_OBJECT_COLUMN,
 ACL_OBJECT_RELATION,
 ACL_OBJECT_SEQUENCE,
 ACL_OBJECT_DATABASE,
 ACL_OBJECT_DOMAIN,
 ACL_OBJECT_FDW,
 ACL_OBJECT_FOREIGN_SERVER,
 ACL_OBJECT_FUNCTION,
 ACL_OBJECT_LANGUAGE,
 ACL_OBJECT_LARGEOBJECT,
 ACL_OBJECT_NAMESPACE,
 ACL_OBJECT_TABLESPACE,
 ACL_OBJECT_TYPE
} GrantObjectType;

typedef struct GrantStmt
{
 NodeTag type;
 bool is_grant;
 GrantTargetType targtype;
 GrantObjectType objtype;
 List *objects;

 List *privileges;

 List *grantees;
 bool grant_option;
 DropBehavior behavior;
} GrantStmt;






typedef struct FuncWithArgs
{
 NodeTag type;
 List *funcname;
 List *funcargs;
} FuncWithArgs;
# 1640 "../../src/include/nodes/parsenodes.h"
typedef struct AccessPriv
{
 NodeTag type;
 char *priv_name;
 List *cols;
} AccessPriv;
# 1656 "../../src/include/nodes/parsenodes.h"
typedef struct GrantRoleStmt
{
 NodeTag type;
 List *granted_roles;
 List *grantee_roles;
 bool is_grant;
 bool admin_opt;
 Node *grantor;
 DropBehavior behavior;
} GrantRoleStmt;





typedef struct AlterDefaultPrivilegesStmt
{
 NodeTag type;
 List *options;
 GrantStmt *action;
} AlterDefaultPrivilegesStmt;
# 1686 "../../src/include/nodes/parsenodes.h"
typedef struct CopyStmt
{
 NodeTag type;
 RangeVar *relation;
 Node *query;

 List *attlist;

 bool is_from;
 bool is_program;
 char *filename;
 List *options;
} CopyStmt;
# 1707 "../../src/include/nodes/parsenodes.h"
typedef enum
{
 VAR_SET_VALUE,
 VAR_SET_DEFAULT,
 VAR_SET_CURRENT,
 VAR_SET_MULTI,
 VAR_RESET,
 VAR_RESET_ALL
} VariableSetKind;

typedef struct VariableSetStmt
{
 NodeTag type;
 VariableSetKind kind;
 char *name;
 List *args;
 bool is_local;
} VariableSetStmt;





typedef struct VariableShowStmt
{
 NodeTag type;
 char *name;
} VariableShowStmt;
# 1747 "../../src/include/nodes/parsenodes.h"
typedef struct CreateStmt
{
 NodeTag type;
 RangeVar *relation;
 List *tableElts;
 List *inhRelations;

 TypeName *ofTypename;
 List *constraints;
 List *options;
 OnCommitAction oncommit;
 char *tablespacename;
 bool if_not_exists;
} CreateStmt;
# 1793 "../../src/include/nodes/parsenodes.h"
typedef enum ConstrType
{
 CONSTR_NULL,

 CONSTR_NOTNULL,
 CONSTR_DEFAULT,
 CONSTR_CHECK,
 CONSTR_PRIMARY,
 CONSTR_UNIQUE,
 CONSTR_EXCLUSION,
 CONSTR_FOREIGN,
 CONSTR_ATTR_DEFERRABLE,
 CONSTR_ATTR_NOT_DEFERRABLE,
 CONSTR_ATTR_DEFERRED,
 CONSTR_ATTR_IMMEDIATE
} ConstrType;
# 1822 "../../src/include/nodes/parsenodes.h"
typedef struct Constraint
{
 NodeTag type;
 ConstrType contype;


 char *conname;
 bool deferrable;
 bool initdeferred;
 int location;


 bool is_no_inherit;
 Node *raw_expr;
 char *cooked_expr;


 List *keys;


 List *exclusions;


 List *options;
 char *indexname;
 char *indexspace;

 char *access_method;
 Node *where_clause;


 RangeVar *pktable;
 List *fk_attrs;
 List *pk_attrs;
 char fk_matchtype;
 char fk_upd_action;
 char fk_del_action;
 List *old_conpfeqop;
 Oid old_pktable_oid;


 bool skip_validation;
 bool initially_valid;
} Constraint;






typedef struct CreateTableSpaceStmt
{
 NodeTag type;
 char *tablespacename;
 Node *owner;
 char *location;
 List *options;
} CreateTableSpaceStmt;

typedef struct DropTableSpaceStmt
{
 NodeTag type;
 char *tablespacename;
 bool missing_ok;
} DropTableSpaceStmt;

typedef struct AlterTableSpaceOptionsStmt
{
 NodeTag type;
 char *tablespacename;
 List *options;
 bool isReset;
} AlterTableSpaceOptionsStmt;

typedef struct AlterTableMoveAllStmt
{
 NodeTag type;
 char *orig_tablespacename;
 ObjectType objtype;
 List *roles;
 char *new_tablespacename;
 bool nowait;
} AlterTableMoveAllStmt;






typedef struct CreateExtensionStmt
{
 NodeTag type;
 char *extname;
 bool if_not_exists;
 List *options;
} CreateExtensionStmt;


typedef struct AlterExtensionStmt
{
 NodeTag type;
 char *extname;
 List *options;
} AlterExtensionStmt;

typedef struct AlterExtensionContentsStmt
{
 NodeTag type;
 char *extname;
 int action;
 ObjectType objtype;
 List *objname;
 List *objargs;
} AlterExtensionContentsStmt;






typedef struct CreateFdwStmt
{
 NodeTag type;
 char *fdwname;
 List *func_options;
 List *options;
} CreateFdwStmt;

typedef struct AlterFdwStmt
{
 NodeTag type;
 char *fdwname;
 List *func_options;
 List *options;
} AlterFdwStmt;






typedef struct CreateForeignServerStmt
{
 NodeTag type;
 char *servername;
 char *servertype;
 char *version;
 char *fdwname;
 List *options;
} CreateForeignServerStmt;

typedef struct AlterForeignServerStmt
{
 NodeTag type;
 char *servername;
 char *version;
 List *options;
 bool has_version;
} AlterForeignServerStmt;






typedef struct CreateForeignTableStmt
{
 CreateStmt base;
 char *servername;
 List *options;
} CreateForeignTableStmt;






typedef struct CreateUserMappingStmt
{
 NodeTag type;
 Node *user;
 char *servername;
 List *options;
} CreateUserMappingStmt;

typedef struct AlterUserMappingStmt
{
 NodeTag type;
 Node *user;
 char *servername;
 List *options;
} AlterUserMappingStmt;

typedef struct DropUserMappingStmt
{
 NodeTag type;
 Node *user;
 char *servername;
 bool missing_ok;
} DropUserMappingStmt;






typedef enum ImportForeignSchemaType
{
 FDW_IMPORT_SCHEMA_ALL,
 FDW_IMPORT_SCHEMA_LIMIT_TO,
 FDW_IMPORT_SCHEMA_EXCEPT
} ImportForeignSchemaType;

typedef struct ImportForeignSchemaStmt
{
 NodeTag type;
 char *server_name;
 char *remote_schema;
 char *local_schema;
 ImportForeignSchemaType list_type;
 List *table_list;
 List *options;
} ImportForeignSchemaStmt;





typedef struct CreatePolicyStmt
{
 NodeTag type;
 char *policy_name;
 RangeVar *table;
 char *cmd_name;
 List *roles;
 Node *qual;
 Node *with_check;
} CreatePolicyStmt;





typedef struct AlterPolicyStmt
{
 NodeTag type;
 char *policy_name;
 RangeVar *table;
 List *roles;
 Node *qual;
 Node *with_check;
} AlterPolicyStmt;





typedef struct CreateAmStmt
{
 NodeTag type;
 char *amname;
 List *handler_name;
 char amtype;
} CreateAmStmt;





typedef struct CreateTrigStmt
{
 NodeTag type;
 char *trigname;
 RangeVar *relation;
 List *funcname;
 List *args;
 bool row;

 int16 timing;

 int16 events;
 List *columns;
 Node *whenClause;
 bool isconstraint;

 bool deferrable;
 bool initdeferred;
 RangeVar *constrrel;
} CreateTrigStmt;





typedef struct CreateEventTrigStmt
{
 NodeTag type;
 char *trigname;
 char *eventname;
 List *whenclause;
 List *funcname;
} CreateEventTrigStmt;





typedef struct AlterEventTrigStmt
{
 NodeTag type;
 char *trigname;
 char tgenabled;

} AlterEventTrigStmt;






typedef struct CreatePLangStmt
{
 NodeTag type;
 bool replace;
 char *plname;
 List *plhandler;
 List *plinline;
 List *plvalidator;
 bool pltrusted;
} CreatePLangStmt;
# 2162 "../../src/include/nodes/parsenodes.h"
typedef enum RoleStmtType
{
 ROLESTMT_ROLE,
 ROLESTMT_USER,
 ROLESTMT_GROUP
} RoleStmtType;

typedef struct CreateRoleStmt
{
 NodeTag type;
 RoleStmtType stmt_type;
 char *role;
 List *options;
} CreateRoleStmt;

typedef struct AlterRoleStmt
{
 NodeTag type;
 Node *role;
 List *options;
 int action;
} AlterRoleStmt;

typedef struct AlterRoleSetStmt
{
 NodeTag type;
 Node *role;
 char *database;
 VariableSetStmt *setstmt;
} AlterRoleSetStmt;

typedef struct DropRoleStmt
{
 NodeTag type;
 List *roles;
 bool missing_ok;
} DropRoleStmt;






typedef struct CreateSeqStmt
{
 NodeTag type;
 RangeVar *sequence;
 List *options;
 Oid ownerId;
 bool if_not_exists;
} CreateSeqStmt;

typedef struct AlterSeqStmt
{
 NodeTag type;
 RangeVar *sequence;
 List *options;
 bool missing_ok;
} AlterSeqStmt;





typedef struct DefineStmt
{
 NodeTag type;
 ObjectType kind;
 bool oldstyle;
 List *defnames;
 List *args;
 List *definition;
} DefineStmt;





typedef struct CreateDomainStmt
{
 NodeTag type;
 List *domainname;
 TypeName *typeName;
 CollateClause *collClause;
 List *constraints;
} CreateDomainStmt;





typedef struct CreateOpClassStmt
{
 NodeTag type;
 List *opclassname;
 List *opfamilyname;
 char *amname;
 TypeName *datatype;
 List *items;
 bool isDefault;
} CreateOpClassStmt;





typedef struct CreateOpClassItem
{
 NodeTag type;
 int itemtype;

 List *name;
 List *args;
 int number;
 List *order_family;
 List *class_args;

 TypeName *storedtype;
} CreateOpClassItem;





typedef struct CreateOpFamilyStmt
{
 NodeTag type;
 List *opfamilyname;
 char *amname;
} CreateOpFamilyStmt;





typedef struct AlterOpFamilyStmt
{
 NodeTag type;
 List *opfamilyname;
 char *amname;
 bool isDrop;
 List *items;
} AlterOpFamilyStmt;






typedef struct DropStmt
{
 NodeTag type;
 List *objects;
 List *arguments;
 ObjectType removeType;
 DropBehavior behavior;
 bool missing_ok;
 bool concurrent;
} DropStmt;





typedef struct TruncateStmt
{
 NodeTag type;
 List *relations;
 bool restart_seqs;
 DropBehavior behavior;
} TruncateStmt;





typedef struct CommentStmt
{
 NodeTag type;
 ObjectType objtype;
 List *objname;
 List *objargs;
 char *comment;
} CommentStmt;





typedef struct SecLabelStmt
{
 NodeTag type;
 ObjectType objtype;
 List *objname;
 List *objargs;
 char *provider;
 char *label;
} SecLabelStmt;
# 2380 "../../src/include/nodes/parsenodes.h"
typedef struct DeclareCursorStmt
{
 NodeTag type;
 char *portalname;
 int options;
 Node *query;
} DeclareCursorStmt;





typedef struct ClosePortalStmt
{
 NodeTag type;
 char *portalname;

} ClosePortalStmt;





typedef enum FetchDirection
{

 FETCH_FORWARD,
 FETCH_BACKWARD,

 FETCH_ABSOLUTE,
 FETCH_RELATIVE
} FetchDirection;



typedef struct FetchStmt
{
 NodeTag type;
 FetchDirection direction;
 long howMany;
 char *portalname;
 bool ismove;
} FetchStmt;
# 2435 "../../src/include/nodes/parsenodes.h"
typedef struct IndexStmt
{
 NodeTag type;
 char *idxname;
 RangeVar *relation;
 char *accessMethod;
 char *tableSpace;
 List *indexParams;
 List *options;
 Node *whereClause;
 List *excludeOpNames;
 char *idxcomment;
 Oid indexOid;
 Oid oldNode;
 bool unique;
 bool primary;
 bool isconstraint;
 bool deferrable;
 bool initdeferred;
 bool transformed;
 bool concurrent;
 bool if_not_exists;
} IndexStmt;





typedef struct CreateFunctionStmt
{
 NodeTag type;
 bool replace;
 List *funcname;
 List *parameters;
 TypeName *returnType;
 List *options;
 List *withClause;
} CreateFunctionStmt;

typedef enum FunctionParameterMode
{

 FUNC_PARAM_IN = 'i',
 FUNC_PARAM_OUT = 'o',
 FUNC_PARAM_INOUT = 'b',
 FUNC_PARAM_VARIADIC = 'v',
 FUNC_PARAM_TABLE = 't'
} FunctionParameterMode;

typedef struct FunctionParameter
{
 NodeTag type;
 char *name;
 TypeName *argType;
 FunctionParameterMode mode;
 Node *defexpr;
} FunctionParameter;

typedef struct AlterFunctionStmt
{
 NodeTag type;
 FuncWithArgs *func;
 List *actions;
} AlterFunctionStmt;







typedef struct DoStmt
{
 NodeTag type;
 List *args;
} DoStmt;

typedef struct InlineCodeBlock
{
 NodeTag type;
 char *source_text;
 Oid langOid;
 bool langIsTrusted;
} InlineCodeBlock;





typedef struct RenameStmt
{
 NodeTag type;
 ObjectType renameType;
 ObjectType relationType;
 RangeVar *relation;
 List *object;
 List *objarg;
 char *subname;

 char *newname;
 DropBehavior behavior;
 bool missing_ok;
} RenameStmt;





typedef struct AlterObjectDependsStmt
{
 NodeTag type;
 ObjectType objectType;
 RangeVar *relation;
 List *objname;
 List *objargs;
 Value *extname;
} AlterObjectDependsStmt;





typedef struct AlterObjectSchemaStmt
{
 NodeTag type;
 ObjectType objectType;
 RangeVar *relation;
 List *object;
 List *objarg;
 char *newschema;
 bool missing_ok;
} AlterObjectSchemaStmt;





typedef struct AlterOwnerStmt
{
 NodeTag type;
 ObjectType objectType;
 RangeVar *relation;
 List *object;
 List *objarg;
 Node *newowner;
} AlterOwnerStmt;






typedef struct AlterOperatorStmt
{
 NodeTag type;
 List *opername;
 List *operargs;
 List *options;
} AlterOperatorStmt;






typedef struct RuleStmt
{
 NodeTag type;
 RangeVar *relation;
 char *rulename;
 Node *whereClause;
 CmdType event;
 bool instead;
 List *actions;
 bool replace;
} RuleStmt;





typedef struct NotifyStmt
{
 NodeTag type;
 char *conditionname;
 char *payload;
} NotifyStmt;





typedef struct ListenStmt
{
 NodeTag type;
 char *conditionname;
} ListenStmt;





typedef struct UnlistenStmt
{
 NodeTag type;
 char *conditionname;
} UnlistenStmt;





typedef enum TransactionStmtKind
{
 TRANS_STMT_BEGIN,
 TRANS_STMT_START,
 TRANS_STMT_COMMIT,
 TRANS_STMT_ROLLBACK,
 TRANS_STMT_SAVEPOINT,
 TRANS_STMT_RELEASE,
 TRANS_STMT_ROLLBACK_TO,
 TRANS_STMT_PREPARE,
 TRANS_STMT_COMMIT_PREPARED,
 TRANS_STMT_ROLLBACK_PREPARED
} TransactionStmtKind;

typedef struct TransactionStmt
{
 NodeTag type;
 TransactionStmtKind kind;
 List *options;
 char *gid;
} TransactionStmt;





typedef struct CompositeTypeStmt
{
 NodeTag type;
 RangeVar *typevar;
 List *coldeflist;
} CompositeTypeStmt;





typedef struct CreateEnumStmt
{
 NodeTag type;
 List *typeName;
 List *vals;
} CreateEnumStmt;





typedef struct CreateRangeStmt
{
 NodeTag type;
 List *typeName;
 List *params;
} CreateRangeStmt;





typedef struct AlterEnumStmt
{
 NodeTag type;
 List *typeName;
 char *newVal;
 char *newValNeighbor;
 bool newValIsAfter;
 bool skipIfExists;
} AlterEnumStmt;





typedef enum ViewCheckOption
{
 NO_CHECK_OPTION,
 LOCAL_CHECK_OPTION,
 CASCADED_CHECK_OPTION
} ViewCheckOption;

typedef struct ViewStmt
{
 NodeTag type;
 RangeVar *view;
 List *aliases;
 Node *query;
 bool replace;
 List *options;
 ViewCheckOption withCheckOption;
} ViewStmt;





typedef struct LoadStmt
{
 NodeTag type;
 char *filename;
} LoadStmt;





typedef struct CreatedbStmt
{
 NodeTag type;
 char *dbname;
 List *options;
} CreatedbStmt;





typedef struct AlterDatabaseStmt
{
 NodeTag type;
 char *dbname;
 List *options;
} AlterDatabaseStmt;

typedef struct AlterDatabaseSetStmt
{
 NodeTag type;
 char *dbname;
 VariableSetStmt *setstmt;
} AlterDatabaseSetStmt;





typedef struct DropdbStmt
{
 NodeTag type;
 char *dbname;
 bool missing_ok;
} DropdbStmt;





typedef struct AlterSystemStmt
{
 NodeTag type;
 VariableSetStmt *setstmt;
} AlterSystemStmt;





typedef struct ClusterStmt
{
 NodeTag type;
 RangeVar *relation;
 char *indexname;
 bool verbose;
} ClusterStmt;
# 2818 "../../src/include/nodes/parsenodes.h"
typedef enum VacuumOption
{
 VACOPT_VACUUM = 1 << 0,
 VACOPT_ANALYZE = 1 << 1,
 VACOPT_VERBOSE = 1 << 2,
 VACOPT_FREEZE = 1 << 3,
 VACOPT_FULL = 1 << 4,
 VACOPT_NOWAIT = 1 << 5,
 VACOPT_SKIPTOAST = 1 << 6,
 VACOPT_DISABLE_PAGE_SKIPPING = 1 << 7
} VacuumOption;

typedef struct VacuumStmt
{
 NodeTag type;
 int options;
 RangeVar *relation;
 List *va_cols;
} VacuumStmt;
# 2846 "../../src/include/nodes/parsenodes.h"
typedef struct ExplainStmt
{
 NodeTag type;
 Node *query;
 List *options;
} ExplainStmt;
# 2866 "../../src/include/nodes/parsenodes.h"
typedef struct CreateTableAsStmt
{
 NodeTag type;
 Node *query;
 IntoClause *into;
 ObjectType relkind;
 bool is_select_into;
 bool if_not_exists;
} CreateTableAsStmt;





typedef struct RefreshMatViewStmt
{
 NodeTag type;
 bool concurrent;
 bool skipData;
 RangeVar *relation;
} RefreshMatViewStmt;





typedef struct CheckPointStmt
{
 NodeTag type;
} CheckPointStmt;






typedef enum DiscardMode
{
 DISCARD_ALL,
 DISCARD_PLANS,
 DISCARD_SEQUENCES,
 DISCARD_TEMP
} DiscardMode;

typedef struct DiscardStmt
{
 NodeTag type;
 DiscardMode target;
} DiscardStmt;





typedef struct LockStmt
{
 NodeTag type;
 List *relations;
 int mode;
 bool nowait;
} LockStmt;





typedef struct ConstraintsSetStmt
{
 NodeTag type;
 List *constraints;
 bool deferred;
} ConstraintsSetStmt;
# 2947 "../../src/include/nodes/parsenodes.h"
typedef enum ReindexObjectType
{
 REINDEX_OBJECT_INDEX,
 REINDEX_OBJECT_TABLE,
 REINDEX_OBJECT_SCHEMA,
 REINDEX_OBJECT_SYSTEM,
 REINDEX_OBJECT_DATABASE
} ReindexObjectType;

typedef struct ReindexStmt
{
 NodeTag type;
 ReindexObjectType kind;

 RangeVar *relation;
 const char *name;
 int options;
} ReindexStmt;





typedef struct CreateConversionStmt
{
 NodeTag type;
 List *conversion_name;
 char *for_encoding_name;
 char *to_encoding_name;
 List *func_name;
 bool def;
} CreateConversionStmt;





typedef struct CreateCastStmt
{
 NodeTag type;
 TypeName *sourcetype;
 TypeName *targettype;
 FuncWithArgs *func;
 CoercionContext context;
 bool inout;
} CreateCastStmt;





typedef struct CreateTransformStmt
{
 NodeTag type;
 bool replace;
 TypeName *type_name;
 char *lang;
 FuncWithArgs *fromsql;
 FuncWithArgs *tosql;
} CreateTransformStmt;





typedef struct PrepareStmt
{
 NodeTag type;
 char *name;
 List *argtypes;
 Node *query;
} PrepareStmt;







typedef struct ExecuteStmt
{
 NodeTag type;
 char *name;
 List *params;
} ExecuteStmt;






typedef struct DeallocateStmt
{
 NodeTag type;
 char *name;

} DeallocateStmt;




typedef struct DropOwnedStmt
{
 NodeTag type;
 List *roles;
 DropBehavior behavior;
} DropOwnedStmt;




typedef struct ReassignOwnedStmt
{
 NodeTag type;
 List *roles;
 Node *newrole;
} ReassignOwnedStmt;




typedef struct AlterTSDictionaryStmt
{
 NodeTag type;
 List *dictname;
 List *options;
} AlterTSDictionaryStmt;




typedef enum AlterTSConfigType
{
 ALTER_TSCONFIG_ADD_MAPPING,
 ALTER_TSCONFIG_ALTER_MAPPING_FOR_TOKEN,
 ALTER_TSCONFIG_REPLACE_DICT,
 ALTER_TSCONFIG_REPLACE_DICT_FOR_TOKEN,
 ALTER_TSCONFIG_DROP_MAPPING
} AlterTSConfigType;

typedef struct AlterTSConfigurationStmt
{
 NodeTag type;
 AlterTSConfigType kind;
 List *cfgname;





 List *tokentype;
 List *dicts;
 bool override;
 bool replace;
 bool missing_ok;
} AlterTSConfigurationStmt;
# 19 "../../src/include/utils/builtins.h" 2
# 1 "../../src/include/utils/sortsupport.h" 1
# 56 "../../src/include/utils/sortsupport.h"
# 1 "../../src/include/utils/relcache.h" 1
# 17 "../../src/include/utils/relcache.h"
# 1 "../../src/include/access/tupdesc.h" 1
# 18 "../../src/include/access/tupdesc.h"
# 1 "../../src/include/catalog/pg_attribute.h" 1
# 36 "../../src/include/catalog/pg_attribute.h"
typedef struct FormData_pg_attribute
{
 Oid attrelid;
 NameData attname;
# 48 "../../src/include/catalog/pg_attribute.h"
 Oid atttypid;
# 57 "../../src/include/catalog/pg_attribute.h"
 int32 attstattarget;





 int16 attlen;
# 78 "../../src/include/catalog/pg_attribute.h"
 int16 attnum;





 int32 attndims;
# 93 "../../src/include/catalog/pg_attribute.h"
 int32 attcacheoff;







 int32 atttypmod;





 bool attbyval;
# 122 "../../src/include/catalog/pg_attribute.h"
 char attstorage;





 char attalign;


 bool attnotnull;


 bool atthasdef;


 bool attisdropped;
# 148 "../../src/include/catalog/pg_attribute.h"
 bool attislocal;


 int32 attinhcount;


 Oid attcollation;
# 168 "../../src/include/catalog/pg_attribute.h"
} FormData_pg_attribute;
# 184 "../../src/include/catalog/pg_attribute.h"
typedef FormData_pg_attribute *Form_pg_attribute;
# 19 "../../src/include/access/tupdesc.h" 2



typedef struct attrDefault
{
 AttrNumber adnum;
 char *adbin;
} AttrDefault;

typedef struct constrCheck
{
 char *ccname;
 char *ccbin;
 bool ccvalid;
 bool ccnoinherit;
} ConstrCheck;


typedef struct tupleConstr
{
 AttrDefault *defval;
 ConstrCheck *check;
 uint16 num_defval;
 uint16 num_check;
 bool has_not_null;
} TupleConstr;
# 71 "../../src/include/access/tupdesc.h"
typedef struct tupleDesc
{
 int natts;
 Form_pg_attribute *attrs;

 TupleConstr *constr;
 Oid tdtypeid;
 int32 tdtypmod;
 bool tdhasoid;
 int tdrefcount;
} *TupleDesc;





extern TupleDesc CreateTemplateTupleDesc(int natts, bool hasoid);

extern TupleDesc CreateTupleDesc(int natts, bool hasoid,
    Form_pg_attribute *attrs);

extern TupleDesc CreateTupleDescCopy(TupleDesc tupdesc);

extern TupleDesc CreateTupleDescCopyConstr(TupleDesc tupdesc);

extern void TupleDescCopyEntry(TupleDesc dst, AttrNumber dstAttno,
       TupleDesc src, AttrNumber srcAttno);

extern void FreeTupleDesc(TupleDesc tupdesc);

extern void IncrTupleDescRefCount(TupleDesc tupdesc);
extern void DecrTupleDescRefCount(TupleDesc tupdesc);
# 116 "../../src/include/access/tupdesc.h"
extern bool equalTupleDescs(TupleDesc tupdesc1, TupleDesc tupdesc2);

extern void TupleDescInitEntry(TupleDesc desc,
       AttrNumber attributeNumber,
       const char *attributeName,
       Oid oidtypeid,
       int32 typmod,
       int attdim);

extern void TupleDescInitEntryCollation(TupleDesc desc,
       AttrNumber attributeNumber,
       Oid collationid);

extern TupleDesc BuildDescForRelation(List *schema);

extern TupleDesc BuildDescFromLists(List *names, List *types, List *typmods, List *collations);
# 18 "../../src/include/utils/relcache.h" 2



typedef struct RelationData *Relation;







typedef Relation *RelationPtr;




extern Relation RelationIdGetRelation(Oid relationId);
extern void RelationClose(Relation relation);




extern List *RelationGetFKeyList(Relation relation);
extern List *RelationGetIndexList(Relation relation);
extern Oid RelationGetOidIndex(Relation relation);
extern Oid RelationGetReplicaIndex(Relation relation);
extern List *RelationGetIndexExpressions(Relation relation);
extern List *RelationGetIndexPredicate(Relation relation);

typedef enum IndexAttrBitmapKind
{
 INDEX_ATTR_BITMAP_ALL,
 INDEX_ATTR_BITMAP_KEY,
 INDEX_ATTR_BITMAP_IDENTITY_KEY
} IndexAttrBitmapKind;

extern Bitmapset *RelationGetIndexAttrBitmap(Relation relation,
         IndexAttrBitmapKind keyAttrs);

extern void RelationGetExclusionInfo(Relation indexRelation,
       Oid **operators,
       Oid **procs,
       uint16 **strategies);

extern void RelationSetIndexList(Relation relation,
      List *indexIds, Oid oidIndex);

extern void RelationInitIndexAccessInfo(Relation relation);




extern int errtable(Relation rel);
extern int errtablecol(Relation rel, int attnum);
extern int errtablecolname(Relation rel, const char *colname);
extern int errtableconstraint(Relation rel, const char *conname);




extern void RelationCacheInitialize(void);
extern void RelationCacheInitializePhase2(void);
extern void RelationCacheInitializePhase3(void);




extern Relation RelationBuildLocalRelation(const char *relname,
         Oid relnamespace,
         TupleDesc tupDesc,
         Oid relid,
         Oid relfilenode,
         Oid reltablespace,
         bool shared_relation,
         bool mapped_relation,
         char relpersistence,
         char relkind);




extern void RelationSetNewRelfilenode(Relation relation, char persistence,
        TransactionId freezeXid, MultiXactId minmulti);




extern void RelationForgetRelation(Oid rid);

extern void RelationCacheInvalidateEntry(Oid relationId);

extern void RelationCacheInvalidate(void);

extern void RelationCloseSmgrByOid(Oid relationId);

extern void AtEOXact_RelationCache(bool isCommit);
extern void AtEOSubXact_RelationCache(bool isCommit, SubTransactionId mySubid,
        SubTransactionId parentSubid);




extern bool RelationIdIsInInitFile(Oid relationId);
extern void RelationCacheInitFilePreInvalidate(void);
extern void RelationCacheInitFilePostInvalidate(void);
extern void RelationCacheInitFileRemove(void);


extern bool criticalRelcachesBuilt;


extern bool criticalSharedRelcachesBuilt;
# 57 "../../src/include/utils/sortsupport.h" 2

typedef struct SortSupportData *SortSupport;

typedef struct SortSupportData
{




 MemoryContext ssup_cxt;
 Oid ssup_collation;






 bool ssup_reverse;
 bool ssup_nulls_first;





 AttrNumber ssup_attno;





 void *ssup_extra;
# 106 "../../src/include/utils/sortsupport.h"
 int (*comparator) (Datum x, Datum y, SortSupport ssup);
# 155 "../../src/include/utils/sortsupport.h"
 bool abbreviate;
# 172 "../../src/include/utils/sortsupport.h"
 Datum (*abbrev_converter) (Datum original, SortSupport ssup);
# 182 "../../src/include/utils/sortsupport.h"
 bool (*abbrev_abort) (int memtupcount, SortSupport ssup);
# 191 "../../src/include/utils/sortsupport.h"
 int (*abbrev_full_comparator) (Datum x, Datum y, SortSupport ssup);
} SortSupportData;






static inline int
ApplySortComparator(Datum datum1, bool isNull1,
     Datum datum2, bool isNull2,
     SortSupport ssup)
{
 int compare;

 if (isNull1)
 {
  if (isNull2)
   compare = 0;
  else if (ssup->ssup_nulls_first)
   compare = -1;
  else
   compare = 1;
 }
 else if (isNull2)
 {
  if (ssup->ssup_nulls_first)
   compare = 1;
  else
   compare = -1;
 }
 else
 {
  compare = (*ssup->comparator) (datum1, datum2, ssup);
  if (ssup->ssup_reverse)
   ((compare) = ((compare) < 0) ? 1 : -(compare));
 }

 return compare;
}






static inline int
ApplySortAbbrevFullComparator(Datum datum1, bool isNull1,
         Datum datum2, bool isNull2,
         SortSupport ssup)
{
 int compare;

 if (isNull1)
 {
  if (isNull2)
   compare = 0;
  else if (ssup->ssup_nulls_first)
   compare = -1;
  else
   compare = 1;
 }
 else if (isNull2)
 {
  if (ssup->ssup_nulls_first)
   compare = 1;
  else
   compare = -1;
 }
 else
 {
  compare = (*ssup->abbrev_full_comparator) (datum1, datum2, ssup);
  if (ssup->ssup_reverse)
   ((compare) = ((compare) < 0) ? 1 : -(compare));
 }

 return compare;
}


extern void PrepareSortSupportComparisonShim(Oid cmpFunc, SortSupport ssup);
extern void PrepareSortSupportFromOrderingOp(Oid orderingOp, SortSupport ssup);
extern void PrepareSortSupportFromIndexRel(Relation indexRel, int16 strategy,
          SortSupport ssup);
# 20 "../../src/include/utils/builtins.h" 2






extern Datum has_any_column_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_any_column_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_name_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_name_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_id_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_id_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_name_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_name_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_id_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_id_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_name_attnum(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_column_privilege_id_attnum(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_table_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_sequence_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_database_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_foreign_data_wrapper_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_function_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_language_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_schema_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_server_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_tablespace_privilege_id(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_name_name(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_name_id(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_id_name(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_id_id(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_name(FunctionCallInfo fcinfo);
extern Datum has_type_privilege_id(FunctionCallInfo fcinfo);
extern Datum pg_has_role_name_name(FunctionCallInfo fcinfo);
extern Datum pg_has_role_name_id(FunctionCallInfo fcinfo);
extern Datum pg_has_role_id_name(FunctionCallInfo fcinfo);
extern Datum pg_has_role_id_id(FunctionCallInfo fcinfo);
extern Datum pg_has_role_name(FunctionCallInfo fcinfo);
extern Datum pg_has_role_id(FunctionCallInfo fcinfo);


extern Datum pg_indexam_has_property(FunctionCallInfo fcinfo);
extern Datum pg_index_has_property(FunctionCallInfo fcinfo);
extern Datum pg_index_column_has_property(FunctionCallInfo fcinfo);


extern Datum boolin(FunctionCallInfo fcinfo);
extern Datum boolout(FunctionCallInfo fcinfo);
extern Datum boolrecv(FunctionCallInfo fcinfo);
extern Datum boolsend(FunctionCallInfo fcinfo);
extern Datum booltext(FunctionCallInfo fcinfo);
extern Datum booleq(FunctionCallInfo fcinfo);
extern Datum boolne(FunctionCallInfo fcinfo);
extern Datum boollt(FunctionCallInfo fcinfo);
extern Datum boolgt(FunctionCallInfo fcinfo);
extern Datum boolle(FunctionCallInfo fcinfo);
extern Datum boolge(FunctionCallInfo fcinfo);
extern Datum booland_statefunc(FunctionCallInfo fcinfo);
extern Datum boolor_statefunc(FunctionCallInfo fcinfo);
extern Datum bool_accum(FunctionCallInfo fcinfo);
extern Datum bool_accum_inv(FunctionCallInfo fcinfo);
extern Datum bool_alltrue(FunctionCallInfo fcinfo);
extern Datum bool_anytrue(FunctionCallInfo fcinfo);
extern bool parse_bool(const char *value, bool *result);
extern bool parse_bool_with_len(const char *value, size_t len, bool *result);


extern Datum charin(FunctionCallInfo fcinfo);
extern Datum charout(FunctionCallInfo fcinfo);
extern Datum charrecv(FunctionCallInfo fcinfo);
extern Datum charsend(FunctionCallInfo fcinfo);
extern Datum chareq(FunctionCallInfo fcinfo);
extern Datum charne(FunctionCallInfo fcinfo);
extern Datum charlt(FunctionCallInfo fcinfo);
extern Datum charle(FunctionCallInfo fcinfo);
extern Datum chargt(FunctionCallInfo fcinfo);
extern Datum charge(FunctionCallInfo fcinfo);
extern Datum chartoi4(FunctionCallInfo fcinfo);
extern Datum i4tochar(FunctionCallInfo fcinfo);
extern Datum text_char(FunctionCallInfo fcinfo);
extern Datum char_text(FunctionCallInfo fcinfo);


extern Datum domain_in(FunctionCallInfo fcinfo);
extern Datum domain_recv(FunctionCallInfo fcinfo);
extern void domain_check(Datum value, bool isnull, Oid domainType,
    void **extra, MemoryContext mcxt);
extern int errdatatype(Oid datatypeOid);
extern int errdomainconstraint(Oid datatypeOid, const char *conname);


extern Datum binary_encode(FunctionCallInfo fcinfo);
extern Datum binary_decode(FunctionCallInfo fcinfo);
extern unsigned hex_encode(const char *src, unsigned len, char *dst);
extern unsigned hex_decode(const char *src, unsigned len, char *dst);


extern Datum enum_in(FunctionCallInfo fcinfo);
extern Datum enum_out(FunctionCallInfo fcinfo);
extern Datum enum_recv(FunctionCallInfo fcinfo);
extern Datum enum_send(FunctionCallInfo fcinfo);
extern Datum enum_lt(FunctionCallInfo fcinfo);
extern Datum enum_le(FunctionCallInfo fcinfo);
extern Datum enum_eq(FunctionCallInfo fcinfo);
extern Datum enum_ne(FunctionCallInfo fcinfo);
extern Datum enum_ge(FunctionCallInfo fcinfo);
extern Datum enum_gt(FunctionCallInfo fcinfo);
extern Datum enum_cmp(FunctionCallInfo fcinfo);
extern Datum enum_smaller(FunctionCallInfo fcinfo);
extern Datum enum_larger(FunctionCallInfo fcinfo);
extern Datum enum_first(FunctionCallInfo fcinfo);
extern Datum enum_last(FunctionCallInfo fcinfo);
extern Datum enum_range_bounds(FunctionCallInfo fcinfo);
extern Datum enum_range_all(FunctionCallInfo fcinfo);


extern Datum int2in(FunctionCallInfo fcinfo);
extern Datum int2out(FunctionCallInfo fcinfo);
extern Datum int2recv(FunctionCallInfo fcinfo);
extern Datum int2send(FunctionCallInfo fcinfo);
extern Datum int2vectorin(FunctionCallInfo fcinfo);
extern Datum int2vectorout(FunctionCallInfo fcinfo);
extern Datum int2vectorrecv(FunctionCallInfo fcinfo);
extern Datum int2vectorsend(FunctionCallInfo fcinfo);
extern Datum int2vectoreq(FunctionCallInfo fcinfo);
extern Datum int4in(FunctionCallInfo fcinfo);
extern Datum int4out(FunctionCallInfo fcinfo);
extern Datum int4recv(FunctionCallInfo fcinfo);
extern Datum int4send(FunctionCallInfo fcinfo);
extern Datum i2toi4(FunctionCallInfo fcinfo);
extern Datum i4toi2(FunctionCallInfo fcinfo);
extern Datum int4_bool(FunctionCallInfo fcinfo);
extern Datum bool_int4(FunctionCallInfo fcinfo);
extern Datum int4eq(FunctionCallInfo fcinfo);
extern Datum int4ne(FunctionCallInfo fcinfo);
extern Datum int4lt(FunctionCallInfo fcinfo);
extern Datum int4le(FunctionCallInfo fcinfo);
extern Datum int4gt(FunctionCallInfo fcinfo);
extern Datum int4ge(FunctionCallInfo fcinfo);
extern Datum int2eq(FunctionCallInfo fcinfo);
extern Datum int2ne(FunctionCallInfo fcinfo);
extern Datum int2lt(FunctionCallInfo fcinfo);
extern Datum int2le(FunctionCallInfo fcinfo);
extern Datum int2gt(FunctionCallInfo fcinfo);
extern Datum int2ge(FunctionCallInfo fcinfo);
extern Datum int24eq(FunctionCallInfo fcinfo);
extern Datum int24ne(FunctionCallInfo fcinfo);
extern Datum int24lt(FunctionCallInfo fcinfo);
extern Datum int24le(FunctionCallInfo fcinfo);
extern Datum int24gt(FunctionCallInfo fcinfo);
extern Datum int24ge(FunctionCallInfo fcinfo);
extern Datum int42eq(FunctionCallInfo fcinfo);
extern Datum int42ne(FunctionCallInfo fcinfo);
extern Datum int42lt(FunctionCallInfo fcinfo);
extern Datum int42le(FunctionCallInfo fcinfo);
extern Datum int42gt(FunctionCallInfo fcinfo);
extern Datum int42ge(FunctionCallInfo fcinfo);
extern Datum int4um(FunctionCallInfo fcinfo);
extern Datum int4up(FunctionCallInfo fcinfo);
extern Datum int4pl(FunctionCallInfo fcinfo);
extern Datum int4mi(FunctionCallInfo fcinfo);
extern Datum int4mul(FunctionCallInfo fcinfo);
extern Datum int4div(FunctionCallInfo fcinfo);
extern Datum int4abs(FunctionCallInfo fcinfo);
extern Datum int4inc(FunctionCallInfo fcinfo);
extern Datum int2um(FunctionCallInfo fcinfo);
extern Datum int2up(FunctionCallInfo fcinfo);
extern Datum int2pl(FunctionCallInfo fcinfo);
extern Datum int2mi(FunctionCallInfo fcinfo);
extern Datum int2mul(FunctionCallInfo fcinfo);
extern Datum int2div(FunctionCallInfo fcinfo);
extern Datum int2abs(FunctionCallInfo fcinfo);
extern Datum int24pl(FunctionCallInfo fcinfo);
extern Datum int24mi(FunctionCallInfo fcinfo);
extern Datum int24mul(FunctionCallInfo fcinfo);
extern Datum int24div(FunctionCallInfo fcinfo);
extern Datum int42pl(FunctionCallInfo fcinfo);
extern Datum int42mi(FunctionCallInfo fcinfo);
extern Datum int42mul(FunctionCallInfo fcinfo);
extern Datum int42div(FunctionCallInfo fcinfo);
extern Datum int4mod(FunctionCallInfo fcinfo);
extern Datum int2mod(FunctionCallInfo fcinfo);
extern Datum int2larger(FunctionCallInfo fcinfo);
extern Datum int2smaller(FunctionCallInfo fcinfo);
extern Datum int4larger(FunctionCallInfo fcinfo);
extern Datum int4smaller(FunctionCallInfo fcinfo);

extern Datum int4and(FunctionCallInfo fcinfo);
extern Datum int4or(FunctionCallInfo fcinfo);
extern Datum int4xor(FunctionCallInfo fcinfo);
extern Datum int4not(FunctionCallInfo fcinfo);
extern Datum int4shl(FunctionCallInfo fcinfo);
extern Datum int4shr(FunctionCallInfo fcinfo);
extern Datum int2and(FunctionCallInfo fcinfo);
extern Datum int2or(FunctionCallInfo fcinfo);
extern Datum int2xor(FunctionCallInfo fcinfo);
extern Datum int2not(FunctionCallInfo fcinfo);
extern Datum int2shl(FunctionCallInfo fcinfo);
extern Datum int2shr(FunctionCallInfo fcinfo);
extern Datum generate_series_int4(FunctionCallInfo fcinfo);
extern Datum generate_series_step_int4(FunctionCallInfo fcinfo);
extern int2vector *buildint2vector(const int16 *int2s, int n);


extern Datum namein(FunctionCallInfo fcinfo);
extern Datum nameout(FunctionCallInfo fcinfo);
extern Datum namerecv(FunctionCallInfo fcinfo);
extern Datum namesend(FunctionCallInfo fcinfo);
extern Datum nameeq(FunctionCallInfo fcinfo);
extern Datum namene(FunctionCallInfo fcinfo);
extern Datum namelt(FunctionCallInfo fcinfo);
extern Datum namele(FunctionCallInfo fcinfo);
extern Datum namegt(FunctionCallInfo fcinfo);
extern Datum namege(FunctionCallInfo fcinfo);
extern int namecpy(Name n1, Name n2);
extern int namestrcpy(Name name, const char *str);
extern int namestrcmp(Name name, const char *str);
extern Datum current_user(FunctionCallInfo fcinfo);
extern Datum session_user(FunctionCallInfo fcinfo);
extern Datum current_schema(FunctionCallInfo fcinfo);
extern Datum current_schemas(FunctionCallInfo fcinfo);


extern int32 pg_atoi(const char *s, int size, int c);
extern void pg_itoa(int16 i, char *a);
extern void pg_ltoa(int32 l, char *a);
extern void pg_lltoa(int64 ll, char *a);
extern char *pg_ltostr_zeropad(char *str, int32 value, int32 minwidth);
extern char *pg_ltostr(char *str, int32 value);
extern uint64 pg_strtouint64(const char *str, char **endptr, int base);





extern Datum btboolcmp(FunctionCallInfo fcinfo);
extern Datum btint2cmp(FunctionCallInfo fcinfo);
extern Datum btint4cmp(FunctionCallInfo fcinfo);
extern Datum btint8cmp(FunctionCallInfo fcinfo);
extern Datum btfloat4cmp(FunctionCallInfo fcinfo);
extern Datum btfloat8cmp(FunctionCallInfo fcinfo);
extern Datum btint48cmp(FunctionCallInfo fcinfo);
extern Datum btint84cmp(FunctionCallInfo fcinfo);
extern Datum btint24cmp(FunctionCallInfo fcinfo);
extern Datum btint42cmp(FunctionCallInfo fcinfo);
extern Datum btint28cmp(FunctionCallInfo fcinfo);
extern Datum btint82cmp(FunctionCallInfo fcinfo);
extern Datum btfloat48cmp(FunctionCallInfo fcinfo);
extern Datum btfloat84cmp(FunctionCallInfo fcinfo);
extern Datum btoidcmp(FunctionCallInfo fcinfo);
extern Datum btoidvectorcmp(FunctionCallInfo fcinfo);
extern Datum btabstimecmp(FunctionCallInfo fcinfo);
extern Datum btreltimecmp(FunctionCallInfo fcinfo);
extern Datum bttintervalcmp(FunctionCallInfo fcinfo);
extern Datum btcharcmp(FunctionCallInfo fcinfo);
extern Datum btnamecmp(FunctionCallInfo fcinfo);
extern Datum bttextcmp(FunctionCallInfo fcinfo);
extern Datum bttextsortsupport(FunctionCallInfo fcinfo);






extern Datum btint2sortsupport(FunctionCallInfo fcinfo);
extern Datum btint4sortsupport(FunctionCallInfo fcinfo);
extern Datum btint8sortsupport(FunctionCallInfo fcinfo);
extern Datum btfloat4sortsupport(FunctionCallInfo fcinfo);
extern Datum btfloat8sortsupport(FunctionCallInfo fcinfo);
extern Datum btoidsortsupport(FunctionCallInfo fcinfo);
extern Datum btnamesortsupport(FunctionCallInfo fcinfo);


extern int extra_float_digits;

extern double get_float8_infinity(void);
extern float get_float4_infinity(void);
extern double get_float8_nan(void);
extern float get_float4_nan(void);
extern int is_infinite(double val);
extern double float8in_internal(char *num, char **endptr_p,
      const char *type_name, const char *orig_string);
extern char *float8out_internal(double num);
extern int float4_cmp_internal(float4 a, float4 b);
extern int float8_cmp_internal(float8 a, float8 b);

extern Datum float4in(FunctionCallInfo fcinfo);
extern Datum float4out(FunctionCallInfo fcinfo);
extern Datum float4recv(FunctionCallInfo fcinfo);
extern Datum float4send(FunctionCallInfo fcinfo);
extern Datum float8in(FunctionCallInfo fcinfo);
extern Datum float8out(FunctionCallInfo fcinfo);
extern Datum float8recv(FunctionCallInfo fcinfo);
extern Datum float8send(FunctionCallInfo fcinfo);
extern Datum float4abs(FunctionCallInfo fcinfo);
extern Datum float4um(FunctionCallInfo fcinfo);
extern Datum float4up(FunctionCallInfo fcinfo);
extern Datum float4larger(FunctionCallInfo fcinfo);
extern Datum float4smaller(FunctionCallInfo fcinfo);
extern Datum float8abs(FunctionCallInfo fcinfo);
extern Datum float8um(FunctionCallInfo fcinfo);
extern Datum float8up(FunctionCallInfo fcinfo);
extern Datum float8larger(FunctionCallInfo fcinfo);
extern Datum float8smaller(FunctionCallInfo fcinfo);
extern Datum float4pl(FunctionCallInfo fcinfo);
extern Datum float4mi(FunctionCallInfo fcinfo);
extern Datum float4mul(FunctionCallInfo fcinfo);
extern Datum float4div(FunctionCallInfo fcinfo);
extern Datum float8pl(FunctionCallInfo fcinfo);
extern Datum float8mi(FunctionCallInfo fcinfo);
extern Datum float8mul(FunctionCallInfo fcinfo);
extern Datum float8div(FunctionCallInfo fcinfo);
extern Datum float4eq(FunctionCallInfo fcinfo);
extern Datum float4ne(FunctionCallInfo fcinfo);
extern Datum float4lt(FunctionCallInfo fcinfo);
extern Datum float4le(FunctionCallInfo fcinfo);
extern Datum float4gt(FunctionCallInfo fcinfo);
extern Datum float4ge(FunctionCallInfo fcinfo);
extern Datum float8eq(FunctionCallInfo fcinfo);
extern Datum float8ne(FunctionCallInfo fcinfo);
extern Datum float8lt(FunctionCallInfo fcinfo);
extern Datum float8le(FunctionCallInfo fcinfo);
extern Datum float8gt(FunctionCallInfo fcinfo);
extern Datum float8ge(FunctionCallInfo fcinfo);
extern Datum ftod(FunctionCallInfo fcinfo);
extern Datum i4tod(FunctionCallInfo fcinfo);
extern Datum i2tod(FunctionCallInfo fcinfo);
extern Datum dtof(FunctionCallInfo fcinfo);
extern Datum dtoi4(FunctionCallInfo fcinfo);
extern Datum dtoi2(FunctionCallInfo fcinfo);
extern Datum i4tof(FunctionCallInfo fcinfo);
extern Datum i2tof(FunctionCallInfo fcinfo);
extern Datum ftoi4(FunctionCallInfo fcinfo);
extern Datum ftoi2(FunctionCallInfo fcinfo);
extern Datum dround(FunctionCallInfo fcinfo);
extern Datum dceil(FunctionCallInfo fcinfo);
extern Datum dfloor(FunctionCallInfo fcinfo);
extern Datum dsign(FunctionCallInfo fcinfo);
extern Datum dtrunc(FunctionCallInfo fcinfo);
extern Datum dsqrt(FunctionCallInfo fcinfo);
extern Datum dcbrt(FunctionCallInfo fcinfo);
extern Datum dpow(FunctionCallInfo fcinfo);
extern Datum dexp(FunctionCallInfo fcinfo);
extern Datum dlog1(FunctionCallInfo fcinfo);
extern Datum dlog10(FunctionCallInfo fcinfo);
extern Datum dacos(FunctionCallInfo fcinfo);
extern Datum dasin(FunctionCallInfo fcinfo);
extern Datum datan(FunctionCallInfo fcinfo);
extern Datum datan2(FunctionCallInfo fcinfo);
extern Datum dcos(FunctionCallInfo fcinfo);
extern Datum dcot(FunctionCallInfo fcinfo);
extern Datum dsin(FunctionCallInfo fcinfo);
extern Datum dtan(FunctionCallInfo fcinfo);
extern Datum dacosd(FunctionCallInfo fcinfo);
extern Datum dasind(FunctionCallInfo fcinfo);
extern Datum datand(FunctionCallInfo fcinfo);
extern Datum datan2d(FunctionCallInfo fcinfo);
extern Datum dcosd(FunctionCallInfo fcinfo);
extern Datum dcotd(FunctionCallInfo fcinfo);
extern Datum dsind(FunctionCallInfo fcinfo);
extern Datum dtand(FunctionCallInfo fcinfo);
extern Datum degrees(FunctionCallInfo fcinfo);
extern Datum dpi(FunctionCallInfo fcinfo);
extern Datum radians(FunctionCallInfo fcinfo);
extern Datum drandom(FunctionCallInfo fcinfo);
extern Datum setseed(FunctionCallInfo fcinfo);
extern Datum float8_combine(FunctionCallInfo fcinfo);
extern Datum float8_accum(FunctionCallInfo fcinfo);
extern Datum float4_accum(FunctionCallInfo fcinfo);
extern Datum float8_avg(FunctionCallInfo fcinfo);
extern Datum float8_var_pop(FunctionCallInfo fcinfo);
extern Datum float8_var_samp(FunctionCallInfo fcinfo);
extern Datum float8_stddev_pop(FunctionCallInfo fcinfo);
extern Datum float8_stddev_samp(FunctionCallInfo fcinfo);
extern Datum float8_regr_accum(FunctionCallInfo fcinfo);
extern Datum float8_regr_combine(FunctionCallInfo fcinfo);
extern Datum float8_regr_sxx(FunctionCallInfo fcinfo);
extern Datum float8_regr_syy(FunctionCallInfo fcinfo);
extern Datum float8_regr_sxy(FunctionCallInfo fcinfo);
extern Datum float8_regr_avgx(FunctionCallInfo fcinfo);
extern Datum float8_regr_avgy(FunctionCallInfo fcinfo);
extern Datum float8_covar_pop(FunctionCallInfo fcinfo);
extern Datum float8_covar_samp(FunctionCallInfo fcinfo);
extern Datum float8_corr(FunctionCallInfo fcinfo);
extern Datum float8_regr_r2(FunctionCallInfo fcinfo);
extern Datum float8_regr_slope(FunctionCallInfo fcinfo);
extern Datum float8_regr_intercept(FunctionCallInfo fcinfo);
extern Datum float48pl(FunctionCallInfo fcinfo);
extern Datum float48mi(FunctionCallInfo fcinfo);
extern Datum float48mul(FunctionCallInfo fcinfo);
extern Datum float48div(FunctionCallInfo fcinfo);
extern Datum float84pl(FunctionCallInfo fcinfo);
extern Datum float84mi(FunctionCallInfo fcinfo);
extern Datum float84mul(FunctionCallInfo fcinfo);
extern Datum float84div(FunctionCallInfo fcinfo);
extern Datum float48eq(FunctionCallInfo fcinfo);
extern Datum float48ne(FunctionCallInfo fcinfo);
extern Datum float48lt(FunctionCallInfo fcinfo);
extern Datum float48le(FunctionCallInfo fcinfo);
extern Datum float48gt(FunctionCallInfo fcinfo);
extern Datum float48ge(FunctionCallInfo fcinfo);
extern Datum float84eq(FunctionCallInfo fcinfo);
extern Datum float84ne(FunctionCallInfo fcinfo);
extern Datum float84lt(FunctionCallInfo fcinfo);
extern Datum float84le(FunctionCallInfo fcinfo);
extern Datum float84gt(FunctionCallInfo fcinfo);
extern Datum float84ge(FunctionCallInfo fcinfo);
extern Datum width_bucket_float8(FunctionCallInfo fcinfo);


extern Datum pg_tablespace_size_oid(FunctionCallInfo fcinfo);
extern Datum pg_tablespace_size_name(FunctionCallInfo fcinfo);
extern Datum pg_database_size_oid(FunctionCallInfo fcinfo);
extern Datum pg_database_size_name(FunctionCallInfo fcinfo);
extern Datum pg_relation_size(FunctionCallInfo fcinfo);
extern Datum pg_total_relation_size(FunctionCallInfo fcinfo);
extern Datum pg_size_pretty(FunctionCallInfo fcinfo);
extern Datum pg_size_pretty_numeric(FunctionCallInfo fcinfo);
extern Datum pg_size_bytes(FunctionCallInfo fcinfo);
extern Datum pg_table_size(FunctionCallInfo fcinfo);
extern Datum pg_indexes_size(FunctionCallInfo fcinfo);
extern Datum pg_relation_filenode(FunctionCallInfo fcinfo);
extern Datum pg_filenode_relation(FunctionCallInfo fcinfo);
extern Datum pg_relation_filepath(FunctionCallInfo fcinfo);


extern Datum pg_stat_file(FunctionCallInfo fcinfo);
extern Datum pg_stat_file_1arg(FunctionCallInfo fcinfo);
extern Datum pg_read_file(FunctionCallInfo fcinfo);
extern Datum pg_read_file_off_len(FunctionCallInfo fcinfo);
extern Datum pg_read_file_all(FunctionCallInfo fcinfo);
extern Datum pg_read_binary_file(FunctionCallInfo fcinfo);
extern Datum pg_read_binary_file_off_len(FunctionCallInfo fcinfo);
extern Datum pg_read_binary_file_all(FunctionCallInfo fcinfo);
extern Datum pg_ls_dir(FunctionCallInfo fcinfo);
extern Datum pg_ls_dir_1arg(FunctionCallInfo fcinfo);


extern Datum pg_num_nulls(FunctionCallInfo fcinfo);
extern Datum pg_num_nonnulls(FunctionCallInfo fcinfo);
extern Datum current_database(FunctionCallInfo fcinfo);
extern Datum current_query(FunctionCallInfo fcinfo);
extern Datum pg_cancel_backend(FunctionCallInfo fcinfo);
extern Datum pg_terminate_backend(FunctionCallInfo fcinfo);
extern Datum pg_reload_conf(FunctionCallInfo fcinfo);
extern Datum pg_tablespace_databases(FunctionCallInfo fcinfo);
extern Datum pg_tablespace_location(FunctionCallInfo fcinfo);
extern Datum pg_rotate_logfile(FunctionCallInfo fcinfo);
extern Datum pg_sleep(FunctionCallInfo fcinfo);
extern Datum pg_get_keywords(FunctionCallInfo fcinfo);
extern Datum pg_typeof(FunctionCallInfo fcinfo);
extern Datum pg_collation_for(FunctionCallInfo fcinfo);
extern Datum pg_relation_is_updatable(FunctionCallInfo fcinfo);
extern Datum pg_column_is_updatable(FunctionCallInfo fcinfo);
extern Datum parse_ident(FunctionCallInfo fcinfo);


extern Datum oidin(FunctionCallInfo fcinfo);
extern Datum oidout(FunctionCallInfo fcinfo);
extern Datum oidrecv(FunctionCallInfo fcinfo);
extern Datum oidsend(FunctionCallInfo fcinfo);
extern Datum oideq(FunctionCallInfo fcinfo);
extern Datum oidne(FunctionCallInfo fcinfo);
extern Datum oidlt(FunctionCallInfo fcinfo);
extern Datum oidle(FunctionCallInfo fcinfo);
extern Datum oidge(FunctionCallInfo fcinfo);
extern Datum oidgt(FunctionCallInfo fcinfo);
extern Datum oidlarger(FunctionCallInfo fcinfo);
extern Datum oidsmaller(FunctionCallInfo fcinfo);
extern Datum oidvectorin(FunctionCallInfo fcinfo);
extern Datum oidvectorout(FunctionCallInfo fcinfo);
extern Datum oidvectorrecv(FunctionCallInfo fcinfo);
extern Datum oidvectorsend(FunctionCallInfo fcinfo);
extern Datum oidvectoreq(FunctionCallInfo fcinfo);
extern Datum oidvectorne(FunctionCallInfo fcinfo);
extern Datum oidvectorlt(FunctionCallInfo fcinfo);
extern Datum oidvectorle(FunctionCallInfo fcinfo);
extern Datum oidvectorge(FunctionCallInfo fcinfo);
extern Datum oidvectorgt(FunctionCallInfo fcinfo);
extern oidvector *buildoidvector(const Oid *oids, int n);
extern Oid oidparse(Node *node);


extern Datum ordered_set_transition(FunctionCallInfo fcinfo);
extern Datum ordered_set_transition_multi(FunctionCallInfo fcinfo);
extern Datum percentile_disc_final(FunctionCallInfo fcinfo);
extern Datum percentile_cont_float8_final(FunctionCallInfo fcinfo);
extern Datum percentile_cont_interval_final(FunctionCallInfo fcinfo);
extern Datum percentile_disc_multi_final(FunctionCallInfo fcinfo);
extern Datum percentile_cont_float8_multi_final(FunctionCallInfo fcinfo);
extern Datum percentile_cont_interval_multi_final(FunctionCallInfo fcinfo);
extern Datum mode_final(FunctionCallInfo fcinfo);
extern Datum hypothetical_rank_final(FunctionCallInfo fcinfo);
extern Datum hypothetical_percent_rank_final(FunctionCallInfo fcinfo);
extern Datum hypothetical_cume_dist_final(FunctionCallInfo fcinfo);
extern Datum hypothetical_dense_rank_final(FunctionCallInfo fcinfo);


extern Datum cstring_in(FunctionCallInfo fcinfo);
extern Datum cstring_out(FunctionCallInfo fcinfo);
extern Datum cstring_recv(FunctionCallInfo fcinfo);
extern Datum cstring_send(FunctionCallInfo fcinfo);
extern Datum any_in(FunctionCallInfo fcinfo);
extern Datum any_out(FunctionCallInfo fcinfo);
extern Datum anyarray_in(FunctionCallInfo fcinfo);
extern Datum anyarray_out(FunctionCallInfo fcinfo);
extern Datum anyarray_recv(FunctionCallInfo fcinfo);
extern Datum anyarray_send(FunctionCallInfo fcinfo);
extern Datum anynonarray_in(FunctionCallInfo fcinfo);
extern Datum anynonarray_out(FunctionCallInfo fcinfo);
extern Datum anyenum_in(FunctionCallInfo fcinfo);
extern Datum anyenum_out(FunctionCallInfo fcinfo);
extern Datum anyrange_in(FunctionCallInfo fcinfo);
extern Datum anyrange_out(FunctionCallInfo fcinfo);
extern Datum void_in(FunctionCallInfo fcinfo);
extern Datum void_out(FunctionCallInfo fcinfo);
extern Datum void_recv(FunctionCallInfo fcinfo);
extern Datum void_send(FunctionCallInfo fcinfo);
extern Datum trigger_in(FunctionCallInfo fcinfo);
extern Datum trigger_out(FunctionCallInfo fcinfo);
extern Datum event_trigger_in(FunctionCallInfo fcinfo);
extern Datum event_trigger_out(FunctionCallInfo fcinfo);
extern Datum language_handler_in(FunctionCallInfo fcinfo);
extern Datum language_handler_out(FunctionCallInfo fcinfo);
extern Datum fdw_handler_in(FunctionCallInfo fcinfo);
extern Datum fdw_handler_out(FunctionCallInfo fcinfo);
extern Datum index_am_handler_in(FunctionCallInfo fcinfo);
extern Datum index_am_handler_out(FunctionCallInfo fcinfo);
extern Datum tsm_handler_in(FunctionCallInfo fcinfo);
extern Datum tsm_handler_out(FunctionCallInfo fcinfo);
extern Datum internal_in(FunctionCallInfo fcinfo);
extern Datum internal_out(FunctionCallInfo fcinfo);
extern Datum opaque_in(FunctionCallInfo fcinfo);
extern Datum opaque_out(FunctionCallInfo fcinfo);
extern Datum anyelement_in(FunctionCallInfo fcinfo);
extern Datum anyelement_out(FunctionCallInfo fcinfo);
extern Datum shell_in(FunctionCallInfo fcinfo);
extern Datum shell_out(FunctionCallInfo fcinfo);
extern Datum pg_node_tree_in(FunctionCallInfo fcinfo);
extern Datum pg_node_tree_out(FunctionCallInfo fcinfo);
extern Datum pg_node_tree_recv(FunctionCallInfo fcinfo);
extern Datum pg_node_tree_send(FunctionCallInfo fcinfo);
extern Datum pg_ddl_command_in(FunctionCallInfo fcinfo);
extern Datum pg_ddl_command_out(FunctionCallInfo fcinfo);
extern Datum pg_ddl_command_recv(FunctionCallInfo fcinfo);
extern Datum pg_ddl_command_send(FunctionCallInfo fcinfo);


extern Datum nameregexeq(FunctionCallInfo fcinfo);
extern Datum nameregexne(FunctionCallInfo fcinfo);
extern Datum textregexeq(FunctionCallInfo fcinfo);
extern Datum textregexne(FunctionCallInfo fcinfo);
extern Datum nameicregexeq(FunctionCallInfo fcinfo);
extern Datum nameicregexne(FunctionCallInfo fcinfo);
extern Datum texticregexeq(FunctionCallInfo fcinfo);
extern Datum texticregexne(FunctionCallInfo fcinfo);
extern Datum textregexsubstr(FunctionCallInfo fcinfo);
extern Datum textregexreplace_noopt(FunctionCallInfo fcinfo);
extern Datum textregexreplace(FunctionCallInfo fcinfo);
extern Datum similar_escape(FunctionCallInfo fcinfo);
extern Datum regexp_matches(FunctionCallInfo fcinfo);
extern Datum regexp_matches_no_flags(FunctionCallInfo fcinfo);
extern Datum regexp_split_to_table(FunctionCallInfo fcinfo);
extern Datum regexp_split_to_table_no_flags(FunctionCallInfo fcinfo);
extern Datum regexp_split_to_array(FunctionCallInfo fcinfo);
extern Datum regexp_split_to_array_no_flags(FunctionCallInfo fcinfo);
extern char *regexp_fixed_prefix(text *text_re, bool case_insensitive,
     Oid collation, bool *exact);


extern Datum regprocin(FunctionCallInfo fcinfo);
extern Datum regprocout(FunctionCallInfo fcinfo);
extern Datum to_regproc(FunctionCallInfo fcinfo);
extern Datum to_regprocedure(FunctionCallInfo fcinfo);
extern Datum regprocrecv(FunctionCallInfo fcinfo);
extern Datum regprocsend(FunctionCallInfo fcinfo);
extern Datum regprocedurein(FunctionCallInfo fcinfo);
extern Datum regprocedureout(FunctionCallInfo fcinfo);
extern Datum regprocedurerecv(FunctionCallInfo fcinfo);
extern Datum regproceduresend(FunctionCallInfo fcinfo);
extern Datum regoperin(FunctionCallInfo fcinfo);
extern Datum regoperout(FunctionCallInfo fcinfo);
extern Datum regoperrecv(FunctionCallInfo fcinfo);
extern Datum regopersend(FunctionCallInfo fcinfo);
extern Datum to_regoper(FunctionCallInfo fcinfo);
extern Datum to_regoperator(FunctionCallInfo fcinfo);
extern Datum regoperatorin(FunctionCallInfo fcinfo);
extern Datum regoperatorout(FunctionCallInfo fcinfo);
extern Datum regoperatorrecv(FunctionCallInfo fcinfo);
extern Datum regoperatorsend(FunctionCallInfo fcinfo);
extern Datum regclassin(FunctionCallInfo fcinfo);
extern Datum regclassout(FunctionCallInfo fcinfo);
extern Datum regclassrecv(FunctionCallInfo fcinfo);
extern Datum regclasssend(FunctionCallInfo fcinfo);
extern Datum to_regclass(FunctionCallInfo fcinfo);
extern Datum regtypein(FunctionCallInfo fcinfo);
extern Datum regtypeout(FunctionCallInfo fcinfo);
extern Datum regtyperecv(FunctionCallInfo fcinfo);
extern Datum regtypesend(FunctionCallInfo fcinfo);
extern Datum to_regtype(FunctionCallInfo fcinfo);
extern Datum regrolein(FunctionCallInfo fcinfo);
extern Datum regroleout(FunctionCallInfo fcinfo);
extern Datum regrolerecv(FunctionCallInfo fcinfo);
extern Datum regrolesend(FunctionCallInfo fcinfo);
extern Datum to_regrole(FunctionCallInfo fcinfo);
extern Datum regnamespacein(FunctionCallInfo fcinfo);
extern Datum regnamespaceout(FunctionCallInfo fcinfo);
extern Datum regnamespacerecv(FunctionCallInfo fcinfo);
extern Datum regnamespacesend(FunctionCallInfo fcinfo);
extern Datum to_regnamespace(FunctionCallInfo fcinfo);
extern Datum regconfigin(FunctionCallInfo fcinfo);
extern Datum regconfigout(FunctionCallInfo fcinfo);
extern Datum regconfigrecv(FunctionCallInfo fcinfo);
extern Datum regconfigsend(FunctionCallInfo fcinfo);
extern Datum regdictionaryin(FunctionCallInfo fcinfo);
extern Datum regdictionaryout(FunctionCallInfo fcinfo);
extern Datum regdictionaryrecv(FunctionCallInfo fcinfo);
extern Datum regdictionarysend(FunctionCallInfo fcinfo);
extern Datum text_regclass(FunctionCallInfo fcinfo);
extern List *stringToQualifiedNameList(const char *string);
extern char *format_procedure(Oid procedure_oid);
extern char *format_procedure_qualified(Oid procedure_oid);
extern void format_procedure_parts(Oid operator_oid, List **objnames,
        List **objargs);
extern char *format_operator(Oid operator_oid);
extern char *format_operator_qualified(Oid operator_oid);
extern void format_operator_parts(Oid operator_oid, List **objnames,
       List **objargs);


extern Datum record_in(FunctionCallInfo fcinfo);
extern Datum record_out(FunctionCallInfo fcinfo);
extern Datum record_recv(FunctionCallInfo fcinfo);
extern Datum record_send(FunctionCallInfo fcinfo);
extern Datum record_eq(FunctionCallInfo fcinfo);
extern Datum record_ne(FunctionCallInfo fcinfo);
extern Datum record_lt(FunctionCallInfo fcinfo);
extern Datum record_gt(FunctionCallInfo fcinfo);
extern Datum record_le(FunctionCallInfo fcinfo);
extern Datum record_ge(FunctionCallInfo fcinfo);
extern Datum btrecordcmp(FunctionCallInfo fcinfo);
extern Datum record_image_eq(FunctionCallInfo fcinfo);
extern Datum record_image_ne(FunctionCallInfo fcinfo);
extern Datum record_image_lt(FunctionCallInfo fcinfo);
extern Datum record_image_gt(FunctionCallInfo fcinfo);
extern Datum record_image_le(FunctionCallInfo fcinfo);
extern Datum record_image_ge(FunctionCallInfo fcinfo);
extern Datum btrecordimagecmp(FunctionCallInfo fcinfo);


extern bool quote_all_identifiers;
extern Datum pg_get_ruledef(FunctionCallInfo fcinfo);
extern Datum pg_get_ruledef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef_wrap(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef_name(FunctionCallInfo fcinfo);
extern Datum pg_get_viewdef_name_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_indexdef(FunctionCallInfo fcinfo);
extern Datum pg_get_indexdef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_triggerdef(FunctionCallInfo fcinfo);
extern Datum pg_get_triggerdef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_constraintdef(FunctionCallInfo fcinfo);
extern Datum pg_get_constraintdef_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_expr(FunctionCallInfo fcinfo);
extern Datum pg_get_expr_ext(FunctionCallInfo fcinfo);
extern Datum pg_get_userbyid(FunctionCallInfo fcinfo);
extern Datum pg_get_serial_sequence(FunctionCallInfo fcinfo);
extern Datum pg_get_functiondef(FunctionCallInfo fcinfo);
extern Datum pg_get_function_arguments(FunctionCallInfo fcinfo);
extern Datum pg_get_function_identity_arguments(FunctionCallInfo fcinfo);
extern Datum pg_get_function_result(FunctionCallInfo fcinfo);
extern Datum pg_get_function_arg_default(FunctionCallInfo fcinfo);
extern const char *quote_identifier(const char *ident);
extern char *quote_qualified_identifier(const char *qualifier,
         const char *ident);
extern void generate_operator_clause(fmStringInfo buf,
       const char *leftop, Oid leftoptype,
       Oid opoid,
       const char *rightop, Oid rightoptype);



extern Datum tidin(FunctionCallInfo fcinfo);
extern Datum tidout(FunctionCallInfo fcinfo);
extern Datum tidrecv(FunctionCallInfo fcinfo);
extern Datum tidsend(FunctionCallInfo fcinfo);
extern Datum tideq(FunctionCallInfo fcinfo);
extern Datum tidne(FunctionCallInfo fcinfo);
extern Datum tidlt(FunctionCallInfo fcinfo);
extern Datum tidle(FunctionCallInfo fcinfo);
extern Datum tidgt(FunctionCallInfo fcinfo);
extern Datum tidge(FunctionCallInfo fcinfo);
extern Datum bttidcmp(FunctionCallInfo fcinfo);
extern Datum tidlarger(FunctionCallInfo fcinfo);
extern Datum tidsmaller(FunctionCallInfo fcinfo);
extern Datum currtid_byreloid(FunctionCallInfo fcinfo);
extern Datum currtid_byrelname(FunctionCallInfo fcinfo);


extern Datum bpcharin(FunctionCallInfo fcinfo);
extern Datum bpcharout(FunctionCallInfo fcinfo);
extern Datum bpcharrecv(FunctionCallInfo fcinfo);
extern Datum bpcharsend(FunctionCallInfo fcinfo);
extern Datum bpchartypmodin(FunctionCallInfo fcinfo);
extern Datum bpchartypmodout(FunctionCallInfo fcinfo);
extern Datum bpchar(FunctionCallInfo fcinfo);
extern Datum char_bpchar(FunctionCallInfo fcinfo);
extern Datum name_bpchar(FunctionCallInfo fcinfo);
extern Datum bpchar_name(FunctionCallInfo fcinfo);
extern Datum bpchareq(FunctionCallInfo fcinfo);
extern Datum bpcharne(FunctionCallInfo fcinfo);
extern Datum bpcharlt(FunctionCallInfo fcinfo);
extern Datum bpcharle(FunctionCallInfo fcinfo);
extern Datum bpchargt(FunctionCallInfo fcinfo);
extern Datum bpcharge(FunctionCallInfo fcinfo);
extern Datum bpcharcmp(FunctionCallInfo fcinfo);
extern Datum bpchar_sortsupport(FunctionCallInfo fcinfo);
extern Datum bpchar_larger(FunctionCallInfo fcinfo);
extern Datum bpchar_smaller(FunctionCallInfo fcinfo);
extern int bpchartruelen(char *s, int len);
extern Datum bpcharlen(FunctionCallInfo fcinfo);
extern Datum bpcharoctetlen(FunctionCallInfo fcinfo);
extern Datum hashbpchar(FunctionCallInfo fcinfo);
extern Datum bpchar_pattern_lt(FunctionCallInfo fcinfo);
extern Datum bpchar_pattern_le(FunctionCallInfo fcinfo);
extern Datum bpchar_pattern_gt(FunctionCallInfo fcinfo);
extern Datum bpchar_pattern_ge(FunctionCallInfo fcinfo);
extern Datum btbpchar_pattern_cmp(FunctionCallInfo fcinfo);
extern Datum btbpchar_pattern_sortsupport(FunctionCallInfo fcinfo);

extern Datum varcharin(FunctionCallInfo fcinfo);
extern Datum varcharout(FunctionCallInfo fcinfo);
extern Datum varcharrecv(FunctionCallInfo fcinfo);
extern Datum varcharsend(FunctionCallInfo fcinfo);
extern Datum varchartypmodin(FunctionCallInfo fcinfo);
extern Datum varchartypmodout(FunctionCallInfo fcinfo);
extern Datum varchar_transform(FunctionCallInfo fcinfo);
extern Datum varchar(FunctionCallInfo fcinfo);


extern text *cstring_to_text(const char *s);
extern text *cstring_to_text_with_len(const char *s, int len);
extern char *text_to_cstring(const text *t);
extern void text_to_cstring_buffer(const text *src, char *dst, size_t dst_len);




extern Datum textin(FunctionCallInfo fcinfo);
extern Datum textout(FunctionCallInfo fcinfo);
extern Datum textrecv(FunctionCallInfo fcinfo);
extern Datum textsend(FunctionCallInfo fcinfo);
extern Datum textcat(FunctionCallInfo fcinfo);
extern Datum texteq(FunctionCallInfo fcinfo);
extern Datum textne(FunctionCallInfo fcinfo);
extern Datum text_lt(FunctionCallInfo fcinfo);
extern Datum text_le(FunctionCallInfo fcinfo);
extern Datum text_gt(FunctionCallInfo fcinfo);
extern Datum text_ge(FunctionCallInfo fcinfo);
extern Datum text_larger(FunctionCallInfo fcinfo);
extern Datum text_smaller(FunctionCallInfo fcinfo);
extern Datum text_pattern_lt(FunctionCallInfo fcinfo);
extern Datum text_pattern_le(FunctionCallInfo fcinfo);
extern Datum text_pattern_gt(FunctionCallInfo fcinfo);
extern Datum text_pattern_ge(FunctionCallInfo fcinfo);
extern Datum bttext_pattern_cmp(FunctionCallInfo fcinfo);
extern Datum bttext_pattern_sortsupport(FunctionCallInfo fcinfo);
extern Datum textlen(FunctionCallInfo fcinfo);
extern Datum textoctetlen(FunctionCallInfo fcinfo);
extern Datum textpos(FunctionCallInfo fcinfo);
extern Datum text_substr(FunctionCallInfo fcinfo);
extern Datum text_substr_no_len(FunctionCallInfo fcinfo);
extern Datum textoverlay(FunctionCallInfo fcinfo);
extern Datum textoverlay_no_len(FunctionCallInfo fcinfo);
extern Datum name_text(FunctionCallInfo fcinfo);
extern Datum text_name(FunctionCallInfo fcinfo);
extern int varstr_cmp(char *arg1, int len1, char *arg2, int len2, Oid collid);
extern void varstr_sortsupport(SortSupport ssup, Oid collid, bool bpchar);
extern int varstr_levenshtein(const char *source, int slen,
       const char *target, int tlen,
       int ins_c, int del_c, int sub_c,
       bool trusted);
extern int varstr_levenshtein_less_equal(const char *source, int slen,
         const char *target, int tlen,
         int ins_c, int del_c, int sub_c,
         int max_d, bool trusted);
extern List *textToQualifiedNameList(text *textval);
extern bool SplitIdentifierString(char *rawstring, char separator,
       List **namelist);
extern bool SplitDirectoriesString(char *rawstring, char separator,
        List **namelist);
extern bool SplitGUCList(char *rawstring, char separator,
    List **namelist);
extern Datum replace_text(FunctionCallInfo fcinfo);
extern text *replace_text_regexp(text *src_text, void *regexp,
     text *replace_text, bool glob);
extern Datum split_text(FunctionCallInfo fcinfo);
extern Datum text_to_array(FunctionCallInfo fcinfo);
extern Datum array_to_text(FunctionCallInfo fcinfo);
extern Datum text_to_array_null(FunctionCallInfo fcinfo);
extern Datum array_to_text_null(FunctionCallInfo fcinfo);
extern Datum to_hex32(FunctionCallInfo fcinfo);
extern Datum to_hex64(FunctionCallInfo fcinfo);
extern Datum md5_text(FunctionCallInfo fcinfo);
extern Datum md5_bytea(FunctionCallInfo fcinfo);

extern Datum unknownin(FunctionCallInfo fcinfo);
extern Datum unknownout(FunctionCallInfo fcinfo);
extern Datum unknownrecv(FunctionCallInfo fcinfo);
extern Datum unknownsend(FunctionCallInfo fcinfo);

extern Datum pg_column_size(FunctionCallInfo fcinfo);

extern Datum bytea_string_agg_transfn(FunctionCallInfo fcinfo);
extern Datum bytea_string_agg_finalfn(FunctionCallInfo fcinfo);
extern Datum string_agg_transfn(FunctionCallInfo fcinfo);
extern Datum string_agg_finalfn(FunctionCallInfo fcinfo);

extern Datum text_concat(FunctionCallInfo fcinfo);
extern Datum text_concat_ws(FunctionCallInfo fcinfo);
extern Datum text_left(FunctionCallInfo fcinfo);
extern Datum text_right(FunctionCallInfo fcinfo);
extern Datum text_reverse(FunctionCallInfo fcinfo);
extern Datum text_format(FunctionCallInfo fcinfo);
extern Datum text_format_nv(FunctionCallInfo fcinfo);


extern Datum pgsql_version(FunctionCallInfo fcinfo);


extern Datum xidin(FunctionCallInfo fcinfo);
extern Datum xidout(FunctionCallInfo fcinfo);
extern Datum xidrecv(FunctionCallInfo fcinfo);
extern Datum xidsend(FunctionCallInfo fcinfo);
extern Datum xideq(FunctionCallInfo fcinfo);
extern Datum xidneq(FunctionCallInfo fcinfo);
extern Datum xid_age(FunctionCallInfo fcinfo);
extern Datum mxid_age(FunctionCallInfo fcinfo);
extern int xidComparator(const void *arg1, const void *arg2);
extern Datum cidin(FunctionCallInfo fcinfo);
extern Datum cidout(FunctionCallInfo fcinfo);
extern Datum cidrecv(FunctionCallInfo fcinfo);
extern Datum cidsend(FunctionCallInfo fcinfo);
extern Datum cideq(FunctionCallInfo fcinfo);


extern Datum namelike(FunctionCallInfo fcinfo);
extern Datum namenlike(FunctionCallInfo fcinfo);
extern Datum nameiclike(FunctionCallInfo fcinfo);
extern Datum nameicnlike(FunctionCallInfo fcinfo);
extern Datum textlike(FunctionCallInfo fcinfo);
extern Datum textnlike(FunctionCallInfo fcinfo);
extern Datum texticlike(FunctionCallInfo fcinfo);
extern Datum texticnlike(FunctionCallInfo fcinfo);
extern Datum bytealike(FunctionCallInfo fcinfo);
extern Datum byteanlike(FunctionCallInfo fcinfo);
extern Datum like_escape(FunctionCallInfo fcinfo);
extern Datum like_escape_bytea(FunctionCallInfo fcinfo);


extern Datum lower(FunctionCallInfo fcinfo);
extern Datum upper(FunctionCallInfo fcinfo);
extern Datum initcap(FunctionCallInfo fcinfo);
extern Datum lpad(FunctionCallInfo fcinfo);
extern Datum rpad(FunctionCallInfo fcinfo);
extern Datum btrim(FunctionCallInfo fcinfo);
extern Datum btrim1(FunctionCallInfo fcinfo);
extern Datum byteatrim(FunctionCallInfo fcinfo);
extern Datum ltrim(FunctionCallInfo fcinfo);
extern Datum ltrim1(FunctionCallInfo fcinfo);
extern Datum rtrim(FunctionCallInfo fcinfo);
extern Datum rtrim1(FunctionCallInfo fcinfo);
extern Datum translate(FunctionCallInfo fcinfo);
extern Datum chr (FunctionCallInfo fcinfo);
extern Datum repeat(FunctionCallInfo fcinfo);
extern Datum ascii(FunctionCallInfo fcinfo);


extern char *inet_cidr_ntop(int af, const void *src, int bits,
      char *dst, size_t size);


extern int inet_net_pton(int af, const char *src,
     void *dst, size_t size);


extern Datum inet_in(FunctionCallInfo fcinfo);
extern Datum inet_out(FunctionCallInfo fcinfo);
extern Datum inet_recv(FunctionCallInfo fcinfo);
extern Datum inet_send(FunctionCallInfo fcinfo);
extern Datum cidr_in(FunctionCallInfo fcinfo);
extern Datum cidr_out(FunctionCallInfo fcinfo);
extern Datum cidr_recv(FunctionCallInfo fcinfo);
extern Datum cidr_send(FunctionCallInfo fcinfo);
extern Datum network_cmp(FunctionCallInfo fcinfo);
extern Datum network_lt(FunctionCallInfo fcinfo);
extern Datum network_le(FunctionCallInfo fcinfo);
extern Datum network_eq(FunctionCallInfo fcinfo);
extern Datum network_ge(FunctionCallInfo fcinfo);
extern Datum network_gt(FunctionCallInfo fcinfo);
extern Datum network_ne(FunctionCallInfo fcinfo);
extern Datum network_smaller(FunctionCallInfo fcinfo);
extern Datum network_larger(FunctionCallInfo fcinfo);
extern Datum hashinet(FunctionCallInfo fcinfo);
extern Datum network_sub(FunctionCallInfo fcinfo);
extern Datum network_subeq(FunctionCallInfo fcinfo);
extern Datum network_sup(FunctionCallInfo fcinfo);
extern Datum network_supeq(FunctionCallInfo fcinfo);
extern Datum network_overlap(FunctionCallInfo fcinfo);
extern Datum network_network(FunctionCallInfo fcinfo);
extern Datum network_netmask(FunctionCallInfo fcinfo);
extern Datum network_hostmask(FunctionCallInfo fcinfo);
extern Datum network_masklen(FunctionCallInfo fcinfo);
extern Datum network_family(FunctionCallInfo fcinfo);
extern Datum network_broadcast(FunctionCallInfo fcinfo);
extern Datum network_host(FunctionCallInfo fcinfo);
extern Datum network_show(FunctionCallInfo fcinfo);
extern Datum inet_abbrev(FunctionCallInfo fcinfo);
extern Datum cidr_abbrev(FunctionCallInfo fcinfo);
extern double convert_network_to_scalar(Datum value, Oid typid, bool *failure);
extern Datum inet_to_cidr(FunctionCallInfo fcinfo);
extern Datum inet_set_masklen(FunctionCallInfo fcinfo);
extern Datum cidr_set_masklen(FunctionCallInfo fcinfo);
extern Datum network_scan_first(Datum in);
extern Datum network_scan_last(Datum in);
extern Datum inet_client_addr(FunctionCallInfo fcinfo);
extern Datum inet_client_port(FunctionCallInfo fcinfo);
extern Datum inet_server_addr(FunctionCallInfo fcinfo);
extern Datum inet_server_port(FunctionCallInfo fcinfo);
extern Datum inetnot(FunctionCallInfo fcinfo);
extern Datum inetand(FunctionCallInfo fcinfo);
extern Datum inetor(FunctionCallInfo fcinfo);
extern Datum inetpl(FunctionCallInfo fcinfo);
extern Datum inetmi_int8(FunctionCallInfo fcinfo);
extern Datum inetmi(FunctionCallInfo fcinfo);
extern void clean_ipv6_addr(int addr_family, char *addr);
extern Datum inet_same_family(FunctionCallInfo fcinfo);
extern Datum inet_merge(FunctionCallInfo fcinfo);


extern Datum macaddr_in(FunctionCallInfo fcinfo);
extern Datum macaddr_out(FunctionCallInfo fcinfo);
extern Datum macaddr_recv(FunctionCallInfo fcinfo);
extern Datum macaddr_send(FunctionCallInfo fcinfo);
extern Datum macaddr_cmp(FunctionCallInfo fcinfo);
extern Datum macaddr_lt(FunctionCallInfo fcinfo);
extern Datum macaddr_le(FunctionCallInfo fcinfo);
extern Datum macaddr_eq(FunctionCallInfo fcinfo);
extern Datum macaddr_ge(FunctionCallInfo fcinfo);
extern Datum macaddr_gt(FunctionCallInfo fcinfo);
extern Datum macaddr_ne(FunctionCallInfo fcinfo);
extern Datum macaddr_not(FunctionCallInfo fcinfo);
extern Datum macaddr_and(FunctionCallInfo fcinfo);
extern Datum macaddr_or(FunctionCallInfo fcinfo);
extern Datum macaddr_trunc(FunctionCallInfo fcinfo);
extern Datum hashmacaddr(FunctionCallInfo fcinfo);


extern Datum numeric_in(FunctionCallInfo fcinfo);
extern Datum numeric_out(FunctionCallInfo fcinfo);
extern Datum numeric_recv(FunctionCallInfo fcinfo);
extern Datum numeric_send(FunctionCallInfo fcinfo);
extern Datum numerictypmodin(FunctionCallInfo fcinfo);
extern Datum numerictypmodout(FunctionCallInfo fcinfo);
extern Datum numeric_transform(FunctionCallInfo fcinfo);
extern Datum numeric (FunctionCallInfo fcinfo);
extern Datum numeric_abs(FunctionCallInfo fcinfo);
extern Datum numeric_uminus(FunctionCallInfo fcinfo);
extern Datum numeric_uplus(FunctionCallInfo fcinfo);
extern Datum numeric_sign(FunctionCallInfo fcinfo);
extern Datum numeric_round(FunctionCallInfo fcinfo);
extern Datum numeric_trunc(FunctionCallInfo fcinfo);
extern Datum numeric_ceil(FunctionCallInfo fcinfo);
extern Datum numeric_floor(FunctionCallInfo fcinfo);
extern Datum numeric_sortsupport(FunctionCallInfo fcinfo);
extern Datum numeric_cmp(FunctionCallInfo fcinfo);
extern Datum numeric_eq(FunctionCallInfo fcinfo);
extern Datum numeric_ne(FunctionCallInfo fcinfo);
extern Datum numeric_gt(FunctionCallInfo fcinfo);
extern Datum numeric_ge(FunctionCallInfo fcinfo);
extern Datum numeric_lt(FunctionCallInfo fcinfo);
extern Datum numeric_le(FunctionCallInfo fcinfo);
extern Datum numeric_add(FunctionCallInfo fcinfo);
extern Datum numeric_sub(FunctionCallInfo fcinfo);
extern Datum numeric_mul(FunctionCallInfo fcinfo);
extern Datum numeric_div(FunctionCallInfo fcinfo);
extern Datum numeric_div_trunc(FunctionCallInfo fcinfo);
extern Datum numeric_mod(FunctionCallInfo fcinfo);
extern Datum numeric_inc(FunctionCallInfo fcinfo);
extern Datum numeric_smaller(FunctionCallInfo fcinfo);
extern Datum numeric_larger(FunctionCallInfo fcinfo);
extern Datum numeric_fac(FunctionCallInfo fcinfo);
extern Datum numeric_sqrt(FunctionCallInfo fcinfo);
extern Datum numeric_exp(FunctionCallInfo fcinfo);
extern Datum numeric_ln(FunctionCallInfo fcinfo);
extern Datum numeric_log(FunctionCallInfo fcinfo);
extern Datum numeric_power(FunctionCallInfo fcinfo);
extern Datum numeric_scale(FunctionCallInfo fcinfo);
extern Datum int4_numeric(FunctionCallInfo fcinfo);
extern Datum numeric_int4(FunctionCallInfo fcinfo);
extern Datum int8_numeric(FunctionCallInfo fcinfo);
extern Datum numeric_int8(FunctionCallInfo fcinfo);
extern Datum int2_numeric(FunctionCallInfo fcinfo);
extern Datum numeric_int2(FunctionCallInfo fcinfo);
extern Datum float8_numeric(FunctionCallInfo fcinfo);
extern Datum numeric_float8(FunctionCallInfo fcinfo);
extern Datum numeric_float8_no_overflow(FunctionCallInfo fcinfo);
extern Datum float4_numeric(FunctionCallInfo fcinfo);
extern Datum numeric_float4(FunctionCallInfo fcinfo);
extern Datum numeric_accum(FunctionCallInfo fcinfo);
extern Datum numeric_combine(FunctionCallInfo fcinfo);
extern Datum numeric_avg_accum(FunctionCallInfo fcinfo);
extern Datum numeric_avg_combine(FunctionCallInfo fcinfo);
extern Datum numeric_avg_serialize(FunctionCallInfo fcinfo);
extern Datum numeric_avg_deserialize(FunctionCallInfo fcinfo);
extern Datum numeric_serialize(FunctionCallInfo fcinfo);
extern Datum numeric_deserialize(FunctionCallInfo fcinfo);
extern Datum numeric_accum_inv(FunctionCallInfo fcinfo);
extern Datum int2_accum(FunctionCallInfo fcinfo);
extern Datum int4_accum(FunctionCallInfo fcinfo);
extern Datum int8_accum(FunctionCallInfo fcinfo);
extern Datum numeric_poly_combine(FunctionCallInfo fcinfo);
extern Datum numeric_poly_serialize(FunctionCallInfo fcinfo);
extern Datum numeric_poly_deserialize(FunctionCallInfo fcinfo);
extern Datum int2_accum_inv(FunctionCallInfo fcinfo);
extern Datum int4_accum_inv(FunctionCallInfo fcinfo);
extern Datum int8_accum_inv(FunctionCallInfo fcinfo);
extern Datum int8_avg_accum(FunctionCallInfo fcinfo);
extern Datum int8_avg_combine(FunctionCallInfo fcinfo);
extern Datum int8_avg_serialize(FunctionCallInfo fcinfo);
extern Datum int8_avg_deserialize(FunctionCallInfo fcinfo);
extern Datum numeric_avg(FunctionCallInfo fcinfo);
extern Datum numeric_sum(FunctionCallInfo fcinfo);
extern Datum numeric_var_pop(FunctionCallInfo fcinfo);
extern Datum numeric_var_samp(FunctionCallInfo fcinfo);
extern Datum numeric_stddev_pop(FunctionCallInfo fcinfo);
extern Datum numeric_stddev_samp(FunctionCallInfo fcinfo);
extern Datum numeric_poly_sum(FunctionCallInfo fcinfo);
extern Datum numeric_poly_avg(FunctionCallInfo fcinfo);
extern Datum numeric_poly_var_pop(FunctionCallInfo fcinfo);
extern Datum numeric_poly_var_samp(FunctionCallInfo fcinfo);
extern Datum numeric_poly_stddev_pop(FunctionCallInfo fcinfo);
extern Datum numeric_poly_stddev_samp(FunctionCallInfo fcinfo);
extern Datum int2_sum(FunctionCallInfo fcinfo);
extern Datum int4_sum(FunctionCallInfo fcinfo);
extern Datum int8_sum(FunctionCallInfo fcinfo);
extern Datum int2_avg_accum(FunctionCallInfo fcinfo);
extern Datum int4_avg_accum(FunctionCallInfo fcinfo);
extern Datum int4_avg_combine(FunctionCallInfo fcinfo);
extern Datum int2_avg_accum_inv(FunctionCallInfo fcinfo);
extern Datum int4_avg_accum_inv(FunctionCallInfo fcinfo);
extern Datum int8_avg_accum_inv(FunctionCallInfo fcinfo);
extern Datum int8_avg(FunctionCallInfo fcinfo);
extern Datum int2int4_sum(FunctionCallInfo fcinfo);
extern Datum width_bucket_numeric(FunctionCallInfo fcinfo);
extern Datum hash_numeric(FunctionCallInfo fcinfo);
extern Datum generate_series_numeric(FunctionCallInfo fcinfo);
extern Datum generate_series_step_numeric(FunctionCallInfo fcinfo);


extern Datum RI_FKey_check_ins(FunctionCallInfo fcinfo);
extern Datum RI_FKey_check_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_noaction_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_noaction_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_cascade_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_cascade_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_restrict_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_restrict_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_setnull_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_setnull_upd(FunctionCallInfo fcinfo);
extern Datum RI_FKey_setdefault_del(FunctionCallInfo fcinfo);
extern Datum RI_FKey_setdefault_upd(FunctionCallInfo fcinfo);


extern Datum suppress_redundant_updates_trigger(FunctionCallInfo fcinfo);


extern Datum getdatabaseencoding(FunctionCallInfo fcinfo);
extern Datum database_character_set(FunctionCallInfo fcinfo);
extern Datum pg_client_encoding(FunctionCallInfo fcinfo);
extern Datum PG_encoding_to_char(FunctionCallInfo fcinfo);
extern Datum PG_char_to_encoding(FunctionCallInfo fcinfo);
extern Datum PG_character_set_name(FunctionCallInfo fcinfo);
extern Datum PG_character_set_id(FunctionCallInfo fcinfo);
extern Datum pg_convert(FunctionCallInfo fcinfo);
extern Datum pg_convert_to(FunctionCallInfo fcinfo);
extern Datum pg_convert_from(FunctionCallInfo fcinfo);
extern Datum length_in_encoding(FunctionCallInfo fcinfo);
extern Datum pg_encoding_max_length_sql(FunctionCallInfo fcinfo);


extern Datum format_type(FunctionCallInfo fcinfo);
extern char *format_type_be(Oid type_oid);
extern char *format_type_be_qualified(Oid type_oid);
extern char *format_type_with_typemod(Oid type_oid, int32 typemod);
extern char *format_type_with_typemod_qualified(Oid type_oid, int32 typemod);
extern Datum oidvectortypes(FunctionCallInfo fcinfo);
extern int32 type_maximum_size(Oid type_oid, int32 typemod);


extern Datum quote_ident(FunctionCallInfo fcinfo);
extern Datum quote_literal(FunctionCallInfo fcinfo);
extern char *quote_literal_cstr(const char *rawstr);
extern Datum quote_nullable(FunctionCallInfo fcinfo);


extern Datum show_config_by_name(FunctionCallInfo fcinfo);
extern Datum show_config_by_name_missing_ok(FunctionCallInfo fcinfo);
extern Datum set_config_by_name(FunctionCallInfo fcinfo);
extern Datum show_all_settings(FunctionCallInfo fcinfo);
extern Datum show_all_file_settings(FunctionCallInfo fcinfo);


extern Datum pg_config(FunctionCallInfo fcinfo);


extern Datum pg_control_checkpoint(FunctionCallInfo fcinfo);
extern Datum pg_control_system(FunctionCallInfo fcinfo);
extern Datum pg_control_init(FunctionCallInfo fcinfo);
extern Datum pg_control_recovery(FunctionCallInfo fcinfo);


extern Datum row_security_active(FunctionCallInfo fcinfo);
extern Datum row_security_active_name(FunctionCallInfo fcinfo);


extern Datum pg_lock_status(FunctionCallInfo fcinfo);
extern Datum pg_blocking_pids(FunctionCallInfo fcinfo);
extern Datum pg_advisory_lock_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_xact_lock_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_lock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_xact_lock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_lock_int8(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_xact_lock_int8(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_lock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_xact_lock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_shared_int8(FunctionCallInfo fcinfo);
extern Datum pg_advisory_lock_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_xact_lock_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_lock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_xact_lock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_lock_int4(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_xact_lock_int4(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_lock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_try_advisory_xact_lock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_shared_int4(FunctionCallInfo fcinfo);
extern Datum pg_advisory_unlock_all(FunctionCallInfo fcinfo);


extern Datum txid_snapshot_in(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_out(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_recv(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_send(FunctionCallInfo fcinfo);
extern Datum txid_current(FunctionCallInfo fcinfo);
extern Datum txid_current_snapshot(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_xmin(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_xmax(FunctionCallInfo fcinfo);
extern Datum txid_snapshot_xip(FunctionCallInfo fcinfo);
extern Datum txid_visible_in_snapshot(FunctionCallInfo fcinfo);


extern Datum uuid_in(FunctionCallInfo fcinfo);
extern Datum uuid_out(FunctionCallInfo fcinfo);
extern Datum uuid_send(FunctionCallInfo fcinfo);
extern Datum uuid_recv(FunctionCallInfo fcinfo);
extern Datum uuid_lt(FunctionCallInfo fcinfo);
extern Datum uuid_le(FunctionCallInfo fcinfo);
extern Datum uuid_eq(FunctionCallInfo fcinfo);
extern Datum uuid_ge(FunctionCallInfo fcinfo);
extern Datum uuid_gt(FunctionCallInfo fcinfo);
extern Datum uuid_ne(FunctionCallInfo fcinfo);
extern Datum uuid_cmp(FunctionCallInfo fcinfo);
extern Datum uuid_sortsupport(FunctionCallInfo fcinfo);
extern Datum uuid_hash(FunctionCallInfo fcinfo);


extern Datum window_row_number(FunctionCallInfo fcinfo);
extern Datum window_rank(FunctionCallInfo fcinfo);
extern Datum window_dense_rank(FunctionCallInfo fcinfo);
extern Datum window_percent_rank(FunctionCallInfo fcinfo);
extern Datum window_cume_dist(FunctionCallInfo fcinfo);
extern Datum window_ntile(FunctionCallInfo fcinfo);
extern Datum window_lag(FunctionCallInfo fcinfo);
extern Datum window_lag_with_offset(FunctionCallInfo fcinfo);
extern Datum window_lag_with_offset_and_default(FunctionCallInfo fcinfo);
extern Datum window_lead(FunctionCallInfo fcinfo);
extern Datum window_lead_with_offset(FunctionCallInfo fcinfo);
extern Datum window_lead_with_offset_and_default(FunctionCallInfo fcinfo);
extern Datum window_first_value(FunctionCallInfo fcinfo);
extern Datum window_last_value(FunctionCallInfo fcinfo);
extern Datum window_nth_value(FunctionCallInfo fcinfo);


extern Datum spg_quad_config(FunctionCallInfo fcinfo);
extern Datum spg_quad_choose(FunctionCallInfo fcinfo);
extern Datum spg_quad_picksplit(FunctionCallInfo fcinfo);
extern Datum spg_quad_inner_consistent(FunctionCallInfo fcinfo);
extern Datum spg_quad_leaf_consistent(FunctionCallInfo fcinfo);


extern Datum spg_kd_config(FunctionCallInfo fcinfo);
extern Datum spg_kd_choose(FunctionCallInfo fcinfo);
extern Datum spg_kd_picksplit(FunctionCallInfo fcinfo);
extern Datum spg_kd_inner_consistent(FunctionCallInfo fcinfo);


extern Datum spg_text_config(FunctionCallInfo fcinfo);
extern Datum spg_text_choose(FunctionCallInfo fcinfo);
extern Datum spg_text_picksplit(FunctionCallInfo fcinfo);
extern Datum spg_text_inner_consistent(FunctionCallInfo fcinfo);
extern Datum spg_text_leaf_consistent(FunctionCallInfo fcinfo);


extern Datum ginarrayextract(FunctionCallInfo fcinfo);
extern Datum ginarrayextract_2args(FunctionCallInfo fcinfo);
extern Datum ginqueryarrayextract(FunctionCallInfo fcinfo);
extern Datum ginarrayconsistent(FunctionCallInfo fcinfo);
extern Datum ginarraytriconsistent(FunctionCallInfo fcinfo);


extern Datum tsm_bernoulli_handler(FunctionCallInfo fcinfo);


extern Datum tsm_system_handler(FunctionCallInfo fcinfo);


extern Datum pg_prepared_xact(FunctionCallInfo fcinfo);


extern Datum pg_get_multixact_members(FunctionCallInfo fcinfo);


extern Datum pg_xact_commit_timestamp(FunctionCallInfo fcinfo);
extern Datum pg_last_committed_xact(FunctionCallInfo fcinfo);


extern Datum pg_describe_object(FunctionCallInfo fcinfo);
extern Datum pg_identify_object(FunctionCallInfo fcinfo);
extern Datum pg_identify_object_as_address(FunctionCallInfo fcinfo);


extern Datum pg_get_object_address(FunctionCallInfo fcinfo);


extern Datum unique_key_recheck(FunctionCallInfo fcinfo);


extern Datum pg_event_trigger_dropped_objects(FunctionCallInfo fcinfo);
extern Datum pg_event_trigger_table_rewrite_oid(FunctionCallInfo fcinfo);
extern Datum pg_event_trigger_table_rewrite_reason(FunctionCallInfo fcinfo);
extern Datum pg_event_trigger_ddl_commands(FunctionCallInfo fcinfo);


extern Datum pg_available_extensions(FunctionCallInfo fcinfo);
extern Datum pg_available_extension_versions(FunctionCallInfo fcinfo);
extern Datum pg_extension_update_paths(FunctionCallInfo fcinfo);
extern Datum pg_extension_config_dump(FunctionCallInfo fcinfo);


extern Datum pg_prepared_statement(FunctionCallInfo fcinfo);


extern Datum pg_cursor(FunctionCallInfo fcinfo);
# 23 "vtype.c" 2
# 1 "../../src/include/utils/int8.h" 1
# 26 "../../src/include/utils/int8.h"
extern bool scanint8(const char *str, bool errorOK, int64 *result);

extern Datum int8in(FunctionCallInfo fcinfo);
extern Datum int8out(FunctionCallInfo fcinfo);
extern Datum int8recv(FunctionCallInfo fcinfo);
extern Datum int8send(FunctionCallInfo fcinfo);

extern Datum int8eq(FunctionCallInfo fcinfo);
extern Datum int8ne(FunctionCallInfo fcinfo);
extern Datum int8lt(FunctionCallInfo fcinfo);
extern Datum int8gt(FunctionCallInfo fcinfo);
extern Datum int8le(FunctionCallInfo fcinfo);
extern Datum int8ge(FunctionCallInfo fcinfo);

extern Datum int84eq(FunctionCallInfo fcinfo);
extern Datum int84ne(FunctionCallInfo fcinfo);
extern Datum int84lt(FunctionCallInfo fcinfo);
extern Datum int84gt(FunctionCallInfo fcinfo);
extern Datum int84le(FunctionCallInfo fcinfo);
extern Datum int84ge(FunctionCallInfo fcinfo);

extern Datum int48eq(FunctionCallInfo fcinfo);
extern Datum int48ne(FunctionCallInfo fcinfo);
extern Datum int48lt(FunctionCallInfo fcinfo);
extern Datum int48gt(FunctionCallInfo fcinfo);
extern Datum int48le(FunctionCallInfo fcinfo);
extern Datum int48ge(FunctionCallInfo fcinfo);

extern Datum int82eq(FunctionCallInfo fcinfo);
extern Datum int82ne(FunctionCallInfo fcinfo);
extern Datum int82lt(FunctionCallInfo fcinfo);
extern Datum int82gt(FunctionCallInfo fcinfo);
extern Datum int82le(FunctionCallInfo fcinfo);
extern Datum int82ge(FunctionCallInfo fcinfo);

extern Datum int28eq(FunctionCallInfo fcinfo);
extern Datum int28ne(FunctionCallInfo fcinfo);
extern Datum int28lt(FunctionCallInfo fcinfo);
extern Datum int28gt(FunctionCallInfo fcinfo);
extern Datum int28le(FunctionCallInfo fcinfo);
extern Datum int28ge(FunctionCallInfo fcinfo);

extern Datum int8um(FunctionCallInfo fcinfo);
extern Datum int8up(FunctionCallInfo fcinfo);
extern Datum int8pl(FunctionCallInfo fcinfo);
extern Datum int8mi(FunctionCallInfo fcinfo);
extern Datum int8mul(FunctionCallInfo fcinfo);
extern Datum int8div(FunctionCallInfo fcinfo);
extern Datum int8abs(FunctionCallInfo fcinfo);
extern Datum int8mod(FunctionCallInfo fcinfo);
extern Datum int8inc(FunctionCallInfo fcinfo);
extern Datum int8dec(FunctionCallInfo fcinfo);
extern Datum int8inc_any(FunctionCallInfo fcinfo);
extern Datum int8inc_float8_float8(FunctionCallInfo fcinfo);
extern Datum int8dec_any(FunctionCallInfo fcinfo);
extern Datum int8larger(FunctionCallInfo fcinfo);
extern Datum int8smaller(FunctionCallInfo fcinfo);

extern Datum int8and(FunctionCallInfo fcinfo);
extern Datum int8or(FunctionCallInfo fcinfo);
extern Datum int8xor(FunctionCallInfo fcinfo);
extern Datum int8not(FunctionCallInfo fcinfo);
extern Datum int8shl(FunctionCallInfo fcinfo);
extern Datum int8shr(FunctionCallInfo fcinfo);

extern Datum int84pl(FunctionCallInfo fcinfo);
extern Datum int84mi(FunctionCallInfo fcinfo);
extern Datum int84mul(FunctionCallInfo fcinfo);
extern Datum int84div(FunctionCallInfo fcinfo);

extern Datum int48pl(FunctionCallInfo fcinfo);
extern Datum int48mi(FunctionCallInfo fcinfo);
extern Datum int48mul(FunctionCallInfo fcinfo);
extern Datum int48div(FunctionCallInfo fcinfo);

extern Datum int82pl(FunctionCallInfo fcinfo);
extern Datum int82mi(FunctionCallInfo fcinfo);
extern Datum int82mul(FunctionCallInfo fcinfo);
extern Datum int82div(FunctionCallInfo fcinfo);

extern Datum int28pl(FunctionCallInfo fcinfo);
extern Datum int28mi(FunctionCallInfo fcinfo);
extern Datum int28mul(FunctionCallInfo fcinfo);
extern Datum int28div(FunctionCallInfo fcinfo);

extern Datum int48(FunctionCallInfo fcinfo);
extern Datum int84(FunctionCallInfo fcinfo);

extern Datum int28(FunctionCallInfo fcinfo);
extern Datum int82(FunctionCallInfo fcinfo);

extern Datum i8tod(FunctionCallInfo fcinfo);
extern Datum dtoi8(FunctionCallInfo fcinfo);

extern Datum i8tof(FunctionCallInfo fcinfo);
extern Datum ftoi8(FunctionCallInfo fcinfo);

extern Datum i8tooid(FunctionCallInfo fcinfo);
extern Datum oidtoi8(FunctionCallInfo fcinfo);

extern Datum generate_series_int8(FunctionCallInfo fcinfo);
extern Datum generate_series_step_int8(FunctionCallInfo fcinfo);
# 24 "vtype.c" 2
# 1 "vtype.h" 1
# 26 "vtype.h"
typedef int16 int2;
typedef int32 int4;


typedef struct vtype {
    int _vl_len;
    Oid elemtype;
    int dim;
    bool *isnull;
    bool *skipref;
    Datum values[0];
}vtype;
# 173 "vtype.h"
typedef struct vtype vint2; vint2* buildvint2(int dim, bool *skip); extern Datum vint2vint2pl(FunctionCallInfo fcinfo); extern Datum vint2vint2mi(FunctionCallInfo fcinfo); extern Datum vint2vint2mul(FunctionCallInfo fcinfo); extern Datum vint2vint2div(FunctionCallInfo fcinfo); extern Datum vint2vint4pl(FunctionCallInfo fcinfo); extern Datum vint2vint4mi(FunctionCallInfo fcinfo); extern Datum vint2vint4mul(FunctionCallInfo fcinfo); extern Datum vint2vint4div(FunctionCallInfo fcinfo); extern Datum vint2vint8pl(FunctionCallInfo fcinfo); extern Datum vint2vint8mi(FunctionCallInfo fcinfo); extern Datum vint2vint8mul(FunctionCallInfo fcinfo); extern Datum vint2vint8div(FunctionCallInfo fcinfo); extern Datum vint2vfloat4pl(FunctionCallInfo fcinfo); extern Datum vint2vfloat4mi(FunctionCallInfo fcinfo); extern Datum vint2vfloat4mul(FunctionCallInfo fcinfo); extern Datum vint2vfloat4div(FunctionCallInfo fcinfo); extern Datum vint2vfloat8pl(FunctionCallInfo fcinfo); extern Datum vint2vfloat8mi(FunctionCallInfo fcinfo); extern Datum vint2vfloat8mul(FunctionCallInfo fcinfo); extern Datum vint2vfloat8div(FunctionCallInfo fcinfo); extern Datum vint2int2pl(FunctionCallInfo fcinfo); extern Datum vint2int2mi(FunctionCallInfo fcinfo); extern Datum vint2int2mul(FunctionCallInfo fcinfo); extern Datum vint2int2div(FunctionCallInfo fcinfo); extern Datum int2vint2pl(FunctionCallInfo fcinfo); extern Datum int2vint2mi(FunctionCallInfo fcinfo); extern Datum int2vint2mul(FunctionCallInfo fcinfo); extern Datum int2vint2div(FunctionCallInfo fcinfo); extern Datum vint2int4pl(FunctionCallInfo fcinfo); extern Datum vint2int4mi(FunctionCallInfo fcinfo); extern Datum vint2int4mul(FunctionCallInfo fcinfo); extern Datum vint2int4div(FunctionCallInfo fcinfo); extern Datum int4vint2pl(FunctionCallInfo fcinfo); extern Datum int4vint2mi(FunctionCallInfo fcinfo); extern Datum int4vint2mul(FunctionCallInfo fcinfo); extern Datum int4vint2div(FunctionCallInfo fcinfo); extern Datum vint2int8pl(FunctionCallInfo fcinfo); extern Datum vint2int8mi(FunctionCallInfo fcinfo); extern Datum vint2int8mul(FunctionCallInfo fcinfo); extern Datum vint2int8div(FunctionCallInfo fcinfo); extern Datum int8vint2pl(FunctionCallInfo fcinfo); extern Datum int8vint2mi(FunctionCallInfo fcinfo); extern Datum int8vint2mul(FunctionCallInfo fcinfo); extern Datum int8vint2div(FunctionCallInfo fcinfo); extern Datum vint2float4pl(FunctionCallInfo fcinfo); extern Datum vint2float4mi(FunctionCallInfo fcinfo); extern Datum vint2float4mul(FunctionCallInfo fcinfo); extern Datum vint2float4div(FunctionCallInfo fcinfo); extern Datum float4vint2pl(FunctionCallInfo fcinfo); extern Datum float4vint2mi(FunctionCallInfo fcinfo); extern Datum float4vint2mul(FunctionCallInfo fcinfo); extern Datum float4vint2div(FunctionCallInfo fcinfo); extern Datum vint2float8pl(FunctionCallInfo fcinfo); extern Datum vint2float8mi(FunctionCallInfo fcinfo); extern Datum vint2float8mul(FunctionCallInfo fcinfo); extern Datum vint2float8div(FunctionCallInfo fcinfo); extern Datum float8vint2pl(FunctionCallInfo fcinfo); extern Datum float8vint2mi(FunctionCallInfo fcinfo); extern Datum float8vint2mul(FunctionCallInfo fcinfo); extern Datum float8vint2div(FunctionCallInfo fcinfo); extern Datum vint2vint2eq(FunctionCallInfo fcinfo); extern Datum vint2vint2ne(FunctionCallInfo fcinfo); extern Datum vint2vint2gt(FunctionCallInfo fcinfo); extern Datum vint2vint2ge(FunctionCallInfo fcinfo); extern Datum vint2vint2lt(FunctionCallInfo fcinfo); extern Datum vint2vint2le(FunctionCallInfo fcinfo); extern Datum vint2vint4eq(FunctionCallInfo fcinfo); extern Datum vint2vint4ne(FunctionCallInfo fcinfo); extern Datum vint2vint4gt(FunctionCallInfo fcinfo); extern Datum vint2vint4ge(FunctionCallInfo fcinfo); extern Datum vint2vint4lt(FunctionCallInfo fcinfo); extern Datum vint2vint4le(FunctionCallInfo fcinfo); extern Datum vint2vint8eq(FunctionCallInfo fcinfo); extern Datum vint2vint8ne(FunctionCallInfo fcinfo); extern Datum vint2vint8gt(FunctionCallInfo fcinfo); extern Datum vint2vint8ge(FunctionCallInfo fcinfo); extern Datum vint2vint8lt(FunctionCallInfo fcinfo); extern Datum vint2vint8le(FunctionCallInfo fcinfo); extern Datum vint2vfloat4eq(FunctionCallInfo fcinfo); extern Datum vint2vfloat4ne(FunctionCallInfo fcinfo); extern Datum vint2vfloat4gt(FunctionCallInfo fcinfo); extern Datum vint2vfloat4ge(FunctionCallInfo fcinfo); extern Datum vint2vfloat4lt(FunctionCallInfo fcinfo); extern Datum vint2vfloat4le(FunctionCallInfo fcinfo); extern Datum vint2vfloat8eq(FunctionCallInfo fcinfo); extern Datum vint2vfloat8ne(FunctionCallInfo fcinfo); extern Datum vint2vfloat8gt(FunctionCallInfo fcinfo); extern Datum vint2vfloat8ge(FunctionCallInfo fcinfo); extern Datum vint2vfloat8lt(FunctionCallInfo fcinfo); extern Datum vint2vfloat8le(FunctionCallInfo fcinfo); extern Datum vint2int2eq(FunctionCallInfo fcinfo); extern Datum vint2int2ne(FunctionCallInfo fcinfo); extern Datum vint2int2gt(FunctionCallInfo fcinfo); extern Datum vint2int2ge(FunctionCallInfo fcinfo); extern Datum vint2int2lt(FunctionCallInfo fcinfo); extern Datum vint2int2le(FunctionCallInfo fcinfo); extern Datum vint2int4eq(FunctionCallInfo fcinfo); extern Datum vint2int4ne(FunctionCallInfo fcinfo); extern Datum vint2int4gt(FunctionCallInfo fcinfo); extern Datum vint2int4ge(FunctionCallInfo fcinfo); extern Datum vint2int4lt(FunctionCallInfo fcinfo); extern Datum vint2int4le(FunctionCallInfo fcinfo); extern Datum vint2int8eq(FunctionCallInfo fcinfo); extern Datum vint2int8ne(FunctionCallInfo fcinfo); extern Datum vint2int8gt(FunctionCallInfo fcinfo); extern Datum vint2int8ge(FunctionCallInfo fcinfo); extern Datum vint2int8lt(FunctionCallInfo fcinfo); extern Datum vint2int8le(FunctionCallInfo fcinfo); extern Datum vint2float4eq(FunctionCallInfo fcinfo); extern Datum vint2float4ne(FunctionCallInfo fcinfo); extern Datum vint2float4gt(FunctionCallInfo fcinfo); extern Datum vint2float4ge(FunctionCallInfo fcinfo); extern Datum vint2float4lt(FunctionCallInfo fcinfo); extern Datum vint2float4le(FunctionCallInfo fcinfo); extern Datum vint2float8eq(FunctionCallInfo fcinfo); extern Datum vint2float8ne(FunctionCallInfo fcinfo); extern Datum vint2float8gt(FunctionCallInfo fcinfo); extern Datum vint2float8ge(FunctionCallInfo fcinfo); extern Datum vint2float8lt(FunctionCallInfo fcinfo); extern Datum vint2float8le(FunctionCallInfo fcinfo); extern Datum vint2in(FunctionCallInfo fcinfo); extern Datum vint2out(FunctionCallInfo fcinfo);
typedef struct vtype vint4; vint4* buildvint4(int dim, bool *skip); extern Datum vint4vint2pl(FunctionCallInfo fcinfo); extern Datum vint4vint2mi(FunctionCallInfo fcinfo); extern Datum vint4vint2mul(FunctionCallInfo fcinfo); extern Datum vint4vint2div(FunctionCallInfo fcinfo); extern Datum vint4vint4pl(FunctionCallInfo fcinfo); extern Datum vint4vint4mi(FunctionCallInfo fcinfo); extern Datum vint4vint4mul(FunctionCallInfo fcinfo); extern Datum vint4vint4div(FunctionCallInfo fcinfo); extern Datum vint4vint8pl(FunctionCallInfo fcinfo); extern Datum vint4vint8mi(FunctionCallInfo fcinfo); extern Datum vint4vint8mul(FunctionCallInfo fcinfo); extern Datum vint4vint8div(FunctionCallInfo fcinfo); extern Datum vint4vfloat4pl(FunctionCallInfo fcinfo); extern Datum vint4vfloat4mi(FunctionCallInfo fcinfo); extern Datum vint4vfloat4mul(FunctionCallInfo fcinfo); extern Datum vint4vfloat4div(FunctionCallInfo fcinfo); extern Datum vint4vfloat8pl(FunctionCallInfo fcinfo); extern Datum vint4vfloat8mi(FunctionCallInfo fcinfo); extern Datum vint4vfloat8mul(FunctionCallInfo fcinfo); extern Datum vint4vfloat8div(FunctionCallInfo fcinfo); extern Datum vint4int2pl(FunctionCallInfo fcinfo); extern Datum vint4int2mi(FunctionCallInfo fcinfo); extern Datum vint4int2mul(FunctionCallInfo fcinfo); extern Datum vint4int2div(FunctionCallInfo fcinfo); extern Datum int2vint4pl(FunctionCallInfo fcinfo); extern Datum int2vint4mi(FunctionCallInfo fcinfo); extern Datum int2vint4mul(FunctionCallInfo fcinfo); extern Datum int2vint4div(FunctionCallInfo fcinfo); extern Datum vint4int4pl(FunctionCallInfo fcinfo); extern Datum vint4int4mi(FunctionCallInfo fcinfo); extern Datum vint4int4mul(FunctionCallInfo fcinfo); extern Datum vint4int4div(FunctionCallInfo fcinfo); extern Datum int4vint4pl(FunctionCallInfo fcinfo); extern Datum int4vint4mi(FunctionCallInfo fcinfo); extern Datum int4vint4mul(FunctionCallInfo fcinfo); extern Datum int4vint4div(FunctionCallInfo fcinfo); extern Datum vint4int8pl(FunctionCallInfo fcinfo); extern Datum vint4int8mi(FunctionCallInfo fcinfo); extern Datum vint4int8mul(FunctionCallInfo fcinfo); extern Datum vint4int8div(FunctionCallInfo fcinfo); extern Datum int8vint4pl(FunctionCallInfo fcinfo); extern Datum int8vint4mi(FunctionCallInfo fcinfo); extern Datum int8vint4mul(FunctionCallInfo fcinfo); extern Datum int8vint4div(FunctionCallInfo fcinfo); extern Datum vint4float4pl(FunctionCallInfo fcinfo); extern Datum vint4float4mi(FunctionCallInfo fcinfo); extern Datum vint4float4mul(FunctionCallInfo fcinfo); extern Datum vint4float4div(FunctionCallInfo fcinfo); extern Datum float4vint4pl(FunctionCallInfo fcinfo); extern Datum float4vint4mi(FunctionCallInfo fcinfo); extern Datum float4vint4mul(FunctionCallInfo fcinfo); extern Datum float4vint4div(FunctionCallInfo fcinfo); extern Datum vint4float8pl(FunctionCallInfo fcinfo); extern Datum vint4float8mi(FunctionCallInfo fcinfo); extern Datum vint4float8mul(FunctionCallInfo fcinfo); extern Datum vint4float8div(FunctionCallInfo fcinfo); extern Datum float8vint4pl(FunctionCallInfo fcinfo); extern Datum float8vint4mi(FunctionCallInfo fcinfo); extern Datum float8vint4mul(FunctionCallInfo fcinfo); extern Datum float8vint4div(FunctionCallInfo fcinfo); extern Datum vint4vint2eq(FunctionCallInfo fcinfo); extern Datum vint4vint2ne(FunctionCallInfo fcinfo); extern Datum vint4vint2gt(FunctionCallInfo fcinfo); extern Datum vint4vint2ge(FunctionCallInfo fcinfo); extern Datum vint4vint2lt(FunctionCallInfo fcinfo); extern Datum vint4vint2le(FunctionCallInfo fcinfo); extern Datum vint4vint4eq(FunctionCallInfo fcinfo); extern Datum vint4vint4ne(FunctionCallInfo fcinfo); extern Datum vint4vint4gt(FunctionCallInfo fcinfo); extern Datum vint4vint4ge(FunctionCallInfo fcinfo); extern Datum vint4vint4lt(FunctionCallInfo fcinfo); extern Datum vint4vint4le(FunctionCallInfo fcinfo); extern Datum vint4vint8eq(FunctionCallInfo fcinfo); extern Datum vint4vint8ne(FunctionCallInfo fcinfo); extern Datum vint4vint8gt(FunctionCallInfo fcinfo); extern Datum vint4vint8ge(FunctionCallInfo fcinfo); extern Datum vint4vint8lt(FunctionCallInfo fcinfo); extern Datum vint4vint8le(FunctionCallInfo fcinfo); extern Datum vint4vfloat4eq(FunctionCallInfo fcinfo); extern Datum vint4vfloat4ne(FunctionCallInfo fcinfo); extern Datum vint4vfloat4gt(FunctionCallInfo fcinfo); extern Datum vint4vfloat4ge(FunctionCallInfo fcinfo); extern Datum vint4vfloat4lt(FunctionCallInfo fcinfo); extern Datum vint4vfloat4le(FunctionCallInfo fcinfo); extern Datum vint4vfloat8eq(FunctionCallInfo fcinfo); extern Datum vint4vfloat8ne(FunctionCallInfo fcinfo); extern Datum vint4vfloat8gt(FunctionCallInfo fcinfo); extern Datum vint4vfloat8ge(FunctionCallInfo fcinfo); extern Datum vint4vfloat8lt(FunctionCallInfo fcinfo); extern Datum vint4vfloat8le(FunctionCallInfo fcinfo); extern Datum vint4int2eq(FunctionCallInfo fcinfo); extern Datum vint4int2ne(FunctionCallInfo fcinfo); extern Datum vint4int2gt(FunctionCallInfo fcinfo); extern Datum vint4int2ge(FunctionCallInfo fcinfo); extern Datum vint4int2lt(FunctionCallInfo fcinfo); extern Datum vint4int2le(FunctionCallInfo fcinfo); extern Datum vint4int4eq(FunctionCallInfo fcinfo); extern Datum vint4int4ne(FunctionCallInfo fcinfo); extern Datum vint4int4gt(FunctionCallInfo fcinfo); extern Datum vint4int4ge(FunctionCallInfo fcinfo); extern Datum vint4int4lt(FunctionCallInfo fcinfo); extern Datum vint4int4le(FunctionCallInfo fcinfo); extern Datum vint4int8eq(FunctionCallInfo fcinfo); extern Datum vint4int8ne(FunctionCallInfo fcinfo); extern Datum vint4int8gt(FunctionCallInfo fcinfo); extern Datum vint4int8ge(FunctionCallInfo fcinfo); extern Datum vint4int8lt(FunctionCallInfo fcinfo); extern Datum vint4int8le(FunctionCallInfo fcinfo); extern Datum vint4float4eq(FunctionCallInfo fcinfo); extern Datum vint4float4ne(FunctionCallInfo fcinfo); extern Datum vint4float4gt(FunctionCallInfo fcinfo); extern Datum vint4float4ge(FunctionCallInfo fcinfo); extern Datum vint4float4lt(FunctionCallInfo fcinfo); extern Datum vint4float4le(FunctionCallInfo fcinfo); extern Datum vint4float8eq(FunctionCallInfo fcinfo); extern Datum vint4float8ne(FunctionCallInfo fcinfo); extern Datum vint4float8gt(FunctionCallInfo fcinfo); extern Datum vint4float8ge(FunctionCallInfo fcinfo); extern Datum vint4float8lt(FunctionCallInfo fcinfo); extern Datum vint4float8le(FunctionCallInfo fcinfo); extern Datum vint4in(FunctionCallInfo fcinfo); extern Datum vint4out(FunctionCallInfo fcinfo);
typedef struct vtype vint8; vint8* buildvint8(int dim, bool *skip); extern Datum vint8vint2pl(FunctionCallInfo fcinfo); extern Datum vint8vint2mi(FunctionCallInfo fcinfo); extern Datum vint8vint2mul(FunctionCallInfo fcinfo); extern Datum vint8vint2div(FunctionCallInfo fcinfo); extern Datum vint8vint4pl(FunctionCallInfo fcinfo); extern Datum vint8vint4mi(FunctionCallInfo fcinfo); extern Datum vint8vint4mul(FunctionCallInfo fcinfo); extern Datum vint8vint4div(FunctionCallInfo fcinfo); extern Datum vint8vint8pl(FunctionCallInfo fcinfo); extern Datum vint8vint8mi(FunctionCallInfo fcinfo); extern Datum vint8vint8mul(FunctionCallInfo fcinfo); extern Datum vint8vint8div(FunctionCallInfo fcinfo); extern Datum vint8vfloat4pl(FunctionCallInfo fcinfo); extern Datum vint8vfloat4mi(FunctionCallInfo fcinfo); extern Datum vint8vfloat4mul(FunctionCallInfo fcinfo); extern Datum vint8vfloat4div(FunctionCallInfo fcinfo); extern Datum vint8vfloat8pl(FunctionCallInfo fcinfo); extern Datum vint8vfloat8mi(FunctionCallInfo fcinfo); extern Datum vint8vfloat8mul(FunctionCallInfo fcinfo); extern Datum vint8vfloat8div(FunctionCallInfo fcinfo); extern Datum vint8int2pl(FunctionCallInfo fcinfo); extern Datum vint8int2mi(FunctionCallInfo fcinfo); extern Datum vint8int2mul(FunctionCallInfo fcinfo); extern Datum vint8int2div(FunctionCallInfo fcinfo); extern Datum int2vint8pl(FunctionCallInfo fcinfo); extern Datum int2vint8mi(FunctionCallInfo fcinfo); extern Datum int2vint8mul(FunctionCallInfo fcinfo); extern Datum int2vint8div(FunctionCallInfo fcinfo); extern Datum vint8int4pl(FunctionCallInfo fcinfo); extern Datum vint8int4mi(FunctionCallInfo fcinfo); extern Datum vint8int4mul(FunctionCallInfo fcinfo); extern Datum vint8int4div(FunctionCallInfo fcinfo); extern Datum int4vint8pl(FunctionCallInfo fcinfo); extern Datum int4vint8mi(FunctionCallInfo fcinfo); extern Datum int4vint8mul(FunctionCallInfo fcinfo); extern Datum int4vint8div(FunctionCallInfo fcinfo); extern Datum vint8int8pl(FunctionCallInfo fcinfo); extern Datum vint8int8mi(FunctionCallInfo fcinfo); extern Datum vint8int8mul(FunctionCallInfo fcinfo); extern Datum vint8int8div(FunctionCallInfo fcinfo); extern Datum int8vint8pl(FunctionCallInfo fcinfo); extern Datum int8vint8mi(FunctionCallInfo fcinfo); extern Datum int8vint8mul(FunctionCallInfo fcinfo); extern Datum int8vint8div(FunctionCallInfo fcinfo); extern Datum vint8float4pl(FunctionCallInfo fcinfo); extern Datum vint8float4mi(FunctionCallInfo fcinfo); extern Datum vint8float4mul(FunctionCallInfo fcinfo); extern Datum vint8float4div(FunctionCallInfo fcinfo); extern Datum float4vint8pl(FunctionCallInfo fcinfo); extern Datum float4vint8mi(FunctionCallInfo fcinfo); extern Datum float4vint8mul(FunctionCallInfo fcinfo); extern Datum float4vint8div(FunctionCallInfo fcinfo); extern Datum vint8float8pl(FunctionCallInfo fcinfo); extern Datum vint8float8mi(FunctionCallInfo fcinfo); extern Datum vint8float8mul(FunctionCallInfo fcinfo); extern Datum vint8float8div(FunctionCallInfo fcinfo); extern Datum float8vint8pl(FunctionCallInfo fcinfo); extern Datum float8vint8mi(FunctionCallInfo fcinfo); extern Datum float8vint8mul(FunctionCallInfo fcinfo); extern Datum float8vint8div(FunctionCallInfo fcinfo); extern Datum vint8vint2eq(FunctionCallInfo fcinfo); extern Datum vint8vint2ne(FunctionCallInfo fcinfo); extern Datum vint8vint2gt(FunctionCallInfo fcinfo); extern Datum vint8vint2ge(FunctionCallInfo fcinfo); extern Datum vint8vint2lt(FunctionCallInfo fcinfo); extern Datum vint8vint2le(FunctionCallInfo fcinfo); extern Datum vint8vint4eq(FunctionCallInfo fcinfo); extern Datum vint8vint4ne(FunctionCallInfo fcinfo); extern Datum vint8vint4gt(FunctionCallInfo fcinfo); extern Datum vint8vint4ge(FunctionCallInfo fcinfo); extern Datum vint8vint4lt(FunctionCallInfo fcinfo); extern Datum vint8vint4le(FunctionCallInfo fcinfo); extern Datum vint8vint8eq(FunctionCallInfo fcinfo); extern Datum vint8vint8ne(FunctionCallInfo fcinfo); extern Datum vint8vint8gt(FunctionCallInfo fcinfo); extern Datum vint8vint8ge(FunctionCallInfo fcinfo); extern Datum vint8vint8lt(FunctionCallInfo fcinfo); extern Datum vint8vint8le(FunctionCallInfo fcinfo); extern Datum vint8vfloat4eq(FunctionCallInfo fcinfo); extern Datum vint8vfloat4ne(FunctionCallInfo fcinfo); extern Datum vint8vfloat4gt(FunctionCallInfo fcinfo); extern Datum vint8vfloat4ge(FunctionCallInfo fcinfo); extern Datum vint8vfloat4lt(FunctionCallInfo fcinfo); extern Datum vint8vfloat4le(FunctionCallInfo fcinfo); extern Datum vint8vfloat8eq(FunctionCallInfo fcinfo); extern Datum vint8vfloat8ne(FunctionCallInfo fcinfo); extern Datum vint8vfloat8gt(FunctionCallInfo fcinfo); extern Datum vint8vfloat8ge(FunctionCallInfo fcinfo); extern Datum vint8vfloat8lt(FunctionCallInfo fcinfo); extern Datum vint8vfloat8le(FunctionCallInfo fcinfo); extern Datum vint8int2eq(FunctionCallInfo fcinfo); extern Datum vint8int2ne(FunctionCallInfo fcinfo); extern Datum vint8int2gt(FunctionCallInfo fcinfo); extern Datum vint8int2ge(FunctionCallInfo fcinfo); extern Datum vint8int2lt(FunctionCallInfo fcinfo); extern Datum vint8int2le(FunctionCallInfo fcinfo); extern Datum vint8int4eq(FunctionCallInfo fcinfo); extern Datum vint8int4ne(FunctionCallInfo fcinfo); extern Datum vint8int4gt(FunctionCallInfo fcinfo); extern Datum vint8int4ge(FunctionCallInfo fcinfo); extern Datum vint8int4lt(FunctionCallInfo fcinfo); extern Datum vint8int4le(FunctionCallInfo fcinfo); extern Datum vint8int8eq(FunctionCallInfo fcinfo); extern Datum vint8int8ne(FunctionCallInfo fcinfo); extern Datum vint8int8gt(FunctionCallInfo fcinfo); extern Datum vint8int8ge(FunctionCallInfo fcinfo); extern Datum vint8int8lt(FunctionCallInfo fcinfo); extern Datum vint8int8le(FunctionCallInfo fcinfo); extern Datum vint8float4eq(FunctionCallInfo fcinfo); extern Datum vint8float4ne(FunctionCallInfo fcinfo); extern Datum vint8float4gt(FunctionCallInfo fcinfo); extern Datum vint8float4ge(FunctionCallInfo fcinfo); extern Datum vint8float4lt(FunctionCallInfo fcinfo); extern Datum vint8float4le(FunctionCallInfo fcinfo); extern Datum vint8float8eq(FunctionCallInfo fcinfo); extern Datum vint8float8ne(FunctionCallInfo fcinfo); extern Datum vint8float8gt(FunctionCallInfo fcinfo); extern Datum vint8float8ge(FunctionCallInfo fcinfo); extern Datum vint8float8lt(FunctionCallInfo fcinfo); extern Datum vint8float8le(FunctionCallInfo fcinfo); extern Datum vint8in(FunctionCallInfo fcinfo); extern Datum vint8out(FunctionCallInfo fcinfo);
typedef struct vtype vfloat4; vfloat4* buildvfloat4(int dim, bool *skip); extern Datum vfloat4vint2pl(FunctionCallInfo fcinfo); extern Datum vfloat4vint2mi(FunctionCallInfo fcinfo); extern Datum vfloat4vint2mul(FunctionCallInfo fcinfo); extern Datum vfloat4vint2div(FunctionCallInfo fcinfo); extern Datum vfloat4vint4pl(FunctionCallInfo fcinfo); extern Datum vfloat4vint4mi(FunctionCallInfo fcinfo); extern Datum vfloat4vint4mul(FunctionCallInfo fcinfo); extern Datum vfloat4vint4div(FunctionCallInfo fcinfo); extern Datum vfloat4vint8pl(FunctionCallInfo fcinfo); extern Datum vfloat4vint8mi(FunctionCallInfo fcinfo); extern Datum vfloat4vint8mul(FunctionCallInfo fcinfo); extern Datum vfloat4vint8div(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4pl(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4mi(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4mul(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4div(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8pl(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8mi(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8mul(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8div(FunctionCallInfo fcinfo); extern Datum vfloat4int2pl(FunctionCallInfo fcinfo); extern Datum vfloat4int2mi(FunctionCallInfo fcinfo); extern Datum vfloat4int2mul(FunctionCallInfo fcinfo); extern Datum vfloat4int2div(FunctionCallInfo fcinfo); extern Datum int2vfloat4pl(FunctionCallInfo fcinfo); extern Datum int2vfloat4mi(FunctionCallInfo fcinfo); extern Datum int2vfloat4mul(FunctionCallInfo fcinfo); extern Datum int2vfloat4div(FunctionCallInfo fcinfo); extern Datum vfloat4int4pl(FunctionCallInfo fcinfo); extern Datum vfloat4int4mi(FunctionCallInfo fcinfo); extern Datum vfloat4int4mul(FunctionCallInfo fcinfo); extern Datum vfloat4int4div(FunctionCallInfo fcinfo); extern Datum int4vfloat4pl(FunctionCallInfo fcinfo); extern Datum int4vfloat4mi(FunctionCallInfo fcinfo); extern Datum int4vfloat4mul(FunctionCallInfo fcinfo); extern Datum int4vfloat4div(FunctionCallInfo fcinfo); extern Datum vfloat4int8pl(FunctionCallInfo fcinfo); extern Datum vfloat4int8mi(FunctionCallInfo fcinfo); extern Datum vfloat4int8mul(FunctionCallInfo fcinfo); extern Datum vfloat4int8div(FunctionCallInfo fcinfo); extern Datum int8vfloat4pl(FunctionCallInfo fcinfo); extern Datum int8vfloat4mi(FunctionCallInfo fcinfo); extern Datum int8vfloat4mul(FunctionCallInfo fcinfo); extern Datum int8vfloat4div(FunctionCallInfo fcinfo); extern Datum vfloat4float4pl(FunctionCallInfo fcinfo); extern Datum vfloat4float4mi(FunctionCallInfo fcinfo); extern Datum vfloat4float4mul(FunctionCallInfo fcinfo); extern Datum vfloat4float4div(FunctionCallInfo fcinfo); extern Datum float4vfloat4pl(FunctionCallInfo fcinfo); extern Datum float4vfloat4mi(FunctionCallInfo fcinfo); extern Datum float4vfloat4mul(FunctionCallInfo fcinfo); extern Datum float4vfloat4div(FunctionCallInfo fcinfo); extern Datum vfloat4float8pl(FunctionCallInfo fcinfo); extern Datum vfloat4float8mi(FunctionCallInfo fcinfo); extern Datum vfloat4float8mul(FunctionCallInfo fcinfo); extern Datum vfloat4float8div(FunctionCallInfo fcinfo); extern Datum float8vfloat4pl(FunctionCallInfo fcinfo); extern Datum float8vfloat4mi(FunctionCallInfo fcinfo); extern Datum float8vfloat4mul(FunctionCallInfo fcinfo); extern Datum float8vfloat4div(FunctionCallInfo fcinfo); extern Datum vfloat4vint2eq(FunctionCallInfo fcinfo); extern Datum vfloat4vint2ne(FunctionCallInfo fcinfo); extern Datum vfloat4vint2gt(FunctionCallInfo fcinfo); extern Datum vfloat4vint2ge(FunctionCallInfo fcinfo); extern Datum vfloat4vint2lt(FunctionCallInfo fcinfo); extern Datum vfloat4vint2le(FunctionCallInfo fcinfo); extern Datum vfloat4vint4eq(FunctionCallInfo fcinfo); extern Datum vfloat4vint4ne(FunctionCallInfo fcinfo); extern Datum vfloat4vint4gt(FunctionCallInfo fcinfo); extern Datum vfloat4vint4ge(FunctionCallInfo fcinfo); extern Datum vfloat4vint4lt(FunctionCallInfo fcinfo); extern Datum vfloat4vint4le(FunctionCallInfo fcinfo); extern Datum vfloat4vint8eq(FunctionCallInfo fcinfo); extern Datum vfloat4vint8ne(FunctionCallInfo fcinfo); extern Datum vfloat4vint8gt(FunctionCallInfo fcinfo); extern Datum vfloat4vint8ge(FunctionCallInfo fcinfo); extern Datum vfloat4vint8lt(FunctionCallInfo fcinfo); extern Datum vfloat4vint8le(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4eq(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4ne(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4gt(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4ge(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4lt(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat4le(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8eq(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8ne(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8gt(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8ge(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8lt(FunctionCallInfo fcinfo); extern Datum vfloat4vfloat8le(FunctionCallInfo fcinfo); extern Datum vfloat4int2eq(FunctionCallInfo fcinfo); extern Datum vfloat4int2ne(FunctionCallInfo fcinfo); extern Datum vfloat4int2gt(FunctionCallInfo fcinfo); extern Datum vfloat4int2ge(FunctionCallInfo fcinfo); extern Datum vfloat4int2lt(FunctionCallInfo fcinfo); extern Datum vfloat4int2le(FunctionCallInfo fcinfo); extern Datum vfloat4int4eq(FunctionCallInfo fcinfo); extern Datum vfloat4int4ne(FunctionCallInfo fcinfo); extern Datum vfloat4int4gt(FunctionCallInfo fcinfo); extern Datum vfloat4int4ge(FunctionCallInfo fcinfo); extern Datum vfloat4int4lt(FunctionCallInfo fcinfo); extern Datum vfloat4int4le(FunctionCallInfo fcinfo); extern Datum vfloat4int8eq(FunctionCallInfo fcinfo); extern Datum vfloat4int8ne(FunctionCallInfo fcinfo); extern Datum vfloat4int8gt(FunctionCallInfo fcinfo); extern Datum vfloat4int8ge(FunctionCallInfo fcinfo); extern Datum vfloat4int8lt(FunctionCallInfo fcinfo); extern Datum vfloat4int8le(FunctionCallInfo fcinfo); extern Datum vfloat4float4eq(FunctionCallInfo fcinfo); extern Datum vfloat4float4ne(FunctionCallInfo fcinfo); extern Datum vfloat4float4gt(FunctionCallInfo fcinfo); extern Datum vfloat4float4ge(FunctionCallInfo fcinfo); extern Datum vfloat4float4lt(FunctionCallInfo fcinfo); extern Datum vfloat4float4le(FunctionCallInfo fcinfo); extern Datum vfloat4float8eq(FunctionCallInfo fcinfo); extern Datum vfloat4float8ne(FunctionCallInfo fcinfo); extern Datum vfloat4float8gt(FunctionCallInfo fcinfo); extern Datum vfloat4float8ge(FunctionCallInfo fcinfo); extern Datum vfloat4float8lt(FunctionCallInfo fcinfo); extern Datum vfloat4float8le(FunctionCallInfo fcinfo); extern Datum vfloat4in(FunctionCallInfo fcinfo); extern Datum vfloat4out(FunctionCallInfo fcinfo);
typedef struct vtype vfloat8; vfloat8* buildvfloat8(int dim, bool *skip); extern Datum vfloat8vint2pl(FunctionCallInfo fcinfo); extern Datum vfloat8vint2mi(FunctionCallInfo fcinfo); extern Datum vfloat8vint2mul(FunctionCallInfo fcinfo); extern Datum vfloat8vint2div(FunctionCallInfo fcinfo); extern Datum vfloat8vint4pl(FunctionCallInfo fcinfo); extern Datum vfloat8vint4mi(FunctionCallInfo fcinfo); extern Datum vfloat8vint4mul(FunctionCallInfo fcinfo); extern Datum vfloat8vint4div(FunctionCallInfo fcinfo); extern Datum vfloat8vint8pl(FunctionCallInfo fcinfo); extern Datum vfloat8vint8mi(FunctionCallInfo fcinfo); extern Datum vfloat8vint8mul(FunctionCallInfo fcinfo); extern Datum vfloat8vint8div(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4pl(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4mi(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4mul(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4div(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8pl(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8mi(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8mul(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8div(FunctionCallInfo fcinfo); extern Datum vfloat8int2pl(FunctionCallInfo fcinfo); extern Datum vfloat8int2mi(FunctionCallInfo fcinfo); extern Datum vfloat8int2mul(FunctionCallInfo fcinfo); extern Datum vfloat8int2div(FunctionCallInfo fcinfo); extern Datum int2vfloat8pl(FunctionCallInfo fcinfo); extern Datum int2vfloat8mi(FunctionCallInfo fcinfo); extern Datum int2vfloat8mul(FunctionCallInfo fcinfo); extern Datum int2vfloat8div(FunctionCallInfo fcinfo); extern Datum vfloat8int4pl(FunctionCallInfo fcinfo); extern Datum vfloat8int4mi(FunctionCallInfo fcinfo); extern Datum vfloat8int4mul(FunctionCallInfo fcinfo); extern Datum vfloat8int4div(FunctionCallInfo fcinfo); extern Datum int4vfloat8pl(FunctionCallInfo fcinfo); extern Datum int4vfloat8mi(FunctionCallInfo fcinfo); extern Datum int4vfloat8mul(FunctionCallInfo fcinfo); extern Datum int4vfloat8div(FunctionCallInfo fcinfo); extern Datum vfloat8int8pl(FunctionCallInfo fcinfo); extern Datum vfloat8int8mi(FunctionCallInfo fcinfo); extern Datum vfloat8int8mul(FunctionCallInfo fcinfo); extern Datum vfloat8int8div(FunctionCallInfo fcinfo); extern Datum int8vfloat8pl(FunctionCallInfo fcinfo); extern Datum int8vfloat8mi(FunctionCallInfo fcinfo); extern Datum int8vfloat8mul(FunctionCallInfo fcinfo); extern Datum int8vfloat8div(FunctionCallInfo fcinfo); extern Datum vfloat8float4pl(FunctionCallInfo fcinfo); extern Datum vfloat8float4mi(FunctionCallInfo fcinfo); extern Datum vfloat8float4mul(FunctionCallInfo fcinfo); extern Datum vfloat8float4div(FunctionCallInfo fcinfo); extern Datum float4vfloat8pl(FunctionCallInfo fcinfo); extern Datum float4vfloat8mi(FunctionCallInfo fcinfo); extern Datum float4vfloat8mul(FunctionCallInfo fcinfo); extern Datum float4vfloat8div(FunctionCallInfo fcinfo); extern Datum vfloat8float8pl(FunctionCallInfo fcinfo); extern Datum vfloat8float8mi(FunctionCallInfo fcinfo); extern Datum vfloat8float8mul(FunctionCallInfo fcinfo); extern Datum vfloat8float8div(FunctionCallInfo fcinfo); extern Datum float8vfloat8pl(FunctionCallInfo fcinfo); extern Datum float8vfloat8mi(FunctionCallInfo fcinfo); extern Datum float8vfloat8mul(FunctionCallInfo fcinfo); extern Datum float8vfloat8div(FunctionCallInfo fcinfo); extern Datum vfloat8vint2eq(FunctionCallInfo fcinfo); extern Datum vfloat8vint2ne(FunctionCallInfo fcinfo); extern Datum vfloat8vint2gt(FunctionCallInfo fcinfo); extern Datum vfloat8vint2ge(FunctionCallInfo fcinfo); extern Datum vfloat8vint2lt(FunctionCallInfo fcinfo); extern Datum vfloat8vint2le(FunctionCallInfo fcinfo); extern Datum vfloat8vint4eq(FunctionCallInfo fcinfo); extern Datum vfloat8vint4ne(FunctionCallInfo fcinfo); extern Datum vfloat8vint4gt(FunctionCallInfo fcinfo); extern Datum vfloat8vint4ge(FunctionCallInfo fcinfo); extern Datum vfloat8vint4lt(FunctionCallInfo fcinfo); extern Datum vfloat8vint4le(FunctionCallInfo fcinfo); extern Datum vfloat8vint8eq(FunctionCallInfo fcinfo); extern Datum vfloat8vint8ne(FunctionCallInfo fcinfo); extern Datum vfloat8vint8gt(FunctionCallInfo fcinfo); extern Datum vfloat8vint8ge(FunctionCallInfo fcinfo); extern Datum vfloat8vint8lt(FunctionCallInfo fcinfo); extern Datum vfloat8vint8le(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4eq(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4ne(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4gt(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4ge(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4lt(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat4le(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8eq(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8ne(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8gt(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8ge(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8lt(FunctionCallInfo fcinfo); extern Datum vfloat8vfloat8le(FunctionCallInfo fcinfo); extern Datum vfloat8int2eq(FunctionCallInfo fcinfo); extern Datum vfloat8int2ne(FunctionCallInfo fcinfo); extern Datum vfloat8int2gt(FunctionCallInfo fcinfo); extern Datum vfloat8int2ge(FunctionCallInfo fcinfo); extern Datum vfloat8int2lt(FunctionCallInfo fcinfo); extern Datum vfloat8int2le(FunctionCallInfo fcinfo); extern Datum vfloat8int4eq(FunctionCallInfo fcinfo); extern Datum vfloat8int4ne(FunctionCallInfo fcinfo); extern Datum vfloat8int4gt(FunctionCallInfo fcinfo); extern Datum vfloat8int4ge(FunctionCallInfo fcinfo); extern Datum vfloat8int4lt(FunctionCallInfo fcinfo); extern Datum vfloat8int4le(FunctionCallInfo fcinfo); extern Datum vfloat8int8eq(FunctionCallInfo fcinfo); extern Datum vfloat8int8ne(FunctionCallInfo fcinfo); extern Datum vfloat8int8gt(FunctionCallInfo fcinfo); extern Datum vfloat8int8ge(FunctionCallInfo fcinfo); extern Datum vfloat8int8lt(FunctionCallInfo fcinfo); extern Datum vfloat8int8le(FunctionCallInfo fcinfo); extern Datum vfloat8float4eq(FunctionCallInfo fcinfo); extern Datum vfloat8float4ne(FunctionCallInfo fcinfo); extern Datum vfloat8float4gt(FunctionCallInfo fcinfo); extern Datum vfloat8float4ge(FunctionCallInfo fcinfo); extern Datum vfloat8float4lt(FunctionCallInfo fcinfo); extern Datum vfloat8float4le(FunctionCallInfo fcinfo); extern Datum vfloat8float8eq(FunctionCallInfo fcinfo); extern Datum vfloat8float8ne(FunctionCallInfo fcinfo); extern Datum vfloat8float8gt(FunctionCallInfo fcinfo); extern Datum vfloat8float8ge(FunctionCallInfo fcinfo); extern Datum vfloat8float8lt(FunctionCallInfo fcinfo); extern Datum vfloat8float8le(FunctionCallInfo fcinfo); extern Datum vfloat8in(FunctionCallInfo fcinfo); extern Datum vfloat8out(FunctionCallInfo fcinfo);
typedef struct vtype vbool; vbool* buildvbool(int dim, bool *skip); extern Datum vboolvint2pl(FunctionCallInfo fcinfo); extern Datum vboolvint2mi(FunctionCallInfo fcinfo); extern Datum vboolvint2mul(FunctionCallInfo fcinfo); extern Datum vboolvint2div(FunctionCallInfo fcinfo); extern Datum vboolvint4pl(FunctionCallInfo fcinfo); extern Datum vboolvint4mi(FunctionCallInfo fcinfo); extern Datum vboolvint4mul(FunctionCallInfo fcinfo); extern Datum vboolvint4div(FunctionCallInfo fcinfo); extern Datum vboolvint8pl(FunctionCallInfo fcinfo); extern Datum vboolvint8mi(FunctionCallInfo fcinfo); extern Datum vboolvint8mul(FunctionCallInfo fcinfo); extern Datum vboolvint8div(FunctionCallInfo fcinfo); extern Datum vboolvfloat4pl(FunctionCallInfo fcinfo); extern Datum vboolvfloat4mi(FunctionCallInfo fcinfo); extern Datum vboolvfloat4mul(FunctionCallInfo fcinfo); extern Datum vboolvfloat4div(FunctionCallInfo fcinfo); extern Datum vboolvfloat8pl(FunctionCallInfo fcinfo); extern Datum vboolvfloat8mi(FunctionCallInfo fcinfo); extern Datum vboolvfloat8mul(FunctionCallInfo fcinfo); extern Datum vboolvfloat8div(FunctionCallInfo fcinfo); extern Datum vboolint2pl(FunctionCallInfo fcinfo); extern Datum vboolint2mi(FunctionCallInfo fcinfo); extern Datum vboolint2mul(FunctionCallInfo fcinfo); extern Datum vboolint2div(FunctionCallInfo fcinfo); extern Datum int2vboolpl(FunctionCallInfo fcinfo); extern Datum int2vboolmi(FunctionCallInfo fcinfo); extern Datum int2vboolmul(FunctionCallInfo fcinfo); extern Datum int2vbooldiv(FunctionCallInfo fcinfo); extern Datum vboolint4pl(FunctionCallInfo fcinfo); extern Datum vboolint4mi(FunctionCallInfo fcinfo); extern Datum vboolint4mul(FunctionCallInfo fcinfo); extern Datum vboolint4div(FunctionCallInfo fcinfo); extern Datum int4vboolpl(FunctionCallInfo fcinfo); extern Datum int4vboolmi(FunctionCallInfo fcinfo); extern Datum int4vboolmul(FunctionCallInfo fcinfo); extern Datum int4vbooldiv(FunctionCallInfo fcinfo); extern Datum vboolint8pl(FunctionCallInfo fcinfo); extern Datum vboolint8mi(FunctionCallInfo fcinfo); extern Datum vboolint8mul(FunctionCallInfo fcinfo); extern Datum vboolint8div(FunctionCallInfo fcinfo); extern Datum int8vboolpl(FunctionCallInfo fcinfo); extern Datum int8vboolmi(FunctionCallInfo fcinfo); extern Datum int8vboolmul(FunctionCallInfo fcinfo); extern Datum int8vbooldiv(FunctionCallInfo fcinfo); extern Datum vboolfloat4pl(FunctionCallInfo fcinfo); extern Datum vboolfloat4mi(FunctionCallInfo fcinfo); extern Datum vboolfloat4mul(FunctionCallInfo fcinfo); extern Datum vboolfloat4div(FunctionCallInfo fcinfo); extern Datum float4vboolpl(FunctionCallInfo fcinfo); extern Datum float4vboolmi(FunctionCallInfo fcinfo); extern Datum float4vboolmul(FunctionCallInfo fcinfo); extern Datum float4vbooldiv(FunctionCallInfo fcinfo); extern Datum vboolfloat8pl(FunctionCallInfo fcinfo); extern Datum vboolfloat8mi(FunctionCallInfo fcinfo); extern Datum vboolfloat8mul(FunctionCallInfo fcinfo); extern Datum vboolfloat8div(FunctionCallInfo fcinfo); extern Datum float8vboolpl(FunctionCallInfo fcinfo); extern Datum float8vboolmi(FunctionCallInfo fcinfo); extern Datum float8vboolmul(FunctionCallInfo fcinfo); extern Datum float8vbooldiv(FunctionCallInfo fcinfo); extern Datum vboolvint2eq(FunctionCallInfo fcinfo); extern Datum vboolvint2ne(FunctionCallInfo fcinfo); extern Datum vboolvint2gt(FunctionCallInfo fcinfo); extern Datum vboolvint2ge(FunctionCallInfo fcinfo); extern Datum vboolvint2lt(FunctionCallInfo fcinfo); extern Datum vboolvint2le(FunctionCallInfo fcinfo); extern Datum vboolvint4eq(FunctionCallInfo fcinfo); extern Datum vboolvint4ne(FunctionCallInfo fcinfo); extern Datum vboolvint4gt(FunctionCallInfo fcinfo); extern Datum vboolvint4ge(FunctionCallInfo fcinfo); extern Datum vboolvint4lt(FunctionCallInfo fcinfo); extern Datum vboolvint4le(FunctionCallInfo fcinfo); extern Datum vboolvint8eq(FunctionCallInfo fcinfo); extern Datum vboolvint8ne(FunctionCallInfo fcinfo); extern Datum vboolvint8gt(FunctionCallInfo fcinfo); extern Datum vboolvint8ge(FunctionCallInfo fcinfo); extern Datum vboolvint8lt(FunctionCallInfo fcinfo); extern Datum vboolvint8le(FunctionCallInfo fcinfo); extern Datum vboolvfloat4eq(FunctionCallInfo fcinfo); extern Datum vboolvfloat4ne(FunctionCallInfo fcinfo); extern Datum vboolvfloat4gt(FunctionCallInfo fcinfo); extern Datum vboolvfloat4ge(FunctionCallInfo fcinfo); extern Datum vboolvfloat4lt(FunctionCallInfo fcinfo); extern Datum vboolvfloat4le(FunctionCallInfo fcinfo); extern Datum vboolvfloat8eq(FunctionCallInfo fcinfo); extern Datum vboolvfloat8ne(FunctionCallInfo fcinfo); extern Datum vboolvfloat8gt(FunctionCallInfo fcinfo); extern Datum vboolvfloat8ge(FunctionCallInfo fcinfo); extern Datum vboolvfloat8lt(FunctionCallInfo fcinfo); extern Datum vboolvfloat8le(FunctionCallInfo fcinfo); extern Datum vboolint2eq(FunctionCallInfo fcinfo); extern Datum vboolint2ne(FunctionCallInfo fcinfo); extern Datum vboolint2gt(FunctionCallInfo fcinfo); extern Datum vboolint2ge(FunctionCallInfo fcinfo); extern Datum vboolint2lt(FunctionCallInfo fcinfo); extern Datum vboolint2le(FunctionCallInfo fcinfo); extern Datum vboolint4eq(FunctionCallInfo fcinfo); extern Datum vboolint4ne(FunctionCallInfo fcinfo); extern Datum vboolint4gt(FunctionCallInfo fcinfo); extern Datum vboolint4ge(FunctionCallInfo fcinfo); extern Datum vboolint4lt(FunctionCallInfo fcinfo); extern Datum vboolint4le(FunctionCallInfo fcinfo); extern Datum vboolint8eq(FunctionCallInfo fcinfo); extern Datum vboolint8ne(FunctionCallInfo fcinfo); extern Datum vboolint8gt(FunctionCallInfo fcinfo); extern Datum vboolint8ge(FunctionCallInfo fcinfo); extern Datum vboolint8lt(FunctionCallInfo fcinfo); extern Datum vboolint8le(FunctionCallInfo fcinfo); extern Datum vboolfloat4eq(FunctionCallInfo fcinfo); extern Datum vboolfloat4ne(FunctionCallInfo fcinfo); extern Datum vboolfloat4gt(FunctionCallInfo fcinfo); extern Datum vboolfloat4ge(FunctionCallInfo fcinfo); extern Datum vboolfloat4lt(FunctionCallInfo fcinfo); extern Datum vboolfloat4le(FunctionCallInfo fcinfo); extern Datum vboolfloat8eq(FunctionCallInfo fcinfo); extern Datum vboolfloat8ne(FunctionCallInfo fcinfo); extern Datum vboolfloat8gt(FunctionCallInfo fcinfo); extern Datum vboolfloat8ge(FunctionCallInfo fcinfo); extern Datum vboolfloat8lt(FunctionCallInfo fcinfo); extern Datum vboolfloat8le(FunctionCallInfo fcinfo); extern Datum vboolin(FunctionCallInfo fcinfo); extern Datum vboolout(FunctionCallInfo fcinfo);

extern vtype* buildvtype(Oid elemtype,int dim,bool *skip);
extern void destroyvtype(vtype** vt);
# 25 "vtype.c" 2




const char canary = 0xe7;

vtype* buildvtype(Oid elemtype,int dim,bool *skip)
{
    vtype *res;
    res = palloc0(((sizeof(vtype)) + (sizeof(Datum) * dim) + sizeof(char) + (sizeof(bool) * dim)));
    res->dim = dim;
    res->elemtype = elemtype;

    *((char*)((unsigned char*)res + (sizeof(vtype)) + (sizeof(Datum) * dim))) = canary;
    res->isnull = ((bool*)((unsigned char*)res + (sizeof(vtype)) + (sizeof(Datum) * res->dim) + sizeof(char)));
    res->skipref = skip;

    (((varattrib_4b *) (res))->va_4byte.va_header = (((uint32) (((sizeof(vtype)) + (sizeof(Datum) * dim) + sizeof(char) + (sizeof(bool) * dim)))) << 2));

    return res;
}

void destroyvtype(vtype** vt)
{
    pfree((*vt));
    *vt = 
# 50 "vtype.c" 3 4
         ((void *)0)
# 50 "vtype.c"
             ;
}
# 345 "vtype.c"
vint2* buildvint2(int dim, bool *skip) { return buildvtype(21, dim, skip); } extern Datum vint2in(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2in(void); const Pg_finfo_record * pg_finfo_vint2in (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2in(FunctionCallInfo fcinfo) { char *intString = ((char *) ((Pointer) ((fcinfo->arg[0])))); vtype *res = 
# 345 "vtype.c" 3 4
((void *)0)
# 345 "vtype.c"
; char tempstr[64] = {0}; int n = 0; res = buildvtype(21,1024,
# 345 "vtype.c" 3 4
((void *)0)
# 345 "vtype.c"
); for (n = 0; *intString && n < 1024; n++) { char *start = 
# 345 "vtype.c" 3 4
((void *)0)
# 345 "vtype.c"
; while (*intString && 
# 345 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 345 "vtype.c"
(unsigned char) *intString
# 345 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 345 "vtype.c"
) intString++; if (*intString == '\0') break; start = intString; while ((*intString && !
# 345 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 345 "vtype.c"
(unsigned char) *intString
# 345 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 345 "vtype.c"
) && *intString != '\0') intString++; do { if (!(intString - start < 64)) ExceptionalCondition("!(intString - start < 64)", ("FailedAssertion"), "vtype.c", 345); } while (0); strncpy(tempstr, start, intString - start); tempstr[intString - start] = 0; res->values[n] = DirectFunctionCall1Coll(int2in, ((Oid) 0), ((Datum) (tempstr))); while (*intString && !
# 345 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 345 "vtype.c"
(unsigned char) *intString
# 345 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 345 "vtype.c"
) intString++; } while (*intString && 
# 345 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 345 "vtype.c"
(unsigned char) *intString
# 345 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 345 "vtype.c"
) intString++; if (*intString) do { if (errstart(20, "vtype.c", 345, __func__, 
# 345 "vtype.c" 3 4
((void *)0)
# 345 "vtype.c"
)) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("int2vector has too many elements")); if (__builtin_constant_p(20) && (20) >= 20) abort(); } while(0); res->elemtype = 21; res->dim = n; (((varattrib_4b *) (res))->va_4byte.va_header = (((uint32) (((sizeof(vtype)) + (sizeof(Datum) * n) + sizeof(char) + (sizeof(bool) * n)))) << 2)); return ((Datum) (res)); } extern Datum vint2out(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2out(void); const Pg_finfo_record * pg_finfo_vint2out (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2out(FunctionCallInfo fcinfo) { vtype * arg1 = (vint2 *) ((Pointer) ((fcinfo->arg[0]))); int len = arg1->dim; int i = 0; char *rp; char *result; rp = result = (char *) palloc0(len * 64 + 1); for (i = 0; i < len; i++) { if (i != 0) *rp++ = ' '; strcat(rp, ((char *) ((Pointer) (DirectFunctionCall1Coll(int2out, ((Oid) 0), arg1->values[i]))))); while (*++rp != '\0'); } *rp = '\0'; return ((Datum) (result)); }
vint4* buildvint4(int dim, bool *skip) { return buildvtype(23, dim, skip); } extern Datum vint4in(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4in(void); const Pg_finfo_record * pg_finfo_vint4in (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4in(FunctionCallInfo fcinfo) { char *intString = ((char *) ((Pointer) ((fcinfo->arg[0])))); vtype *res = 
# 346 "vtype.c" 3 4
((void *)0)
# 346 "vtype.c"
; char tempstr[64] = {0}; int n = 0; res = buildvtype(23,1024,
# 346 "vtype.c" 3 4
((void *)0)
# 346 "vtype.c"
); for (n = 0; *intString && n < 1024; n++) { char *start = 
# 346 "vtype.c" 3 4
((void *)0)
# 346 "vtype.c"
; while (*intString && 
# 346 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 346 "vtype.c"
(unsigned char) *intString
# 346 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 346 "vtype.c"
) intString++; if (*intString == '\0') break; start = intString; while ((*intString && !
# 346 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 346 "vtype.c"
(unsigned char) *intString
# 346 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 346 "vtype.c"
) && *intString != '\0') intString++; do { if (!(intString - start < 64)) ExceptionalCondition("!(intString - start < 64)", ("FailedAssertion"), "vtype.c", 346); } while (0); strncpy(tempstr, start, intString - start); tempstr[intString - start] = 0; res->values[n] = DirectFunctionCall1Coll(int4in, ((Oid) 0), ((Datum) (tempstr))); while (*intString && !
# 346 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 346 "vtype.c"
(unsigned char) *intString
# 346 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 346 "vtype.c"
) intString++; } while (*intString && 
# 346 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 346 "vtype.c"
(unsigned char) *intString
# 346 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 346 "vtype.c"
) intString++; if (*intString) do { if (errstart(20, "vtype.c", 346, __func__, 
# 346 "vtype.c" 3 4
((void *)0)
# 346 "vtype.c"
)) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("int2vector has too many elements")); if (__builtin_constant_p(20) && (20) >= 20) abort(); } while(0); res->elemtype = 23; res->dim = n; (((varattrib_4b *) (res))->va_4byte.va_header = (((uint32) (((sizeof(vtype)) + (sizeof(Datum) * n) + sizeof(char) + (sizeof(bool) * n)))) << 2)); return ((Datum) (res)); } extern Datum vint4out(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4out(void); const Pg_finfo_record * pg_finfo_vint4out (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4out(FunctionCallInfo fcinfo) { vtype * arg1 = (vint4 *) ((Pointer) ((fcinfo->arg[0]))); int len = arg1->dim; int i = 0; char *rp; char *result; rp = result = (char *) palloc0(len * 64 + 1); for (i = 0; i < len; i++) { if (i != 0) *rp++ = ' '; strcat(rp, ((char *) ((Pointer) (DirectFunctionCall1Coll(int4out, ((Oid) 0), arg1->values[i]))))); while (*++rp != '\0'); } *rp = '\0'; return ((Datum) (result)); }
vint8* buildvint8(int dim, bool *skip) { return buildvtype(20, dim, skip); } extern Datum vint8in(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8in(void); const Pg_finfo_record * pg_finfo_vint8in (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8in(FunctionCallInfo fcinfo) { char *intString = ((char *) ((Pointer) ((fcinfo->arg[0])))); vtype *res = 
# 347 "vtype.c" 3 4
((void *)0)
# 347 "vtype.c"
; char tempstr[64] = {0}; int n = 0; res = buildvtype(20,1024,
# 347 "vtype.c" 3 4
((void *)0)
# 347 "vtype.c"
); for (n = 0; *intString && n < 1024; n++) { char *start = 
# 347 "vtype.c" 3 4
((void *)0)
# 347 "vtype.c"
; while (*intString && 
# 347 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 347 "vtype.c"
(unsigned char) *intString
# 347 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 347 "vtype.c"
) intString++; if (*intString == '\0') break; start = intString; while ((*intString && !
# 347 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 347 "vtype.c"
(unsigned char) *intString
# 347 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 347 "vtype.c"
) && *intString != '\0') intString++; do { if (!(intString - start < 64)) ExceptionalCondition("!(intString - start < 64)", ("FailedAssertion"), "vtype.c", 347); } while (0); strncpy(tempstr, start, intString - start); tempstr[intString - start] = 0; res->values[n] = DirectFunctionCall1Coll(int8in, ((Oid) 0), ((Datum) (tempstr))); while (*intString && !
# 347 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 347 "vtype.c"
(unsigned char) *intString
# 347 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 347 "vtype.c"
) intString++; } while (*intString && 
# 347 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 347 "vtype.c"
(unsigned char) *intString
# 347 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 347 "vtype.c"
) intString++; if (*intString) do { if (errstart(20, "vtype.c", 347, __func__, 
# 347 "vtype.c" 3 4
((void *)0)
# 347 "vtype.c"
)) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("int2vector has too many elements")); if (__builtin_constant_p(20) && (20) >= 20) abort(); } while(0); res->elemtype = 20; res->dim = n; (((varattrib_4b *) (res))->va_4byte.va_header = (((uint32) (((sizeof(vtype)) + (sizeof(Datum) * n) + sizeof(char) + (sizeof(bool) * n)))) << 2)); return ((Datum) (res)); } extern Datum vint8out(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8out(void); const Pg_finfo_record * pg_finfo_vint8out (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8out(FunctionCallInfo fcinfo) { vtype * arg1 = (vint8 *) ((Pointer) ((fcinfo->arg[0]))); int len = arg1->dim; int i = 0; char *rp; char *result; rp = result = (char *) palloc0(len * 64 + 1); for (i = 0; i < len; i++) { if (i != 0) *rp++ = ' '; strcat(rp, ((char *) ((Pointer) (DirectFunctionCall1Coll(int8out, ((Oid) 0), arg1->values[i]))))); while (*++rp != '\0'); } *rp = '\0'; return ((Datum) (result)); }
vfloat4* buildvfloat4(int dim, bool *skip) { return buildvtype(700, dim, skip); } extern Datum vfloat4in(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4in(void); const Pg_finfo_record * pg_finfo_vfloat4in (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4in(FunctionCallInfo fcinfo) { char *intString = ((char *) ((Pointer) ((fcinfo->arg[0])))); vtype *res = 
# 348 "vtype.c" 3 4
((void *)0)
# 348 "vtype.c"
; char tempstr[64] = {0}; int n = 0; res = buildvtype(700,1024,
# 348 "vtype.c" 3 4
((void *)0)
# 348 "vtype.c"
); for (n = 0; *intString && n < 1024; n++) { char *start = 
# 348 "vtype.c" 3 4
((void *)0)
# 348 "vtype.c"
; while (*intString && 
# 348 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 348 "vtype.c"
(unsigned char) *intString
# 348 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 348 "vtype.c"
) intString++; if (*intString == '\0') break; start = intString; while ((*intString && !
# 348 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 348 "vtype.c"
(unsigned char) *intString
# 348 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 348 "vtype.c"
) && *intString != '\0') intString++; do { if (!(intString - start < 64)) ExceptionalCondition("!(intString - start < 64)", ("FailedAssertion"), "vtype.c", 348); } while (0); strncpy(tempstr, start, intString - start); tempstr[intString - start] = 0; res->values[n] = DirectFunctionCall1Coll(float4in, ((Oid) 0), ((Datum) (tempstr))); while (*intString && !
# 348 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 348 "vtype.c"
(unsigned char) *intString
# 348 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 348 "vtype.c"
) intString++; } while (*intString && 
# 348 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 348 "vtype.c"
(unsigned char) *intString
# 348 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 348 "vtype.c"
) intString++; if (*intString) do { if (errstart(20, "vtype.c", 348, __func__, 
# 348 "vtype.c" 3 4
((void *)0)
# 348 "vtype.c"
)) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("int2vector has too many elements")); if (__builtin_constant_p(20) && (20) >= 20) abort(); } while(0); res->elemtype = 700; res->dim = n; (((varattrib_4b *) (res))->va_4byte.va_header = (((uint32) (((sizeof(vtype)) + (sizeof(Datum) * n) + sizeof(char) + (sizeof(bool) * n)))) << 2)); return ((Datum) (res)); } extern Datum vfloat4out(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4out(void); const Pg_finfo_record * pg_finfo_vfloat4out (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4out(FunctionCallInfo fcinfo) { vtype * arg1 = (vfloat4 *) ((Pointer) ((fcinfo->arg[0]))); int len = arg1->dim; int i = 0; char *rp; char *result; rp = result = (char *) palloc0(len * 64 + 1); for (i = 0; i < len; i++) { if (i != 0) *rp++ = ' '; strcat(rp, ((char *) ((Pointer) (DirectFunctionCall1Coll(float4out, ((Oid) 0), arg1->values[i]))))); while (*++rp != '\0'); } *rp = '\0'; return ((Datum) (result)); }
vfloat8* buildvfloat8(int dim, bool *skip) { return buildvtype(701, dim, skip); } extern Datum vfloat8in(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8in(void); const Pg_finfo_record * pg_finfo_vfloat8in (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8in(FunctionCallInfo fcinfo) { char *intString = ((char *) ((Pointer) ((fcinfo->arg[0])))); vtype *res = 
# 349 "vtype.c" 3 4
((void *)0)
# 349 "vtype.c"
; char tempstr[64] = {0}; int n = 0; res = buildvtype(701,1024,
# 349 "vtype.c" 3 4
((void *)0)
# 349 "vtype.c"
); for (n = 0; *intString && n < 1024; n++) { char *start = 
# 349 "vtype.c" 3 4
((void *)0)
# 349 "vtype.c"
; while (*intString && 
# 349 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 349 "vtype.c"
(unsigned char) *intString
# 349 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 349 "vtype.c"
) intString++; if (*intString == '\0') break; start = intString; while ((*intString && !
# 349 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 349 "vtype.c"
(unsigned char) *intString
# 349 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 349 "vtype.c"
) && *intString != '\0') intString++; do { if (!(intString - start < 64)) ExceptionalCondition("!(intString - start < 64)", ("FailedAssertion"), "vtype.c", 349); } while (0); strncpy(tempstr, start, intString - start); tempstr[intString - start] = 0; res->values[n] = DirectFunctionCall1Coll(float8in, ((Oid) 0), ((Datum) (tempstr))); while (*intString && !
# 349 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 349 "vtype.c"
(unsigned char) *intString
# 349 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 349 "vtype.c"
) intString++; } while (*intString && 
# 349 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 349 "vtype.c"
(unsigned char) *intString
# 349 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 349 "vtype.c"
) intString++; if (*intString) do { if (errstart(20, "vtype.c", 349, __func__, 
# 349 "vtype.c" 3 4
((void *)0)
# 349 "vtype.c"
)) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("int2vector has too many elements")); if (__builtin_constant_p(20) && (20) >= 20) abort(); } while(0); res->elemtype = 701; res->dim = n; (((varattrib_4b *) (res))->va_4byte.va_header = (((uint32) (((sizeof(vtype)) + (sizeof(Datum) * n) + sizeof(char) + (sizeof(bool) * n)))) << 2)); return ((Datum) (res)); } extern Datum vfloat8out(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8out(void); const Pg_finfo_record * pg_finfo_vfloat8out (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8out(FunctionCallInfo fcinfo) { vtype * arg1 = (vfloat8 *) ((Pointer) ((fcinfo->arg[0]))); int len = arg1->dim; int i = 0; char *rp; char *result; rp = result = (char *) palloc0(len * 64 + 1); for (i = 0; i < len; i++) { if (i != 0) *rp++ = ' '; strcat(rp, ((char *) ((Pointer) (DirectFunctionCall1Coll(float8out, ((Oid) 0), arg1->values[i]))))); while (*++rp != '\0'); } *rp = '\0'; return ((Datum) (result)); }
vbool* buildvbool(int dim, bool *skip) { return buildvtype(16, dim, skip); } extern Datum vboolin(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolin(void); const Pg_finfo_record * pg_finfo_vboolin (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolin(FunctionCallInfo fcinfo) { char *intString = ((char *) ((Pointer) ((fcinfo->arg[0])))); vtype *res = 
# 350 "vtype.c" 3 4
((void *)0)
# 350 "vtype.c"
; char tempstr[64] = {0}; int n = 0; res = buildvtype(16,1024,
# 350 "vtype.c" 3 4
((void *)0)
# 350 "vtype.c"
); for (n = 0; *intString && n < 1024; n++) { char *start = 
# 350 "vtype.c" 3 4
((void *)0)
# 350 "vtype.c"
; while (*intString && 
# 350 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 350 "vtype.c"
(unsigned char) *intString
# 350 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 350 "vtype.c"
) intString++; if (*intString == '\0') break; start = intString; while ((*intString && !
# 350 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 350 "vtype.c"
(unsigned char) *intString
# 350 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 350 "vtype.c"
) && *intString != '\0') intString++; do { if (!(intString - start < 64)) ExceptionalCondition("!(intString - start < 64)", ("FailedAssertion"), "vtype.c", 350); } while (0); strncpy(tempstr, start, intString - start); tempstr[intString - start] = 0; res->values[n] = DirectFunctionCall1Coll(boolin, ((Oid) 0), ((Datum) (tempstr))); while (*intString && !
# 350 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 350 "vtype.c"
(unsigned char) *intString
# 350 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 350 "vtype.c"
) intString++; } while (*intString && 
# 350 "vtype.c" 3 4
((*__ctype_b_loc ())[(int) ((
# 350 "vtype.c"
(unsigned char) *intString
# 350 "vtype.c" 3 4
))] & (unsigned short int) _ISspace)
# 350 "vtype.c"
) intString++; if (*intString) do { if (errstart(20, "vtype.c", 350, __func__, 
# 350 "vtype.c" 3 4
((void *)0)
# 350 "vtype.c"
)) errfinish (errcode((((('2') - '0') & 0x3F) + (((('2') - '0') & 0x3F) << 6) + (((('0') - '0') & 0x3F) << 12) + (((('2') - '0') & 0x3F) << 18) + (((('3') - '0') & 0x3F) << 24))), errmsg("int2vector has too many elements")); if (__builtin_constant_p(20) && (20) >= 20) abort(); } while(0); res->elemtype = 16; res->dim = n; (((varattrib_4b *) (res))->va_4byte.va_header = (((uint32) (((sizeof(vtype)) + (sizeof(Datum) * n) + sizeof(char) + (sizeof(bool) * n)))) << 2)); return ((Datum) (res)); } extern Datum vboolout(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolout(void); const Pg_finfo_record * pg_finfo_vboolout (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolout(FunctionCallInfo fcinfo) { vtype * arg1 = (vbool *) ((Pointer) ((fcinfo->arg[0]))); int len = arg1->dim; int i = 0; char *rp; char *result; rp = result = (char *) palloc0(len * 64 + 1); for (i = 0; i < len; i++) { if (i != 0) *rp++ = ' '; strcat(rp, ((char *) ((Pointer) (DirectFunctionCall1Coll(boolout, ((Oid) 0), arg1->values[i]))))); while (*++rp != '\0'); } *rp = '\0'; return ((Datum) (result)); }

extern Datum vint2vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2pl(void); const Pg_finfo_record * pg_finfo_vint2vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2mi(void); const Pg_finfo_record * pg_finfo_vint2vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2mul(void); const Pg_finfo_record * pg_finfo_vint2vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2div(void); const Pg_finfo_record * pg_finfo_vint2vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4pl(void); const Pg_finfo_record * pg_finfo_vint2vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4mi(void); const Pg_finfo_record * pg_finfo_vint2vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4mul(void); const Pg_finfo_record * pg_finfo_vint2vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4div(void); const Pg_finfo_record * pg_finfo_vint2vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8pl(void); const Pg_finfo_record * pg_finfo_vint2vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + (((int64) ((Datum) (arg2->values[i])))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8mi(void); const Pg_finfo_record * pg_finfo_vint2vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - (((int64) ((Datum) (arg2->values[i])))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8mul(void); const Pg_finfo_record * pg_finfo_vint2vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * (((int64) ((Datum) (arg2->values[i])))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8div(void); const Pg_finfo_record * pg_finfo_vint2vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / (((int64) ((Datum) (arg2->values[i])))))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4pl(void); const Pg_finfo_record * pg_finfo_vint2vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + (DatumGetFloat4(arg2->values[i])))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4mi(void); const Pg_finfo_record * pg_finfo_vint2vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - (DatumGetFloat4(arg2->values[i])))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4mul(void); const Pg_finfo_record * pg_finfo_vint2vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * (DatumGetFloat4(arg2->values[i])))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4div(void); const Pg_finfo_record * pg_finfo_vint2vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / (DatumGetFloat4(arg2->values[i])))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8pl(void); const Pg_finfo_record * pg_finfo_vint2vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + (DatumGetFloat8(arg2->values[i])))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8mi(void); const Pg_finfo_record * pg_finfo_vint2vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - (DatumGetFloat8(arg2->values[i])))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8mul(void); const Pg_finfo_record * pg_finfo_vint2vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * (DatumGetFloat8(arg2->values[i])))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8div(void); const Pg_finfo_record * pg_finfo_vint2vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / (DatumGetFloat8(arg2->values[i])))) & 0x0000ffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2pl(void); const Pg_finfo_record * pg_finfo_vint2int2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2mi(void); const Pg_finfo_record * pg_finfo_vint2int2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2mul(void); const Pg_finfo_record * pg_finfo_vint2int2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2div(void); const Pg_finfo_record * pg_finfo_vint2int2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int2vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint2pl(void); const Pg_finfo_record * pg_finfo_int2vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint2mi(void); const Pg_finfo_record * pg_finfo_int2vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint2mul(void); const Pg_finfo_record * pg_finfo_int2vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint2div(void); const Pg_finfo_record * pg_finfo_int2vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint2int4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4pl(void); const Pg_finfo_record * pg_finfo_vint2int4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4mi(void); const Pg_finfo_record * pg_finfo_vint2int4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4mul(void); const Pg_finfo_record * pg_finfo_vint2int4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4div(void); const Pg_finfo_record * pg_finfo_vint2int4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int4vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint2pl(void); const Pg_finfo_record * pg_finfo_int4vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint2mi(void); const Pg_finfo_record * pg_finfo_int4vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint2mul(void); const Pg_finfo_record * pg_finfo_int4vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint2div(void); const Pg_finfo_record * pg_finfo_int4vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint2int8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8pl(void); const Pg_finfo_record * pg_finfo_vint2int8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8mi(void); const Pg_finfo_record * pg_finfo_vint2int8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8mul(void); const Pg_finfo_record * pg_finfo_vint2int8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8div(void); const Pg_finfo_record * pg_finfo_vint2int8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int8vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint2pl(void); const Pg_finfo_record * pg_finfo_int8vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint2mi(void); const Pg_finfo_record * pg_finfo_int8vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint2mul(void); const Pg_finfo_record * pg_finfo_int8vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint2div(void); const Pg_finfo_record * pg_finfo_int8vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint2float4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4pl(void); const Pg_finfo_record * pg_finfo_vint2float4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4mi(void); const Pg_finfo_record * pg_finfo_vint2float4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4mul(void); const Pg_finfo_record * pg_finfo_vint2float4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4div(void); const Pg_finfo_record * pg_finfo_vint2float4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float4vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint2pl(void); const Pg_finfo_record * pg_finfo_float4vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint2mi(void); const Pg_finfo_record * pg_finfo_float4vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint2mul(void); const Pg_finfo_record * pg_finfo_float4vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint2div(void); const Pg_finfo_record * pg_finfo_float4vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint2float8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8pl(void); const Pg_finfo_record * pg_finfo_vint2float8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) + ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8mi(void); const Pg_finfo_record * pg_finfo_vint2float8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) - ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8mul(void); const Pg_finfo_record * pg_finfo_vint2float8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) * ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8div(void); const Pg_finfo_record * pg_finfo_vint2float8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) / ((int2)arg2))) & 0x0000ffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float8vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint2pl(void); const Pg_finfo_record * pg_finfo_float8vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint2mi(void); const Pg_finfo_record * pg_finfo_float8vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint2mul(void); const Pg_finfo_record * pg_finfo_float8vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint2div(void); const Pg_finfo_record * pg_finfo_float8vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint2 *res = buildvint2(1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int2)arg1) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0x0000ffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint2vint2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2eq(void); const Pg_finfo_record * pg_finfo_vint2vint2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) == (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2ne(void); const Pg_finfo_record * pg_finfo_vint2vint2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) != (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2gt(void); const Pg_finfo_record * pg_finfo_vint2vint2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) > (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2ge(void); const Pg_finfo_record * pg_finfo_vint2vint2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) >= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2lt(void); const Pg_finfo_record * pg_finfo_vint2vint2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) < (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint2le(void); const Pg_finfo_record * pg_finfo_vint2vint2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint2le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) <= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4eq(void); const Pg_finfo_record * pg_finfo_vint2vint4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) == (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4ne(void); const Pg_finfo_record * pg_finfo_vint2vint4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) != (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4gt(void); const Pg_finfo_record * pg_finfo_vint2vint4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) > (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4ge(void); const Pg_finfo_record * pg_finfo_vint2vint4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) >= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4lt(void); const Pg_finfo_record * pg_finfo_vint2vint4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) < (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint4le(void); const Pg_finfo_record * pg_finfo_vint2vint4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) <= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8eq(void); const Pg_finfo_record * pg_finfo_vint2vint8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) == (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8ne(void); const Pg_finfo_record * pg_finfo_vint2vint8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) != (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8gt(void); const Pg_finfo_record * pg_finfo_vint2vint8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) > (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8ge(void); const Pg_finfo_record * pg_finfo_vint2vint8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) >= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8lt(void); const Pg_finfo_record * pg_finfo_vint2vint8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) < (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vint8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vint8le(void); const Pg_finfo_record * pg_finfo_vint2vint8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vint8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) <= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4eq(void); const Pg_finfo_record * pg_finfo_vint2vfloat4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) == (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4ne(void); const Pg_finfo_record * pg_finfo_vint2vfloat4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) != (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4gt(void); const Pg_finfo_record * pg_finfo_vint2vfloat4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) > (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4ge(void); const Pg_finfo_record * pg_finfo_vint2vfloat4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) >= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4lt(void); const Pg_finfo_record * pg_finfo_vint2vfloat4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) < (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat4le(void); const Pg_finfo_record * pg_finfo_vint2vfloat4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) <= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8eq(void); const Pg_finfo_record * pg_finfo_vint2vfloat8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) == (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8ne(void); const Pg_finfo_record * pg_finfo_vint2vfloat8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) != (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8gt(void); const Pg_finfo_record * pg_finfo_vint2vfloat8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) > (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8ge(void); const Pg_finfo_record * pg_finfo_vint2vfloat8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) >= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8lt(void); const Pg_finfo_record * pg_finfo_vint2vfloat8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) < (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2vfloat8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2vfloat8le(void); const Pg_finfo_record * pg_finfo_vint2vfloat8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2vfloat8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 352); } while (0); res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff)) <= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2eq(void); const Pg_finfo_record * pg_finfo_vint2int2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2ne(void); const Pg_finfo_record * pg_finfo_vint2int2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2gt(void); const Pg_finfo_record * pg_finfo_vint2int2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2ge(void); const Pg_finfo_record * pg_finfo_vint2int2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2lt(void); const Pg_finfo_record * pg_finfo_vint2int2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int2le(void); const Pg_finfo_record * pg_finfo_vint2int2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int2le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4eq(void); const Pg_finfo_record * pg_finfo_vint2int4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4ne(void); const Pg_finfo_record * pg_finfo_vint2int4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4gt(void); const Pg_finfo_record * pg_finfo_vint2int4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4ge(void); const Pg_finfo_record * pg_finfo_vint2int4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4lt(void); const Pg_finfo_record * pg_finfo_vint2int4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int4le(void); const Pg_finfo_record * pg_finfo_vint2int4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8eq(void); const Pg_finfo_record * pg_finfo_vint2int8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8ne(void); const Pg_finfo_record * pg_finfo_vint2int8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8gt(void); const Pg_finfo_record * pg_finfo_vint2int8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8ge(void); const Pg_finfo_record * pg_finfo_vint2int8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8lt(void); const Pg_finfo_record * pg_finfo_vint2int8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2int8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2int8le(void); const Pg_finfo_record * pg_finfo_vint2int8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2int8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4eq(void); const Pg_finfo_record * pg_finfo_vint2float4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4ne(void); const Pg_finfo_record * pg_finfo_vint2float4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4gt(void); const Pg_finfo_record * pg_finfo_vint2float4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4ge(void); const Pg_finfo_record * pg_finfo_vint2float4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4lt(void); const Pg_finfo_record * pg_finfo_vint2float4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float4le(void); const Pg_finfo_record * pg_finfo_vint2float4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8eq(void); const Pg_finfo_record * pg_finfo_vint2float8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8ne(void); const Pg_finfo_record * pg_finfo_vint2float8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8gt(void); const Pg_finfo_record * pg_finfo_vint2float8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8ge(void); const Pg_finfo_record * pg_finfo_vint2float8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8lt(void); const Pg_finfo_record * pg_finfo_vint2float8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint2float8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint2float8le(void); const Pg_finfo_record * pg_finfo_vint2float8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint2float8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint2 *arg1 = (vint2*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 352 "vtype.c" 3 4
((void *)0)
# 352 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int16) (((Datum) (arg1->values[i])) & 0x0000ffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); }
extern Datum vint4vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2pl(void); const Pg_finfo_record * pg_finfo_vint4vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2mi(void); const Pg_finfo_record * pg_finfo_vint4vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2mul(void); const Pg_finfo_record * pg_finfo_vint4vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2div(void); const Pg_finfo_record * pg_finfo_vint4vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4pl(void); const Pg_finfo_record * pg_finfo_vint4vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4mi(void); const Pg_finfo_record * pg_finfo_vint4vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4mul(void); const Pg_finfo_record * pg_finfo_vint4vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4div(void); const Pg_finfo_record * pg_finfo_vint4vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8pl(void); const Pg_finfo_record * pg_finfo_vint4vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + (((int64) ((Datum) (arg2->values[i])))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8mi(void); const Pg_finfo_record * pg_finfo_vint4vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - (((int64) ((Datum) (arg2->values[i])))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8mul(void); const Pg_finfo_record * pg_finfo_vint4vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * (((int64) ((Datum) (arg2->values[i])))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8div(void); const Pg_finfo_record * pg_finfo_vint4vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / (((int64) ((Datum) (arg2->values[i])))))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4pl(void); const Pg_finfo_record * pg_finfo_vint4vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + (DatumGetFloat4(arg2->values[i])))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4mi(void); const Pg_finfo_record * pg_finfo_vint4vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - (DatumGetFloat4(arg2->values[i])))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4mul(void); const Pg_finfo_record * pg_finfo_vint4vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * (DatumGetFloat4(arg2->values[i])))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4div(void); const Pg_finfo_record * pg_finfo_vint4vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / (DatumGetFloat4(arg2->values[i])))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8pl(void); const Pg_finfo_record * pg_finfo_vint4vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + (DatumGetFloat8(arg2->values[i])))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8mi(void); const Pg_finfo_record * pg_finfo_vint4vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - (DatumGetFloat8(arg2->values[i])))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8mul(void); const Pg_finfo_record * pg_finfo_vint4vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * (DatumGetFloat8(arg2->values[i])))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8div(void); const Pg_finfo_record * pg_finfo_vint4vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / (DatumGetFloat8(arg2->values[i])))) & 0xffffffff)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2pl(void); const Pg_finfo_record * pg_finfo_vint4int2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2mi(void); const Pg_finfo_record * pg_finfo_vint4int2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2mul(void); const Pg_finfo_record * pg_finfo_vint4int2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2div(void); const Pg_finfo_record * pg_finfo_vint4int2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int2vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint4pl(void); const Pg_finfo_record * pg_finfo_int2vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint4mi(void); const Pg_finfo_record * pg_finfo_int2vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint4mul(void); const Pg_finfo_record * pg_finfo_int2vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint4div(void); const Pg_finfo_record * pg_finfo_int2vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint4int4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4pl(void); const Pg_finfo_record * pg_finfo_vint4int4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable;

Datum
vint4int4pl(FunctionCallInfo fcinfo)
{
	int size = 0;
	int i = 0;
	vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0])));
	int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff));
	vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
							((void *)0)
# 353 "vtype.c"
						   );
	size = arg1->dim;
	while(i < size)
	{
		res->isnull[i] = arg1->isnull[i];
		if(!res->isnull[i])
			res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + ((int4)arg2))) & 0xffffffff));
		i ++ ;
	} res->dim = arg1->dim;
	return ((Datum) (res));
}

extern Datum vint4int4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4mi(void); const Pg_finfo_record * pg_finfo_vint4int4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4mul(void); const Pg_finfo_record * pg_finfo_vint4int4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4div(void); const Pg_finfo_record * pg_finfo_vint4int4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int4vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint4pl(void); const Pg_finfo_record * pg_finfo_int4vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint4mi(void); const Pg_finfo_record * pg_finfo_int4vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint4mul(void); const Pg_finfo_record * pg_finfo_int4vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint4div(void); const Pg_finfo_record * pg_finfo_int4vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint4int8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8pl(void); const Pg_finfo_record * pg_finfo_vint4int8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8mi(void); const Pg_finfo_record * pg_finfo_vint4int8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8mul(void); const Pg_finfo_record * pg_finfo_vint4int8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8div(void); const Pg_finfo_record * pg_finfo_vint4int8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int8vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint4pl(void); const Pg_finfo_record * pg_finfo_int8vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint4mi(void); const Pg_finfo_record * pg_finfo_int8vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint4mul(void); const Pg_finfo_record * pg_finfo_int8vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint4div(void); const Pg_finfo_record * pg_finfo_int8vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint4float4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4pl(void); const Pg_finfo_record * pg_finfo_vint4float4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4mi(void); const Pg_finfo_record * pg_finfo_vint4float4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4mul(void); const Pg_finfo_record * pg_finfo_vint4float4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4div(void); const Pg_finfo_record * pg_finfo_vint4float4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float4vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint4pl(void); const Pg_finfo_record * pg_finfo_float4vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint4mi(void); const Pg_finfo_record * pg_finfo_float4vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint4mul(void); const Pg_finfo_record * pg_finfo_float4vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint4div(void); const Pg_finfo_record * pg_finfo_float4vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint4float8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8pl(void); const Pg_finfo_record * pg_finfo_vint4float8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) + ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8mi(void); const Pg_finfo_record * pg_finfo_vint4float8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) - ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8mul(void); const Pg_finfo_record * pg_finfo_vint4float8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) * ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8div(void); const Pg_finfo_record * pg_finfo_vint4float8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) / ((int4)arg2))) & 0xffffffff)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float8vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint4pl(void); const Pg_finfo_record * pg_finfo_float8vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint4mi(void); const Pg_finfo_record * pg_finfo_float8vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint4mul(void); const Pg_finfo_record * pg_finfo_float8vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint4div(void); const Pg_finfo_record * pg_finfo_float8vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint4 *res = buildvint4(1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((Datum) (((int4)arg1) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff))))) & 0xffffffff)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint4vint2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2eq(void); const Pg_finfo_record * pg_finfo_vint4vint2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) == (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2ne(void); const Pg_finfo_record * pg_finfo_vint4vint2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) != (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2gt(void); const Pg_finfo_record * pg_finfo_vint4vint2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) > (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2ge(void); const Pg_finfo_record * pg_finfo_vint4vint2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) >= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2lt(void); const Pg_finfo_record * pg_finfo_vint4vint2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) < (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint2le(void); const Pg_finfo_record * pg_finfo_vint4vint2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint2le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) <= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4eq(void); const Pg_finfo_record * pg_finfo_vint4vint4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) == (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4ne(void); const Pg_finfo_record * pg_finfo_vint4vint4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) != (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4gt(void); const Pg_finfo_record * pg_finfo_vint4vint4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) > (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4ge(void); const Pg_finfo_record * pg_finfo_vint4vint4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) >= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4lt(void); const Pg_finfo_record * pg_finfo_vint4vint4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) < (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint4le(void); const Pg_finfo_record * pg_finfo_vint4vint4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) <= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8eq(void); const Pg_finfo_record * pg_finfo_vint4vint8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) == (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8ne(void); const Pg_finfo_record * pg_finfo_vint4vint8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) != (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8gt(void); const Pg_finfo_record * pg_finfo_vint4vint8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) > (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8ge(void); const Pg_finfo_record * pg_finfo_vint4vint8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) >= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8lt(void); const Pg_finfo_record * pg_finfo_vint4vint8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) < (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vint8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vint8le(void); const Pg_finfo_record * pg_finfo_vint4vint8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vint8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) <= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4eq(void); const Pg_finfo_record * pg_finfo_vint4vfloat4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) == (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4ne(void); const Pg_finfo_record * pg_finfo_vint4vfloat4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) != (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4gt(void); const Pg_finfo_record * pg_finfo_vint4vfloat4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) > (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4ge(void); const Pg_finfo_record * pg_finfo_vint4vfloat4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) >= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4lt(void); const Pg_finfo_record * pg_finfo_vint4vfloat4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) < (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat4le(void); const Pg_finfo_record * pg_finfo_vint4vfloat4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) <= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8eq(void); const Pg_finfo_record * pg_finfo_vint4vfloat8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) == (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8ne(void); const Pg_finfo_record * pg_finfo_vint4vfloat8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) != (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8gt(void); const Pg_finfo_record * pg_finfo_vint4vfloat8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) > (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8ge(void); const Pg_finfo_record * pg_finfo_vint4vfloat8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) >= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8lt(void); const Pg_finfo_record * pg_finfo_vint4vfloat8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) < (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4vfloat8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4vfloat8le(void); const Pg_finfo_record * pg_finfo_vint4vfloat8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4vfloat8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 353); } while (0); res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int32) (((Datum) (arg1->values[i])) & 0xffffffff)) <= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2eq(void); const Pg_finfo_record * pg_finfo_vint4int2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2ne(void); const Pg_finfo_record * pg_finfo_vint4int2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2gt(void); const Pg_finfo_record * pg_finfo_vint4int2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2ge(void); const Pg_finfo_record * pg_finfo_vint4int2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2lt(void); const Pg_finfo_record * pg_finfo_vint4int2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int2le(void); const Pg_finfo_record * pg_finfo_vint4int2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int2le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4eq(void); const Pg_finfo_record * pg_finfo_vint4int4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4ne(void); const Pg_finfo_record * pg_finfo_vint4int4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4gt(void); const Pg_finfo_record * pg_finfo_vint4int4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4ge(void); const Pg_finfo_record * pg_finfo_vint4int4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4lt(void); const Pg_finfo_record * pg_finfo_vint4int4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int4le(void); const Pg_finfo_record * pg_finfo_vint4int4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8eq(void); const Pg_finfo_record * pg_finfo_vint4int8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8ne(void); const Pg_finfo_record * pg_finfo_vint4int8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8gt(void); const Pg_finfo_record * pg_finfo_vint4int8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8ge(void); const Pg_finfo_record * pg_finfo_vint4int8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8lt(void); const Pg_finfo_record * pg_finfo_vint4int8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4int8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4int8le(void); const Pg_finfo_record * pg_finfo_vint4int8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4int8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4eq(void); const Pg_finfo_record * pg_finfo_vint4float4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4ne(void); const Pg_finfo_record * pg_finfo_vint4float4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4gt(void); const Pg_finfo_record * pg_finfo_vint4float4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4ge(void); const Pg_finfo_record * pg_finfo_vint4float4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4lt(void); const Pg_finfo_record * pg_finfo_vint4float4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float4le(void); const Pg_finfo_record * pg_finfo_vint4float4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8eq(void); const Pg_finfo_record * pg_finfo_vint4float8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8ne(void); const Pg_finfo_record * pg_finfo_vint4float8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8gt(void); const Pg_finfo_record * pg_finfo_vint4float8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8ge(void); const Pg_finfo_record * pg_finfo_vint4float8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8lt(void); const Pg_finfo_record * pg_finfo_vint4float8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint4float8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint4float8le(void); const Pg_finfo_record * pg_finfo_vint4float8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint4float8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint4 *arg1 = (vint4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 353 "vtype.c" 3 4
((void *)0)
# 353 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int32) (((Datum) (arg1->values[i])) & 0xffffffff))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); }
extern Datum vint8vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2pl(void); const Pg_finfo_record * pg_finfo_vint8vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2mi(void); const Pg_finfo_record * pg_finfo_vint8vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2mul(void); const Pg_finfo_record * pg_finfo_vint8vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2div(void); const Pg_finfo_record * pg_finfo_vint8vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4pl(void); const Pg_finfo_record * pg_finfo_vint8vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4mi(void); const Pg_finfo_record * pg_finfo_vint8vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4mul(void); const Pg_finfo_record * pg_finfo_vint8vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4div(void); const Pg_finfo_record * pg_finfo_vint8vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8pl(void); const Pg_finfo_record * pg_finfo_vint8vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + (((int64) ((Datum) (arg2->values[i]))))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8mi(void); const Pg_finfo_record * pg_finfo_vint8vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - (((int64) ((Datum) (arg2->values[i]))))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8mul(void); const Pg_finfo_record * pg_finfo_vint8vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * (((int64) ((Datum) (arg2->values[i]))))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8div(void); const Pg_finfo_record * pg_finfo_vint8vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / (((int64) ((Datum) (arg2->values[i]))))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4pl(void); const Pg_finfo_record * pg_finfo_vint8vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + (DatumGetFloat4(arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4mi(void); const Pg_finfo_record * pg_finfo_vint8vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - (DatumGetFloat4(arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4mul(void); const Pg_finfo_record * pg_finfo_vint8vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * (DatumGetFloat4(arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4div(void); const Pg_finfo_record * pg_finfo_vint8vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / (DatumGetFloat4(arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8pl(void); const Pg_finfo_record * pg_finfo_vint8vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + (DatumGetFloat8(arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8mi(void); const Pg_finfo_record * pg_finfo_vint8vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - (DatumGetFloat8(arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8mul(void); const Pg_finfo_record * pg_finfo_vint8vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * (DatumGetFloat8(arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8div(void); const Pg_finfo_record * pg_finfo_vint8vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / (DatumGetFloat8(arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2pl(void); const Pg_finfo_record * pg_finfo_vint8int2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2mi(void); const Pg_finfo_record * pg_finfo_vint8int2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2mul(void); const Pg_finfo_record * pg_finfo_vint8int2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2div(void); const Pg_finfo_record * pg_finfo_vint8int2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int2vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint8pl(void); const Pg_finfo_record * pg_finfo_int2vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) + (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint8mi(void); const Pg_finfo_record * pg_finfo_int2vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) - (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint8mul(void); const Pg_finfo_record * pg_finfo_int2vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) * (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vint8div(void); const Pg_finfo_record * pg_finfo_int2vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) / (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint8int4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4pl(void); const Pg_finfo_record * pg_finfo_vint8int4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4mi(void); const Pg_finfo_record * pg_finfo_vint8int4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4mul(void); const Pg_finfo_record * pg_finfo_vint8int4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4div(void); const Pg_finfo_record * pg_finfo_vint8int4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int4vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint8pl(void); const Pg_finfo_record * pg_finfo_int4vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) + (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint8mi(void); const Pg_finfo_record * pg_finfo_int4vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) - (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint8mul(void); const Pg_finfo_record * pg_finfo_int4vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) * (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vint8div(void); const Pg_finfo_record * pg_finfo_int4vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) / (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint8int8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8pl(void); const Pg_finfo_record * pg_finfo_vint8int8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8mi(void); const Pg_finfo_record * pg_finfo_vint8int8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8mul(void); const Pg_finfo_record * pg_finfo_vint8int8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8div(void); const Pg_finfo_record * pg_finfo_vint8int8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int8vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint8pl(void); const Pg_finfo_record * pg_finfo_int8vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) + (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint8mi(void); const Pg_finfo_record * pg_finfo_int8vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) - (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint8mul(void); const Pg_finfo_record * pg_finfo_int8vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) * (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vint8div(void); const Pg_finfo_record * pg_finfo_int8vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) / (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint8float4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4pl(void); const Pg_finfo_record * pg_finfo_vint8float4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4mi(void); const Pg_finfo_record * pg_finfo_vint8float4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4mul(void); const Pg_finfo_record * pg_finfo_vint8float4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4div(void); const Pg_finfo_record * pg_finfo_vint8float4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float4vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint8pl(void); const Pg_finfo_record * pg_finfo_float4vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) + (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint8mi(void); const Pg_finfo_record * pg_finfo_float4vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) - (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint8mul(void); const Pg_finfo_record * pg_finfo_float4vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) * (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vint8div(void); const Pg_finfo_record * pg_finfo_float4vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) / (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint8float8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8pl(void); const Pg_finfo_record * pg_finfo_vint8float8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) + ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8mi(void); const Pg_finfo_record * pg_finfo_vint8float8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) - ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8mul(void); const Pg_finfo_record * pg_finfo_vint8float8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) * ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8div(void); const Pg_finfo_record * pg_finfo_vint8float8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) ((((int64) ((Datum) (arg1->values[i])))) / ((int8)arg2)))); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float8vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint8pl(void); const Pg_finfo_record * pg_finfo_float8vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) + (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint8mi(void); const Pg_finfo_record * pg_finfo_float8vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) - (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint8mul(void); const Pg_finfo_record * pg_finfo_float8vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) * (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vint8div(void); const Pg_finfo_record * pg_finfo_float8vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vint8 *res = buildvint8(1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((Datum) (((int8)arg1) / (((int64) ((Datum) (arg2->values[i]))))))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vint8vint2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2eq(void); const Pg_finfo_record * pg_finfo_vint8vint2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) == (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2ne(void); const Pg_finfo_record * pg_finfo_vint8vint2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) != (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2gt(void); const Pg_finfo_record * pg_finfo_vint8vint2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) > (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2ge(void); const Pg_finfo_record * pg_finfo_vint8vint2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) >= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2lt(void); const Pg_finfo_record * pg_finfo_vint8vint2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) < (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint2le(void); const Pg_finfo_record * pg_finfo_vint8vint2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint2le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) <= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4eq(void); const Pg_finfo_record * pg_finfo_vint8vint4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) == (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4ne(void); const Pg_finfo_record * pg_finfo_vint8vint4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) != (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4gt(void); const Pg_finfo_record * pg_finfo_vint8vint4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) > (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4ge(void); const Pg_finfo_record * pg_finfo_vint8vint4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) >= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4lt(void); const Pg_finfo_record * pg_finfo_vint8vint4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) < (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint4le(void); const Pg_finfo_record * pg_finfo_vint8vint4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) <= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8eq(void); const Pg_finfo_record * pg_finfo_vint8vint8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) == (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8ne(void); const Pg_finfo_record * pg_finfo_vint8vint8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) != (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8gt(void); const Pg_finfo_record * pg_finfo_vint8vint8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) > (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8ge(void); const Pg_finfo_record * pg_finfo_vint8vint8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) >= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8lt(void); const Pg_finfo_record * pg_finfo_vint8vint8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) < (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vint8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vint8le(void); const Pg_finfo_record * pg_finfo_vint8vint8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vint8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) <= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4eq(void); const Pg_finfo_record * pg_finfo_vint8vfloat4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) == (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4ne(void); const Pg_finfo_record * pg_finfo_vint8vfloat4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) != (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4gt(void); const Pg_finfo_record * pg_finfo_vint8vfloat4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) > (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4ge(void); const Pg_finfo_record * pg_finfo_vint8vfloat4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) >= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4lt(void); const Pg_finfo_record * pg_finfo_vint8vfloat4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) < (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat4le(void); const Pg_finfo_record * pg_finfo_vint8vfloat4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) <= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8eq(void); const Pg_finfo_record * pg_finfo_vint8vfloat8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) == (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8ne(void); const Pg_finfo_record * pg_finfo_vint8vfloat8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) != (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8gt(void); const Pg_finfo_record * pg_finfo_vint8vfloat8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) > (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8ge(void); const Pg_finfo_record * pg_finfo_vint8vfloat8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) >= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8lt(void); const Pg_finfo_record * pg_finfo_vint8vfloat8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) < (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8vfloat8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8vfloat8le(void); const Pg_finfo_record * pg_finfo_vint8vfloat8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8vfloat8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 354); } while (0); res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((int64) ((Datum) (arg1->values[i]))) <= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2eq(void); const Pg_finfo_record * pg_finfo_vint8int2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2ne(void); const Pg_finfo_record * pg_finfo_vint8int2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2gt(void); const Pg_finfo_record * pg_finfo_vint8int2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2ge(void); const Pg_finfo_record * pg_finfo_vint8int2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2lt(void); const Pg_finfo_record * pg_finfo_vint8int2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int2le(void); const Pg_finfo_record * pg_finfo_vint8int2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int2le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4eq(void); const Pg_finfo_record * pg_finfo_vint8int4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4ne(void); const Pg_finfo_record * pg_finfo_vint8int4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4gt(void); const Pg_finfo_record * pg_finfo_vint8int4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4ge(void); const Pg_finfo_record * pg_finfo_vint8int4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4lt(void); const Pg_finfo_record * pg_finfo_vint8int4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int4le(void); const Pg_finfo_record * pg_finfo_vint8int4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8eq(void); const Pg_finfo_record * pg_finfo_vint8int8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8ne(void); const Pg_finfo_record * pg_finfo_vint8int8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8gt(void); const Pg_finfo_record * pg_finfo_vint8int8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8ge(void); const Pg_finfo_record * pg_finfo_vint8int8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8lt(void); const Pg_finfo_record * pg_finfo_vint8int8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8int8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8int8le(void); const Pg_finfo_record * pg_finfo_vint8int8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8int8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4eq(void); const Pg_finfo_record * pg_finfo_vint8float4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4ne(void); const Pg_finfo_record * pg_finfo_vint8float4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4gt(void); const Pg_finfo_record * pg_finfo_vint8float4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4ge(void); const Pg_finfo_record * pg_finfo_vint8float4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4lt(void); const Pg_finfo_record * pg_finfo_vint8float4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float4le(void); const Pg_finfo_record * pg_finfo_vint8float4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8eq(void); const Pg_finfo_record * pg_finfo_vint8float8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8ne(void); const Pg_finfo_record * pg_finfo_vint8float8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8gt(void); const Pg_finfo_record * pg_finfo_vint8float8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8ge(void); const Pg_finfo_record * pg_finfo_vint8float8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8lt(void); const Pg_finfo_record * pg_finfo_vint8float8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vint8float8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vint8float8le(void); const Pg_finfo_record * pg_finfo_vint8float8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vint8float8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vint8 *arg1 = (vint8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 354 "vtype.c" 3 4
((void *)0)
# 354 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((int64) ((Datum) (arg1->values[i])))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); }
extern Datum vfloat4vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2pl(void); const Pg_finfo_record * pg_finfo_vfloat4vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2mi(void); const Pg_finfo_record * pg_finfo_vfloat4vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2mul(void); const Pg_finfo_record * pg_finfo_vfloat4vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2div(void); const Pg_finfo_record * pg_finfo_vfloat4vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4pl(void); const Pg_finfo_record * pg_finfo_vfloat4vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4mi(void); const Pg_finfo_record * pg_finfo_vfloat4vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4mul(void); const Pg_finfo_record * pg_finfo_vfloat4vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4div(void); const Pg_finfo_record * pg_finfo_vfloat4vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8pl(void); const Pg_finfo_record * pg_finfo_vfloat4vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + (((int64) ((Datum) (arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8mi(void); const Pg_finfo_record * pg_finfo_vfloat4vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - (((int64) ((Datum) (arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8mul(void); const Pg_finfo_record * pg_finfo_vfloat4vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * (((int64) ((Datum) (arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8div(void); const Pg_finfo_record * pg_finfo_vfloat4vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / (((int64) ((Datum) (arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4pl(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + (DatumGetFloat4(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4mi(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - (DatumGetFloat4(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4mul(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * (DatumGetFloat4(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4div(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / (DatumGetFloat4(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8pl(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + (DatumGetFloat8(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8mi(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - (DatumGetFloat8(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8mul(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * (DatumGetFloat8(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8div(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / (DatumGetFloat8(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2pl(void); const Pg_finfo_record * pg_finfo_vfloat4int2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2mi(void); const Pg_finfo_record * pg_finfo_vfloat4int2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2mul(void); const Pg_finfo_record * pg_finfo_vfloat4int2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2div(void); const Pg_finfo_record * pg_finfo_vfloat4int2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int2vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vfloat4pl(void); const Pg_finfo_record * pg_finfo_int2vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) + (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vfloat4mi(void); const Pg_finfo_record * pg_finfo_int2vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) - (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vfloat4mul(void); const Pg_finfo_record * pg_finfo_int2vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) * (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vfloat4div(void); const Pg_finfo_record * pg_finfo_int2vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) / (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat4int4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4pl(void); const Pg_finfo_record * pg_finfo_vfloat4int4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4mi(void); const Pg_finfo_record * pg_finfo_vfloat4int4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4mul(void); const Pg_finfo_record * pg_finfo_vfloat4int4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4div(void); const Pg_finfo_record * pg_finfo_vfloat4int4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int4vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vfloat4pl(void); const Pg_finfo_record * pg_finfo_int4vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) + (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vfloat4mi(void); const Pg_finfo_record * pg_finfo_int4vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) - (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vfloat4mul(void); const Pg_finfo_record * pg_finfo_int4vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) * (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vfloat4div(void); const Pg_finfo_record * pg_finfo_int4vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) / (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat4int8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8pl(void); const Pg_finfo_record * pg_finfo_vfloat4int8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8mi(void); const Pg_finfo_record * pg_finfo_vfloat4int8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8mul(void); const Pg_finfo_record * pg_finfo_vfloat4int8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8div(void); const Pg_finfo_record * pg_finfo_vfloat4int8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int8vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vfloat4pl(void); const Pg_finfo_record * pg_finfo_int8vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) + (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vfloat4mi(void); const Pg_finfo_record * pg_finfo_int8vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) - (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vfloat4mul(void); const Pg_finfo_record * pg_finfo_int8vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) * (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vfloat4div(void); const Pg_finfo_record * pg_finfo_int8vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) / (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat4float4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4pl(void); const Pg_finfo_record * pg_finfo_vfloat4float4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4mi(void); const Pg_finfo_record * pg_finfo_vfloat4float4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4mul(void); const Pg_finfo_record * pg_finfo_vfloat4float4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4div(void); const Pg_finfo_record * pg_finfo_vfloat4float4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float4vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vfloat4pl(void); const Pg_finfo_record * pg_finfo_float4vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) + (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vfloat4mi(void); const Pg_finfo_record * pg_finfo_float4vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) - (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vfloat4mul(void); const Pg_finfo_record * pg_finfo_float4vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) * (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vfloat4div(void); const Pg_finfo_record * pg_finfo_float4vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) / (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat4float8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8pl(void); const Pg_finfo_record * pg_finfo_vfloat4float8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) + ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8mi(void); const Pg_finfo_record * pg_finfo_vfloat4float8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) - ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8mul(void); const Pg_finfo_record * pg_finfo_vfloat4float8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) * ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8div(void); const Pg_finfo_record * pg_finfo_vfloat4float8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum((DatumGetFloat4(arg1->values[i])) / ((float4)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float8vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vfloat4pl(void); const Pg_finfo_record * pg_finfo_float8vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) + (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vfloat4mi(void); const Pg_finfo_record * pg_finfo_float8vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) - (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vfloat4mul(void); const Pg_finfo_record * pg_finfo_float8vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) * (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vfloat4div(void); const Pg_finfo_record * pg_finfo_float8vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat4 *res = buildvfloat4(1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float4GetDatum(((float4)arg1) / (DatumGetFloat4(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat4vint2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2eq(void); const Pg_finfo_record * pg_finfo_vfloat4vint2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) == (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2ne(void); const Pg_finfo_record * pg_finfo_vfloat4vint2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) != (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2gt(void); const Pg_finfo_record * pg_finfo_vfloat4vint2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) > (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2ge(void); const Pg_finfo_record * pg_finfo_vfloat4vint2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) >= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2lt(void); const Pg_finfo_record * pg_finfo_vfloat4vint2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) < (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint2le(void); const Pg_finfo_record * pg_finfo_vfloat4vint2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint2le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) <= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4eq(void); const Pg_finfo_record * pg_finfo_vfloat4vint4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) == (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4ne(void); const Pg_finfo_record * pg_finfo_vfloat4vint4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) != (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4gt(void); const Pg_finfo_record * pg_finfo_vfloat4vint4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) > (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4ge(void); const Pg_finfo_record * pg_finfo_vfloat4vint4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) >= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4lt(void); const Pg_finfo_record * pg_finfo_vfloat4vint4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) < (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint4le(void); const Pg_finfo_record * pg_finfo_vfloat4vint4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) <= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8eq(void); const Pg_finfo_record * pg_finfo_vfloat4vint8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) == (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8ne(void); const Pg_finfo_record * pg_finfo_vfloat4vint8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) != (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8gt(void); const Pg_finfo_record * pg_finfo_vfloat4vint8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) > (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8ge(void); const Pg_finfo_record * pg_finfo_vfloat4vint8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) >= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8lt(void); const Pg_finfo_record * pg_finfo_vfloat4vint8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) < (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vint8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vint8le(void); const Pg_finfo_record * pg_finfo_vfloat4vint8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vint8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) <= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4eq(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) == (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4ne(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) != (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4gt(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) > (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4ge(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) >= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4lt(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) < (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat4le(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) <= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8eq(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) == (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8ne(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) != (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8gt(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) > (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8ge(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) >= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8lt(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) < (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4vfloat8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4vfloat8le(void); const Pg_finfo_record * pg_finfo_vfloat4vfloat8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4vfloat8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 355); } while (0); res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat4(arg1->values[i]) <= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2eq(void); const Pg_finfo_record * pg_finfo_vfloat4int2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2ne(void); const Pg_finfo_record * pg_finfo_vfloat4int2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2gt(void); const Pg_finfo_record * pg_finfo_vfloat4int2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2ge(void); const Pg_finfo_record * pg_finfo_vfloat4int2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2lt(void); const Pg_finfo_record * pg_finfo_vfloat4int2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int2le(void); const Pg_finfo_record * pg_finfo_vfloat4int2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int2le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4eq(void); const Pg_finfo_record * pg_finfo_vfloat4int4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4ne(void); const Pg_finfo_record * pg_finfo_vfloat4int4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4gt(void); const Pg_finfo_record * pg_finfo_vfloat4int4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4ge(void); const Pg_finfo_record * pg_finfo_vfloat4int4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4lt(void); const Pg_finfo_record * pg_finfo_vfloat4int4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int4le(void); const Pg_finfo_record * pg_finfo_vfloat4int4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8eq(void); const Pg_finfo_record * pg_finfo_vfloat4int8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8ne(void); const Pg_finfo_record * pg_finfo_vfloat4int8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8gt(void); const Pg_finfo_record * pg_finfo_vfloat4int8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8ge(void); const Pg_finfo_record * pg_finfo_vfloat4int8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8lt(void); const Pg_finfo_record * pg_finfo_vfloat4int8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4int8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4int8le(void); const Pg_finfo_record * pg_finfo_vfloat4int8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4int8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4eq(void); const Pg_finfo_record * pg_finfo_vfloat4float4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4ne(void); const Pg_finfo_record * pg_finfo_vfloat4float4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4gt(void); const Pg_finfo_record * pg_finfo_vfloat4float4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4ge(void); const Pg_finfo_record * pg_finfo_vfloat4float4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4lt(void); const Pg_finfo_record * pg_finfo_vfloat4float4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float4le(void); const Pg_finfo_record * pg_finfo_vfloat4float4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8eq(void); const Pg_finfo_record * pg_finfo_vfloat4float8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8ne(void); const Pg_finfo_record * pg_finfo_vfloat4float8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8gt(void); const Pg_finfo_record * pg_finfo_vfloat4float8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8ge(void); const Pg_finfo_record * pg_finfo_vfloat4float8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8lt(void); const Pg_finfo_record * pg_finfo_vfloat4float8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat4float8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat4float8le(void); const Pg_finfo_record * pg_finfo_vfloat4float8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat4float8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat4 *arg1 = (vfloat4*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 355 "vtype.c" 3 4
((void *)0)
# 355 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat4(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); }
extern Datum vfloat8vint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2pl(void); const Pg_finfo_record * pg_finfo_vfloat8vint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2mi(void); const Pg_finfo_record * pg_finfo_vfloat8vint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2mul(void); const Pg_finfo_record * pg_finfo_vfloat8vint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2div(void); const Pg_finfo_record * pg_finfo_vfloat8vint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4pl(void); const Pg_finfo_record * pg_finfo_vfloat8vint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4mi(void); const Pg_finfo_record * pg_finfo_vfloat8vint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4mul(void); const Pg_finfo_record * pg_finfo_vfloat8vint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4div(void); const Pg_finfo_record * pg_finfo_vfloat8vint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8pl(void); const Pg_finfo_record * pg_finfo_vfloat8vint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + (((int64) ((Datum) (arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8mi(void); const Pg_finfo_record * pg_finfo_vfloat8vint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - (((int64) ((Datum) (arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8mul(void); const Pg_finfo_record * pg_finfo_vfloat8vint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * (((int64) ((Datum) (arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8div(void); const Pg_finfo_record * pg_finfo_vfloat8vint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / (((int64) ((Datum) (arg2->values[i]))))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4pl(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + (DatumGetFloat4(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4mi(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - (DatumGetFloat4(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4mul(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * (DatumGetFloat4(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4div(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / (DatumGetFloat4(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8pl(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + (DatumGetFloat8(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8mi(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - (DatumGetFloat8(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8mul(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * (DatumGetFloat8(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8div(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / (DatumGetFloat8(arg2->values[i]))); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2pl(void); const Pg_finfo_record * pg_finfo_vfloat8int2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2mi(void); const Pg_finfo_record * pg_finfo_vfloat8int2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2mul(void); const Pg_finfo_record * pg_finfo_vfloat8int2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2div(void); const Pg_finfo_record * pg_finfo_vfloat8int2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int2vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vfloat8pl(void); const Pg_finfo_record * pg_finfo_int2vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) + (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vfloat8mi(void); const Pg_finfo_record * pg_finfo_int2vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) - (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vfloat8mul(void); const Pg_finfo_record * pg_finfo_int2vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) * (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vfloat8div(void); const Pg_finfo_record * pg_finfo_int2vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) / (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat8int4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4pl(void); const Pg_finfo_record * pg_finfo_vfloat8int4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4mi(void); const Pg_finfo_record * pg_finfo_vfloat8int4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4mul(void); const Pg_finfo_record * pg_finfo_vfloat8int4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4div(void); const Pg_finfo_record * pg_finfo_vfloat8int4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int4vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vfloat8pl(void); const Pg_finfo_record * pg_finfo_int4vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) + (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vfloat8mi(void); const Pg_finfo_record * pg_finfo_int4vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) - (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vfloat8mul(void); const Pg_finfo_record * pg_finfo_int4vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) * (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vfloat8div(void); const Pg_finfo_record * pg_finfo_int4vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) / (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat8int8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8pl(void); const Pg_finfo_record * pg_finfo_vfloat8int8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8mi(void); const Pg_finfo_record * pg_finfo_vfloat8int8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8mul(void); const Pg_finfo_record * pg_finfo_vfloat8int8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8div(void); const Pg_finfo_record * pg_finfo_vfloat8int8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int8vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vfloat8pl(void); const Pg_finfo_record * pg_finfo_int8vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) + (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vfloat8mi(void); const Pg_finfo_record * pg_finfo_int8vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) - (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vfloat8mul(void); const Pg_finfo_record * pg_finfo_int8vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) * (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vfloat8div(void); const Pg_finfo_record * pg_finfo_int8vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) / (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat8float4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4pl(void); const Pg_finfo_record * pg_finfo_vfloat8float4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4mi(void); const Pg_finfo_record * pg_finfo_vfloat8float4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4mul(void); const Pg_finfo_record * pg_finfo_vfloat8float4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4div(void); const Pg_finfo_record * pg_finfo_vfloat8float4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float4vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vfloat8pl(void); const Pg_finfo_record * pg_finfo_float4vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) + (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vfloat8mi(void); const Pg_finfo_record * pg_finfo_float4vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) - (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vfloat8mul(void); const Pg_finfo_record * pg_finfo_float4vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) * (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vfloat8div(void); const Pg_finfo_record * pg_finfo_float4vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) / (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat8float8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8pl(void); const Pg_finfo_record * pg_finfo_vfloat8float8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) + ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8mi(void); const Pg_finfo_record * pg_finfo_vfloat8float8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) - ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8mul(void); const Pg_finfo_record * pg_finfo_vfloat8float8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) * ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8div(void); const Pg_finfo_record * pg_finfo_vfloat8float8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum((DatumGetFloat8(arg1->values[i])) / ((float8)arg2)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float8vfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vfloat8pl(void); const Pg_finfo_record * pg_finfo_float8vfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) + (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vfloat8mi(void); const Pg_finfo_record * pg_finfo_float8vfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) - (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vfloat8mul(void); const Pg_finfo_record * pg_finfo_float8vfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) * (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vfloat8div(void); const Pg_finfo_record * pg_finfo_float8vfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vfloat8 *res = buildvfloat8(1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = Float8GetDatum(((float8)arg1) / (DatumGetFloat8(arg2->values[i]))); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vfloat8vint2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2eq(void); const Pg_finfo_record * pg_finfo_vfloat8vint2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) == (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2ne(void); const Pg_finfo_record * pg_finfo_vfloat8vint2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) != (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2gt(void); const Pg_finfo_record * pg_finfo_vfloat8vint2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) > (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2ge(void); const Pg_finfo_record * pg_finfo_vfloat8vint2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) >= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2lt(void); const Pg_finfo_record * pg_finfo_vfloat8vint2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) < (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint2le(void); const Pg_finfo_record * pg_finfo_vfloat8vint2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint2le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) <= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4eq(void); const Pg_finfo_record * pg_finfo_vfloat8vint4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) == (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4ne(void); const Pg_finfo_record * pg_finfo_vfloat8vint4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) != (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4gt(void); const Pg_finfo_record * pg_finfo_vfloat8vint4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) > (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4ge(void); const Pg_finfo_record * pg_finfo_vfloat8vint4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) >= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4lt(void); const Pg_finfo_record * pg_finfo_vfloat8vint4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) < (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint4le(void); const Pg_finfo_record * pg_finfo_vfloat8vint4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) <= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8eq(void); const Pg_finfo_record * pg_finfo_vfloat8vint8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) == (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8ne(void); const Pg_finfo_record * pg_finfo_vfloat8vint8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) != (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8gt(void); const Pg_finfo_record * pg_finfo_vfloat8vint8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) > (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8ge(void); const Pg_finfo_record * pg_finfo_vfloat8vint8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) >= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8lt(void); const Pg_finfo_record * pg_finfo_vfloat8vint8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) < (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vint8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vint8le(void); const Pg_finfo_record * pg_finfo_vfloat8vint8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vint8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) <= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4eq(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) == (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4ne(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) != (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4gt(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) > (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4ge(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) >= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4lt(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) < (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat4le(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) <= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8eq(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) == (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8ne(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) != (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8gt(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) > (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8ge(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) >= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8lt(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) < (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8vfloat8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8vfloat8le(void); const Pg_finfo_record * pg_finfo_vfloat8vfloat8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8vfloat8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 356); } while (0); res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((DatumGetFloat8(arg1->values[i]) <= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2eq(void); const Pg_finfo_record * pg_finfo_vfloat8int2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2ne(void); const Pg_finfo_record * pg_finfo_vfloat8int2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2gt(void); const Pg_finfo_record * pg_finfo_vfloat8int2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2ge(void); const Pg_finfo_record * pg_finfo_vfloat8int2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2lt(void); const Pg_finfo_record * pg_finfo_vfloat8int2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int2le(void); const Pg_finfo_record * pg_finfo_vfloat8int2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int2le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4eq(void); const Pg_finfo_record * pg_finfo_vfloat8int4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4ne(void); const Pg_finfo_record * pg_finfo_vfloat8int4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4gt(void); const Pg_finfo_record * pg_finfo_vfloat8int4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4ge(void); const Pg_finfo_record * pg_finfo_vfloat8int4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4lt(void); const Pg_finfo_record * pg_finfo_vfloat8int4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int4le(void); const Pg_finfo_record * pg_finfo_vfloat8int4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8eq(void); const Pg_finfo_record * pg_finfo_vfloat8int8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8ne(void); const Pg_finfo_record * pg_finfo_vfloat8int8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8gt(void); const Pg_finfo_record * pg_finfo_vfloat8int8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8ge(void); const Pg_finfo_record * pg_finfo_vfloat8int8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8lt(void); const Pg_finfo_record * pg_finfo_vfloat8int8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8int8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8int8le(void); const Pg_finfo_record * pg_finfo_vfloat8int8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8int8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4eq(void); const Pg_finfo_record * pg_finfo_vfloat8float4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4ne(void); const Pg_finfo_record * pg_finfo_vfloat8float4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4gt(void); const Pg_finfo_record * pg_finfo_vfloat8float4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4ge(void); const Pg_finfo_record * pg_finfo_vfloat8float4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4lt(void); const Pg_finfo_record * pg_finfo_vfloat8float4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float4le(void); const Pg_finfo_record * pg_finfo_vfloat8float4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8eq(void); const Pg_finfo_record * pg_finfo_vfloat8float8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8ne(void); const Pg_finfo_record * pg_finfo_vfloat8float8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8gt(void); const Pg_finfo_record * pg_finfo_vfloat8float8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8ge(void); const Pg_finfo_record * pg_finfo_vfloat8float8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8lt(void); const Pg_finfo_record * pg_finfo_vfloat8float8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vfloat8float8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vfloat8float8le(void); const Pg_finfo_record * pg_finfo_vfloat8float8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vfloat8float8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vfloat8 *arg1 = (vfloat8*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 356 "vtype.c" 3 4
((void *)0)
# 356 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((DatumGetFloat8(arg1->values[i])) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); }
extern Datum vboolvint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2pl(void); const Pg_finfo_record * pg_finfo_vboolvint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2mi(void); const Pg_finfo_record * pg_finfo_vboolvint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2mul(void); const Pg_finfo_record * pg_finfo_vboolvint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2div(void); const Pg_finfo_record * pg_finfo_vboolvint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4pl(void); const Pg_finfo_record * pg_finfo_vboolvint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4mi(void); const Pg_finfo_record * pg_finfo_vboolvint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4mul(void); const Pg_finfo_record * pg_finfo_vboolvint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4div(void); const Pg_finfo_record * pg_finfo_vboolvint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8pl(void); const Pg_finfo_record * pg_finfo_vboolvint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8mi(void); const Pg_finfo_record * pg_finfo_vboolvint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8mul(void); const Pg_finfo_record * pg_finfo_vboolvint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8div(void); const Pg_finfo_record * pg_finfo_vboolvint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4pl(void); const Pg_finfo_record * pg_finfo_vboolvfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4mi(void); const Pg_finfo_record * pg_finfo_vboolvfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4mul(void); const Pg_finfo_record * pg_finfo_vboolvfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4div(void); const Pg_finfo_record * pg_finfo_vboolvfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8pl(void); const Pg_finfo_record * pg_finfo_vboolvfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8mi(void); const Pg_finfo_record * pg_finfo_vboolvfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8mul(void); const Pg_finfo_record * pg_finfo_vboolvfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8div(void); const Pg_finfo_record * pg_finfo_vboolvfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2pl(void); const Pg_finfo_record * pg_finfo_vboolint2pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2mi(void); const Pg_finfo_record * pg_finfo_vboolint2mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2mul(void); const Pg_finfo_record * pg_finfo_vboolint2mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2div(void); const Pg_finfo_record * pg_finfo_vboolint2div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int2vboolpl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vboolpl(void); const Pg_finfo_record * pg_finfo_int2vboolpl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vboolpl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) + (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vboolmi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vboolmi(void); const Pg_finfo_record * pg_finfo_int2vboolmi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vboolmi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) - (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vboolmul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vboolmul(void); const Pg_finfo_record * pg_finfo_int2vboolmul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vboolmul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) * (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int2vbooldiv(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int2vbooldiv(void); const Pg_finfo_record * pg_finfo_int2vbooldiv (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int2vbooldiv(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int2 arg1 = ((int16) (((Datum) ((fcinfo->arg[0]))) & 0x0000ffff)); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) / (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vboolint4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4pl(void); const Pg_finfo_record * pg_finfo_vboolint4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4mi(void); const Pg_finfo_record * pg_finfo_vboolint4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4mul(void); const Pg_finfo_record * pg_finfo_vboolint4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4div(void); const Pg_finfo_record * pg_finfo_vboolint4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int4vboolpl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vboolpl(void); const Pg_finfo_record * pg_finfo_int4vboolpl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vboolpl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) + (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vboolmi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vboolmi(void); const Pg_finfo_record * pg_finfo_int4vboolmi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vboolmi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) - (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vboolmul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vboolmul(void); const Pg_finfo_record * pg_finfo_int4vboolmul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vboolmul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) * (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int4vbooldiv(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int4vbooldiv(void); const Pg_finfo_record * pg_finfo_int4vbooldiv (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int4vbooldiv(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int4 arg1 = ((int32) (((Datum) ((fcinfo->arg[0]))) & 0xffffffff)); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) / (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vboolint8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8pl(void); const Pg_finfo_record * pg_finfo_vboolint8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8mi(void); const Pg_finfo_record * pg_finfo_vboolint8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8mul(void); const Pg_finfo_record * pg_finfo_vboolint8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8div(void); const Pg_finfo_record * pg_finfo_vboolint8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum int8vboolpl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vboolpl(void); const Pg_finfo_record * pg_finfo_int8vboolpl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vboolpl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) + (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vboolmi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vboolmi(void); const Pg_finfo_record * pg_finfo_int8vboolmi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vboolmi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) - (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vboolmul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vboolmul(void); const Pg_finfo_record * pg_finfo_int8vboolmul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vboolmul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) * (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum int8vbooldiv(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_int8vbooldiv(void); const Pg_finfo_record * pg_finfo_int8vbooldiv (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum int8vbooldiv(FunctionCallInfo fcinfo) { int size = 0; int i = 0; int8 arg1 = ((int64) ((Datum) ((fcinfo->arg[0])))); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) / (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vboolfloat4pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4pl(void); const Pg_finfo_record * pg_finfo_vboolfloat4pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4mi(void); const Pg_finfo_record * pg_finfo_vboolfloat4mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4mul(void); const Pg_finfo_record * pg_finfo_vboolfloat4mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4div(void); const Pg_finfo_record * pg_finfo_vboolfloat4div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float4vboolpl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vboolpl(void); const Pg_finfo_record * pg_finfo_float4vboolpl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vboolpl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) + (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vboolmi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vboolmi(void); const Pg_finfo_record * pg_finfo_float4vboolmi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vboolmi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) - (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vboolmul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vboolmul(void); const Pg_finfo_record * pg_finfo_float4vboolmul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vboolmul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) * (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float4vbooldiv(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float4vbooldiv(void); const Pg_finfo_record * pg_finfo_float4vbooldiv (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float4vbooldiv(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float4 arg1 = DatumGetFloat4((fcinfo->arg[0])); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) / (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vboolfloat8pl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8pl(void); const Pg_finfo_record * pg_finfo_vboolfloat8pl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8pl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) + ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8mi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8mi(void); const Pg_finfo_record * pg_finfo_vboolfloat8mi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8mi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) - ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8mul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8mul(void); const Pg_finfo_record * pg_finfo_vboolfloat8mul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8mul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) * ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8div(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8div(void); const Pg_finfo_record * pg_finfo_vboolfloat8div (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8div(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) / ((bool)arg2)) ? 1 : 0)); i ++ ; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum float8vboolpl(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vboolpl(void); const Pg_finfo_record * pg_finfo_float8vboolpl (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vboolpl(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) + (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vboolmi(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vboolmi(void); const Pg_finfo_record * pg_finfo_float8vboolmi (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vboolmi(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) - (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vboolmul(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vboolmul(void); const Pg_finfo_record * pg_finfo_float8vboolmul (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vboolmul(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) * (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum float8vbooldiv(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_float8vbooldiv(void); const Pg_finfo_record * pg_finfo_float8vbooldiv (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum float8vbooldiv(FunctionCallInfo fcinfo) { int size = 0; int i = 0; float8 arg1 = DatumGetFloat8((fcinfo->arg[0])); vbool *arg2 = (vbool*)((Pointer) ((fcinfo->arg[1]))); vbool *res = buildvbool(1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg2->dim; while(i < size) { res->isnull[i] = arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool)arg1) / (((bool) ((((Datum) (arg2->values[i])) & 0x000000ff) != 0)))) ? 1 : 0)); i ++ ; } res->dim = arg2->dim; return ((Datum) (res)); } extern Datum vboolvint2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2eq(void); const Pg_finfo_record * pg_finfo_vboolvint2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) == (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2ne(void); const Pg_finfo_record * pg_finfo_vboolvint2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) != (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2gt(void); const Pg_finfo_record * pg_finfo_vboolvint2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) > (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2ge(void); const Pg_finfo_record * pg_finfo_vboolvint2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) >= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2lt(void); const Pg_finfo_record * pg_finfo_vboolvint2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) < (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint2le(void); const Pg_finfo_record * pg_finfo_vboolvint2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint2le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint2 *arg2 = (vint2*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) <= (((int16) (((Datum) (arg2->values[i])) & 0x0000ffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4eq(void); const Pg_finfo_record * pg_finfo_vboolvint4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) == (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4ne(void); const Pg_finfo_record * pg_finfo_vboolvint4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) != (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4gt(void); const Pg_finfo_record * pg_finfo_vboolvint4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) > (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4ge(void); const Pg_finfo_record * pg_finfo_vboolvint4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) >= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4lt(void); const Pg_finfo_record * pg_finfo_vboolvint4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) < (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint4le(void); const Pg_finfo_record * pg_finfo_vboolvint4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint4 *arg2 = (vint4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) <= (((int32) (((Datum) (arg2->values[i])) & 0xffffffff)))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8eq(void); const Pg_finfo_record * pg_finfo_vboolvint8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) == (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8ne(void); const Pg_finfo_record * pg_finfo_vboolvint8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) != (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8gt(void); const Pg_finfo_record * pg_finfo_vboolvint8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) > (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8ge(void); const Pg_finfo_record * pg_finfo_vboolvint8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) >= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8lt(void); const Pg_finfo_record * pg_finfo_vboolvint8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) < (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvint8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvint8le(void); const Pg_finfo_record * pg_finfo_vboolvint8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvint8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vint8 *arg2 = (vint8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) <= (((int64) ((Datum) (arg2->values[i]))))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4eq(void); const Pg_finfo_record * pg_finfo_vboolvfloat4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) == (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4ne(void); const Pg_finfo_record * pg_finfo_vboolvfloat4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) != (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4gt(void); const Pg_finfo_record * pg_finfo_vboolvfloat4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) > (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4ge(void); const Pg_finfo_record * pg_finfo_vboolvfloat4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) >= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4lt(void); const Pg_finfo_record * pg_finfo_vboolvfloat4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) < (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat4le(void); const Pg_finfo_record * pg_finfo_vboolvfloat4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat4le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat4 *arg2 = (vfloat4*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) <= (DatumGetFloat4(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8eq(void); const Pg_finfo_record * pg_finfo_vboolvfloat8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8eq(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) == (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8ne(void); const Pg_finfo_record * pg_finfo_vboolvfloat8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8ne(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) != (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8gt(void); const Pg_finfo_record * pg_finfo_vboolvfloat8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8gt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) > (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8ge(void); const Pg_finfo_record * pg_finfo_vboolvfloat8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8ge(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) >= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8lt(void); const Pg_finfo_record * pg_finfo_vboolvfloat8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8lt(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) < (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolvfloat8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolvfloat8le(void); const Pg_finfo_record * pg_finfo_vboolvfloat8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolvfloat8le(FunctionCallInfo fcinfo) { vbool *res; int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); vfloat8 *arg2 = (vfloat8*)((Pointer) ((fcinfo->arg[1]))); do { if (!(arg1->dim == arg2->dim)) ExceptionalCondition("!(arg1->dim == arg2->dim)", ("FailedAssertion"), "vtype.c", 357); } while (0); res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i] || arg2->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) ((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0)) <= (DatumGetFloat8(arg2->values[i]))) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2eq(void); const Pg_finfo_record * pg_finfo_vboolint2eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2ne(void); const Pg_finfo_record * pg_finfo_vboolint2ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2gt(void); const Pg_finfo_record * pg_finfo_vboolint2gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2ge(void); const Pg_finfo_record * pg_finfo_vboolint2ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2lt(void); const Pg_finfo_record * pg_finfo_vboolint2lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint2le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint2le(void); const Pg_finfo_record * pg_finfo_vboolint2le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint2le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int2 arg2 = ((int16) (((Datum) ((fcinfo->arg[1]))) & 0x0000ffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4eq(void); const Pg_finfo_record * pg_finfo_vboolint4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4ne(void); const Pg_finfo_record * pg_finfo_vboolint4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4gt(void); const Pg_finfo_record * pg_finfo_vboolint4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4ge(void); const Pg_finfo_record * pg_finfo_vboolint4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4lt(void); const Pg_finfo_record * pg_finfo_vboolint4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint4le(void); const Pg_finfo_record * pg_finfo_vboolint4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int4 arg2 = ((int32) (((Datum) ((fcinfo->arg[1]))) & 0xffffffff)); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8eq(void); const Pg_finfo_record * pg_finfo_vboolint8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8ne(void); const Pg_finfo_record * pg_finfo_vboolint8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8gt(void); const Pg_finfo_record * pg_finfo_vboolint8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8ge(void); const Pg_finfo_record * pg_finfo_vboolint8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8lt(void); const Pg_finfo_record * pg_finfo_vboolint8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolint8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolint8le(void); const Pg_finfo_record * pg_finfo_vboolint8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolint8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); int8 arg2 = ((int64) ((Datum) ((fcinfo->arg[1])))); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4eq(void); const Pg_finfo_record * pg_finfo_vboolfloat4eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4ne(void); const Pg_finfo_record * pg_finfo_vboolfloat4ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4gt(void); const Pg_finfo_record * pg_finfo_vboolfloat4gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4ge(void); const Pg_finfo_record * pg_finfo_vboolfloat4ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4lt(void); const Pg_finfo_record * pg_finfo_vboolfloat4lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat4le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat4le(void); const Pg_finfo_record * pg_finfo_vboolfloat4le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat4le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float4 arg2 = DatumGetFloat4((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8eq(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8eq(void); const Pg_finfo_record * pg_finfo_vboolfloat8eq (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8eq(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) == arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8ne(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8ne(void); const Pg_finfo_record * pg_finfo_vboolfloat8ne (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8ne(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) != arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8gt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8gt(void); const Pg_finfo_record * pg_finfo_vboolfloat8gt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8gt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) > arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8ge(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8ge(void); const Pg_finfo_record * pg_finfo_vboolfloat8ge (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8ge(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) >= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8lt(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8lt(void); const Pg_finfo_record * pg_finfo_vboolfloat8lt (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8lt(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) < arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); } extern Datum vboolfloat8le(FunctionCallInfo fcinfo); extern const Pg_finfo_record * pg_finfo_vboolfloat8le(void); const Pg_finfo_record * pg_finfo_vboolfloat8le (void) { static const Pg_finfo_record my_finfo = { 1 }; return &my_finfo; } extern int no_such_variable; Datum vboolfloat8le(FunctionCallInfo fcinfo) { int size = 0; int i = 0; vbool *arg1 = (vbool*)((Pointer) ((fcinfo->arg[0]))); float8 arg2 = DatumGetFloat8((fcinfo->arg[1])); vbool *res = buildvtype(16, 1024, 
# 357 "vtype.c" 3 4
((void *)0)
# 357 "vtype.c"
); size = arg1->dim; while(i < size) { res->isnull[i] = arg1->isnull[i]; if(!res->isnull[i]) res->values[i] = ((Datum) (((((bool) ((((Datum) (arg1->values[i])) & 0x000000ff) != 0))) <= arg2) ? 1 : 0)); i++; } res->dim = arg1->dim; return ((Datum) (res)); }
