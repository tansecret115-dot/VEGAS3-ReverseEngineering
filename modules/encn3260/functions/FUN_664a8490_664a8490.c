/* Module: encn3260.dll
   Function: FUN_664a8490
   Address: 664a8490
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a8490(int param_1)

{
  int local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_664b1460(*(int *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_664b3900(*(int *)(param_1 + 0x140));
  }
  local_10 = (void *)(param_1 + 0x30);
  local_14 = -(uint)(*(int *)(param_1 + 0x3c) != 0);
  local_c = 0;
  local_8 = 0;
  while (local_14 != 0) {
    FUN_664c4010(local_10,&local_14,&local_8,&local_c);
    FUN_664a8490(local_c);
  }
  return;
}


