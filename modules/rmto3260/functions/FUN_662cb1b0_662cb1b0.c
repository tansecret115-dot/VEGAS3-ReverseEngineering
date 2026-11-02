/* Module: rmto3260.dll
   Function: FUN_662cb1b0
   Address: 662cb1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cb1b0(undefined4 param_1,char *param_2,byte *param_3,int *param_4,short param_5)

{
  byte bVar1;
  int *piVar2;
  int *this;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  void *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar6;
  void *pvVar7;
  byte *extraout_ECX_01;
  void *this_00;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *this_01;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *this_02;
  ushort uVar8;
  byte *local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  short local_a0;
  short local_9e;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  byte local_80;
  undefined3 uStack_7f;
  undefined1 uStack_7c;
  byte local_7b;
  undefined3 uStack_7a;
  undefined1 uStack_77;
  uint local_76;
  byte *local_72;
  uint local_6c;
  uint local_68;
  short local_64;
  short local_62;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  byte local_44;
  undefined3 uStack_43;
  undefined1 uStack_40;
  byte local_3f;
  undefined3 uStack_3e;
  undefined1 uStack_3b;
  uint local_3a;
  byte *local_36;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0;
  local_c = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_30 = 0;
  local_2c = 0;
  local_ac = 0;
  local_8 = 0;
  this = FUN_662e2f20(param_2);
  param_4 = FUN_662e2f20((char *)param_4);
  if (param_4 == (int *)0x0) {
    local_8 = -0x7ff8fff2;
  }
  uVar8 = 0;
  pvVar7 = extraout_ECX;
  if (*(short *)((int)this + 0x6e) != 0) {
    do {
      if (local_8 < 0) goto LAB_662cb7d3;
      if (local_2c != 0) break;
      pbVar3 = (byte *)FUN_662e3080(this,(uint)uVar8,&local_b0);
      pbVar6 = extraout_ECX_00;
      if ((pbVar3 != (byte *)0x0) && (local_b0 != (byte *)0x0)) {
        local_6c = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
                   (uint)pbVar3[3];
        local_68 = (uint)pbVar3[4] << 0x18 | (uint)pbVar3[5] << 0x10 | (uint)pbVar3[6] << 8 |
                   (uint)pbVar3[7];
        local_64 = CONCAT11(pbVar3[8],pbVar3[9]);
        pbVar6 = pbVar3 + 10;
        if (local_64 == 0) {
          local_62 = CONCAT11(*pbVar6,pbVar3[0xb]);
          local_60 = (uint)pbVar3[0xc] << 0x18 | (uint)pbVar3[0xd] << 0x10 | (uint)pbVar3[0xe] << 8
                     | (uint)pbVar3[0xf];
          local_5c = (uint)pbVar3[0x10] << 0x18 | (uint)pbVar3[0x11] << 0x10 |
                     (uint)pbVar3[0x12] << 8 | (uint)pbVar3[0x13];
          local_58 = (uint)pbVar3[0x14] << 0x18 | (uint)pbVar3[0x15] << 0x10 |
                     (uint)pbVar3[0x16] << 8 | (uint)pbVar3[0x17];
          local_54 = (uint)pbVar3[0x18] << 0x18 | (uint)pbVar3[0x19] << 0x10 |
                     (uint)pbVar3[0x1a] << 8 | (uint)pbVar3[0x1b];
          local_50 = (uint)pbVar3[0x1c] << 0x18 | (uint)pbVar3[0x1d] << 0x10 |
                     (uint)pbVar3[0x1e] << 8 | (uint)pbVar3[0x1f];
          local_4c = (uint)pbVar3[0x20] << 0x18 | (uint)pbVar3[0x21] << 0x10 |
                     (uint)pbVar3[0x22] << 8 | (uint)pbVar3[0x23];
          local_48 = (uint)pbVar3[0x24] << 0x18 | (uint)pbVar3[0x25] << 0x10 |
                     (uint)pbVar3[0x26] << 8 | (uint)pbVar3[0x27];
          bVar1 = pbVar3[0x28];
          pbVar6 = pbVar3 + 0x29;
          _local_44 = CONCAT31(uStack_43,bVar1);
          pbVar4 = pbVar6 + bVar1;
          if ((int)pbVar4 - (int)pbVar3 <= (int)local_b0) {
            uStack_43 = SUB43(pbVar6,0);
            _local_44 = CONCAT31(uStack_43,bVar1);
            uStack_40 = (undefined1)((uint)pbVar6 >> 0x18);
            bVar1 = *pbVar4;
            _local_3f = CONCAT31(uStack_3e,bVar1);
            pbVar4 = pbVar4 + 1;
            pbVar6 = pbVar4 + bVar1;
            if ((int)pbVar6 - (int)pbVar3 <= (int)local_b0) {
              uStack_3e = SUB43(pbVar4,0);
              _local_3f = CONCAT31(uStack_3e,bVar1);
              uStack_3b = (undefined1)((uint)pbVar4 >> 0x18);
              local_3a = (uint)*pbVar6 << 0x18 | (uint)pbVar6[1] << 0x10 | (uint)pbVar6[2] << 8 |
                         (uint)pbVar6[3];
              pbVar6 = pbVar6 + 4;
              if (pbVar6 + (local_3a - (int)pbVar3) <= local_b0) {
                local_36 = pbVar6;
              }
            }
          }
        }
      }
      pvVar7 = (void *)CONCAT22((short)((uint)pbVar6 >> 0x10),(short)param_3);
      local_2c = (uint)(local_62 == (short)param_3);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)((int)this + 0x6e));
  }
  if (((-1 < local_8) && (local_2c != 0)) && (uVar8 = 0, *(short *)((int)param_4 + 0x6e) != 0)) {
    do {
      if (local_ac != 0) break;
      pbVar3 = (byte *)FUN_662e3080(param_4,(uint)uVar8,&param_3);
      pbVar6 = extraout_ECX_01;
      if ((pbVar3 != (byte *)0x0) && (param_3 != (byte *)0x0)) {
        local_a8 = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
                   (uint)pbVar3[3];
        local_a4 = (uint)pbVar3[4] << 0x18 | (uint)pbVar3[5] << 0x10 | (uint)pbVar3[6] << 8 |
                   (uint)pbVar3[7];
        local_a0 = CONCAT11(pbVar3[8],pbVar3[9]);
        pbVar6 = pbVar3 + 10;
        if (local_a0 == 0) {
          local_9e = CONCAT11(*pbVar6,pbVar3[0xb]);
          local_9c = (uint)pbVar3[0xc] << 0x18 | (uint)pbVar3[0xd] << 0x10 | (uint)pbVar3[0xe] << 8
                     | (uint)pbVar3[0xf];
          local_98 = (uint)pbVar3[0x10] << 0x18 | (uint)pbVar3[0x11] << 0x10 |
                     (uint)pbVar3[0x12] << 8 | (uint)pbVar3[0x13];
          local_94 = (uint)pbVar3[0x14] << 0x18 | (uint)pbVar3[0x15] << 0x10 |
                     (uint)pbVar3[0x16] << 8 | (uint)pbVar3[0x17];
          local_90 = (uint)pbVar3[0x18] << 0x18 | (uint)pbVar3[0x19] << 0x10 |
                     (uint)pbVar3[0x1a] << 8 | (uint)pbVar3[0x1b];
          local_8c = (uint)pbVar3[0x1c] << 0x18 | (uint)pbVar3[0x1d] << 0x10 |
                     (uint)pbVar3[0x1e] << 8 | (uint)pbVar3[0x1f];
          local_88 = (uint)pbVar3[0x20] << 0x18 | (uint)pbVar3[0x21] << 0x10 |
                     (uint)pbVar3[0x22] << 8 | (uint)pbVar3[0x23];
          local_84 = (uint)pbVar3[0x24] << 0x18 | (uint)pbVar3[0x25] << 0x10 |
                     (uint)pbVar3[0x26] << 8 | (uint)pbVar3[0x27];
          bVar1 = pbVar3[0x28];
          pbVar6 = pbVar3 + 0x29;
          _local_80 = CONCAT31(uStack_7f,bVar1);
          pbVar4 = pbVar6 + bVar1;
          if ((int)pbVar4 - (int)pbVar3 <= (int)param_3) {
            uStack_7f = SUB43(pbVar6,0);
            _local_80 = CONCAT31(uStack_7f,bVar1);
            uStack_7c = (undefined1)((uint)pbVar6 >> 0x18);
            bVar1 = *pbVar4;
            _local_7b = CONCAT31(uStack_7a,bVar1);
            pbVar4 = pbVar4 + 1;
            pbVar6 = pbVar4 + bVar1;
            if ((int)pbVar6 - (int)pbVar3 <= (int)param_3) {
              uStack_7a = SUB43(pbVar4,0);
              _local_7b = CONCAT31(uStack_7a,bVar1);
              uStack_77 = (undefined1)((uint)pbVar4 >> 0x18);
              local_76 = (uint)*pbVar6 << 0x18 | (uint)pbVar6[1] << 0x10 | (uint)pbVar6[2] << 8 |
                         (uint)pbVar6[3];
              pbVar6 = pbVar6 + 4;
              if (pbVar6 + (local_76 - (int)pbVar3) <= param_3) {
                local_72 = pbVar6;
              }
            }
          }
        }
      }
      pvVar7 = (void *)CONCAT22((short)((uint)pbVar6 >> 0x10),param_5);
      local_ac = (uint)(local_9e == param_5);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)((int)param_4 + 0x6e));
  }
LAB_662cb7d3:
  piVar2 = param_4;
  if ((local_2c == 0) || (local_ac == 0)) {
    local_8 = -0x7fffbffb;
  }
  if (local_8 < 0) goto LAB_662cbaa8;
  FUN_662d0dc0(pvVar7,(int)&local_6c,(char *)&local_14,s_video_x_pn_realvideo_6630a07c);
  if ((local_14 == 0) &&
     (FUN_662d0dc0(&local_14,(int)&local_6c,(char *)&local_14,
                   s_video_x_pn_multirate_realvideo_6630a05c), local_14 == 0)) {
    FUN_662d0dc0(&local_6c,(int)&local_6c,(char *)&local_18,s_audio_x_pn_realaudio_6630a044);
    pvVar7 = this_00;
    if (local_18 == 0) {
      FUN_662d0dc0(this_00,(int)&local_6c,(char *)&local_18,
                   s_audio_x_pn_multirate_realaudio_6630a024);
      pvVar7 = extraout_ECX_02;
    }
    if (local_14 == 0) {
      if ((local_18 == 0) &&
         (FUN_662d0dc0(&local_20,(int)&local_6c,(char *)&local_20,
                       s_application_x_pn_realevent_6630a0bc), pvVar7 = extraout_ECX_03,
         local_20 == 0)) {
        FUN_662d0dc0(&local_6c,(int)&local_6c,(char *)&local_20,
                     s_application_x_pn_multirate_reale_6630a094);
        pvVar7 = extraout_ECX_04;
      }
      if ((((local_14 == 0) && (local_18 == 0)) && (local_20 == 0)) &&
         (FUN_662d0dc0(pvVar7,(int)&local_6c,(char *)&local_28,s_application_x_pn_imagemap_6630a0fc)
         , local_28 == 0)) {
        FUN_662d0dc0(&local_28,(int)&local_6c,(char *)&local_28,
                     s_application_x_pn_multirate_image_6630a0d8);
      }
    }
  }
  FUN_662d0dc0(&local_a8,(int)&local_a8,(char *)&local_c,s_video_x_pn_realvideo_6630a07c);
  if ((local_c == 0) &&
     (FUN_662d0dc0(this_01,(int)&local_a8,(char *)&local_c,s_video_x_pn_multirate_realvideo_6630a05c
                  ), local_c == 0)) {
    FUN_662d0dc0(&local_1c,(int)&local_a8,(char *)&local_1c,s_audio_x_pn_realaudio_6630a044);
    pvVar7 = extraout_ECX_05;
    if (local_1c == 0) {
      FUN_662d0dc0(&local_a8,(int)&local_a8,(char *)&local_1c,
                   s_audio_x_pn_multirate_realaudio_6630a024);
      pvVar7 = extraout_ECX_06;
    }
    if (local_c == 0) {
      if ((local_1c == 0) &&
         (FUN_662d0dc0(pvVar7,(int)&local_a8,(char *)&local_24,s_application_x_pn_realevent_6630a0bc
                      ), local_24 == 0)) {
        FUN_662d0dc0(&local_24,(int)&local_a8,(char *)&local_24,
                     s_application_x_pn_multirate_reale_6630a094);
      }
      if ((((local_c == 0) && (local_1c == 0)) && (local_24 == 0)) &&
         (FUN_662d0dc0(&local_a8,(int)&local_a8,(char *)&local_30,
                       s_application_x_pn_imagemap_6630a0fc), local_30 == 0)) {
        FUN_662d0dc0(this_02,(int)&local_a8,(char *)&local_30,
                     s_application_x_pn_multirate_image_6630a0d8);
      }
    }
  }
  if (((local_14 == local_c) && (local_18 == local_1c)) &&
     ((local_20 == local_24 && (local_28 == local_30)))) {
    local_10 = 1;
    if (local_14 != 0) {
      local_10 = (uint)(local_60 == local_9c);
    }
  }
  else {
    local_10 = 0;
  }
  if (local_10 != 0) {
    if (local_18 == 0) {
      if (local_14 == 0) goto LAB_662cba97;
      iVar5 = FUN_662c6cd0((char *)local_36,local_3a,(char *)local_72,local_76);
    }
    else {
      iVar5 = FUN_662c7170(local_36,local_3a,local_72,local_76);
    }
    local_10 = (uint)(iVar5 == 0);
  }
LAB_662cba97:
  if ((-1 < local_8) && (local_10 == 0)) {
    local_8 = -0x7fffbffb;
  }
LAB_662cbaa8:
  if (this != (int *)0x0) {
    (**(code **)*this)(1);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  return local_8;
}


