/* Module: vfplugs.dll
   Function: FUN_004273e0
   Address: 004273e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004273e0(uint *param_1,HWND param_2,uint *param_3,uint param_4)

{
  HWND pHVar1;
  uint *puVar2;
  bool bVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  
  puVar2 = param_1;
  if (DAT_00493b78 == -1) {
    DAT_00493b78 = 0x1e;
    DAT_00493b7c = 10;
    SetRectEmpty((LPRECT)&DAT_00493b80);
    InflateRect((LPRECT)&DAT_00493b80,6,6);
    SetRectEmpty((LPRECT)&DAT_00493b90);
    InflateRect((LPRECT)&DAT_00493b90,8,8);
  }
  param_1[10] = (uint)param_2;
  *param_1 = param_3[8];
  param_1[0xb] = param_3[2];
  param_1[3] = (uint)(param_2 == (HWND)param_3[3]) << 2 | param_1[3] & 0xfffffffb;
  param_1[0x31] = *param_3;
  param_1[0x32] = param_4;
  param_1[0xc] = 0;
  pHVar1 = (HWND)param_3[3];
  pHVar4 = GetParent(param_2);
  if (pHVar4 != pHVar1) {
    param_1[0xc] = (uint)pHVar1;
  }
  param_1[0x30] = 0xffffffff;
  param_1[6] = 0x32;
  param_1[7] = 0x32;
  param_1[4] = 0;
  param_1[5] = 100;
  iVar5 = FUN_00424380(100,*param_1 & 0x40);
  uVar7 = param_1[5];
  uVar9 = param_1[4];
  iVar6 = FUN_00424380(uVar9,*param_1 & 0x40);
  if (iVar5 - iVar6 < 1) {
    param_1 = (uint *)0x1;
  }
  else {
    iVar6 = FUN_00424380(param_1[4],*param_1 & 0x40);
    param_1 = (uint *)(iVar5 - iVar6);
  }
  puVar2[8] = puVar2[5] -
              (int)(((longlong)iVar5 * (longlong)(int)(uVar7 - uVar9)) / (longlong)(int)param_1);
  uVar7 = *puVar2;
  puVar2[9] = (uint)param_1;
  uVar9 = puVar2[3];
  puVar2[3] = (((uVar7 >> 0xe & 1) << 1 | uVar7 >> 0xf & 1) << 0x10 | uVar7 & 1) << 3 |
              uVar7 >> 0x1b & 1 | uVar9 & 0xffe5fff6;
  if ((uVar9 & 4) == 0) {
    uVar10 = param_3[6];
    uVar7 = uVar10 + param_3[4];
    uVar9 = param_3[5] + param_3[7];
    puVar2[0xd] = param_3[7];
  }
  else {
    uVar7 = param_3[4];
    uVar9 = param_3[5];
    uVar10 = 0;
    puVar2[0xd] = 0;
  }
  puVar2[0xe] = uVar10;
  puVar2[0xf] = uVar9;
  puVar2[0x10] = uVar7;
  FUN_00426f70(puVar2);
  bVar3 = FUN_00424280();
  puVar2[3] = (uint)bVar3 << 0xd | puVar2[3] & 0xffffdf7f;
  DVar8 = GetSysColor(0xf);
  uVar7 = puVar2[3];
  puVar2[0x23] = DVar8;
  puVar2[3] = uVar7 | 0x4400;
  if (((uVar7 | 0x4400) & 0x4000) != 0) {
    puVar2[2] = (int)(uVar7 << 0x17) >> 0x1f;
    puVar2[1] = *puVar2;
    *puVar2 = *puVar2 | 0x400;
    puVar2[3] = uVar7 | 0x4500;
  }
  return 1;
}


