/* Module: vidcap30.exe
   Function: _GetByteOffsetFromChannelEnum@8
   Address: 004c9bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _GetByteOffsetFromChannelEnum_8(uint param_1,int param_2)

{
  uint uVar1;
  
                    /* 0xc9bc0  168  _GetByteOffsetFromChannelEnum@8 */
  if (param_1 < 4) {
    uVar1 = param_2 >> 0x1f;
    switch(param_1) {
    case 1:
      return (int)(param_2 + (uVar1 & 3)) >> 2;
    case 2:
      return ((int)(param_2 + (uVar1 & 3)) >> 2) * 2;
    case 3:
      return ((int)(param_2 + (uVar1 & 3)) >> 2) * 3;
    }
  }
  return 0;
}


