/* Module: mpegin.dll
   Function: _malloc
   Address: 1000e314
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1001c400);
  return pvVar1;
}


