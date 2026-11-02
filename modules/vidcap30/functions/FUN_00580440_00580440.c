/* Module: vidcap30.exe
   Function: FUN_00580440
   Address: 00580440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00580440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0058491b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00404b00(100,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_005804b0(0,param_2,param_3);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


