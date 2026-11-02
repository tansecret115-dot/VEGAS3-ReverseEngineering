/* Module: vidcap30.exe
   Function: FUN_0057b680
   Address: 0057b680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057b680(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005843db;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0057b6e0();
  local_4 = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_00404b20(iVar2);
    iVar2 = iVar1;
  }
  ExceptionList = local_c;
  return;
}


