/* Module: vidcap30.exe
   Function: thunk_FUN_0057d600
   Address: 0057f320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_0057d600(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_00584683;
  pvStack_c = ExceptionList;
  uStack_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_00404b20(*(undefined4 *)(param_1 + 0x14));
  uStack_4 = uStack_4 & 0xffffff00;
  FUN_0057ad20();
  uStack_4 = 0xffffffff;
  FUN_0057b430();
  ExceptionList = pvStack_c;
  return;
}


