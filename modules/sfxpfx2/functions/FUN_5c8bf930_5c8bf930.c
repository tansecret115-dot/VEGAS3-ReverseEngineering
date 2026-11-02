/* Module: sfxpfx2.dll
   Function: FUN_5c8bf930
   Address: 5c8bf930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8bf930(int param_1,int param_2)

{
  COLORREF CVar1;
  HPEN pHVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_c [3];
  
  if (2 < param_2) {
    GetStockObject(7);
    return;
  }
  if (param_1 < 0x19) {
    CVar1 = GetSysColor(param_1);
    if (param_2 == 2) {
      uVar5 = CVar1 >> 8 & 0xff;
      uVar4 = CVar1 >> 0x10 & 0xff;
      iVar3 = ((CVar1 & 0xff) + uVar5 + uVar4) / 3 + 0xc0;
      CVar1 = (uint)CONCAT11((char)((ulonglong)((longlong)(int)(uVar4 + iVar3) * 0x55555556) >> 0x20
                                   ),(char)((ulonglong)((longlong)(int)(uVar5 + iVar3) * 0x55555556)
                                           >> 0x20)) << 8 | ((CVar1 & 0xff) + iVar3) / 3 & 0xff;
    }
    iVar3 = param_2 + param_1 * 3;
    local_c[0] = 0;
    local_c[1] = 2;
    local_c[2] = 0;
    if ((&DAT_5c8e9c80)[iVar3] == 0) {
      pHVar2 = CreatePen(local_c[param_2],1,CVar1);
      (&DAT_5c8e9c80)[iVar3] = pHVar2;
    }
    iVar3 = (&DAT_5c8e9c80)[iVar3];
  }
  else {
    if ((param_1 < 100) || (0x9e < param_1)) goto LAB_5c8bfb2c;
    CVar1 = FUN_5c8bf710(param_1);
    if (param_2 == 2) {
      uVar5 = CVar1 >> 8 & 0xff;
      uVar4 = CVar1 >> 0x10 & 0xff;
      iVar3 = ((CVar1 & 0xff) + uVar5 + uVar4) / 3 + 0xc0;
      CVar1 = (uint)CONCAT11((char)((ulonglong)((longlong)(int)(uVar4 + iVar3) * 0x55555556) >> 0x20
                                   ),(char)((ulonglong)((longlong)(int)(uVar5 + iVar3) * 0x55555556)
                                           >> 0x20)) << 8 | ((CVar1 & 0xff) + iVar3) / 3 & 0xff;
    }
    local_c[0] = 0;
    local_c[1] = 2;
    iVar3 = param_2 + (param_1 + -100) * 3;
    local_c[2] = 0;
    if ((&DAT_5c8e9dac)[iVar3] == 0) {
      pHVar2 = CreatePen(local_c[param_2],1,CVar1);
      (&DAT_5c8e9dac)[iVar3] = pHVar2;
    }
    iVar3 = (&DAT_5c8e9dac)[iVar3];
  }
  if (iVar3 != 0) {
    return;
  }
LAB_5c8bfb2c:
  GetStockObject(7);
  return;
}


