/* Module: sfppack3.dll
   Function: FUN_5cc50ef0
   Address: 5cc50ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc50ef0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int local_10 [2];
  undefined4 local_8;
  int local_4;
  
  if ((1 < *(uint *)(param_1 + 0xa0)) && (iVar1 = 1, 1 < (int)*(uint *)(param_1 + 0xa0))) {
    do {
      FUN_5cc4fe30(param_1,(int *)(*(int *)(param_1 + 0xb4) + iVar1 * 8),local_10);
      if (param_2 < local_10[0]) {
        *param_4 = iVar1 + -1;
        FUN_5cc4fe30(param_1,(int *)(*(int *)(param_1 + 0xb4) + -8 + iVar1 * 8),&local_8);
        iVar1 = ftol();
        if (param_3 < iVar1 + local_4 + -5) {
          return 0;
        }
        if (iVar1 + local_4 + 5 < param_3) {
          return 0;
        }
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa0));
  }
  return 0;
}


