/* Module: rnco3260.dll
   Function: FUN_6375ea90
   Address: 6375ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6375ea90(uint *param_1,int param_2,byte *param_3,uint *param_4,uint param_5,uint param_6,
            uint param_7,byte *param_8,undefined8 *param_9,byte *param_10,byte *param_11,
            byte *param_12,uint param_13,uint *param_14,int param_15,int param_16)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *local_c;
  byte *local_8;
  
  puVar4 = param_14;
  pbVar8 = param_12;
  puVar9 = param_4;
  iVar5 = FUN_6375e410((byte)param_1,param_2,(int)param_3,(byte)param_4,param_5,param_6,param_7,
                       (int)param_8,(byte)param_9,(int)param_10,(int)param_11,(byte)param_12,
                       param_13,(int)param_14,param_15,param_16,&param_16,&param_2);
  if (iVar5 != 0) {
    iVar5 = FUN_6375e550(&param_5,&param_7,(int *)&param_13,&param_15,param_16);
    if (iVar5 == 0) {
      return 0;
    }
    if ((param_13 & 1) == 0) {
      if ((int)puVar9 < 0) {
        param_1 = (uint *)((int)param_1 - (int)(param_3 + -1) * (int)puVar9);
      }
      if (((0 < (int)pbVar8) && (param_16 == 1)) && (param_2 == 1)) {
        if (((DAT_63793cb8 == 0 && DAT_63793cb4 == 0) && DAT_63791560 == 0) && DAT_637944e0 == 0) {
          pbVar11 = (byte *)((int)puVar4 * (int)pbVar8 + param_13 + (int)param_9);
          param_3 = (byte *)((int)(param_11 + (int)puVar4 / 2) * (int)pbVar8);
          pbVar10 = (byte *)((int)param_9 + (int)param_3) + (int)param_13 / 2;
          param_11 = pbVar10 + ((int)((int)pbVar8 * (int)param_11 +
                                     ((int)pbVar8 * (int)param_11 >> 0x1f & 3U)) >> 2);
          param_9 = (undefined8 *)((int)param_1 + param_5 * 2 + param_6 * (int)param_4);
          if (DAT_63796aa0 != 0) {
            if ((param_6 & 1) != 0) {
              FUN_6375f5e0((undefined8 *)pbVar11,(undefined8 *)pbVar10,(undefined8 *)param_11,
                           param_9,param_7);
              pbVar10 = pbVar10 + (int)pbVar8 / 2;
              param_11 = param_11 + (int)pbVar8 / 2;
              param_9 = (undefined8 *)((int)param_9 + (int)param_4);
              pbVar11 = pbVar11 + (int)pbVar8;
              param_8 = param_8 + -1;
            }
            param_1 = (uint *)((int)param_8 / 2);
            if (0 < (int)param_1) {
              param_6 = (int)pbVar8 / 2;
              do {
                FUN_6375f5e0((undefined8 *)pbVar11,(undefined8 *)pbVar10,(undefined8 *)param_11,
                             param_9,param_7);
                param_9 = (undefined8 *)((int)param_9 + (int)param_4);
                FUN_6375f5e0((undefined8 *)(pbVar11 + (int)pbVar8),(undefined8 *)pbVar10,
                             (undefined8 *)param_11,param_9,param_7);
                pbVar10 = pbVar10 + param_6;
                param_11 = param_11 + param_6;
                param_9 = (undefined8 *)((int)param_9 + (int)param_4);
                pbVar11 = pbVar11 + (int)pbVar8 + (int)pbVar8;
                param_1 = (uint *)((int)param_1 + -1);
              } while (param_1 != (uint *)0x0);
            }
            if (((uint)param_8 & 1) != 0) {
              FUN_6375f5e0((undefined8 *)pbVar11,(undefined8 *)pbVar10,(undefined8 *)param_11,
                           param_9,param_7);
            }
            return 0;
          }
          if ((param_6 & 1) != 0) {
            param_1 = (uint *)0x0;
            if (0 < (int)param_7 / 2) {
              pbVar7 = pbVar10;
              param_3 = pbVar11;
              param_14 = (uint *)param_9;
              do {
                pbVar1 = param_3 + 1;
                bVar2 = *param_3;
                param_3 = param_3 + 2;
                *param_14 = CONCAT31(CONCAT21(CONCAT11(pbVar7[(int)param_11 - (int)pbVar10],*pbVar1)
                                              ,*pbVar7),bVar2);
                param_14 = param_14 + 1;
                param_1 = (uint *)((int)param_1 + 1);
                pbVar7 = pbVar7 + 1;
              } while ((int)param_1 < (int)param_7 / 2);
            }
            param_11 = param_11 + (int)pbVar8 / 2;
            pbVar10 = pbVar10 + (int)pbVar8 / 2;
            pbVar11 = pbVar11 + (int)pbVar8;
            param_9 = (undefined8 *)((int)param_9 + (int)param_4);
            param_8 = param_8 + -1;
          }
          param_10 = (byte *)((int)param_8 / 2);
          if (0 < (int)param_10) {
            do {
              param_1 = (uint *)0x0;
              if (0 < (int)param_7 / 2) {
                param_14 = (uint *)param_9;
                pbVar7 = pbVar10;
                param_3 = pbVar11;
                do {
                  pbVar1 = param_3 + 1;
                  bVar2 = *param_3;
                  param_3 = param_3 + 2;
                  *param_14 = CONCAT31(CONCAT21(CONCAT11(pbVar7[(int)param_11 - (int)pbVar10],
                                                         *pbVar1),*pbVar7),bVar2);
                  param_14 = param_14 + 1;
                  param_1 = (uint *)((int)param_1 + 1);
                  pbVar7 = pbVar7 + 1;
                } while ((int)param_1 < (int)param_7 / 2);
              }
              param_1 = (uint *)0x0;
              if (0 < (int)param_7 / 2) {
                pbVar7 = pbVar10;
                param_3 = pbVar11 + (int)pbVar8;
                param_14 = (uint *)((int)param_9 + (int)param_4);
                do {
                  pbVar1 = param_3 + 1;
                  bVar2 = *param_3;
                  param_3 = param_3 + 2;
                  *param_14 = CONCAT31(CONCAT21(CONCAT11(pbVar7[(int)param_11 - (int)pbVar10],
                                                         *pbVar1),*pbVar7),bVar2);
                  param_14 = param_14 + 1;
                  param_1 = (uint *)((int)param_1 + 1);
                  pbVar7 = pbVar7 + 1;
                } while ((int)param_1 < (int)param_7 / 2);
              }
              param_11 = param_11 + (int)pbVar8 / 2;
              pbVar10 = pbVar10 + (int)pbVar8 / 2;
              pbVar11 = pbVar11 + (int)pbVar8 + (int)pbVar8;
              param_9 = (undefined8 *)((int)param_9 + (int)param_4 + (int)param_4);
              param_10 = param_10 + -1;
            } while (param_10 != (byte *)0x0);
          }
          if ((((uint)param_8 & 1) != 0) && (iVar5 = 0, 0 < (int)param_7 / 2)) {
            iVar6 = (int)param_11 - (int)pbVar10;
            do {
              iVar5 = iVar5 + 1;
              *(uint *)param_9 =
                   CONCAT31(CONCAT21(CONCAT11(pbVar10[iVar6],pbVar11[1]),*pbVar10),*pbVar11);
              pbVar10 = pbVar10 + 1;
              param_9 = (undefined8 *)((int)param_9 + 4);
              pbVar11 = pbVar11 + 2;
            } while (iVar5 < (int)param_7 / 2);
            return 0;
          }
        }
        else if (DAT_637944e0 == 0) {
          pbVar11 = (byte *)((int)puVar4 * (int)pbVar8 + param_13 + (int)param_9);
          pbVar10 = (byte *)((int)param_9 +
                            (int)param_13 / 2 + (int)(param_11 + (int)puVar4 / 2) * (int)pbVar8);
          param_11 = pbVar10 + ((int)((int)pbVar8 * (int)param_11 +
                                     ((int)pbVar8 * (int)param_11 >> 0x1f & 3U)) >> 2);
          param_1 = (uint *)((int)param_1 + param_5 * 2 + param_6 * (int)param_4);
          if ((param_6 & 1) != 0) {
            param_9 = (undefined8 *)0x0;
            if (0 < (int)param_7 / 2) {
              param_3 = pbVar10;
              param_12 = pbVar11;
              param_14 = param_1;
              do {
                pbVar7 = param_12 + 1;
                bVar2 = *param_12;
                param_12 = param_12 + 2;
                *param_14 = (((&DAT_63794500)[param_3[(int)param_11 - (int)pbVar10]] << 8 |
                             (&DAT_637940e0)[*pbVar7]) << 8 | (&DAT_63792da0)[*param_3]) << 8 |
                            (&DAT_637940e0)[bVar2];
                param_9 = (undefined8 *)((int)param_9 + 1);
                param_14 = param_14 + 1;
                param_3 = param_3 + 1;
              } while ((int)param_9 < (int)param_7 / 2);
            }
            pbVar11 = pbVar11 + (int)pbVar8;
            param_11 = param_11 + (int)pbVar8 / 2;
            pbVar10 = pbVar10 + (int)pbVar8 / 2;
            param_1 = (uint *)((int)param_1 + (int)param_4);
            param_8 = param_8 + -1;
          }
          param_14 = (uint *)((int)param_8 / 2);
          param_3 = pbVar10;
          param_12 = pbVar11;
          if (0 < (int)param_14) {
            do {
              param_9 = (undefined8 *)0x0;
              if (0 < (int)param_7 / 2) {
                pbVar11 = param_3;
                puVar9 = param_1;
                pbVar10 = param_12;
                do {
                  *puVar9 = (((&DAT_63794500)[pbVar11[(int)param_11 - (int)param_3]] << 8 |
                             (&DAT_637940e0)[pbVar10[1]]) << 8 | (&DAT_63792da0)[*pbVar11]) << 8 |
                            (&DAT_637940e0)[*pbVar10];
                  param_9 = (undefined8 *)((int)param_9 + 1);
                  pbVar11 = pbVar11 + 1;
                  puVar9 = puVar9 + 1;
                  pbVar10 = pbVar10 + 2;
                } while ((int)param_9 < (int)param_7 / 2);
              }
              param_9 = (undefined8 *)0x0;
              if (0 < (int)param_7 / 2) {
                pbVar11 = param_3;
                puVar9 = (uint *)((int)param_1 + (int)param_4);
                pbVar10 = param_12 + (int)pbVar8;
                do {
                  *puVar9 = (((&DAT_63794500)[pbVar11[(int)param_11 - (int)param_3]] << 8 |
                             (&DAT_637940e0)[pbVar10[1]]) << 8 | (&DAT_63792da0)[*pbVar11]) << 8 |
                            (&DAT_637940e0)[*pbVar10];
                  param_9 = (undefined8 *)((int)param_9 + 1);
                  pbVar11 = pbVar11 + 1;
                  puVar9 = puVar9 + 1;
                  pbVar10 = pbVar10 + 2;
                } while ((int)param_9 < (int)param_7 / 2);
              }
              pbVar11 = param_12 + (int)pbVar8 + (int)pbVar8;
              param_11 = param_11 + (int)pbVar8 / 2;
              pbVar10 = param_3 + (int)pbVar8 / 2;
              param_1 = (uint *)((int)param_1 + (int)param_4 + (int)param_4);
              param_14 = (uint *)((int)param_14 + -1);
              param_3 = pbVar10;
              param_12 = pbVar11;
            } while (param_14 != (uint *)0x0);
          }
          if ((((uint)param_8 & 1) != 0) && (iVar5 = 0, 0 < (int)param_7 / 2)) {
            iVar6 = (int)param_11 - (int)pbVar10;
            do {
              pbVar8 = pbVar10 + iVar6;
              bVar2 = *pbVar10;
              iVar5 = iVar5 + 1;
              pbVar10 = pbVar10 + 1;
              *param_1 = (((&DAT_63794500)[*pbVar8] << 8 | (&DAT_637940e0)[pbVar11[1]]) << 8 |
                         (&DAT_63792da0)[bVar2]) << 8 | (&DAT_637940e0)[*pbVar11];
              param_1 = param_1 + 1;
              pbVar11 = pbVar11 + 2;
            } while (iVar5 < (int)param_7 / 2);
            return 0;
          }
        }
        else {
          param_3 = (byte *)((int)puVar4 * (int)pbVar8 + param_13 + (int)param_9);
          iVar5 = (int)pbVar8 * (int)param_11;
          param_14 = (uint *)((int)param_9 +
                             iVar5 + (int)param_13 / 2 + (((int)puVar4 / 2) * (int)pbVar8) / 2);
          param_1 = (uint *)((int)param_1 + param_5 * 2 + param_6 * (int)param_4);
          param_10 = (byte *)(((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + (int)param_14);
          if ((param_6 & 1) != 0) {
            param_9 = (undefined8 *)0x0;
            if (0 < (int)param_7 / 2) {
              pbVar11 = param_10;
              local_c = param_1;
              local_8 = param_3;
              do {
                *local_c = (((uint)(byte)(&DAT_637903e0)
                                         [(&DAT_63793cc0)[pbVar11[(int)param_14 - (int)param_10]] +
                                          (&DAT_63794500)[*pbVar11]] << 8 |
                            (&DAT_637940e0)[local_8[1]]) << 8 |
                           (uint)(byte)(&DAT_637903e0)
                                       [(&DAT_63792da0)[pbVar11[(int)param_14 - (int)param_10]] +
                                        (&DAT_637931a0)[*pbVar11]]) << 8 | (&DAT_637940e0)[*local_8]
                ;
                local_c = local_c + 1;
                param_9 = (undefined8 *)((int)param_9 + 1);
                pbVar11 = pbVar11 + 1;
                local_8 = local_8 + 2;
              } while ((int)param_9 < (int)param_7 / 2);
            }
            param_3 = param_3 + (int)pbVar8;
            param_14 = (uint *)((int)param_14 + (int)pbVar8 / 2);
            param_10 = param_10 + (int)pbVar8 / 2;
            param_1 = (uint *)((int)param_1 + (int)param_4);
            param_8 = param_8 + -1;
          }
          local_8 = (byte *)((int)param_8 / 2);
          if (0 < (int)local_8) {
            do {
              param_9 = (undefined8 *)0x0;
              if (0 < (int)param_7 / 2) {
                local_c = param_1;
                pbVar11 = param_3 + 1;
                pbVar10 = param_10;
                do {
                  pbVar8 = pbVar11 + 2;
                  bVar2 = (&DAT_637903e0)
                          [(&DAT_63794500)[*pbVar10] +
                           (&DAT_63793cc0)[pbVar10[(int)param_14 - (int)param_10]]];
                  bVar3 = (&DAT_637903e0)
                          [(&DAT_637931a0)[*pbVar10] +
                           (&DAT_63792da0)[pbVar10[(int)param_14 - (int)param_10]]];
                  *local_c = (((&DAT_637940e0)[*pbVar11] | (uint)bVar2 << 8) << 8 | (uint)bVar3) <<
                             8 | (&DAT_637940e0)[pbVar11[-1]];
                  *(uint *)((int)(param_4 + -1) + (int)(local_c + 1)) =
                       (((&DAT_637940e0)[(param_12 + -2)[(int)pbVar8]] | (uint)bVar2 << 8) << 8 |
                       (uint)bVar3) << 8 | (&DAT_637940e0)[(param_12 + -3)[(int)pbVar8]];
                  param_9 = (undefined8 *)((int)param_9 + 1);
                  pbVar10 = pbVar10 + 1;
                  pbVar11 = pbVar8;
                  pbVar8 = param_12;
                  local_c = local_c + 1;
                } while ((int)param_9 < (int)param_7 / 2);
              }
              param_3 = param_3 + (int)pbVar8 * 2;
              param_14 = (uint *)((int)param_14 + (int)pbVar8 / 2);
              param_10 = param_10 + (int)pbVar8 / 2;
              param_1 = (uint *)((int)param_1 + (int)param_4 * 2);
              local_8 = (byte *)((int)local_8 + -1);
            } while (local_8 != (byte *)0x0);
          }
          if ((((uint)param_8 & 1) != 0) && (param_9 = (undefined8 *)0x0, 0 < (int)param_7 / 2)) {
            iVar5 = (int)param_14 - (int)param_10;
            param_4 = param_1;
            param_8 = param_3;
            do {
              *param_4 = (((uint)(byte)(&DAT_637903e0)
                                       [(&DAT_63793cc0)[param_10[iVar5]] +
                                        (&DAT_63794500)[*param_10]] << 8 |
                          (&DAT_637940e0)[param_8[1]]) << 8 |
                         (uint)(byte)(&DAT_637903e0)
                                     [(&DAT_63792da0)[param_10[iVar5]] + (&DAT_637931a0)[*param_10]]
                         ) << 8 | (&DAT_637940e0)[*param_8];
              param_9 = (undefined8 *)((int)param_9 + 1);
              param_10 = param_10 + 1;
              param_4 = param_4 + 1;
              param_8 = param_8 + 2;
            } while ((int)param_9 < (int)param_7 / 2);
          }
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}


