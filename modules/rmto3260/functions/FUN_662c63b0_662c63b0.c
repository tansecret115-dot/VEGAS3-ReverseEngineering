/* Module: rmto3260.dll
   Function: FUN_662c63b0
   Address: 662c63b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_662c63b0(uint param_1,uint param_2,uint param_3,undefined1 *param_4,int *param_5,uint *param_6,
            uint *param_7,short *param_8)

{
  ushort uVar1;
  short sVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  ushort uStack_2e;
  uint local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  uint *local_20;
  int local_1c;
  uint local_18;
  int local_c;
  uint *local_8;
  
  uVar8 = param_3;
  *param_6 = 0;
  *param_7 = 0;
  if ((param_2 != 0) && (param_4 != (undefined1 *)0x0)) {
    local_c = *param_5;
    if (local_c == 0) {
      pbVar9 = (byte *)0x0;
    }
    else {
      local_34 = CONCAT11(*param_4,param_4[1]);
      uStack_31 = param_4[2];
      local_32 = param_4[3];
      uStack_2f = param_4[6];
      uStack_2e = (ushort)(((uint)(byte)param_4[4] << 0x18) >> 0x10) | (ushort)(byte)param_4[5];
      uStack_30 = param_4[7];
      local_2c = (uint)(byte)param_4[8] << 0x18 | (uint)(byte)param_4[9] << 0x10 |
                 (uint)(byte)param_4[10] << 8 | (uint)(byte)param_4[0xb];
      local_28 = CONCAT11(param_4[0xc],param_4[0xd]);
      local_26 = CONCAT11(param_4[0xe],param_4[0xf]);
      local_24 = CONCAT11(param_4[0x10],param_4[0x11]);
      local_22 = CONCAT11(param_4[0x12],param_4[0x13]);
      pbVar9 = param_4 + 0x14;
      uVar14 = CONCAT12(uStack_30,CONCAT11(uStack_31,local_32)) & 0xffff;
      local_20 = operator_new(uVar14 * 0x22);
      puVar10 = local_20;
      if (CONCAT11(uStack_31,local_32) != 0) {
        do {
          local_8 = puVar10;
          pbVar9 = FUN_662c6890(local_8,pbVar9,local_c);
          local_8 = (uint *)((int)local_8 + 0x22);
          uVar14 = uVar14 - 1;
          puVar10 = local_8;
        } while (uVar14 != 0);
      }
    }
    if (pbVar9 != (byte *)0x0) {
      if (local_2c == 0) {
        local_2c = param_2;
      }
      uVar14 = CONCAT22(uStack_2e,CONCAT11(uStack_2f,uStack_30));
      if ((param_2 < uVar14) || (local_2c < param_1)) {
        local_2c = 1;
        local_32 = 0;
        uStack_31 = 0;
        uStack_30 = 0;
        uVar14 = 0;
      }
      else {
        FUN_662ed450(&local_1c);
        sVar2 = CONCAT11(uStack_31,local_32);
        param_3 = CONCAT12(uStack_30,sVar2) & 0xffff;
        puVar10 = local_20;
        uVar6 = param_3;
        if (sVar2 != 0) {
          do {
            if (*puVar10 == 0xffffffff) {
              *puVar10 = uVar14;
            }
            if (puVar10[1] == 0) {
              puVar10[1] = local_2c;
            }
            uVar6 = uVar6 - 1;
            puVar10 = (uint *)((int)puVar10 + 0x22);
          } while (uVar6 != 0);
        }
        if (sVar2 != 0) {
          puVar10 = local_20 + 1;
          do {
            uVar14 = puVar10[-1];
            if ((uVar14 <= param_2) && ((param_1 <= *puVar10 || (*puVar10 == 0)))) {
              if (uVar14 < param_1) {
                puVar10[-1] = uVar8;
              }
              else {
                puVar10[-1] = (uVar8 - param_1) + uVar14;
              }
              if (param_2 < *puVar10) {
                *puVar10 = (uVar8 - param_1) + param_2;
              }
              else {
                *puVar10 = (uVar8 - param_1) + *puVar10;
              }
              if ((short)puVar10[3] == 3) {
                uVar14 = *(uint *)((int)puVar10 + 0xe);
                if (uVar14 < param_1) {
                  *(uint *)((int)puVar10 + 0xe) = uVar8;
                }
                else if (param_2 < uVar14) {
                  *(uint *)((int)puVar10 + 0xe) = (uVar8 - param_1) + param_2;
                }
                else {
                  *(uint *)((int)puVar10 + 0xe) = (uVar8 - param_1) + uVar14;
                }
              }
              FUN_662ed5e0(&local_1c,local_18,puVar10 + -1);
            }
            puVar10 = (uint *)((int)puVar10 + 0x22);
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        uVar14 = 0;
        puVar10 = local_20;
        if (local_18 != 0) {
          do {
            iVar12 = uVar14 * 4;
            uVar14 = uVar14 + 1;
            puVar11 = *(uint **)(local_1c + iVar12);
            puVar15 = puVar10;
            for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar15 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar15 = puVar15 + 1;
            }
            *(short *)puVar15 = (short)*puVar11;
            puVar10 = (uint *)((int)puVar10 + 0x22);
          } while (uVar14 < local_18);
        }
        uVar14 = CONCAT22(uStack_2e,CONCAT11(uStack_2f,uStack_30));
        local_32 = (undefined1)local_18;
        uStack_31 = (undefined1)(local_18 >> 8);
        *param_6 = local_18 & 0xffff;
        if (uVar14 < param_1) {
          uStack_30 = (undefined1)uVar8;
          uVar14 = uVar8;
        }
        else {
          uVar14 = uVar14 + (uVar8 - param_1);
          uStack_30 = (undefined1)uVar14;
        }
        if (param_2 < local_2c) {
          local_2c = (uVar8 - param_1) + param_2;
        }
        else {
          local_2c = local_2c + (uVar8 - param_1);
        }
        *param_7 = uVar14;
        if (*param_6 != 0) {
          local_34 = *param_8;
          *param_8 = local_34 + 1;
        }
        FUN_662ed460(&local_1c);
      }
      *param_4 = local_34._1_1_;
      param_4[1] = (undefined1)local_34;
      param_4[2] = uStack_31;
      param_4[3] = local_32;
      param_4[4] = (char)(uVar14 >> 0x18);
      param_4[5] = (char)(uVar14 >> 0x10);
      param_4[6] = (char)(uVar14 >> 8);
      param_4[7] = uStack_30;
      param_4[8] = (char)(local_2c >> 0x18);
      param_4[9] = (char)(local_2c >> 0x10);
      param_4[10] = (char)(local_2c >> 8);
      param_4[0xb] = (undefined1)local_2c;
      param_4[0xc] = local_28._1_1_;
      param_4[0xd] = (undefined1)local_28;
      param_4[0xe] = local_26._1_1_;
      param_4[0xf] = (undefined1)local_26;
      param_4[0x10] = local_24._1_1_;
      param_4[0x11] = (undefined1)local_24;
      param_4[0x12] = local_22._1_1_;
      param_4[0x13] = (undefined1)local_22;
      puVar3 = param_4 + 0x14;
      param_1 = CONCAT12(uStack_30,CONCAT11(uStack_31,local_32)) & 0xffff;
      if (CONCAT11(uStack_31,local_32) != 0) {
        puVar4 = puVar3;
        puVar10 = local_20 + 1;
        do {
          iVar12 = 0;
          *puVar4 = (char)(puVar10[-1] >> 0x18);
          puVar4[1] = (char)(puVar10[-1] >> 0x10);
          puVar4[2] = (char)(puVar10[-1] >> 8);
          puVar4[3] = (char)puVar10[-1];
          puVar4[4] = (char)(*puVar10 >> 0x18);
          puVar4[5] = (char)(*puVar10 >> 0x10);
          puVar4[6] = (char)(*puVar10 >> 8);
          puVar4[7] = (char)*puVar10;
          puVar4[8] = *(undefined1 *)((int)puVar10 + 5);
          puVar4[9] = (char)puVar10[1];
          puVar4[10] = *(undefined1 *)((int)puVar10 + 7);
          puVar4[0xb] = *(undefined1 *)((int)puVar10 + 6);
          puVar5 = puVar4 + 0xc;
          puVar3 = puVar5;
          if (*(short *)((int)puVar10 + 6) != 0) {
            do {
              *puVar3 = *(undefined1 *)(puVar10[2] + 1 + iVar12 * 2);
              puVar5 = puVar3 + 2;
              iVar7 = iVar12 * 2;
              iVar12 = iVar12 + 1;
              puVar3[1] = *(undefined1 *)(puVar10[2] + iVar7);
              puVar3 = puVar5;
            } while (iVar12 < (int)(uint)*(ushort *)((int)puVar10 + 6));
          }
          *puVar5 = *(undefined1 *)((int)puVar10 + 0xd);
          puVar5[1] = (char)puVar10[3];
          puVar5[2] = (char)((uint)*(undefined4 *)((int)puVar10 + 0xe) >> 0x18);
          puVar5[3] = (char)((uint)*(undefined4 *)((int)puVar10 + 0xe) >> 0x10);
          puVar5[4] = (char)((uint)*(undefined4 *)((int)puVar10 + 0xe) >> 8);
          puVar5[5] = *(undefined1 *)((int)puVar10 + 0xe);
          puVar5[6] = *(undefined1 *)((int)puVar10 + 0x13);
          puVar5[7] = *(undefined1 *)((int)puVar10 + 0x12);
          uVar1 = *(ushort *)((int)puVar10 + 0x12);
          puVar13 = (undefined4 *)puVar10[5];
          puVar16 = (undefined4 *)(puVar5 + 8);
          for (uVar8 = (uint)(uVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar16 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar16 = puVar16 + 1;
          }
          for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          puVar3 = (undefined1 *)((int)(puVar5 + 8) + (uint)*(ushort *)((int)puVar10 + 0x12));
          *puVar3 = *(undefined1 *)((int)puVar10 + 0x19);
          puVar3[1] = (char)puVar10[6];
          uVar8 = puVar10[6];
          puVar13 = *(undefined4 **)((int)puVar10 + 0x1a);
          puVar16 = (undefined4 *)(puVar3 + 2);
          for (uVar14 = (uint)(ushort)((ushort)uVar8 >> 2); uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar16 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar16 = puVar16 + 1;
          }
          for (uVar8 = (ushort)uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar16 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar16 = (undefined4 *)((int)puVar16 + 1);
          }
          puVar3 = (undefined1 *)((int)(puVar3 + 2) + (uint)(ushort)puVar10[6]);
          *param_5 = (int)puVar3 - (int)puVar4;
          param_1 = param_1 - 1;
          puVar4 = puVar3;
          puVar10 = (uint *)((int)puVar10 + 0x22);
        } while (param_1 != 0);
      }
      *param_5 = (int)puVar3 - (int)param_4;
      return 0;
    }
  }
  return 0x80070057;
}


