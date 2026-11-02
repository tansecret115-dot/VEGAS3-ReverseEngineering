/* Module: vidcap30.exe
   Function: FUN_00481b40
   Address: 00481b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00481b40(int *param_1)

{
  int iVar1;
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
        iVar1 = *(int *)(param_1[2] + iVar2 * 4);
        if (iVar1 != 0) {
          FUN_00481a70(param_1,iVar1);
        }
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1[2] + -4 + iVar2 * 4) = 0;
      } while (iVar2 < *param_1);
      return 0;
    }
  }
  return 0;
}


