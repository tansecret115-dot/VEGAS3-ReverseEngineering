/* Module: qt4plug.dll
   Function: FUN_5f548cb0
   Address: 5f548cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_5f548cb0(int param_1)

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
  uVar2 = *(uint *)(&DAT_5f5a3920 + param_1 * 4);
  if (bVar3) {
    uVar2 = *(uint *)("http://www.sonicfoundry.com/productinfo.asp?Product=SoftEncode" +
                     param_1 * 4 + 0x34);
  }
  if ((uVar2 & 0xff000000) == 0x4000000) {
    DVar1 = GetSysColor(uVar2 & 0xffffff);
    return DVar1;
  }
  if ((uVar2 & 0xff000000) == 0x5000000) {
    uVar2 = FUN_5f548be0(uVar2 & 0xffffff);
  }
  return uVar2;
}


