/* Module: vegas30k.dll
   Function: _SfGetPrintFromMultiByteString@8
   Address: 010c49f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetPrintFromMultiByteString_8(int param_1,undefined *param_2)

{
  undefined *puVar1;
  
                    /* 0xc49f0  974  _SfGetPrintFromMultiByteString@8 */
  puVar1 = &DAT_0128eb74;
  if (*(int *)(param_1 + 0x130) != 0) {
    puVar1 = param_2;
  }
  return puVar1;
}


