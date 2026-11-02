/* Module: vidcap30.exe
   Function: FUN_0057cd30
   Address: 0057cd30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057cd30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005845bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_005a5ca0;
  local_4 = 0;
  (**(code **)(*(int *)(param_1[3] + 0xc) + 8))((int *)(param_1[3] + 0xc));
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_0057b680();
  ExceptionList = param_1;
  return;
}


