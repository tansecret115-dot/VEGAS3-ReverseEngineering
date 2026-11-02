/* Module: vegas30.exe
   Function: FUN_00479820
   Address: 00479820
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00479820(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  POINT pt;
  BOOL BVar2;
  uint uVar3;
  LONG local_18;
  LONG local_14;
  RECT local_10;
  
  uVar3 = 0;
  uVar1 = **(uint **)(param_2 + 0x30);
  local_10.left = param_3 + -5;
  local_10.right = param_3 + 5;
  local_10.top = param_4 + -5;
  local_10.bottom = param_4 + 5;
  if (uVar1 != 0) {
    do {
      FUN_00479160(param_1,param_2,uVar3,&local_18,1);
      pt.y = local_14;
      pt.x = local_18;
      BVar2 = PtInRect(&local_10,pt);
      if (BVar2 != 0) {
        if (param_5 != (int *)0x0) {
          *param_5 = local_18 - param_3;
          param_5[1] = local_14 - param_4;
        }
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}


