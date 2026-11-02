/* Module: sfcdi.dll
   Function: FUN_5bf17350
   Address: 5bf17350
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf17350(HWND param_1,int param_2)

{
  UINT_PTR UVar1;
  
  if ((*(UINT *)(param_2 + 8) != 0) && ((*(byte *)(param_2 + 4) & 2) != 0)) {
    UVar1 = SetTimer(param_1,0x6f,*(UINT *)(param_2 + 8),(TIMERPROC)0x0);
    *(uint *)(param_2 + 0xb4) = -(uint)(UVar1 != 0) & 0x6f;
  }
  return;
}


