/* Module: vegas30.exe
   Function: FUN_00438830
   Address: 00438830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00438830(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_c4;
  double local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  *param_1 = *param_2;
  local_c4 = 0;
  local_c0 = 0.0;
  local_28 = (double)(float)param_2[1];
  local_98._0_4_ = 0xd0441b50;
  local_98._4_4_ = 0x404e3499;
  local_20 = (double)(float)param_2[2];
  local_90._0_4_ = 0xa5172d17;
  local_90._4_4_ = 0xc02be4d8;
  local_88 = 0xd06d834b;
  local_84 = 0x4043e08f;
  local_80 = 0x14c348a4;
  local_7c = 0x4051ee01;
  local_78 = 0x85ada44a;
  local_74 = 0xc033cbb2;
  local_70 = 0xf6e919ce;
  local_6c = 0x40556fa6;
  local_68 = 0xd0441b50;
  local_64 = 0xc04e3499;
  local_60 = 0xa5172d17;
  local_5c = 0x402be4d8;
  local_58 = 0xd06d834b;
  local_54 = 0xc043e08f;
  local_50 = 0x14c348a4;
  local_4c = 0xc051ee01;
  local_48 = 0x85ada44a;
  local_44 = 0x4033cbb2;
  local_40 = 0xf6e919ce;
  local_3c = 0xc0556fa6;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  puVar2 = &local_90;
  iVar3 = 1;
  do {
    local_b8 = *(undefined4 *)(puVar2 + -1);
    local_b4 = *(undefined4 *)((int)puVar2 + -4);
    local_b0 = *(undefined4 *)puVar2;
    local_ac = *(undefined4 *)((int)puVar2 + 4);
    local_38 = (&local_98)[(iVar3 % 6) * 2];
    local_30 = (&local_90)[(iVar3 % 6) * 2];
    fVar4 = (float10)FUN_00438af0(&local_28,&local_b8,&local_38);
    if (((float10)_DAT_00610fd8 < fVar4) && ((float10)local_c0 < fVar4)) {
      local_c0 = (double)fVar4;
      FUN_00438a50(&local_18,&local_b8,&local_38,&local_a8,&local_28);
      local_c4 = 1;
      param_1[1] = (float)local_18;
      param_1[2] = (float)local_10;
    }
    puVar2 = puVar2 + 2;
    bVar1 = iVar3 < 6;
    iVar3 = iVar3 + 1;
  } while (bVar1);
  return local_c4;
}


