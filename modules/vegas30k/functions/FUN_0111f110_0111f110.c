/* Module: vegas30k.dll
   Function: FUN_0111f110
   Address: 0111f110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0111f110(uint *param_1,HWND param_2,uint *param_3,uint param_4)

{
  HWND pHVar1;
  uint *puVar2;
  HWND pHVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  DWORD DVar7;
  uint uVar8;
  uint uVar9;
  
  puVar2 = param_1;
  if (DAT_01206ba8 == -1) {
    DAT_01206ba8 = 0x1e;
    DAT_01206bac = 10;
    SetRectEmpty((LPRECT)&DAT_01206bb0);
    InflateRect((LPRECT)&DAT_01206bb0,6,6);
    SetRectEmpty((LPRECT)&DAT_01206bc0);
    InflateRect((LPRECT)&DAT_01206bc0,8,8);
  }
  param_1[10] = (uint)param_2;
  *param_1 = param_3[8];
  param_1[0xb] = param_3[2];
  param_1[3] = (uint)(param_2 == (HWND)param_3[3]) << 2 | param_1[3] & 0xfffffffb;
  param_1[0x31] = *param_3;
  param_1[0x32] = param_4;
  param_1[0xc] = 0;
  pHVar1 = (HWND)param_3[3];
  pHVar3 = GetParent(param_2);
  if (pHVar3 != pHVar1) {
    param_1[0xc] = (uint)pHVar1;
  }
  param_1[0x30] = 0xffffffff;
  param_1[6] = 0x32;
  param_1[7] = 0x32;
  param_1[4] = 0;
  param_1[5] = 100;
  iVar4 = FUN_0111c0b0(100,*param_1 & 0x40);
  uVar6 = param_1[5];
  uVar8 = param_1[4];
  iVar5 = FUN_0111c0b0(uVar8,*param_1 & 0x40);
  if (iVar4 - iVar5 < 1) {
    param_1 = (uint *)0x1;
  }
  else {
    iVar5 = FUN_0111c0b0(param_1[4],*param_1 & 0x40);
    param_1 = (uint *)(iVar4 - iVar5);
  }
  puVar2[8] = puVar2[5] -
              (int)(((longlong)iVar4 * (longlong)(int)(uVar6 - uVar8)) / (longlong)(int)param_1);
  uVar6 = *puVar2;
  puVar2[9] = (uint)param_1;
  uVar8 = puVar2[3];
  puVar2[3] = (((uVar6 >> 0xe & 1) << 1 | uVar6 >> 0xf & 1) << 0x10 | uVar6 & 1) << 3 |
              uVar6 >> 0x1b & 1 | uVar8 & 0xffe5fff6;
  if ((uVar8 & 4) == 0) {
    uVar9 = param_3[6];
    uVar6 = uVar9 + param_3[4];
    uVar8 = param_3[5] + param_3[7];
    puVar2[0xd] = param_3[7];
  }
  else {
    uVar6 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = 0;
    puVar2[0xd] = 0;
  }
  puVar2[0xe] = uVar9;
  puVar2[0xf] = uVar8;
  puVar2[0x10] = uVar6;
  FUN_0111eca0(puVar2,0,param_3[5],param_3[4]);
  uVar6 = FUN_0111bfb0(puVar2);
  puVar2[3] = (uVar6 & 1) << 0xd | puVar2[3] & 0xffffdf7f;
  DVar7 = GetSysColor(0xf);
  uVar6 = puVar2[3];
  puVar2[0x23] = DVar7;
  puVar2[3] = uVar6 | 0x4400;
  if (((uVar6 | 0x4400) & 0x4000) != 0) {
    puVar2[2] = (int)(uVar6 << 0x17) >> 0x1f;
    puVar2[1] = *puVar2;
    *puVar2 = *puVar2 | 0x400;
    puVar2[3] = uVar6 | 0x4500;
  }
  return 1;
}


