/* Module: vegas30.exe
   Function: FUN_005011f0
   Address: 005011f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005011f0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  HWND pHVar4;
  LRESULT LVar5;
  uint uVar6;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  dVar3 = *(double *)(param_1 + 0x20);
  LVar9 = 0;
  WVar8 = 0;
  UVar7 = 0x147;
  dVar1 = (double)(DAT_0064b130 >> 2) * (_DAT_00619d30 / _DAT_0064b120);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x434);
  LVar5 = SendMessageA(pHVar4,UVar7,WVar8,LVar9);
  uVar6 = (uint)DAT_0064b132;
  local_70 = 0;
  local_6c = 0x40ed4c00;
  local_68 = 0;
  local_64 = 0x408f4000;
  local_60 = 0;
  local_5c = 0x3ff00000;
  LVar9 = 0;
  WVar8 = 0;
  UVar7 = 0xf0;
  local_58 = _DAT_00612910 / _DAT_0064b118;
  dVar2 = _DAT_00619d30 / _DAT_0064b120;
  *(LRESULT *)(param_1 + 0x14) = LVar5;
  local_50 = (double)uVar6 * dVar2;
  local_48 = dVar1;
  local_40 = dVar1 * _DAT_00619d28;
  local_38 = dVar1 * _DAT_00610560;
  local_30 = dVar1 * _DAT_00610560 * _DAT_00619d28;
  local_28 = dVar1 * _DAT_006128c8;
  local_20 = dVar1 * _DAT_006128c8 * _DAT_00619d28;
  local_18 = dVar1 * _DAT_006128b8;
  local_10 = dVar1 * _DAT_006128b8 * _DAT_00619d28;
  *(double *)(param_1 + 8) = *(double *)(&local_70 + LVar5 * 2) * dVar3;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x470);
  LVar5 = SendMessageA(pHVar4,UVar7,WVar8,LVar9);
  *(LRESULT *)(param_1 + 0x10) = LVar5;
  return;
}


