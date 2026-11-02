/* Module: sfppack2.dll
   Function: FUN_5cd09a60
   Address: 5cd09a60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cd09a60(int param_1,POINT *param_2)

{
  BOOL BVar1;
  uint uVar2;
  int local_18;
  int local_14;
  RECT local_10;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    do {
      FUN_5cd098f0(param_1,(int *)(*(int *)(param_1 + 0xb4) + uVar2 * 8),&local_18);
      local_10.left = local_18 + -5;
      local_10.right = local_18 + 5;
      local_10.top = local_14 + -5;
      local_10.bottom = local_14 + 5;
      BVar1 = PtInRect(&local_10,*param_2);
      if (BVar1 != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xa0));
  }
  return 0xffffffff;
}


