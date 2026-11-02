/* Module: dsetup.dll
   Function: _malloc
   Address: 004031f5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_0040ac60);
  return pvVar1;
}


