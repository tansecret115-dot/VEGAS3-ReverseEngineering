/* Module: sftrans1.dll
   Function: FUN_00474970
   Address: 00474970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474970(int *param_1)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        _Memory = *(void **)(param_1[2] + iVar2 * 4);
        if (_Memory != (void *)0x0) {
          free(_Memory);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_004dd670(param_1);
  }
  return;
}


