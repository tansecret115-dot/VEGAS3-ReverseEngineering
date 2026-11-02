/* Module: vegas30k.dll
   Function: _MeterInst_SetOwnerHwnd@8
   Address: 0107b780
   Source: Ghidra pseudocode (Stage 10 batch) */


void _MeterInst_SetOwnerHwnd_8(int param_1,undefined4 param_2)

{
                    /* 0x7b780  683  _MeterInst_SetOwnerHwnd@8 */
  if ((param_1 != 0) && ((*(byte *)(param_1 + 4) & 8) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  return;
}


