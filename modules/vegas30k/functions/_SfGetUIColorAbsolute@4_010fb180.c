/* Module: vegas30k.dll
   Function: _SfGetUIColorAbsolute@4
   Address: 010fb180
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD _SfGetUIColorAbsolute_4(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  bool bVar3;
  
                    /* 0xfb180  990  _SfGetUIColorAbsolute@4 */
  bVar3 = param_1 < 0;
  if (bVar3) {
    param_1 = -param_1;
  }
  if (param_1 < 100) {
    DVar1 = GetSysColor(param_1);
    return DVar1;
  }
  if (0x3a < param_1 - 100U) {
    return 0xffffffff;
  }
  uVar2 = *(uint *)(&DAT_01206708 + param_1 * 4);
  if (bVar3) {
    uVar2 = *(uint *)(&DAT_011e3300 + param_1 * 4);
  }
  if ((uVar2 & 0xff000000) == 0x4000000) {
    DVar1 = GetSysColor(uVar2 & 0xffffff);
    return DVar1;
  }
  if ((uVar2 & 0xff000000) == 0x5000000) {
    uVar2 = FUN_010fb0b0(uVar2 & 0xffffff);
  }
  return uVar2;
}


