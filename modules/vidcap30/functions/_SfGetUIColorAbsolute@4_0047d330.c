/* Module: vidcap30.exe
   Function: _SfGetUIColorAbsolute@4
   Address: 0047d330
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD _SfGetUIColorAbsolute_4(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  bool bVar3;
  
                    /* 0x7d330  438  _SfGetUIColorAbsolute@4 */
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
  uVar2 = *(uint *)(&DAT_005b6590 + param_1 * 4);
  if (bVar3) {
    uVar2 = *(uint *)("$@Invalid Message Box parameter...User intervention is needed!!!!" +
                     param_1 * 4 + 6);
  }
  if ((uVar2 & 0xff000000) == 0x4000000) {
    DVar1 = GetSysColor(uVar2 & 0xffffff);
    return DVar1;
  }
  if ((uVar2 & 0xff000000) == 0x5000000) {
    uVar2 = FUN_0047d260(uVar2 & 0xffffff);
  }
  return uVar2;
}


