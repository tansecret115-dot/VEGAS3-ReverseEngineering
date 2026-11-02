/* Module: rmbe3260.dll
   Function: FUN_66010dc0
   Address: 66010dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66010dc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_18 [3];
  undefined4 *local_c;
  int local_8;
  
  *param_1 = &PTR_FUN_66064a8c;
  local_8 = -(uint)(param_1[3] != 0);
  FUN_6605b650(local_18);
  if (local_8 != 0) {
    do {
      FUN_6605cd20(param_1 + 1,&local_8,local_18,&local_c);
      puVar1 = local_c;
      if (local_c != (undefined4 *)0x0) {
        FUN_66010790(local_c);
        operator_delete(puVar1);
      }
    } while (local_8 != 0);
  }
  FUN_6605c880(param_1 + 1);
  FUN_6605d040(param_1 + 8);
  FUN_6605b770(local_18);
  thunk_FUN_6605d040(param_1 + 8);
  thunk_FUN_6605c880(param_1 + 1);
  return;
}


