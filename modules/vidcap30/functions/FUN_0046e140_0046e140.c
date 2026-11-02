/* Module: vidcap30.exe
   Function: FUN_0046e140
   Address: 0046e140
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046e140(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00593548;
  param_1[3] = &PTR_LAB_0059350c;
  param_1[4] = &PTR_LAB_005934f8;
  param_1[0x28] = &PTR_LAB_005934e0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_005816a0();
  return;
}


