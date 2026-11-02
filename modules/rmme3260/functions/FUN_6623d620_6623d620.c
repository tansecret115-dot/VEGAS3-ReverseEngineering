/* Module: rmme3260.dll
   Function: FUN_6623d620
   Address: 6623d620
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623d620(int param_1)

{
  int local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  FUN_6623d250(param_1);
  local_10 = (void *)(param_1 + 0x30);
  local_14 = -(uint)(*(int *)(param_1 + 0x3c) != 0);
  local_c = 0;
  local_8 = 0;
  while (local_14 != 0) {
    FUN_66251190(local_10,&local_14,&local_8,&local_c);
    FUN_6623d620(local_c);
  }
  return;
}


