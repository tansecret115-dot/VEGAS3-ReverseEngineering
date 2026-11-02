/* Module: vegas30k.dll
   Function: _SfGetMultiByteFromPrintString@8
   Address: 010c49d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetMultiByteFromPrintString_8(int param_1,undefined *param_2)

{
  undefined *puVar1;
  
                    /* 0xc49d0  969  _SfGetMultiByteFromPrintString@8 */
  puVar1 = &DAT_0128eb74;
  if (*(int *)(param_1 + 0x130) != 0) {
    puVar1 = param_2;
  }
  return puVar1;
}


