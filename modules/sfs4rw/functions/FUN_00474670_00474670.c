/* Module: sfs4rw.dll
   Function: FUN_00474670
   Address: 00474670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00474670(int *param_1)

{
  FUN_00474620(param_1,0xd8);
  if (*(char *)((int)param_1 + 0xf9) != '\0') {
    FUN_004746b0(param_1);
  }
  if (*(char *)((int)param_1 + 0xff) != '\0') {
    FUN_00474750(param_1);
  }
  return;
}


