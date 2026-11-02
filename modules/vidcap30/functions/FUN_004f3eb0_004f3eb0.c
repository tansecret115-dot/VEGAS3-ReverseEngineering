/* Module: vidcap30.exe
   Function: FUN_004f3eb0
   Address: 004f3eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f3eb0(int param_1,int param_2)

{
  UINT_PTR UVar1;
  
  FUN_004f3e30(param_1);
  if (*(char *)(param_1 + 0x4f0) != '\0') {
    if (param_2 != 0) {
      UVar1 = SetTimer(*(HWND *)(param_1 + 4),4,*(UINT *)(param_1 + 0x4c0),(TIMERPROC)0x0);
      *(UINT_PTR *)(param_1 + 0x4bc) = UVar1;
      return;
    }
    FUN_004f3f00(param_1);
  }
  return;
}


