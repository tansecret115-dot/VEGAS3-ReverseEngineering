/* Module: sfconfigmgr.dll
   Function: FUN_0040ad70
   Address: 0040ad70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040ad70(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if ((~param_1[10] & 0x10000000U) == 0) {
    HeapDestroy((HANDLE)param_1[0x10]);
    iVar2 = 0;
    param_1[0x10] = 0;
    if (0 < *param_1) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1[2] + -4 + iVar2 * 4) = 0;
      } while (iVar2 < *param_1);
    }
  }
  else {
    iVar2 = 0;
    if (0 < *param_1) {
      do {
        pvVar1 = *(void **)(param_1[2] + iVar2 * 4);
        if (pvVar1 != (void *)0x0) {
          FUN_0040aca0((int)param_1,pvVar1);
        }
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1[2] + -4 + iVar2 * 4) = 0;
      } while (iVar2 < *param_1);
      return 0;
    }
  }
  return 0;
}


