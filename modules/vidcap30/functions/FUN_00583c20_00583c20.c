/* Module: vidcap30.exe
   Function: FUN_00583c20
   Address: 00583c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00583c20(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584bb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00582660();
  local_4 = 0;
  FUN_0057e0c0(param_2,param_4,param_4 + 0x58,param_3,param_5);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x3a] = param_4;
  *param_1 = &PTR_FUN_005a6320;
  param_1[0x12] = &PTR_FUN_005a62c4;
  param_1[0x15] = &PTR_LAB_005a627c;
  param_1[0x16] = &PTR_LAB_005a6268;
  uVar1 = FUN_00583930(param_1);
  *param_3 = uVar1;
  ExceptionList = local_c;
  return param_1;
}


