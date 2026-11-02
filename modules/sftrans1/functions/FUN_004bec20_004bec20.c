/* Module: sftrans1.dll
   Function: FUN_004bec20
   Address: 004bec20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004bec20(uint *param_1,HWND param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  HWND pHVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar3 = param_1;
  if (DAT_00575848 == -1) {
    DAT_00575848 = 0x1e;
    DAT_0057584c = 10;
    SetRectEmpty((LPRECT)&DAT_00575850);
    InflateRect((LPRECT)&DAT_00575850,6,6);
    SetRectEmpty((LPRECT)&DAT_00575860);
    InflateRect((LPRECT)&DAT_00575860,8,8);
  }
  param_1[0xe] = (uint)param_2;
  param_1[1] = 0;
  param_1[0x11] = 0;
  param_1[0x24] = 0xffffffff;
  param_1[0x12] = 100;
  param_1[0x13] = 0x32;
  param_1[0x14] = 0x32;
  iVar4 = GetSystemMetrics(1);
  param_1[0x2a] = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
  FUN_004beab0(param_1,param_3[8]);
  iVar4 = FUN_004bd1c0(param_1[0x12]);
  uVar9 = param_1[0x12];
  uVar7 = param_1[0x11];
  iVar5 = FUN_004bd1c0(uVar7);
  param_1[0x15] =
       param_1[0x12] -
       (int)(((longlong)iVar4 * (longlong)(int)(uVar9 - uVar7)) / (longlong)(iVar4 - iVar5));
  param_1[0x16] = iVar4 - iVar5;
  param_1[0x20] = 0;
  if ((*param_1 & 2) != 0) {
    puVar1 = param_1 + 7;
    uVar9 = param_3[2];
    uVar7 = param_3[3];
    param_1 = (uint *)0x0;
    if ((*puVar1 != 0) && ((param_3[5] & 1) == 0)) {
      param_1 = (uint *)0x1;
    }
    FUN_004cb340(uVar7,uVar9,0,0xffffffff);
    FUN_004cb3b0(uVar7,uVar9,param_1,2);
  }
  puVar3[0xf] = param_3[2];
  puVar3[6] = (uint)(param_2 == (HWND)param_3[3]);
  puVar3[0x2f] = *param_3;
  puVar3[0x30] = param_4;
  puVar3[0x10] = 0;
  pHVar2 = (HWND)param_3[3];
  pHVar6 = GetParent(param_2);
  if (pHVar6 != pHVar2) {
    puVar3[0x10] = (uint)pHVar2;
  }
  uVar9 = 0;
  if (puVar3[6] == 0) {
    uVar9 = param_3[6];
    uVar7 = param_3[4] + uVar9;
    uVar8 = param_3[5] + param_3[7];
    puVar3[0x26] = param_3[7];
  }
  else {
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    puVar3[0x26] = 0;
  }
  puVar3[0x27] = uVar9;
  puVar3[0x28] = uVar8;
  puVar3[0x29] = uVar7;
  FUN_004be940(puVar3,0,param_3[5],param_3[4]);
  return 1;
}


