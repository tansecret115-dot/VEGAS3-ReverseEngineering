/* Module: vegas30.exe
   Function: FUN_005a6e00
   Address: 005a6e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a6e00(int *param_1)

{
  int iVar1;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    FUN_005a6e60(param_1,0);
    WaitForSingleObject((HANDLE)*param_1,0xffffffff);
    CloseHandle((HANDLE)*param_1);
  }
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
  }
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


