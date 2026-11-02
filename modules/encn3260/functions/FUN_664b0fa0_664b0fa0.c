/* Module: encn3260.dll
   Function: FUN_664b0fa0
   Address: 664b0fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b0fa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664df380;
  if ((HGLOBAL)param_1[1] != (HGLOBAL)0x0) {
    GlobalFree((HGLOBAL)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


