/* Module: encn3260.dll
   Function: FUN_664aa870
   Address: 664aa870
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664aa870(int param_1)

{
  int iVar1;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = (void *)(param_1 + 0x30);
  local_18 = -(uint)(*(int *)(param_1 + 0x3c) != 0);
  local_10 = 0;
  local_c = 0;
  iVar1 = 0;
  while (local_18 != 0) {
    FUN_664c4010(local_14,&local_18,&local_c,&local_10);
    (**(code **)(*(int *)(local_10 + 4) + 0x1c))(local_10 + 4,&local_8);
    if (iVar1 < local_8) {
      iVar1 = local_8;
    }
  }
  return iVar1;
}


