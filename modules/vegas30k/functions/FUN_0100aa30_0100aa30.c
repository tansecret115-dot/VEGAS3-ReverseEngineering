/* Module: vegas30k.dll
   Function: FUN_0100aa30
   Address: 0100aa30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0100aa30(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint local_140;
  undefined1 local_13c;
  undefined1 uStack_13b;
  ushort uStack_13a;
  uint local_134;
  undefined1 local_130;
  undefined1 uStack_12f;
  ushort uStack_12e;
  undefined1 local_128;
  undefined1 uStack_127;
  ushort uStack_126;
  undefined1 local_120;
  undefined1 uStack_11f;
  ushort uStack_11e;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_e8;
  undefined4 local_e4;
  double local_e0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_68;
  undefined4 local_64;
  double local_60;
  undefined4 local_48;
  undefined4 local_44;
  double local_40;
  undefined4 local_28;
  undefined4 local_24;
  double local_20;
  
  local_140 = (int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2;
  local_134 = local_140;
  if (0 < (int)local_140) {
    uVar3 = param_3 & 0xff;
    pbVar6 = (byte *)(param_2 + 0xb);
    pbVar5 = (byte *)(param_1 + 6);
    do {
      local_110 = CONCAT31(local_110._1_3_,(char)((pbVar6[-8] * uVar3) / 0xff));
      FUN_01006cd0(&local_c8,pbVar5 + -6);
      FUN_01006cd0(&local_28,pbVar6 + -0xb);
      local_c8 = local_28;
      local_c4 = local_24;
      if (local_20 <= _DAT_011db3f0) {
        local_c0 = 0;
        local_bc = 0;
      }
      FUN_01006e90(&local_120,&local_c8);
      uVar4 = local_110 & 0xff;
      iVar1 = 0xff - uVar4;
      iVar2 = (CONCAT11(uStack_11f,local_120) & 0xff) * uVar4 + (uint)pbVar5[-6] * iVar1;
      pbVar5[-6] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
                   (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
      iVar2 = (uint)pbVar5[-5] * iVar1 + (CONCAT21(uStack_11e,uStack_11f) & 0xff) * uVar4;
      pbVar5[-5] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
                   (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
      iVar1 = (uStack_11e & 0xff) * uVar4 + (uint)pbVar5[-4] * iVar1;
      pbVar5[-4] = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
                   (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
      local_118 = CONCAT31(local_118._1_3_,(char)((pbVar6[-4] * uVar3) / 0xff));
      FUN_01006cd0(&local_88,pbVar5 + -2);
      FUN_01006cd0(&local_68,pbVar6 + -7);
      local_88 = local_68;
      local_84 = local_64;
      if (local_60 <= _DAT_011db3f0) {
        local_80 = 0;
        local_7c = 0;
      }
      FUN_01006e90(&local_130,&local_88);
      uVar4 = local_118 & 0xff;
      iVar1 = 0xff - uVar4;
      iVar2 = (uint)pbVar5[-2] * iVar1 + (CONCAT11(uStack_12f,local_130) & 0xff) * uVar4;
      pbVar5[-2] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
                   (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
      iVar2 = (uint)pbVar5[-1] * iVar1 + (CONCAT21(uStack_12e,uStack_12f) & 0xff) * uVar4;
      pbVar5[-1] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
                   (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
      iVar1 = (uint)*pbVar5 * iVar1 + (uStack_12e & 0xff) * uVar4;
      *pbVar5 = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
      local_114 = CONCAT31(local_114._1_3_,(char)((*pbVar6 * uVar3) / 0xff));
      FUN_01006cd0(&local_a8,pbVar5 + 2);
      FUN_01006cd0(&local_48,pbVar6 + -3);
      local_a8 = local_48;
      local_a4 = local_44;
      if (local_40 <= _DAT_011db3f0) {
        local_a0 = 0;
        local_9c = 0;
      }
      FUN_01006e90(&local_128,&local_a8);
      uVar4 = local_114 & 0xff;
      iVar1 = 0xff - uVar4;
      iVar2 = (uint)pbVar5[2] * iVar1 + (CONCAT11(uStack_127,local_128) & 0xff) * uVar4;
      pbVar5[2] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
      iVar2 = (uint)pbVar5[3] * iVar1 + (CONCAT21(uStack_126,uStack_127) & 0xff) * uVar4;
      pbVar5[3] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
      iVar1 = (uStack_126 & 0xff) * uVar4 + (uint)pbVar5[4] * iVar1;
      pbVar5[4] = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
                  (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
      local_10c = CONCAT31(local_10c._1_3_,(char)((pbVar6[4] * uVar3) / 0xff));
      FUN_01006cd0(&local_108,pbVar5 + 6);
      FUN_01006cd0(&local_e8,pbVar6 + 1);
      local_108 = local_e8;
      local_104 = local_e4;
      if (local_e0 <= _DAT_011db3f0) {
        local_100 = 0;
        local_fc = 0;
      }
      FUN_01006e90(&local_13c,&local_108);
      uVar4 = local_10c & 0xff;
      iVar1 = 0xff - uVar4;
      pbVar6 = pbVar6 + 0x10;
      iVar2 = (uint)pbVar5[6] * iVar1 + (CONCAT11(uStack_13b,local_13c) & 0xff) * uVar4;
      pbVar5[6] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
      iVar2 = (CONCAT21(uStack_13a,uStack_13b) & 0xff) * uVar4 + (uint)pbVar5[7] * iVar1;
      pbVar5[7] = ((char)(iVar2 / 0xff) + (char)(iVar2 >> 0x1f)) -
                  (char)((longlong)iVar2 * 0x80808081 >> 0x3f);
      iVar1 = (uint)pbVar5[8] * iVar1 + (uStack_13a & 0xff) * uVar4;
      pbVar5[8] = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
                  (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
      local_140 = local_140 - 1;
      pbVar5 = pbVar5 + 0x10;
    } while (local_140 != 0);
  }
  if ((int)(local_134 * 4) < param_4) {
    param_2 = param_2 + local_134 * 0x10;
    local_140 = param_4 + local_134 * -4;
    pbVar6 = (byte *)(param_1 + 2 + local_134 * 0x10);
    do {
      local_134 = CONCAT31(local_134._1_3_,
                           (char)(((uint)*(byte *)(param_2 + 3) * (param_3 & 0xff)) / 0xff));
      FUN_01006cd0(&local_108,pbVar6 + -2);
      FUN_01006cd0(&local_e8,param_2);
      local_108 = local_e8;
      local_104 = local_e4;
      if (local_e0 <= _DAT_011db3f0) {
        local_100 = 0;
        local_fc = 0;
      }
      FUN_01006e90(&local_13c,&local_108);
      uVar3 = local_134 & 0xff;
      iVar2 = 0xff - uVar3;
      iVar1 = (CONCAT11(uStack_13b,local_13c) & 0xff) * uVar3 + (uint)pbVar6[-2] * iVar2;
      pbVar6[-2] = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
                   (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
      iVar1 = (CONCAT21(uStack_13a,uStack_13b) & 0xff) * uVar3 + (uint)pbVar6[-1] * iVar2;
      pbVar6[-1] = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
                   (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
      iVar1 = (uint)*pbVar6 * iVar2 + (uStack_13a & 0xff) * uVar3;
      *pbVar6 = ((char)(iVar1 / 0xff) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x80808081 >> 0x3f);
      param_2 = param_2 + 4;
      local_140 = local_140 + -1;
      pbVar6 = pbVar6 + 4;
    } while (local_140 != 0);
  }
  return;
}


