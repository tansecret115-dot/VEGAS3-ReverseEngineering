/* Module: rmbe3260.dll
   Function: FUN_6603ec00
   Address: 6603ec00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6603ec00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66067fd8;
  **(undefined4 **)((int)param_1 + 0x42) = 1;
  *(undefined4 *)(*(int *)((int)param_1 + 0x42) + 8) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x8e));
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x8e));
  FUN_6605b770((int *)((int)param_1 + 0x82));
  FUN_6605b770((int *)((int)param_1 + 0x46));
  return;
}


