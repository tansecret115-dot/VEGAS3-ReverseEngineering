/* Module: vegas30.exe
   Function: FUN_00561700
   Address: 00561700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00561700(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  HWND pHVar2;
  undefined4 uVar3;
  
  if (DAT_00659540 != 0) {
    FUN_004043e0(DAT_0064763c,2);
    return 2;
  }
  DAT_00659540 = 1;
  uVar3 = *(undefined4 *)(param_4 + 8);
  uVar1 = *(undefined4 *)(param_4 + 0xc);
  pHVar2 = GetFocus();
  uVar3 = FUN_004217f0(DAT_00647624,uVar3,uVar1,param_1,*(undefined4 *)(param_2 + 8),param_2,param_3
                       ,0,param_5,pHVar2,param_4,param_6);
  DAT_00659540 = 0;
  return uVar3;
}


