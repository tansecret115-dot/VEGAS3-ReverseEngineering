/* Module: Setup.exe
   Function: _SfGetUIPenWithStyle@8
   Address: 00414bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetUIPenWithStyle_8(int param_1,int param_2)

{
  COLORREF color;
  HPEN pHVar1;
  undefined *color_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_c [3];
  
                    /* 0x14bb0  185  _SfGetUIPenWithStyle@8 */
  if (2 < param_2) {
    GetStockObject(7);
    return;
  }
  if (param_1 < 0x19) {
    color = GetSysColor(param_1);
    if (param_2 == 2) {
      uVar4 = color >> 8 & 0xff;
      uVar3 = color >> 0x10 & 0xff;
      iVar2 = ((color & 0xff) + uVar4 + uVar3) / 3 + 0xc0;
      color = (uint)CONCAT11((char)((ulonglong)((longlong)(int)(uVar3 + iVar2) * 0x55555556) >> 0x20
                                   ),(char)((ulonglong)((longlong)(int)(uVar4 + iVar2) * 0x55555556)
                                           >> 0x20)) << 8 | ((color & 0xff) + iVar2) / 3 & 0xff;
    }
    iVar2 = param_2 + param_1 * 3;
    local_c[0] = 0;
    local_c[1] = 2;
    local_c[2] = 0;
    if ((&DAT_00449448)[iVar2] == 0) {
      pHVar1 = CreatePen(local_c[param_2],1,color);
      (&DAT_00449448)[iVar2] = pHVar1;
    }
    iVar2 = (&DAT_00449448)[iVar2];
  }
  else {
    if ((param_1 < 100) || (0x9e < param_1)) goto LAB_00414dac;
    color_00 = _SfGetUIColorAbsolute_4(param_1);
    if (param_2 == 2) {
      uVar4 = (uint)color_00 >> 8 & 0xff;
      uVar3 = (uint)color_00 >> 0x10 & 0xff;
      iVar2 = (((uint)color_00 & 0xff) + uVar4 + uVar3) / 3 + 0xc0;
      color_00 = (undefined *)
                 ((uint)CONCAT11((char)((ulonglong)((longlong)(int)(uVar3 + iVar2) * 0x55555556) >>
                                       0x20),
                                 (char)((ulonglong)((longlong)(int)(uVar4 + iVar2) * 0x55555556) >>
                                       0x20)) << 8 | (((uint)color_00 & 0xff) + iVar2) / 3 & 0xff);
    }
    local_c[0] = 0;
    local_c[1] = 2;
    iVar2 = param_2 + (param_1 + -100) * 3;
    local_c[2] = 0;
    if ((&DAT_00449574)[iVar2] == 0) {
      pHVar1 = CreatePen(local_c[param_2],1,(COLORREF)color_00);
      (&DAT_00449574)[iVar2] = pHVar1;
    }
    iVar2 = (&DAT_00449574)[iVar2];
  }
  if (iVar2 != 0) {
    return;
  }
LAB_00414dac:
  GetStockObject(7);
  return;
}


