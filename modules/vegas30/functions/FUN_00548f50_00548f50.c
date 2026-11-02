/* Module: vegas30.exe
   Function: FUN_00548f50
   Address: 00548f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00548f50(undefined4 *param_1)

{
  int iVar1;
  
  if ((HGDIOBJ)param_1[0x10a] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x10a]);
  }
  if ((HDC)param_1[0x10b] != (HDC)0x0) {
    DeleteDC((HDC)param_1[0x10b]);
  }
  for (iVar1 = 0x10d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


