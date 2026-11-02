/* Module: encn3260.dll
   Function: FUN_664aef10
   Address: 664aef10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_664aef10(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_1[0x12] == 0) {
    return 0x80004005;
  }
  if (*(int *)(param_1[0x21] + -8) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_1[0x12],param_2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_664aee60(param_1,param_4);
  uVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_1[0x14],param_2,param_3,param_4,param_5);
  (**(code **)(*param_1 + 0x30))(param_1,param_1[0x14],param_4);
  BitBlt((HDC)param_1[0x12],*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],
         (HDC)param_1[0x14],0,0,0xcc0020);
  return uVar1;
}


