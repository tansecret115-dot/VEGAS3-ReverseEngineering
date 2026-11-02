/* Module: vegas30k.dll
   Function: FUN_010acb20
   Address: 010acb20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010acb20(uint *param_1,HWND param_2,uint *param_3,uint param_4)

{
  HWND pHVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  uint uVar10;
  
  puVar4 = param_1;
  if (DAT_0128e8f8 == 0) {
    DAT_0128e8fc = 0x1e;
    DAT_0128e900 = 10;
    DAT_0128e924 = 10;
    DAT_0128e928 = 1;
    SetRectEmpty((LPRECT)&DAT_0128e904);
    InflateRect((LPRECT)&DAT_0128e904,6,6);
    SetRectEmpty((LPRECT)&DAT_0128e914);
    InflateRect((LPRECT)&DAT_0128e914,8,8);
    DAT_0128e92c = CreateCompatibleDC((HDC)0x0);
    DAT_0128e930 = _SfGetUICursor_4(0x7f00);
    DAT_0128e934 = _SfGetUICursor_4(0x1b);
    DAT_0128e938 = _SfGetUICursor_4(0x1c);
  }
  DAT_0128e8f8 = DAT_0128e8f8 + 1;
  param_1[0xc] = (uint)param_2;
  *param_1 = param_3[8];
  param_1[0xd] = param_3[2];
  param_1[3] = (uint)(param_2 == (HWND)param_3[3]) << 2 | param_1[3] & 0xfffffffb;
  param_1[0x47] = *param_3;
  param_1[0x48] = param_4;
  param_1[0xe] = 0;
  pHVar1 = (HWND)param_3[3];
  pHVar5 = GetParent(param_2);
  if (pHVar5 != pHVar1) {
    param_1[0xe] = (uint)pHVar1;
  }
  uVar8 = *param_1;
  uVar10 = uVar8 >> 6 & 1;
  param_1[3] = (((uVar8 >> 0xe & 1) << 0xe | uVar10) << 1 | uVar8 & 1) << 3 | uVar8 >> 0x1b & 1 |
               param_1[3] & 0xfffbffe6;
  if (uVar10 == 0) {
    param_1[9] = 1;
  }
  else {
    param_1[9] = 2;
    *param_1 = uVar8 | 2;
  }
  param_1[4] = 0;
  param_1[5] = 100;
  param_1[6] = 0x32;
  FUN_010a7870(param_1,param_1 + 7,0x32,(1 << ((byte)param_1[9] & 0x1f)) + -1);
  FUN_010a7870(param_1,param_1 + 0x2a,0x32,(1 << ((byte)param_1[9] & 0x1f)) + -1);
  param_1[0x41] = 0;
  param_1[0x2c] = 0xffffffff;
  param_1[0x28] = 1;
  param_1[0x40] = (1 << ((byte)param_1[9] & 0x1f)) - 1;
  uVar8 = (int)((param_1[5] - param_1[4]) + 5) / 10;
  param_1[0x29] = uVar8;
  if (uVar8 == 0) {
    param_1[0x29] = 1;
  }
  iVar6 = FUN_010a9f60(param_1[5]);
  uVar8 = param_1[5];
  uVar10 = param_1[4];
  iVar7 = FUN_010a9f60(uVar10);
  if (iVar6 - iVar7 < 1) {
    param_1 = (uint *)0x1;
  }
  else {
    iVar7 = FUN_010a9f60(param_1[4]);
    param_1 = (uint *)(iVar6 - iVar7);
  }
  puVar4[10] = puVar4[5] -
               (int)(((longlong)iVar6 * (longlong)(int)(uVar8 - uVar10)) / (longlong)(int)param_1);
  puVar4[0xb] = (uint)param_1;
  if ((puVar4[3] & 4) == 0) {
    uVar8 = param_3[6];
    uVar10 = param_3[4];
    uVar2 = param_3[7];
    uVar3 = param_3[5];
    puVar4[0xf] = uVar2;
    puVar4[0x10] = uVar8;
    puVar4[0x11] = uVar3 + uVar2;
    puVar4[0x12] = uVar10 + uVar8;
  }
  else {
    uVar8 = param_3[4];
    puVar4[0x11] = param_3[5];
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x12] = uVar8;
  }
  uVar8 = FUN_010a8440(puVar4);
  puVar4[3] = (uVar8 & 1) << 10 | puVar4[3] & 0xfffffaff;
  DVar9 = GetSysColor(0xf);
  uVar8 = puVar4[3];
  puVar4[0x42] = DVar9;
  puVar4[0x43] = 0;
  puVar4[0x44] = 0;
  uVar10 = (uint)(byte)((~(byte)uVar8 & 4 | 0x10) >> 2) << 9 | uVar8 & 0xfffcfdff;
  puVar4[3] = uVar10;
  if ((uVar10 & 0x800) != 0) {
    puVar4[2] = (int)(uVar8 << 0x1a) >> 0x1f;
    puVar4[1] = *puVar4;
    *puVar4 = *puVar4 & 0xffff0fff;
    puVar4[3] = puVar4[3] | 0x20;
  }
  FUN_010ac3f0(puVar4,0,param_3[5],param_3[4]);
  return 1;
}


