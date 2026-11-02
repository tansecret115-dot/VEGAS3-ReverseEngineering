/* Module: vidcap30.exe
   Function: _SfGetMultiByteFromPrintString@8
   Address: 0047b040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetMultiByteFromPrintString_8(int param_1,undefined *param_2)

{
  undefined *puVar1;
  
                    /* 0x7b040  417  _SfGetMultiByteFromPrintString@8 */
  puVar1 = &DAT_005bc478;
  if (*(int *)(param_1 + 0x130) != 0) {
    puVar1 = param_2;
  }
  return puVar1;
}


