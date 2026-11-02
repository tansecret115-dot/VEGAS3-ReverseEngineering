/* Module: vegas30.exe
   Function: FUN_0057d600
   Address: 0057d600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0057d600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00627480;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    return 0;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  uVar1 = (**(code **)(param_1 + 0x10))(param_2,param_3,param_4,param_5,param_6,param_7);
  ExceptionList = local_14;
  return uVar1;
}


