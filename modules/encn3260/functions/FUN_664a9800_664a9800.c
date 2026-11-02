/* Module: encn3260.dll
   Function: FUN_664a9800
   Address: 664a9800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a9800(void *param_1)

{
  int local_14;
  void *local_10;
  void *local_c;
  int local_8;
  
  FUN_664a9870(param_1);
  local_10 = (void *)((int)param_1 + 0x30);
  local_14 = -(uint)(*(int *)((int)param_1 + 0x3c) != 0);
  local_c = (void *)0x0;
  local_8 = 0;
  while (local_14 != 0) {
    FUN_664c4010(local_10,&local_14,&local_8,(int *)&local_c);
    FUN_664a9800(local_c);
  }
  return;
}


