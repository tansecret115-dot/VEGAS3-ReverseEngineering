/* Module: vidcap30.exe
   Function: FUN_0057d600
   Address: 0057d600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057d600(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00584683;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00404b20(*(undefined4 *)(param_1 + 0x14));
  local_4 = local_4 & 0xffffff00;
  FUN_0057ad20();
  local_4 = 0xffffffff;
  FUN_0057b430();
  ExceptionList = local_c;
  return;
}


