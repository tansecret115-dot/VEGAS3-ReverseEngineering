/* Module: wavplug.dll
   Function: FUN_5f382a70
   Address: 5f382a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f382a70(void *param_1)

{
  if (((*(int *)((int)param_1 + 0x28) != 0) && (*(int *)((int)param_1 + 0x30) != 0)) &&
     (*(int *)((int)param_1 + 0x10) != 0)) {
    FUN_5f383340(param_1);
    return 1;
  }
  return 0;
}


