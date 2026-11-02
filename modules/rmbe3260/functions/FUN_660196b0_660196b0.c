/* Module: rmbe3260.dll
   Function: FUN_660196b0
   Address: 660196b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660196b0(undefined4 *param_1)

{
  int local_18 [3];
  int *local_c;
  int local_8;
  
  *param_1 = &PTR_FUN_66066738;
  param_1[4] = &PTR_LAB_66066718;
  local_8 = -(uint)(param_1[7] != 0);
  FUN_6605b650(local_18);
  if (local_8 != 0) {
    do {
      FUN_6605cd20(param_1 + 5,&local_8,local_18,&local_c);
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
      }
    } while (local_8 != 0);
  }
  FUN_6605c880(param_1 + 5);
  DAT_660750c8 = 0;
  FUN_6605b770(local_18);
  thunk_FUN_6605c880(param_1 + 5);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


