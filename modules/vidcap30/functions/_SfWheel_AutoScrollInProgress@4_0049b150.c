/* Module: vidcap30.exe
   Function: _SfWheel_AutoScrollInProgress@4
   Address: 0049b150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfWheel_AutoScrollInProgress_4(int param_1)

{
  HWND pHVar1;
  
                    /* 0x9b150  671  _SfWheel_AutoScrollInProgress@4 */
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    pHVar1 = GetCapture();
    if (pHVar1 == *(HWND *)(param_1 + 0x58)) {
      return 1;
    }
  }
  return 0;
}


