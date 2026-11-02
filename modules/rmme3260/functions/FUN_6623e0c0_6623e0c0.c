/* Module: rmme3260.dll
   Function: FUN_6623e0c0
   Address: 6623e0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623e0c0(int param_1)

{
  int local_14;
  void *local_10;
  int local_c;
  int local_8;
  
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    FUN_66246900(*(int **)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_66248c30(*(int *)(param_1 + 0x140));
  }
  local_10 = (void *)(param_1 + 0x30);
  local_14 = -(uint)(*(int *)(param_1 + 0x3c) != 0);
  local_c = 0;
  local_8 = 0;
  while (local_14 != 0) {
    FUN_66251190(local_10,&local_14,&local_8,&local_c);
    FUN_6623e0c0(local_c);
  }
  return;
}


