/* Module: vidcap30.exe
   Function: FUN_00412850
   Address: 00412850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412850(undefined4 *param_1)

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


