/* Module: rmto3260.dll
   Function: FUN_662c9e40
   Address: 662c9e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c9e40(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  void *this;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 local_178 [51];
  undefined4 local_ac [18];
  int local_64 [3];
  undefined4 local_58;
  uint local_54;
  int local_50;
  undefined4 *local_4c;
  uint local_48;
  byte *local_44;
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
  
  local_c = (int *)0x0;
  local_4c = (undefined4 *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x5c))();
  pbVar3 = local_8;
  if (iVar2 < 0) goto LAB_662ca6ef;
  local_c = FUN_662e2f80((char *)param_1[9]);
  if (local_c == (int *)0x0) {
    iVar2 = -0x7ffbff7f;
  }
  pbVar3 = local_8;
  if (iVar2 < 0) goto LAB_662ca6ef;
  pbVar4 = (byte *)*param_2;
  pbVar3 = operator_new(*(int *)(pbVar4 + 4) + 100);
  if (pbVar3 == (byte *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  local_8 = pbVar3;
  if (iVar2 < 0) goto LAB_662ca6ef;
  *pbVar3 = (byte)((uint)*(undefined4 *)pbVar4 >> 0x18);
  pbVar3[1] = (byte)((uint)*(undefined4 *)pbVar4 >> 0x10);
  pbVar3[2] = (byte)((uint)*(undefined4 *)pbVar4 >> 8);
  pbVar3[3] = *pbVar4;
  pbVar3[4] = (byte)((uint)*(undefined4 *)(pbVar4 + 4) >> 0x18);
  pbVar3[5] = (byte)((uint)*(undefined4 *)(pbVar4 + 4) >> 0x10);
  pbVar3[6] = (byte)((uint)*(undefined4 *)(pbVar4 + 4) >> 8);
  pbVar3[7] = pbVar4[4];
  pbVar3[8] = pbVar4[9];
  pbVar3[9] = pbVar4[8];
  if (*(short *)(pbVar4 + 8) == 0) {
    pbVar3[10] = pbVar4[0xb];
    pbVar3[0xb] = pbVar4[10];
    pbVar3[0xc] = (byte)((uint)*(undefined4 *)(pbVar4 + 0xc) >> 0x18);
    pbVar3[0xd] = (byte)((uint)*(undefined4 *)(pbVar4 + 0xc) >> 0x10);
    pbVar3[0xe] = (byte)((uint)*(undefined4 *)(pbVar4 + 0xc) >> 8);
    pbVar3[0xf] = pbVar4[0xc];
    pbVar3[0x10] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x10) >> 0x18);
    pbVar3[0x11] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x10) >> 0x10);
    pbVar3[0x12] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x10) >> 8);
    pbVar3[0x13] = pbVar4[0x10];
    pbVar3[0x14] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x14) >> 0x18);
    pbVar3[0x15] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x14) >> 0x10);
    pbVar3[0x16] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x14) >> 8);
    pbVar3[0x17] = pbVar4[0x14];
    pbVar3[0x18] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x18) >> 0x18);
    pbVar3[0x19] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x18) >> 0x10);
    pbVar3[0x1a] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x18) >> 8);
    pbVar3[0x1b] = pbVar4[0x18];
    pbVar3[0x1c] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x1c) >> 0x18);
    pbVar3[0x1d] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x1c) >> 0x10);
    pbVar3[0x1e] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x1c) >> 8);
    pbVar3[0x1f] = pbVar4[0x1c];
    pbVar3[0x20] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x20) >> 0x18);
    pbVar3[0x21] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x20) >> 0x10);
    pbVar3[0x22] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x20) >> 8);
    pbVar3[0x23] = pbVar4[0x20];
    pbVar3[0x24] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x24) >> 0x18);
    pbVar3[0x25] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x24) >> 0x10);
    pbVar3[0x26] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x24) >> 8);
    pbVar3[0x27] = pbVar4[0x24];
    pbVar3[0x28] = pbVar4[0x28];
    pbVar9 = pbVar3 + 0x29;
    bVar1 = pbVar4[0x28];
    pbVar10 = *(byte **)(pbVar4 + 0x29);
    pbVar8 = pbVar9;
    for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar6 = bVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar8 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar8 = pbVar8 + 1;
    }
    pbVar9 = pbVar9 + pbVar4[0x28];
    *pbVar9 = pbVar4[0x2d];
    bVar1 = pbVar4[0x2d];
    pbVar10 = *(byte **)(pbVar4 + 0x2e);
    pbVar8 = pbVar9 + 1;
    for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar6 = bVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar8 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar8 = pbVar8 + 1;
    }
    pbVar10 = pbVar9 + 1 + pbVar4[0x2d];
    *pbVar10 = (byte)((uint)*(undefined4 *)(pbVar4 + 0x32) >> 0x18);
    pbVar10[1] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x32) >> 0x10);
    pbVar10[2] = (byte)((uint)*(undefined4 *)(pbVar4 + 0x32) >> 8);
    pbVar10[3] = pbVar4[0x32];
    uVar6 = *(uint *)(pbVar4 + 0x32);
    pbVar8 = *(byte **)(pbVar4 + 0x36);
    for (uVar7 = uVar6 >> 2; pbVar10 = pbVar10 + 4, uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar10 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    }
  }
  pbVar4 = *(byte **)(pbVar4 + 4);
  if ((pbVar3 != (byte *)0x0) && (pbVar4 != (byte *)0x0)) {
    local_48 = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
               (uint)pbVar3[3];
    local_44 = (byte *)((uint)pbVar3[4] << 0x18 | (uint)pbVar3[5] << 0x10 | (uint)pbVar3[6] << 8 |
                       (uint)pbVar3[7]);
    local_40 = CONCAT11(pbVar3[8],pbVar3[9]);
    if (local_40 == 0) {
      bStack_3d = pbVar3[10];
      local_3e = pbVar3[0xb];
      uStack_3a = (ushort)(((uint)pbVar3[0xc] << 0x18) >> 0x10) | (ushort)pbVar3[0xd];
      bStack_3b = pbVar3[0xe];
      bStack_3c = pbVar3[0xf];
      local_38 = (uint)pbVar3[0x10] << 0x18 | (uint)pbVar3[0x11] << 0x10 | (uint)pbVar3[0x12] << 8 |
                 (uint)pbVar3[0x13];
      local_34 = (uint)pbVar3[0x14] << 0x18 | (uint)pbVar3[0x15] << 0x10 | (uint)pbVar3[0x16] << 8 |
                 (uint)pbVar3[0x17];
      local_30 = (uint)pbVar3[0x18] << 0x18 | (uint)pbVar3[0x19] << 0x10 | (uint)pbVar3[0x1a] << 8 |
                 (uint)pbVar3[0x1b];
      local_2c = (uint)pbVar3[0x1c] << 0x18 | (uint)pbVar3[0x1d] << 0x10 | (uint)pbVar3[0x1e] << 8 |
                 (uint)pbVar3[0x1f];
      local_28 = (uint)pbVar3[0x20] << 0x18 | (uint)pbVar3[0x21] << 0x10 | (uint)pbVar3[0x22] << 8 |
                 (uint)pbVar3[0x23];
      local_24 = (uint)pbVar3[0x24] << 0x18 | (uint)pbVar3[0x25] << 0x10 | (uint)pbVar3[0x26] << 8 |
                 (uint)pbVar3[0x27];
      bVar1 = pbVar3[0x28];
      pbVar10 = pbVar3 + 0x29;
      local_20 = CONCAT31(local_20._1_3_,bVar1);
      pbVar8 = pbVar10 + bVar1;
      if ((int)pbVar8 - (int)pbVar3 <= (int)pbVar4) {
        local_20._1_3_ = SUB43(pbVar10,0);
        local_20 = CONCAT31(local_20._1_3_,bVar1);
        uStack_1c = (undefined1)((uint)pbVar10 >> 0x18);
        bVar1 = *pbVar8;
        local_1b = CONCAT31(local_1b._1_3_,bVar1);
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar8 + bVar1;
        if ((int)pbVar10 - (int)pbVar3 <= (int)pbVar4) {
          local_1b._1_3_ = SUB43(pbVar8,0);
          local_1b = CONCAT31(local_1b._1_3_,bVar1);
          uStack_17 = (undefined1)((uint)pbVar8 >> 0x18);
          local_16 = (uint)*pbVar10 << 0x18 | (uint)pbVar10[1] << 0x10 | (uint)pbVar10[2] << 8 |
                     (uint)pbVar10[3];
          if (pbVar10 + 4 + (local_16 - (int)pbVar3) <= pbVar4) {
            local_12 = pbVar10 + 4;
          }
        }
      }
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,param_2);
  if (iVar2 < 0) goto LAB_662ca6ef;
  FUN_662d0dc0(this,(int)&local_48,(char *)&local_50,s_audio_x_pn_realaudio_6630a044);
  if (local_50 == 0) {
    FUN_662d0dc0(&local_50,(int)&local_48,(char *)&local_50,
                 s_audio_x_pn_multirate_realaudio_6630a024);
    if (local_50 != 0) {
      *pbVar3 = (byte)(local_48 >> 0x18);
      pbVar3[1] = (byte)(local_48 >> 0x10);
      pbVar3[2] = (byte)(local_48 >> 8);
      pbVar3[3] = (byte)local_48;
      pbVar3[4] = (byte)((uint)local_44 >> 0x18);
      pbVar3[5] = (byte)((uint)local_44 >> 0x10);
      pbVar3[6] = (byte)((uint)local_44 >> 8);
      pbVar3[7] = (byte)local_44;
      pbVar3[8] = local_40._1_1_;
      pbVar3[9] = (byte)local_40;
      pbVar4 = pbVar3 + 10;
      if (local_40 == 0) {
        pbVar3[10] = bStack_3d;
        pbVar3[0xb] = local_3e;
        pbVar3[0xc] = (byte)(uStack_3a >> 8);
        pbVar3[0xd] = (byte)uStack_3a;
        pbVar3[0xe] = bStack_3b;
        pbVar3[0xf] = bStack_3c;
        pbVar3[0x10] = (byte)(local_38 >> 0x18);
        pbVar3[0x11] = (byte)(local_38 >> 0x10);
        pbVar3[0x12] = (byte)(local_38 >> 8);
        pbVar3[0x13] = (byte)local_38;
        pbVar3[0x14] = (byte)(local_34 >> 0x18);
        pbVar3[0x15] = (byte)(local_34 >> 0x10);
        pbVar3[0x16] = (byte)(local_34 >> 8);
        pbVar3[0x17] = (byte)local_34;
        pbVar3[0x18] = (byte)(local_30 >> 0x18);
        pbVar3[0x19] = (byte)(local_30 >> 0x10);
        pbVar3[0x1a] = (byte)(local_30 >> 8);
        pbVar3[0x1b] = (byte)local_30;
        pbVar3[0x1c] = (byte)(local_2c >> 0x18);
        pbVar3[0x1d] = (byte)(local_2c >> 0x10);
        pbVar3[0x1e] = (byte)(local_2c >> 8);
        pbVar3[0x1f] = (byte)local_2c;
        pbVar3[0x20] = (byte)(local_28 >> 0x18);
        pbVar3[0x21] = (byte)(local_28 >> 0x10);
        pbVar3[0x22] = (byte)(local_28 >> 8);
        pbVar3[0x23] = (byte)local_28;
        pbVar3[0x24] = (byte)(local_24 >> 0x18);
        pbVar3[0x25] = (byte)(local_24 >> 0x10);
        pbVar3[0x26] = (byte)(local_24 >> 8);
        pbVar3[0x27] = (byte)local_24;
        pbVar3[0x28] = (byte)local_20;
        pbVar3 = pbVar3 + 0x29;
        pbVar4 = (byte *)CONCAT13(uStack_1c,local_20._1_3_);
        pbVar10 = pbVar3;
        for (uVar6 = (local_20 & 0xff) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pbVar10 = *(undefined4 *)pbVar4;
          pbVar4 = pbVar4 + 4;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar6 = local_20 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar10 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          pbVar10 = pbVar10 + 1;
        }
        pbVar3 = pbVar3 + (local_20 & 0xff);
        *pbVar3 = (byte)local_1b;
        pbVar4 = (byte *)CONCAT13(uStack_17,local_1b._1_3_);
        pbVar10 = pbVar3 + 1;
        for (uVar6 = (local_1b & 0xff) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pbVar10 = *(undefined4 *)pbVar4;
          pbVar4 = pbVar4 + 4;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar6 = local_1b & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar10 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          pbVar10 = pbVar10 + 1;
        }
        pbVar10 = pbVar3 + 1 + (local_1b & 0xff);
        *pbVar10 = (byte)(local_16 >> 0x18);
        pbVar10[1] = (byte)(local_16 >> 0x10);
        pbVar10[2] = (byte)(local_16 >> 8);
        pbVar10[3] = (byte)local_16;
        pbVar3 = local_12;
        pbVar4 = pbVar10 + 4;
        for (uVar6 = local_16 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pbVar4 = *(undefined4 *)pbVar3;
          pbVar3 = pbVar3 + 4;
          pbVar4 = pbVar4 + 4;
        }
        for (uVar6 = local_16 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar4 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
        }
        pbVar4 = pbVar10 + 4 + local_16;
        pbVar3 = local_8;
      }
      pbVar4 = pbVar4 + -(int)pbVar3;
      FUN_662dec30(local_ac);
      puVar11 = (undefined4 *)0x662ca547;
      iVar2 = FUN_662de510(local_ac,pbVar3,pbVar4);
      if (-1 < iVar2) {
        FUN_662ef160(local_64,s_audio_x_pn_realaudio_6630a044);
        FUN_662eeff0(&stack0xfffffe6c,local_64);
        FUN_662ded20(local_ac,puVar11);
        FUN_662de2f0(local_ac,pbVar3,(uint)pbVar4);
        FUN_662ef0f0(local_64);
      }
      FUN_662ca8d0(&local_48,pbVar3,pbVar4);
      FUN_662dec80(local_ac);
      if (local_50 != 0) goto LAB_662ca651;
    }
    FUN_662d0dc0(&local_50,(int)&local_48,(char *)&local_50,
                 s_video_x_pn_multirate_realvideo_6630a05c);
    if (local_50 != 0) {
      local_8 = (byte *)0x0;
      FUN_662c9730(&local_48,pbVar3,(int *)&local_8);
      FUN_662dec30(local_ac);
      puVar11 = (undefined4 *)0x662ca5f5;
      iVar2 = FUN_662de510(local_ac,pbVar3,local_8);
      if (-1 < iVar2) {
        FUN_662ef160(local_64,s_video_x_pn_realvideo_6630a07c);
        FUN_662eeff0(&stack0xfffffe6c,local_64);
        FUN_662ded20(local_ac,puVar11);
        FUN_662de2f0(local_ac,pbVar3,(uint)local_8);
        FUN_662ef0f0(local_64);
      }
      FUN_662ca8d0(&local_48,pbVar3,local_8);
      FUN_662dec80(local_ac);
    }
  }
LAB_662ca651:
  local_58 = CONCAT13(bStack_3b,CONCAT12(bStack_3c,CONCAT11(bStack_3d,local_3e)));
  if (*(ushort *)(param_1 + 0x1d) < CONCAT11(bStack_3d,local_3e)) {
    *(ushort *)(param_1 + 0x1d) = CONCAT11(bStack_3d,local_3e);
  }
  local_3e = 0;
  bStack_3d = 0;
  local_24 = 0;
  local_54 = 0;
  iVar5 = FUN_662d0e40(&local_48,(int)&local_48,&local_54);
  if ((-1 < iVar5) && (local_54 != 0)) {
    FUN_662d8440(local_178);
    iVar5 = FUN_662d8cc0(local_178,(int)&local_48,1);
    if (-1 < iVar5) {
      FUN_662da040(local_178,(int)&local_48);
    }
    FUN_662d8540(local_178);
  }
  if (-1 < iVar2) {
    local_8 = (byte *)0x0;
    FUN_662c9730(&local_48,pbVar3,(int *)&local_8);
    iVar2 = (**(code **)(*local_c + 0x1c))();
  }
LAB_662ca6ef:
  if (-1 < iVar2) {
    if (param_1[0x1b] == 0) {
      iVar2 = (**(code **)(*(int *)param_1[0x10] + 0x5c))();
      piVar12 = param_1;
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    else {
      piVar12 = (int *)(uint)*(ushort *)((int)param_1 + 0x6a);
    }
    FUN_662e30f0(local_c,(ushort)piVar12);
    if ((-1 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0x80))(), piVar12 = local_c, -1 < iVar2)) {
      if (param_1[0x20] != 0) {
        (**(code **)(*local_c + 0x1c))(param_1[0x21]);
      }
      FUN_662e30f0(piVar12,*(ushort *)((int)param_1 + 0x76));
      iVar2 = (**(code **)(*piVar12 + 0x20))();
      if (-1 < iVar2) {
        puVar11 = operator_new(0xa0);
        if (puVar11 == (undefined4 *)0x0) {
          local_4c = (undefined4 *)0x0;
        }
        else {
          local_4c = FUN_662da670(puVar11);
        }
        if (local_4c == (undefined4 *)0x0) {
          iVar2 = -0x7ff8fff2;
        }
        if (-1 < iVar2) {
          uVar6 = 1;
          if ((param_1[0x24] != 0) && (param_1[0xd] == 0)) {
            if (param_1[0x12] == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(param_1[0x12] + 0x10);
            }
            if (iVar2 == 1) {
              uVar6 = 0;
            }
          }
          iVar2 = FUN_662daa70(local_4c,param_2,local_c,*(int *)((int)param_1 + 0x62),uVar6);
          if (-1 < iVar2) {
            if (param_1[0x12] == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(param_1[0x12] + 0x10);
            }
            local_4c[8] = (uint)(1 < iVar2);
            iVar2 = FUN_662da7a0(local_4c,pbVar3,local_44);
            if ((-1 < iVar2) &&
               (iVar2 = (**(code **)(*param_1 + 0x70))
                                  (param_1,param_1[9],local_58,*(int *)((int)param_2 + 0x16) != 0),
               -1 < iVar2)) {
              if (param_1[0x13] == 0) {
                puVar11 = operator_new(0x14);
                if (puVar11 == (undefined4 *)0x0) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = FUN_662ed6f0(puVar11);
                }
                param_1[0x13] = iVar5;
                if (iVar5 == 0) {
                  iVar2 = -0x7ff8fff2;
                }
              }
              FUN_662ed8a0((void *)param_1[0x13],local_4c);
            }
          }
        }
      }
    }
  }
  return iVar2;
}


