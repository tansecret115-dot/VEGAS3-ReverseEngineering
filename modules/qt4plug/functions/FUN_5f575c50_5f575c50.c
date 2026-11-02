/* Module: qt4plug.dll
   Function: FUN_5f575c50
   Address: 5f575c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f575c50(void)

{
  if (PTR_FUN_5f5a3dcc != (undefined *)0x0) {
    (*(code *)PTR_FUN_5f5a3dcc)();
  }
                    /* WARNING: Could not recover jumptable at 0x5f575c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_5f5a3dd0)();
  return;
}


