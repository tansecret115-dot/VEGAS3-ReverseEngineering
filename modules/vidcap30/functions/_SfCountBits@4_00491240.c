/* Module: vidcap30.exe
   Function: _SfCountBits@4
   Address: 00491240
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfCountBits_4(uint param_1)

{
  int iVar1;
  
                    /* 0x91240  269  _SfCountBits@4 */
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


