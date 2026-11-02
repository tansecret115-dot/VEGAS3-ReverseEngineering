/* Module: vidcap30.exe
   Function: _PanInst_SetOwnerHwnd@8
   Address: 0051a0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _PanInst_SetOwnerHwnd_8(int param_1,undefined4 param_2)

{
                    /* 0x11a0f0  197  _PanInst_SetOwnerHwnd@8 */
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 4) != 0)) {
    *(undefined4 *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return;
}


