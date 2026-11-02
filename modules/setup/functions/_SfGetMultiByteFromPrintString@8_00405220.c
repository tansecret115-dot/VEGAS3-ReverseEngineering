/* Module: Setup.exe
   Function: _SfGetMultiByteFromPrintString@8
   Address: 00405220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * _SfGetMultiByteFromPrintString_8(int param_1,undefined *param_2)

{
  undefined *puVar1;
  
                    /* 0x5220  165  _SfGetMultiByteFromPrintString@8 */
  puVar1 = &DAT_004490e8;
  if (*(int *)(param_1 + 0x130) != 0) {
    puVar1 = param_2;
  }
  return puVar1;
}


