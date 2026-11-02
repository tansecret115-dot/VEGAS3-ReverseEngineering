/* Module: pncrt.dll
   Function: FUN_780109c0
   Address: 780109c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_780109c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCSTR _LpSrcStr;
  int iVar3;
  BOOL unaff_EBX;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_78042438 == (_locale_t)0x0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (__mb_cur_max < 2) {
        uVar2 = (byte)_pctype[param_1 * 2] & 1;
      }
      else {
        uVar2 = _isctype(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((_pctype[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      _LpSrcStr = (LPCSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      _LpSrcStr = (LPCSTR)0x2;
    }
    iVar3 = __crtLCMapStringA(DAT_78042438,(LPCWSTR)0x100,(DWORD)&param_1,_LpSrcStr,(int)local_8,
                              (LPSTR)0x3,0,1,unaff_EBX);
    if (iVar3 == 0) {
      return uVar1;
    }
    if (iVar3 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}


