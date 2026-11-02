/* Module: rmme3260.dll
   Function: FUN_66246400
   Address: 66246400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66246400(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626c828;
  if ((HGLOBAL)param_1[1] != (HGLOBAL)0x0) {
    GlobalFree((HGLOBAL)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


