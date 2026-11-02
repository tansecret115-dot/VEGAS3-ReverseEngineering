/* Module: vegas30.exe
   Function: FUN_0044f240
   Address: 0044f240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f240(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
  }
  if ((HGDIOBJ)param_1[1] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


