/* Module: mp3plug.dll
   Function: FUN_5f705e50
   Address: 5f705e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f705e50(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  FUN_5f705730(*param_1);
  if (param_1[2] != 0) {
    FUN_5f6d97a0(param_1[2]);
  }
  if (param_1[3] != 0) {
    FUN_5f6d97a0(param_1[3]);
  }
  FUN_5f6d97a0((int)param_1);
  return;
}


