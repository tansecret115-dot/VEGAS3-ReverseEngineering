/* Module: pncrt.dll
   Function: malloc
   Address: 7800ade0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl malloc(size_t _Size)

{
  int *piVar1;
  
                    /* 0xade0  667  malloc */
  piVar1 = FUN_7800ae00(_Size,DAT_780421d0);
  return piVar1;
}


