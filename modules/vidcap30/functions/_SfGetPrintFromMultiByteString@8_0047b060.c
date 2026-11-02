/* Module: vidcap30.exe
   Function: _SfGetPrintFromMultiByteString@8
   Address: 0047b060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetPrintFromMultiByteString_8(int param_1,undefined *param_2)

{
  undefined *puVar1;
  
                    /* 0x7b060  422  _SfGetPrintFromMultiByteString@8 */
  puVar1 = &DAT_005bc478;
  if (*(int *)(param_1 + 0x130) != 0) {
    puVar1 = param_2;
  }
  return puVar1;
}


