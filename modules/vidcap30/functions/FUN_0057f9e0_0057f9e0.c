/* Module: vidcap30.exe
   Function: FUN_0057f9e0
   Address: 0057f9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0057f9e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 local_54 [48];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057ad70(param_2);
  local_4 = 0;
  iVar1 = FUN_0057fac0(local_54);
  if (iVar1 < 0) {
    local_4 = 0xffffffff;
    FUN_0057ad20();
    ExceptionList = local_c;
    return iVar1;
  }
  iVar1 = (**(code **)(*param_1 + 0x58))(param_3,param_4,param_5,param_6,param_7,param_8);
  uStack_1c = 0xffffffff;
  if (iVar1 < 0) {
    FUN_0057ad20();
    ExceptionList = pvStack_24;
    return iVar1;
  }
  FUN_0057ad20();
  ExceptionList = pvStack_24;
  return 0;
}


