/* Module: vegas30k.dll
   Function: _FaderInst_SetOwnerHwnd@8
   Address: 010adae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _FaderInst_SetOwnerHwnd_8(int param_1,undefined4 param_2)

{
                    /* 0xadae0  660  _FaderInst_SetOwnerHwnd@8 */
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0xc) & 4) != 0)) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x30) = param_2;
  }
  return;
}


