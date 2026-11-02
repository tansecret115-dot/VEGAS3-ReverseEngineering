/* Module: qt4plug.dll
   Function: thunk_FUN_5f578f90
   Address: 5f580040
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_5f578f90(void)

{
  if (PTR_FUN_5f5a3dcc != (undefined *)0x0) {
    (*(code *)PTR_FUN_5f5a3dcc)();
  }
                    /* WARNING: Could not recover jumptable at 0x5f578fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_5f5a3dd0)();
  return;
}


