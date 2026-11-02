/* Module: mp3plug.dll
   Function: FUN_5f7125d0
   Address: 5f7125d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f7125d0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_5f712660;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_5f74cff0;
  if ((LPCVOID)param_1[0x1b] != (LPCVOID)0x0) {
    FUN_5f681ba0((LPCVOID)param_1[0x1b]);
  }
  param_1[0x1b] = 0;
  *param_1 = &PTR_LAB_5f74cfd0;
  ExceptionList = local_10;
  return;
}


