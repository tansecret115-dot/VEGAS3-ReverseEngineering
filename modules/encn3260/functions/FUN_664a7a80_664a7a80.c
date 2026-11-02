/* Module: encn3260.dll
   Function: FUN_664a7a80
   Address: 664a7a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a7a80(int param_1)

{
  int local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  FUN_664a76b0(param_1);
  local_10 = (void *)(param_1 + 0x30);
  local_14 = -(uint)(*(int *)(param_1 + 0x3c) != 0);
  local_c = 0;
  local_8 = 0;
  while (local_14 != 0) {
    FUN_664c4010(local_10,&local_14,&local_8,&local_c);
    FUN_664a7a80(local_c);
  }
  return;
}


