/* Module: aviplug.dll
   Function: FUN_5f93e4c0
   Address: 5f93e4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f93e4c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((LPVOID)param_1[5] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[5],0,0x8000);
    param_1[5] = 0;
  }
  param_1[0x10] = 0;
  param_1[6] = 0;
  param_1[10] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0xb] = 0xffffffff;
  return;
}


