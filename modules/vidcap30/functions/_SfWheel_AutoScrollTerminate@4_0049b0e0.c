/* Module: vidcap30.exe
   Function: _SfWheel_AutoScrollTerminate@4
   Address: 0049b0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfWheel_AutoScrollTerminate_4(undefined4 *param_1)

{
  int iVar1;
  
                    /* 0x9b0e0  676  _SfWheel_AutoScrollTerminate@4 */
  if (param_1[6] != 0) {
    KillTimer((HWND)param_1[0x16],0x23e7);
    _SfWheel_AutoScrollOriginIcon_8(param_1,2);
    ReleaseCapture();
  }
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


