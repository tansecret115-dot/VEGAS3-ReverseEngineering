/* Module: vidcap30.exe
   Function: _SfVideo_IsCompressed@4
   Address: 004914e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfVideo_IsCompressed_4(int param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x914e0  662  _SfVideo_IsCompressed@4 */
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0x42444654) {
    if (((uVar1 != 0x42444653) && (uVar1 != 0)) && (uVar1 != 3)) {
      return true;
    }
  }
  else if (uVar1 != 0x53474653) {
    return true;
  }
  iVar2 = _SfGetPixelType_4(param_1);
  return iVar2 == 0;
}


