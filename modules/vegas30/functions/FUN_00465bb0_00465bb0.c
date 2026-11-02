/* Module: vegas30.exe
   Function: FUN_00465bb0
   Address: 00465bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00465bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_0064be60 == 0) {
    DAT_0064be60 = _SfLoadString_16(DAT_00647204,0x57,&DAT_0064be1c,0x40);
  }
  FUN_00465760(param_1,param_2,param_3,param_4,&DAT_0064be1c,DAT_0064be60);
  return;
}


