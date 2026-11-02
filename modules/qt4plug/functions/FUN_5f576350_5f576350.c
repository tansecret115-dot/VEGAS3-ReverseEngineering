/* Module: qt4plug.dll
   Function: FUN_5f576350
   Address: 5f576350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f576350(void)

{
  if (PTR_FUN_5f5a3dcc != (undefined *)0x0) {
    (*(code *)PTR_FUN_5f5a3dcc)();
  }
                    /* WARNING: Could not recover jumptable at 0x5f576364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_5f5a3dd0)();
  return;
}


