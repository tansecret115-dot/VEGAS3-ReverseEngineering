/* Module: rnco3260.dll
   Function: FUN_6375f6c0
   Address: 6375f6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6375f6c0(uint *param_1,byte *param_2,byte *param_3,int param_4,uint param_5,uint param_6,
            uint param_7,uint *param_8,byte *param_9,int param_10,undefined8 *param_11,
            uint *param_12,uint param_13,byte *param_14,int param_15,int param_16)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  byte *pbVar9;
  uint *local_c;
  int local_8;
  
  pbVar7 = param_14;
  puVar8 = param_12;
  pbVar9 = param_9;
  iVar3 = FUN_6375e410((byte)param_1,(int)param_2,(int)param_3,(byte)param_4,param_5,param_6,param_7
                       ,(int)param_8,(byte)param_9,param_10,(int)param_11,(byte)param_12,param_13,
                       (int)param_14,param_15,param_16,&param_16,&param_10);
  if (iVar3 != 0) {
    iVar3 = FUN_6375e550(&param_5,&param_7,(int *)&param_13,&param_15,param_16);
    if (iVar3 == 0) {
      return 0;
    }
    if ((param_13 & 1) == 0) {
      if (param_4 < 0) {
        param_1 = (uint *)((int)param_1 - (int)(param_3 + -1) * param_4);
      }
      if (((0 < (int)puVar8) && (param_16 == 1)) && (param_10 == 1)) {
        if (((DAT_63793cb8 == 0 && DAT_63793cb4 == 0) && DAT_63791560 == 0) && DAT_637944e0 == 0) {
          pbVar9 = pbVar9 + (int)pbVar7 * (int)puVar8 + param_13;
          pbVar7 = param_9 + (int)param_13 / 2 + ((int)param_14 / 2 + (int)param_11) * (int)puVar8;
          param_3 = pbVar7 + ((int)((int)puVar8 * (int)param_11 +
                                   ((int)puVar8 * (int)param_11 >> 0x1f & 3U)) >> 2);
          param_11 = (undefined8 *)((int)param_1 + param_5 * 2 + param_6 * param_4);
          if (DAT_63796aa0 != 0) {
            if ((param_6 & 1) != 0) {
              FUN_63760200((undefined8 *)pbVar9,(undefined8 *)pbVar7,(undefined8 *)param_3,param_11,
                           param_7);
              pbVar7 = pbVar7 + (int)puVar8 / 2;
              param_3 = param_3 + (int)puVar8 / 2;
              param_11 = (undefined8 *)((int)param_11 + param_4);
              pbVar9 = pbVar9 + (int)puVar8;
              param_8 = (uint *)((int)param_8 + -1);
            }
            param_1 = (uint *)((int)param_8 / 2);
            if (0 < (int)param_1) {
              param_6 = (int)puVar8 / 2;
              do {
                FUN_63760200((undefined8 *)pbVar9,(undefined8 *)pbVar7,(undefined8 *)param_3,
                             param_11,param_7);
                param_11 = (undefined8 *)((int)param_11 + param_4);
                FUN_63760200((undefined8 *)(pbVar9 + (int)puVar8),(undefined8 *)pbVar7,
                             (undefined8 *)param_3,param_11,param_7);
                pbVar7 = pbVar7 + param_6;
                param_3 = param_3 + param_6;
                param_11 = (undefined8 *)((int)param_11 + param_4);
                pbVar9 = pbVar9 + (int)puVar8 + (int)puVar8;
                param_1 = (uint *)((int)param_1 + -1);
              } while (param_1 != (uint *)0x0);
            }
            if (((uint)param_8 & 1) != 0) {
              FUN_63760200((undefined8 *)pbVar9,(undefined8 *)pbVar7,(undefined8 *)param_3,param_11,
                           param_7);
            }
            return 0;
          }
          if ((param_6 & 1) != 0) {
            param_1 = (uint *)0x0;
            if (0 < (int)param_7 / 2) {
              pbVar5 = pbVar7;
              param_12 = (uint *)param_11;
              param_14 = pbVar9;
              do {
                *param_12 = CONCAT31(CONCAT21(CONCAT11(param_14[1],
                                                       pbVar5[(int)param_3 - (int)pbVar7]),*param_14
                                             ),*pbVar5);
                param_1 = (uint *)((int)param_1 + 1);
                param_12 = param_12 + 1;
                param_14 = param_14 + 2;
                pbVar5 = pbVar5 + 1;
              } while ((int)param_1 < (int)param_7 / 2);
            }
            param_3 = param_3 + (int)puVar8 / 2;
            pbVar7 = pbVar7 + (int)puVar8 / 2;
            pbVar9 = pbVar9 + (int)puVar8;
            param_11 = (undefined8 *)((int)param_11 + param_4);
            param_8 = (uint *)((int)param_8 + -1);
          }
          param_2 = (byte *)((int)param_8 / 2);
          if (0 < (int)param_2) {
            do {
              param_1 = (uint *)0x0;
              if (0 < (int)param_7 / 2) {
                param_12 = (uint *)param_11;
                pbVar5 = pbVar7;
                param_14 = pbVar9;
                do {
                  *param_12 = CONCAT31(CONCAT21(CONCAT11(param_14[1],
                                                         pbVar5[(int)param_3 - (int)pbVar7]),
                                                *param_14),*pbVar5);
                  param_1 = (uint *)((int)param_1 + 1);
                  param_12 = param_12 + 1;
                  param_14 = param_14 + 2;
                  pbVar5 = pbVar5 + 1;
                } while ((int)param_1 < (int)param_7 / 2);
              }
              param_1 = (uint *)0x0;
              if (0 < (int)param_7 / 2) {
                pbVar5 = pbVar7;
                param_12 = (uint *)((int)param_11 + param_4);
                param_14 = pbVar9 + (int)puVar8;
                do {
                  *param_12 = CONCAT31(CONCAT21(CONCAT11(param_14[1],
                                                         pbVar5[(int)param_3 - (int)pbVar7]),
                                                *param_14),*pbVar5);
                  param_1 = (uint *)((int)param_1 + 1);
                  param_12 = param_12 + 1;
                  param_14 = param_14 + 2;
                  pbVar5 = pbVar5 + 1;
                } while ((int)param_1 < (int)param_7 / 2);
              }
              param_3 = param_3 + (int)puVar8 / 2;
              pbVar7 = pbVar7 + (int)puVar8 / 2;
              pbVar9 = pbVar9 + (int)puVar8 + (int)puVar8;
              param_11 = (undefined8 *)((int)param_11 + param_4 + param_4);
              param_2 = param_2 + -1;
            } while (param_2 != (byte *)0x0);
          }
          if ((((uint)param_8 & 1) != 0) && (iVar3 = 0, 0 < (int)param_7 / 2)) {
            iVar4 = (int)param_3 - (int)pbVar7;
            do {
              iVar3 = iVar3 + 1;
              *(uint *)param_11 =
                   CONCAT31(CONCAT21(CONCAT11(pbVar9[1],pbVar7[iVar4]),*pbVar9),*pbVar7);
              pbVar7 = pbVar7 + 1;
              param_11 = (undefined8 *)((int)param_11 + 4);
              pbVar9 = pbVar9 + 2;
            } while (iVar3 < (int)param_7 / 2);
            return 0;
          }
        }
        else if (DAT_637944e0 == 0) {
          pbVar5 = pbVar9 + (int)pbVar7 * (int)puVar8 + param_13;
          pbVar9 = pbVar9 + (int)param_13 / 2 + ((int)pbVar7 / 2 + (int)param_11) * (int)puVar8;
          param_3 = pbVar9 + ((int)((int)puVar8 * (int)param_11 +
                                   ((int)puVar8 * (int)param_11 >> 0x1f & 3U)) >> 2);
          param_1 = (uint *)((int)param_1 + param_5 * 2 + param_6 * param_4);
          if ((param_6 & 1) != 0) {
            param_11 = (undefined8 *)0x0;
            if (0 < (int)param_7 / 2) {
              param_9 = pbVar9;
              param_12 = param_1;
              param_14 = pbVar5;
              do {
                *param_12 = (((&DAT_63794500)[param_9[(int)param_3 - (int)pbVar9]] |
                             (&DAT_637940e0)[param_14[1]] << 8) << 8 | (&DAT_637940e0)[*param_14])
                            << 8 | (&DAT_63792da0)[*param_9];
                param_11 = (undefined8 *)((int)param_11 + 1);
                param_12 = param_12 + 1;
                param_14 = param_14 + 2;
                param_9 = param_9 + 1;
              } while ((int)param_11 < (int)param_7 / 2);
            }
            pbVar5 = pbVar5 + (int)puVar8;
            param_3 = param_3 + (int)puVar8 / 2;
            pbVar9 = pbVar9 + (int)puVar8 / 2;
            param_1 = (uint *)((int)param_1 + param_4);
            param_8 = (uint *)((int)param_8 + -1);
          }
          param_12 = (uint *)((int)param_8 / 2);
          param_9 = pbVar5;
          param_14 = pbVar9;
          if (0 < (int)param_12) {
            do {
              param_11 = (undefined8 *)0x0;
              if (0 < (int)param_7 / 2) {
                pbVar9 = param_9;
                puVar6 = param_1;
                pbVar7 = param_14;
                do {
                  pbVar5 = pbVar7 + ((int)param_3 - (int)param_14);
                  bVar1 = *pbVar7;
                  param_11 = (undefined8 *)((int)param_11 + 1);
                  pbVar7 = pbVar7 + 1;
                  *puVar6 = (((&DAT_63794500)[*pbVar5] | (&DAT_637940e0)[pbVar9[1]] << 8) << 8 |
                            (&DAT_637940e0)[*pbVar9]) << 8 | (&DAT_63792da0)[bVar1];
                  pbVar9 = pbVar9 + 2;
                  puVar6 = puVar6 + 1;
                } while ((int)param_11 < (int)param_7 / 2);
              }
              param_11 = (undefined8 *)0x0;
              if (0 < (int)param_7 / 2) {
                pbVar9 = param_9 + (int)puVar8;
                puVar6 = (uint *)((int)param_1 + param_4);
                pbVar7 = param_14;
                do {
                  pbVar5 = pbVar7 + ((int)param_3 - (int)param_14);
                  bVar1 = *pbVar7;
                  param_11 = (undefined8 *)((int)param_11 + 1);
                  pbVar7 = pbVar7 + 1;
                  *puVar6 = (((&DAT_63794500)[*pbVar5] | (&DAT_637940e0)[pbVar9[1]] << 8) << 8 |
                            (&DAT_637940e0)[*pbVar9]) << 8 | (&DAT_63792da0)[bVar1];
                  pbVar9 = pbVar9 + 2;
                  puVar6 = puVar6 + 1;
                } while ((int)param_11 < (int)param_7 / 2);
              }
              pbVar5 = param_9 + (int)puVar8 + (int)puVar8;
              param_3 = param_3 + (int)puVar8 / 2;
              pbVar9 = param_14 + (int)puVar8 / 2;
              param_1 = (uint *)((int)param_1 + param_4 + param_4);
              param_12 = (uint *)((int)param_12 + -1);
              param_9 = pbVar5;
              param_14 = pbVar9;
            } while (param_12 != (uint *)0x0);
          }
          if ((((uint)param_8 & 1) != 0) && (iVar3 = 0, 0 < (int)param_7 / 2)) {
            iVar4 = (int)param_3 - (int)pbVar9;
            do {
              pbVar7 = pbVar9 + iVar4;
              bVar1 = *pbVar9;
              iVar3 = iVar3 + 1;
              pbVar9 = pbVar9 + 1;
              *param_1 = (((&DAT_63794500)[*pbVar7] | (&DAT_637940e0)[pbVar5[1]] << 8) << 8 |
                         (&DAT_637940e0)[*pbVar5]) << 8 | (&DAT_63792da0)[bVar1];
              pbVar5 = pbVar5 + 2;
              param_1 = param_1 + 1;
            } while (iVar3 < (int)param_7 / 2);
            return 0;
          }
        }
        else {
          iVar3 = (int)puVar8 * (int)param_11;
          param_3 = pbVar9 + (int)pbVar7 * (int)puVar8 + param_13;
          param_14 = pbVar9 + iVar3 + (int)param_13 / 2 + (((int)pbVar7 / 2) * (int)puVar8) / 2;
          param_1 = (uint *)((int)param_1 + param_5 * 2 + param_6 * param_4);
          param_9 = param_14 + ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2);
          if ((param_6 & 1) != 0) {
            param_11 = (undefined8 *)0x0;
            if (0 < (int)param_7 / 2) {
              pbVar9 = param_14;
              param_2 = param_3;
              local_c = param_1;
              do {
                *local_c = (((uint)(byte)(&DAT_637903e0)
                                         [(&DAT_63794500)[pbVar9[(int)param_9 - (int)param_14]] +
                                          (&DAT_63793cc0)[*pbVar9]] |
                            (&DAT_637940e0)[param_2[1]] << 8) << 8 | (&DAT_637940e0)[*param_2]) << 8
                           | (uint)(byte)(&DAT_637903e0)
                                         [(&DAT_637931a0)[pbVar9[(int)param_9 - (int)param_14]] +
                                          (&DAT_63792da0)[*pbVar9]];
                local_c = local_c + 1;
                param_11 = (undefined8 *)((int)param_11 + 1);
                pbVar9 = pbVar9 + 1;
                param_2 = param_2 + 2;
              } while ((int)param_11 < (int)param_7 / 2);
            }
            param_3 = param_3 + (int)puVar8;
            param_14 = param_14 + (int)puVar8 / 2;
            param_9 = param_9 + (int)puVar8 / 2;
            param_1 = (uint *)((int)param_1 + param_4);
            param_8 = (uint *)((int)param_8 + -1);
          }
          local_8 = (int)param_8 / 2;
          if (0 < local_8) {
            do {
              param_11 = (undefined8 *)0x0;
              if (0 < (int)param_7 / 2) {
                local_c = param_1;
                pbVar9 = param_3 + 1;
                pbVar7 = param_14;
                do {
                  pbVar5 = pbVar9 + 2;
                  bVar1 = (&DAT_637903e0)
                          [(&DAT_63793cc0)[*pbVar7] +
                           (&DAT_63794500)[pbVar7[(int)param_9 - (int)param_14]]];
                  bVar2 = (&DAT_637903e0)
                          [(&DAT_63792da0)[*pbVar7] +
                           (&DAT_637931a0)[pbVar7[(int)param_9 - (int)param_14]]];
                  *local_c = (((&DAT_637940e0)[*pbVar9] << 8 | (uint)bVar1) << 8 |
                             (&DAT_637940e0)[pbVar9[-1]]) << 8 | (uint)bVar2;
                  *(uint *)(param_4 + -4 + (int)(local_c + 1)) =
                       (((&DAT_637940e0)[pbVar5[(int)param_12 + -2]] << 8 | (uint)bVar1) << 8 |
                       (&DAT_637940e0)[pbVar5[(int)param_12 + -3]]) << 8 | (uint)bVar2;
                  param_11 = (undefined8 *)((int)param_11 + 1);
                  pbVar7 = pbVar7 + 1;
                  pbVar9 = pbVar5;
                  puVar8 = param_12;
                  local_c = local_c + 1;
                } while ((int)param_11 < (int)param_7 / 2);
              }
              param_3 = param_3 + (int)puVar8 * 2;
              param_14 = param_14 + (int)puVar8 / 2;
              param_9 = param_9 + (int)puVar8 / 2;
              param_1 = (uint *)((int)param_1 + param_4 * 2);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          if ((((uint)param_8 & 1) != 0) && (param_11 = (undefined8 *)0x0, 0 < (int)param_7 / 2)) {
            iVar3 = (int)param_9 - (int)param_14;
            param_8 = param_1;
            do {
              *param_8 = (((uint)(byte)(&DAT_637903e0)
                                       [(&DAT_63794500)[param_14[iVar3]] +
                                        (&DAT_63793cc0)[*param_14]] |
                          (&DAT_637940e0)[param_3[1]] << 8) << 8 | (&DAT_637940e0)[*param_3]) << 8 |
                         (uint)(byte)(&DAT_637903e0)
                                     [(&DAT_637931a0)[param_14[iVar3]] + (&DAT_63792da0)[*param_14]]
              ;
              param_8 = param_8 + 1;
              param_11 = (undefined8 *)((int)param_11 + 1);
              param_14 = param_14 + 1;
              param_3 = param_3 + 2;
            } while ((int)param_11 < (int)param_7 / 2);
          }
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}


