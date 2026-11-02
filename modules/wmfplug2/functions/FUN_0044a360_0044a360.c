/* Module: wmfplug2.dll
   Function: FUN_0044a360
   Address: 0044a360
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_0044a360(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  bool bVar3;
  
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
  uVar2 = *(uint *)(&DAT_004896e8 + param_1 * 4);
  if (bVar3) {
    uVar2 = *(uint *)("SOFTWARE\\Microsoft\\%s\\CurrentVersion\\~SfTestLoginPrivilege" +
                     param_1 * 4 + 8);
  }
  if ((uVar2 & 0xff000000) == 0x4000000) {
    DVar1 = GetSysColor(uVar2 & 0xffffff);
    return DVar1;
  }
  if ((uVar2 & 0xff000000) == 0x5000000) {
    uVar2 = FUN_0044a290(uVar2 & 0xffffff);
  }
  return uVar2;
}


