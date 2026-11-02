/* Module: vegas30.exe
   Function: FUN_005bbaf0
   Address: 005bbaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bbaf0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_178 [10];
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_118 [4];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 auStack_f0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puVar4 = local_178;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_178[0] = 0x70;
  local_178[1] = 0x40000;
  puVar4 = (undefined4 *)(param_1 + 0x458);
  puVar5 = local_178 + 2;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = lstrlenA((LPCSTR)(param_1 + 0xb8));
  local_13c = iVar1 * 2 + 2;
  iVar1 = lstrlenA((LPCSTR)(param_1 + 0x480));
  local_138 = iVar1 * 2 + 2;
  iVar1 = lstrlenA((LPCSTR)(param_1 + 0x238));
  local_134 = iVar1 * 2 + 2;
  local_140 = FUN_005baa30(param_1,0);
  local_128 = *(undefined4 *)(param_1 + 0x230);
  local_12c = *(undefined4 *)(param_1 + 0x224);
  local_130 = *(undefined4 *)(param_1 + 0x220);
  local_118[2] = *(undefined4 *)(param_1 + 0xc2c);
  local_124 = *(undefined4 *)(param_1 + 0x234);
  local_118[0] = *(undefined4 *)(param_1 + 0xc28);
  local_118[1] = *(undefined4 *)(param_1 + 0xc58);
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_178,0x70,0);
  if (-1 < iVar1) {
    if ((iStack_14c != 0) &&
       (iVar1 = FUN_005bbe70(param_2,(LPCSTR)(param_1 + 0xb8),iStack_14c), iVar1 < 0)) {
      return;
    }
    if ((iStack_148 != 0) && (iVar1 = FUN_005bbe70(param_2,param_1 + 0x480,iStack_148), iVar1 < 0))
    {
      return;
    }
    if ((iStack_144 != 0) && (iVar1 = FUN_005bbe70(param_2,param_1 + 0x238,iStack_144), iVar1 < 0))
    {
      return;
    }
    iVar1 = 0;
    if (0 < iStack_150) {
      do {
        puVar4 = local_118;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_118[0] = 0x100;
        iVar2 = FUN_005b9fc0(param_1,iVar1,0);
        local_118[1] = *(undefined4 *)(iVar2 + 0x34);
        local_118[2] = *(undefined4 *)(iVar2 + 0x38);
        local_118[3] = *(undefined4 *)(iVar2 + 0x30);
        uStack_108 = 3;
        uStack_104 = 3;
        uStack_100 = 3;
        uStack_fc = *(undefined4 *)(iVar2 + 0xb8);
        uStack_f8 = 3;
        puVar4 = (undefined4 *)(iVar2 + 0x40);
        puVar5 = auStack_f0;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        uStack_a8 = *(undefined4 *)(iVar2 + 0xcc);
        uStack_a4 = *(undefined4 *)(iVar2 + 0xd0);
        uStack_a0 = *(undefined4 *)(iVar2 + 0xd4);
        uStack_9c = *(undefined4 *)(iVar2 + 0xd8);
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_84 = 0;
        uStack_8c = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_7c = 0;
        uStack_74 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_64 = 0;
        uStack_6c = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = *(undefined4 *)(iVar2 + 0xdc);
        uStack_54 = *(undefined4 *)(iVar2 + 0xe0);
        uStack_50 = *(undefined4 *)(iVar2 + 0xe4);
        uStack_b0 = *(undefined4 *)(param_1 + 0xc38);
        uStack_4c = *(undefined4 *)(iVar2 + 0xe8);
        uStack_48 = *(undefined4 *)(param_1 + 0xc48);
        uStack_ac = *(undefined4 *)(param_1 + 0xc3c);
        uStack_3c = *(undefined4 *)(param_1 + 0xc54);
        uStack_40 = *(undefined4 *)(param_1 + 0xc50);
        uStack_38 = *(undefined4 *)(iVar2 + 0xec);
        uStack_30 = *(undefined4 *)(iVar2 + 0xf0);
        uStack_2c = *(undefined4 *)(iVar2 + 0xf4);
        uStack_28 = *(undefined4 *)(iVar2 + 0xf8);
        uStack_24 = *(undefined4 *)(iVar2 + 0xfc);
        uStack_20 = 0;
        FUN_005ba030(param_1,iVar2,0,1);
        iVar2 = (**(code **)(*param_2 + 0x10))(param_2,local_118,0x100,0);
      } while ((-1 < iVar2) && (iVar1 = iVar1 + 1, iVar1 < iStack_150));
    }
  }
  return;
}


