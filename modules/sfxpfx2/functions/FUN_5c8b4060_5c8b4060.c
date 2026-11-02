/* Module: sfxpfx2.dll
   Function: FUN_5c8b4060
   Address: 5c8b4060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8b4060(uint *param_1,HWND param_2,uint *param_3,uint param_4)

{
  HWND pHVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  HWND pHVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  uint uVar11;
  
  puVar5 = param_1;
  if (DAT_5c8e9708 == 0) {
    DAT_5c8e970c = 0x1e;
    DAT_5c8e9710 = 10;
    DAT_5c8e9734 = 10;
    DAT_5c8e9738 = 1;
    SetRectEmpty((LPRECT)&DAT_5c8e9714);
    InflateRect((LPRECT)&DAT_5c8e9714,6,6);
    SetRectEmpty((LPRECT)&DAT_5c8e9724);
    InflateRect((LPRECT)&DAT_5c8e9724,8,8);
    DAT_5c8e973c = CreateCompatibleDC((HDC)0x0);
    DAT_5c8e9740 = FUN_5c8c0af0(0x7f00);
    DAT_5c8e9744 = FUN_5c8c0af0(0x1b);
    DAT_5c8e9748 = FUN_5c8c0af0(0x1c);
  }
  DAT_5c8e9708 = DAT_5c8e9708 + 1;
  param_1[0xc] = (uint)param_2;
  *param_1 = param_3[8];
  param_1[0xd] = param_3[2];
  param_1[3] = (uint)(param_2 == (HWND)param_3[3]) << 2 | param_1[3] & 0xfffffffb;
  param_1[0x47] = *param_3;
  param_1[0x48] = param_4;
  param_1[0xe] = 0;
  pHVar1 = (HWND)param_3[3];
  pHVar7 = GetParent(param_2);
  if (pHVar7 != pHVar1) {
    param_1[0xe] = (uint)pHVar1;
  }
  uVar2 = *param_1;
  uVar11 = uVar2 >> 6 & 1;
  param_1[3] = (((uVar2 >> 0xe & 1) << 0xe | uVar11) << 1 | uVar2 & 1) << 3 | uVar2 >> 0x1b & 1 |
               param_1[3] & 0xfffbffe6;
  if (uVar11 == 0) {
    param_1[9] = 1;
  }
  else {
    param_1[9] = 2;
    *param_1 = uVar2 | 2;
  }
  param_1[4] = 0;
  param_1[5] = 100;
  param_1[6] = 0x32;
  FUN_5c8aee20((int)param_1,(int *)(param_1 + 7),0x32,(1 << ((byte)param_1[9] & 0x1f)) - 1);
  FUN_5c8aee20((int)param_1,(int *)(param_1 + 0x2a),0x32,(1 << ((byte)param_1[9] & 0x1f)) - 1);
  param_1[0x41] = 0;
  param_1[0x2c] = 0xffffffff;
  param_1[0x28] = 1;
  param_1[0x40] = (1 << ((byte)param_1[9] & 0x1f)) - 1;
  uVar2 = (int)((param_1[5] - param_1[4]) + 5) / 10;
  param_1[0x29] = uVar2;
  if (uVar2 == 0) {
    param_1[0x29] = 1;
  }
  iVar8 = FUN_5c8b1510(param_1[5]);
  uVar2 = param_1[5];
  uVar11 = param_1[4];
  iVar9 = FUN_5c8b1510(uVar11);
  if (iVar8 - iVar9 < 1) {
    param_1 = (uint *)0x1;
  }
  else {
    iVar9 = FUN_5c8b1510(param_1[4]);
    param_1 = (uint *)(iVar8 - iVar9);
  }
  puVar5[10] = puVar5[5] -
               (int)(((longlong)iVar8 * (longlong)(int)(uVar2 - uVar11)) / (longlong)(int)param_1);
  puVar5[0xb] = (uint)param_1;
  if ((puVar5[3] & 4) == 0) {
    uVar2 = param_3[6];
    uVar11 = param_3[4];
    uVar3 = param_3[7];
    uVar4 = param_3[5];
    puVar5[0xf] = uVar3;
    puVar5[0x10] = uVar2;
    puVar5[0x11] = uVar4 + uVar3;
    puVar5[0x12] = uVar11 + uVar2;
  }
  else {
    uVar2 = param_3[4];
    puVar5[0x11] = param_3[5];
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x12] = uVar2;
  }
  bVar6 = FUN_5c8af9f0();
  puVar5[3] = (uint)bVar6 << 10 | puVar5[3] & 0xfffffaff;
  DVar10 = GetSysColor(0xf);
  uVar2 = puVar5[3];
  puVar5[0x42] = DVar10;
  puVar5[0x43] = 0;
  puVar5[0x44] = 0;
  uVar11 = (uint)(byte)((~(byte)uVar2 & 4 | 0x10) >> 2) << 9 | uVar2 & 0xfffcfdff;
  puVar5[3] = uVar11;
  if ((uVar11 & 0x800) != 0) {
    puVar5[2] = (int)(uVar2 << 0x1a) >> 0x1f;
    puVar5[1] = *puVar5;
    *puVar5 = *puVar5 & 0xffff0fff;
    puVar5[3] = puVar5[3] | 0x20;
  }
  FUN_5c8b3930(puVar5);
  return 1;
}


