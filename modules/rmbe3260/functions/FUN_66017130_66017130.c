/* Module: rmbe3260.dll
   Function: FUN_66017130
   Address: 66017130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66017130(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_660665a0;
  param_1[4] = &PTR_LAB_66066588;
  param_1[5] = &PTR_LAB_66066570;
  if ((*(int *)((int)param_1 + 0x32) != 0) && (*(void **)((int)param_1 + 0x2a) != (void *)0x0)) {
    operator_delete(*(void **)((int)param_1 + 0x2a));
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
    *(undefined4 *)((int)param_1 + 0x2e) = 0;
  }
  *param_1 = &PTR_FUN_66063e30;
  return;
}


