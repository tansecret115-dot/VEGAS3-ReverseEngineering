/* Module: vegas30k.dll
   Function: FUN_01131a30
   Address: 01131a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01131a30(int param_1,int param_2)

{
  UINT_PTR UVar1;
  
  FUN_011319b0(param_1);
  if (*(char *)(param_1 + 0x4f0) != '\0') {
    if (param_2 != 0) {
      UVar1 = SetTimer(*(HWND *)(param_1 + 4),4,*(UINT *)(param_1 + 0x4c0),(TIMERPROC)0x0);
      *(UINT_PTR *)(param_1 + 0x4bc) = UVar1;
      return;
    }
    FUN_01131a80(param_1);
  }
  return;
}


