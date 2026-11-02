/* Module: rmto3260.dll
   Function: FUN_662d3f00
   Address: 662d3f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d3f00(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  void *this;
  void *pvVar13;
  undefined4 *puVar14;
  undefined4 local_e0 [18];
  undefined1 local_98 [4];
  ushort local_94;
  short local_8e;
  undefined1 local_88 [4];
  ushort local_84;
  ushort local_7e;
  int local_7c [5];
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  ushort local_60;
  uint local_5c;
  int local_58;
  byte *local_54;
  byte *local_50;
  void *local_4c;
  uint local_48;
  uint local_44;
  undefined2 local_40;
  byte local_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  ushort uStack_3a;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined1 uStack_1c;
  uint local_1b;
  undefined1 uStack_17;
  uint local_16;
  byte *local_12;
  int *local_c;
  byte *local_8;
  
  piVar5 = param_1;
  pvVar13 = (void *)0x0;
  local_4c = (void *)0x0;
  local_50 = (byte *)0x0;
  local_c = (int *)0x0;
  iVar6 = (**(code **)(*param_1 + 0x54))();
  if (iVar6 < 0) goto LAB_662d47ed;
  local_c = FUN_662e2f80((char *)param_1[10]);
  if (local_c == (int *)0x0) {
    iVar6 = -0x7ffbff7f;
  }
  if ((iVar6 < 0) || (iVar6 = (**(code **)(*(int *)param_1[0xe] + 0x24))(), iVar6 < 0))
  goto LAB_662d47ed;
  pvVar13 = operator_new(local_5c);
  if (pvVar13 == (void *)0x0) {
    iVar6 = -0x7ff8fff2;
  }
  local_4c = pvVar13;
  if (iVar6 < 0) goto LAB_662d47ed;
  pbVar2 = (byte *)*param_2;
  local_8 = (byte *)((uint)pbVar2[0x2d] + (uint)pbVar2[0x28] + 0x2e + *(int *)(pbVar2 + 0x32));
  pbVar7 = operator_new((uint)local_8);
  if (pbVar7 == (byte *)0x0) {
    iVar6 = -0x7ff8fff2;
  }
  local_50 = pbVar7;
  if (-1 < iVar6) {
    *pbVar7 = (byte)((uint)*(undefined4 *)pbVar2 >> 0x18);
    local_54 = pbVar7 + 1;
    *local_54 = (byte)((uint)*(undefined4 *)pbVar2 >> 0x10);
    pbVar7[2] = (byte)((uint)*(undefined4 *)pbVar2 >> 8);
    pbVar7[3] = *pbVar2;
    pbVar7[4] = (byte)((uint)*(undefined4 *)(pbVar2 + 4) >> 0x18);
    pbVar7[5] = (byte)((uint)*(undefined4 *)(pbVar2 + 4) >> 0x10);
    pbVar7[6] = (byte)((uint)*(undefined4 *)(pbVar2 + 4) >> 8);
    pbVar7[7] = pbVar2[4];
    pbVar12 = (byte *)(uint)pbVar2[9];
    pbVar7[8] = pbVar2[9];
    pbVar7[9] = pbVar2[8];
    local_8 = pbVar7 + 10;
    if (*(short *)(pbVar2 + 8) == 0) {
      pbVar7[10] = pbVar2[0xb];
      pbVar7[0xb] = pbVar2[10];
      pbVar7[0xc] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xc) >> 0x18);
      pbVar7[0xd] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xc) >> 0x10);
      pbVar7[0xe] = (byte)((uint)*(undefined4 *)(pbVar2 + 0xc) >> 8);
      pbVar7[0xf] = pbVar2[0xc];
      pbVar7[0x10] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x10) >> 0x18);
      pbVar7[0x11] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x10) >> 0x10);
      pbVar7[0x12] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x10) >> 8);
      pbVar7[0x13] = pbVar2[0x10];
      pbVar7[0x14] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x14) >> 0x18);
      pbVar7[0x15] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x14) >> 0x10);
      pbVar7[0x16] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x14) >> 8);
      pbVar7[0x17] = pbVar2[0x14];
      pbVar7[0x18] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x18) >> 0x18);
      pbVar7[0x19] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x18) >> 0x10);
      pbVar7[0x1a] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x18) >> 8);
      pbVar7[0x1b] = pbVar2[0x18];
      pbVar7[0x1c] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x1c) >> 0x18);
      pbVar7[0x1d] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x1c) >> 0x10);
      pbVar7[0x1e] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x1c) >> 8);
      pbVar7[0x1f] = pbVar2[0x1c];
      pbVar7[0x20] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x20) >> 0x18);
      pbVar7[0x21] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x20) >> 0x10);
      pbVar7[0x22] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x20) >> 8);
      pbVar7[0x23] = pbVar2[0x20];
      pbVar7[0x24] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x24) >> 0x18);
      pbVar7[0x25] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x24) >> 0x10);
      pbVar7[0x26] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x24) >> 8);
      pbVar7[0x27] = pbVar2[0x24];
      pbVar7[0x28] = pbVar2[0x28];
      pbVar8 = pbVar7 + 0x29;
      bVar1 = pbVar2[0x28];
      pbVar12 = *(byte **)(pbVar2 + 0x29);
      pbVar9 = pbVar8;
      for (uVar10 = (uint)(bVar1 >> 2); uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar10 = bVar1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar9 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar9 = pbVar9 + 1;
      }
      pbVar8 = pbVar8 + pbVar2[0x28];
      *pbVar8 = pbVar2[0x2d];
      bVar1 = pbVar2[0x2d];
      pbVar12 = *(byte **)(pbVar2 + 0x2e);
      pbVar9 = pbVar8 + 1;
      for (uVar10 = (uint)(bVar1 >> 2); uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar10 = bVar1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar9 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar9 = pbVar9 + 1;
      }
      pbVar8 = pbVar8 + 1 + pbVar2[0x2d];
      *pbVar8 = (byte)((uint)*(undefined4 *)(pbVar2 + 0x32) >> 0x18);
      pbVar8[1] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x32) >> 0x10);
      pbVar8[2] = (byte)((uint)*(undefined4 *)(pbVar2 + 0x32) >> 8);
      pbVar8[3] = pbVar2[0x32];
      uVar10 = *(uint *)(pbVar2 + 0x32);
      pbVar12 = *(byte **)(pbVar2 + 0x36);
      pbVar9 = pbVar8 + 4;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar9 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar9 = pbVar9 + 1;
      }
      pbVar12 = *(byte **)(pbVar2 + 0x32);
      local_8 = pbVar8 + 4 + (int)pbVar12;
    }
    local_8 = local_8 + -(int)pbVar7;
    if ((pbVar7 != (byte *)0x0) && (local_8 != (byte *)0x0)) {
      local_48 = (uint)*pbVar7 << 0x18 | (uint)*local_54 << 0x10 | (uint)pbVar7[2] << 8 |
                 (uint)pbVar7[3];
      local_44 = (uint)pbVar7[4] << 0x18 | (uint)pbVar7[5] << 0x10 | (uint)pbVar7[6] << 8 |
                 (uint)pbVar7[7];
      local_40 = CONCAT11(pbVar7[8],pbVar7[9]);
      pbVar12 = (byte *)(uint)local_40;
      if (local_40 == 0) {
        bStack_3d = pbVar7[10];
        local_3e = pbVar7[0xb];
        uStack_3a = (ushort)(((uint)pbVar7[0xc] << 0x18) >> 0x10) | (ushort)pbVar7[0xd];
        bStack_3b = pbVar7[0xe];
        bStack_3c = pbVar7[0xf];
        local_38 = (uint)pbVar7[0x10] << 0x18 | (uint)pbVar7[0x11] << 0x10 | (uint)pbVar7[0x12] << 8
                   | (uint)pbVar7[0x13];
        local_34 = (uint)pbVar7[0x14] << 0x18 | (uint)pbVar7[0x15] << 0x10 | (uint)pbVar7[0x16] << 8
                   | (uint)pbVar7[0x17];
        local_30 = (uint)pbVar7[0x18] << 0x18 | (uint)pbVar7[0x19] << 0x10 | (uint)pbVar7[0x1a] << 8
                   | (uint)pbVar7[0x1b];
        local_2c = (uint)pbVar7[0x1c] << 0x18 | (uint)pbVar7[0x1d] << 0x10 | (uint)pbVar7[0x1e] << 8
                   | (uint)pbVar7[0x1f];
        local_28 = (uint)pbVar7[0x20] << 0x18 | (uint)pbVar7[0x21] << 0x10 | (uint)pbVar7[0x22] << 8
                   | (uint)pbVar7[0x23];
        local_24 = (uint)pbVar7[0x24] << 0x18 | (uint)pbVar7[0x25] << 0x10 | (uint)pbVar7[0x26] << 8
                   | (uint)pbVar7[0x27];
        bVar1 = pbVar7[0x28];
        pbVar9 = pbVar7 + 0x29;
        local_20 = CONCAT31(local_20._1_3_,bVar1);
        pbVar12 = pbVar9 + bVar1;
        if ((int)pbVar12 - (int)pbVar7 <= (int)local_8) {
          local_20._1_3_ = SUB43(pbVar9,0);
          local_20 = CONCAT31(local_20._1_3_,bVar1);
          uStack_1c = (undefined1)((uint)pbVar9 >> 0x18);
          bVar1 = *pbVar12;
          local_1b = CONCAT31(local_1b._1_3_,bVar1);
          pbVar12 = pbVar12 + 1;
          pbVar9 = pbVar12 + bVar1;
          if ((int)pbVar9 - (int)pbVar7 <= (int)local_8) {
            local_1b._1_3_ = SUB43(pbVar12,0);
            local_1b = CONCAT31(local_1b._1_3_,bVar1);
            uStack_17 = (undefined1)((uint)pbVar12 >> 0x18);
            local_16 = (uint)*pbVar9 << 0x18 | (uint)pbVar9[1] << 0x10 | (uint)pbVar9[2] << 8 |
                       (uint)pbVar9[3];
            pbVar12 = pbVar9 + 4 + (local_16 - (int)pbVar7);
            if (pbVar12 <= local_8) {
              local_12 = pbVar9 + 4;
            }
          }
        }
      }
    }
    FUN_662d0dc0(pbVar12,(int)&local_48,(char *)&local_58,s_audio_x_pn_multirate_realaudio_6630a024)
    ;
    if (local_58 == 0) {
      FUN_662d0dc0(this,(int)&local_48,(char *)&local_58,s_video_x_pn_multirate_realvideo_6630a05c);
      if (local_58 != 0) {
        FUN_662c9730(&local_48,pbVar7,(int *)&local_8);
        FUN_662dec30(local_e0);
        puVar14 = (undefined4 *)0x662d46c3;
        iVar6 = FUN_662de510(local_e0,pbVar7,local_8);
        if (-1 < iVar6) {
          FUN_662ef160(local_7c,s_video_x_pn_realvideo_6630a07c);
          FUN_662eeff0(&stack0xffffff04,local_7c);
          FUN_662ded20(local_e0,puVar14);
          FUN_662de2f0(local_e0,pbVar7,(uint)local_8);
          FUN_662ef0f0(local_7c);
        }
        FUN_662ca8d0(&local_48,pbVar7,local_8);
        goto LAB_662d4718;
      }
    }
    else {
      *pbVar7 = (byte)(local_48 >> 0x18);
      *local_54 = (byte)(local_48 >> 0x10);
      local_54[1] = (byte)(local_48 >> 8);
      local_54[2] = (byte)local_48;
      local_54[3] = (byte)(local_44 >> 0x18);
      local_54[4] = (byte)(local_44 >> 0x10);
      local_54[5] = (byte)(local_44 >> 8);
      local_54[6] = (byte)local_44;
      local_54[7] = local_40._1_1_;
      local_54[8] = (byte)local_40;
      local_8 = local_54 + 9;
      if (local_40 == 0) {
        local_54[9] = bStack_3d;
        local_54[10] = local_3e;
        local_54[0xb] = (byte)(uStack_3a >> 8);
        local_54[0xc] = (byte)uStack_3a;
        local_54[0xd] = bStack_3b;
        local_54[0xe] = bStack_3c;
        local_54[0xf] = (byte)(local_38 >> 0x18);
        local_54[0x10] = (byte)(local_38 >> 0x10);
        local_54[0x11] = (byte)(local_38 >> 8);
        local_54[0x12] = (byte)local_38;
        local_54[0x13] = (byte)(local_34 >> 0x18);
        local_54[0x14] = (byte)(local_34 >> 0x10);
        local_54[0x15] = (byte)(local_34 >> 8);
        local_54[0x16] = (byte)local_34;
        local_54[0x17] = (byte)(local_30 >> 0x18);
        local_54[0x18] = (byte)(local_30 >> 0x10);
        local_54[0x19] = (byte)(local_30 >> 8);
        local_54[0x1a] = (byte)local_30;
        local_54[0x1b] = (byte)(local_2c >> 0x18);
        local_54[0x1c] = (byte)(local_2c >> 0x10);
        local_54[0x1d] = (byte)(local_2c >> 8);
        local_54[0x1e] = (byte)local_2c;
        local_54[0x1f] = (byte)(local_28 >> 0x18);
        local_54[0x20] = (byte)(local_28 >> 0x10);
        local_54[0x21] = (byte)(local_28 >> 8);
        local_54[0x22] = (byte)local_28;
        local_54[0x23] = (byte)(local_24 >> 0x18);
        local_54[0x24] = (byte)(local_24 >> 0x10);
        local_54[0x25] = (byte)(local_24 >> 8);
        local_54[0x26] = (byte)local_24;
        local_54[0x27] = (byte)local_20;
        pbVar9 = local_54 + 0x28;
        pbVar7 = (byte *)CONCAT13(uStack_1c,local_20._1_3_);
        pbVar12 = pbVar9;
        for (uVar10 = (local_20 & 0xff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pbVar12 = *(undefined4 *)pbVar7;
          pbVar7 = pbVar7 + 4;
          pbVar12 = pbVar12 + 4;
        }
        for (uVar10 = local_20 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pbVar12 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          pbVar12 = pbVar12 + 1;
        }
        pbVar9 = pbVar9 + (local_20 & 0xff);
        *pbVar9 = (byte)local_1b;
        pbVar7 = (byte *)CONCAT13(uStack_17,local_1b._1_3_);
        pbVar12 = pbVar9 + 1;
        for (uVar10 = (local_1b & 0xff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pbVar12 = *(undefined4 *)pbVar7;
          pbVar7 = pbVar7 + 4;
          pbVar12 = pbVar12 + 4;
        }
        for (uVar10 = local_1b & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pbVar12 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          pbVar12 = pbVar12 + 1;
        }
        pbVar9 = pbVar9 + 1 + (local_1b & 0xff);
        *pbVar9 = (byte)(local_16 >> 0x18);
        pbVar9[1] = (byte)(local_16 >> 0x10);
        pbVar9[2] = (byte)(local_16 >> 8);
        pbVar9[3] = (byte)local_16;
        pbVar7 = local_12;
        pbVar12 = pbVar9 + 4;
        for (uVar10 = local_16 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pbVar12 = *(undefined4 *)pbVar7;
          pbVar7 = pbVar7 + 4;
          pbVar12 = pbVar12 + 4;
        }
        for (uVar10 = local_16 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pbVar12 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          pbVar12 = pbVar12 + 1;
        }
        local_8 = pbVar9 + 4 + local_16;
        pbVar7 = local_50;
      }
      local_8 = local_8 + -(int)pbVar7;
      FUN_662dec30(local_e0);
      puVar14 = (undefined4 *)0x662d4621;
      iVar6 = FUN_662de510(local_e0,pbVar7,local_8);
      if (-1 < iVar6) {
        FUN_662ef160(local_7c,s_audio_x_pn_realaudio_6630a044);
        FUN_662eeff0(&stack0xffffff04,local_7c);
        FUN_662ded20(local_e0,puVar14);
        FUN_662de2f0(local_e0,pbVar7,(uint)local_8);
        FUN_662ef0f0(local_7c);
      }
      FUN_662ca8d0(&local_48,pbVar7,local_8);
LAB_662d4718:
      FUN_662dec80(local_e0);
    }
    local_54 = (byte *)CONCAT13(bStack_3b,CONCAT12(bStack_3c,CONCAT11(bStack_3d,local_3e)));
    local_8 = (byte *)((uint)pbVar2[0x2d] + (uint)pbVar2[0x28] + 0x2e + *(int *)(pbVar2 + 0x32));
    if (*(ushort *)(param_1 + 0x15) < CONCAT11(bStack_3d,local_3e)) {
      *(ushort *)(param_1 + 0x15) = CONCAT11(bStack_3d,local_3e);
    }
    local_3e = 0;
    bStack_3d = 0;
    FUN_662c9730(&local_48,pbVar7,(int *)&local_8);
    iVar6 = (**(code **)(*local_c + 0x1c))();
  }
  piVar3 = local_c;
  pvVar13 = local_4c;
  if (-1 < iVar6) {
    if (param_1[0xb] != 0) {
      (**(code **)(*local_c + 0x1c))();
    }
    FUN_662e30f0(piVar3,*(ushort *)((int)param_1 + 0x56));
    iVar6 = (**(code **)(*piVar3 + 0x20))();
    if (-1 < iVar6) {
      if (*(int *)((int)param_2 + 0x16) == 0) {
        iVar6 = (**(code **)(*(int *)param_1[0xe] + 0x58))();
      }
      else {
        iVar6 = (**(code **)(*(int *)param_1[0xe] + 0x50))();
      }
      if (-1 < iVar6) {
        iVar6 = (**(code **)(*(int *)param_1[0xe] + 0x18))((int *)param_1[0xe]);
      }
    }
  }
LAB_662d47ed:
  FUN_662e2a70(&local_68);
  do {
    if (iVar6 < 0) {
LAB_662d48c0:
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 0x24))();
        (**(code **)*local_c)();
      }
      if (-1 < iVar6) {
        iVar6 = (**(code **)(*piVar5 + 0x5c))(piVar5,piVar5[10]);
      }
      if (local_50 != (byte *)0x0) {
        operator_delete(local_50);
      }
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
      return iVar6;
    }
    piVar3 = (int *)piVar5[0xe];
    if (*(int *)((int)param_2 + 0x16) == 0) {
      iVar6 = (**(code **)(*piVar3 + 0x2c))(piVar3,local_98);
      uVar4 = local_94;
    }
    else {
      iVar6 = (**(code **)(*piVar3 + 0x28))(piVar3,local_88);
      uVar4 = local_84;
    }
    if (-1 < iVar6) {
      param_1 = (int *)(uint)uVar4;
    }
    if (iVar6 == -0x7ffbfc36) {
      iVar6 = 0;
      goto LAB_662d48c0;
    }
    if ((short)param_1 == (short)local_54) {
      if (iVar6 < 0) goto LAB_662d48c0;
      local_60 = local_7e;
      if (*(int *)((int)param_2 + 0x16) == 0) {
        local_60 = (local_8e != *(short *)(param_2 + 5)) - 1 & 2;
      }
      local_62 = 0;
      local_64 = 0;
      iVar6 = (**(code **)(*local_c + 0x2c))();
    }
  } while( true );
}


