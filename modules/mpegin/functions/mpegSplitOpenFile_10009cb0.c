/* Module: mpegin.dll
   Function: mpegSplitOpenFile
   Address: 10009cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl mpegSplitOpenFile(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
                    /* 0x9cb0  8  mpegSplitOpenFile */
  iVar6 = 0;
  if (param_1 == (undefined4 *)0x0) {
    pcVar9 = s_Invalid_mpegInInfo_parameter_1001816c;
    param_1 = (undefined4 *)0x0;
  }
  else if (param_1[7] == 0) {
    if ((param_1[0x133c] == 0) || (param_1[0x133d] == 0)) {
      pcVar9 = s_Invalid_seek_or_read_callback_10018f5c;
    }
    else {
      if (param_1[0x133a] != 0 || param_1[0x133b] != 0) {
        param_1[0x4b93] = _malloc;
        param_1[0x4b94] = FUN_1000e22b;
        param_1[0x4b8f] = 0;
        param_1[0x4b90] = 0;
        param_1[0x4b91] = 0;
        param_1[0x4b92] = 0;
        iVar3 = FUN_10007f30((int)param_1,2,param_2,0);
        if (iVar3 != 0) {
          mpegSplitClose((int)param_1);
          return 1;
        }
        param_1[7] = 1;
        iVar3 = FUN_10002f70((int)param_1,0x100000);
        if (iVar3 != 0) {
          mpegSplitClose((int)param_1);
          return 1;
        }
LAB_10009d96:
        do {
          param_1[0x21] = 0;
          param_1[10] = 0;
          if (param_1[9] != 0) {
            if (((int)param_1[0x341] < 1) || ((int)param_1[0x33f] < (int)param_1[0x341])) {
              param_1[0x341] = 1;
            }
            iVar3 = param_1[0x341];
            iVar5 = 0;
            if (iVar3 != 0) {
              while( true ) {
                if ((param_1[0x33d] & 1 << ((byte)iVar5 & 0x1f)) != 0) {
                  iVar3 = iVar3 + -1;
                }
                if (iVar3 == 0) break;
                iVar5 = iVar5 + 1;
              }
            }
            *(int *)(param_1[0x4b95] + 0x158) = iVar5 + 0x1e0;
            *(undefined4 *)(param_1[0x4b95] + 0x15c) = 0;
            iVar3 = param_1[0x4b95];
            *(undefined4 *)(iVar3 + 0x78) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x7c) = 0xffffffff;
            iVar3 = param_1[0x4b95];
            FUN_10005520((int *)(iVar3 + 0x128),*(uint *)(iVar3 + 0xf8),*(int *)(iVar3 + 0xfc),0);
            if (((undefined4 *)param_1[0x4b95])[0x5a] == 0) {
              *(undefined4 *)param_1[0x4b95] = 0;
              if (param_1[4] == 0) {
                FUN_1000c8f0((int)param_1);
              }
              else if (param_1[8] == 0) {
                FUN_1000b6e0(param_1);
              }
              else {
                FUN_1000c370(param_1);
              }
              iVar3 = param_1[0x4b95];
              if ((int)param_1[10] < *(int *)(iVar3 + 0x114)) {
                if (param_1[4] == 0) {
                  FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_any_audio_or_vide_10018dd4);
                  mpegSplitClose((int)param_1);
                  return 1;
                }
                param_1[4] = 0;
                goto LAB_10009d96;
              }
              if (((*(int *)(iVar3 + 0x168) == 0) && (*(int *)(iVar3 + 0x10c) == 0)) &&
                 (param_1[10] != 0)) {
                FUN_10005520((int *)(iVar3 + 0x128),*(uint *)(iVar3 + 0xf8),*(int *)(iVar3 + 0xfc),0
                            );
                iVar3 = FUN_10006440((int)param_1,0);
                if ((iVar3 != 0) || (iVar3 = FUN_100094e0((int)param_1), iVar3 != 0)) {
                  param_1[10] = 0;
                }
              }
            }
          }
          if (param_1[0x20] != 0) {
            *(undefined4 *)(param_1[0x4b95] + 0x22c) = param_1[8];
            if (param_1[0x33e] == 0) {
              if (param_1[0x1394] == 0) {
                if (param_1[0x138e] != 0) {
                  if (((int)param_1[0x340] < 1) || ((int)param_1[0x138e] < (int)param_1[0x340])) {
                    param_1[0x340] = 1;
                  }
                  iVar3 = param_1[0x340];
                  iVar5 = 0;
                  if (iVar3 != 0) {
                    while( true ) {
                      if ((param_1[0x138d] & 1 << ((byte)iVar5 & 0x1f)) != 0) {
                        iVar3 = iVar3 + -1;
                      }
                      if (iVar3 == 0) break;
                      iVar5 = iVar5 + 1;
                    }
                  }
                  *(undefined4 *)(param_1[0x4b95] + 0x230) = 0x1bd;
                  *(int *)(param_1[0x4b95] + 0x234) = iVar5 + 0x80;
                  iVar3 = param_1[0x4b95];
                  FUN_10005520((int *)(iVar3 + 0x200),*(uint *)(iVar3 + 0xf8),*(int *)(iVar3 + 0xfc)
                               ,0);
                  iVar3 = param_1[0x4b95];
                  *(undefined4 *)(iVar3 + 0xd8) = 0;
                  *(undefined4 *)(iVar3 + 0xdc) = 0xbff00000;
                  iVar3 = FUN_10004d90((int)param_1);
                  if (iVar3 == 0) {
                    FUN_10001000((int)param_1);
                  }
                }
              }
              else {
                if (((int)param_1[0x340] < 1) || ((int)param_1[0x1394] < (int)param_1[0x340])) {
                  param_1[0x340] = 1;
                }
                iVar3 = param_1[0x340];
                iVar5 = 0;
                if (iVar3 != 0) {
                  while( true ) {
                    if ((param_1[0x1393] & 1 << ((byte)iVar5 & 0x1f)) != 0) {
                      iVar3 = iVar3 + -1;
                    }
                    if (iVar3 == 0) break;
                    iVar5 = iVar5 + 1;
                  }
                }
                *(undefined4 *)(param_1[0x4b95] + 0x230) = 0x1bd;
                *(int *)(param_1[0x4b95] + 0x234) = iVar5 + 0xa0;
                iVar3 = param_1[0x4b95];
                FUN_10005520((int *)(iVar3 + 0x200),*(uint *)(iVar3 + 0xf8),*(int *)(iVar3 + 0xfc),0
                            );
                iVar3 = param_1[0x4b95];
                *(undefined4 *)(iVar3 + 0xd8) = 0;
                *(undefined4 *)(iVar3 + 0xdc) = 0xbff00000;
                iVar3 = FUN_10004c10((int)param_1);
                if (iVar3 == 0) {
                  FUN_1000a770((int)param_1);
                }
              }
            }
            else {
              if (((int)param_1[0x340] < 1) || ((int)param_1[0x33e] < (int)param_1[0x340])) {
                param_1[0x340] = 1;
              }
              iVar3 = param_1[0x340];
              iVar5 = 0;
              if (iVar3 != 0) {
                while( true ) {
                  if ((param_1[0x33c] & 1 << ((byte)iVar5 & 0x1f)) != 0) {
                    iVar3 = iVar3 + -1;
                  }
                  if (iVar3 == 0) break;
                  iVar5 = iVar5 + 1;
                }
              }
              *(int *)(param_1[0x4b95] + 0x230) = iVar5 + 0x1c0;
              *(undefined4 *)(param_1[0x4b95] + 0x234) = 0;
              iVar3 = param_1[0x4b95];
              FUN_10005520((int *)(iVar3 + 0x200),*(uint *)(iVar3 + 0xf8),*(int *)(iVar3 + 0xfc),0);
              iVar3 = param_1[0x4b95];
              *(undefined4 *)(iVar3 + 0xd8) = 0;
              *(undefined4 *)(iVar3 + 0xdc) = 0xbff00000;
              iVar3 = FUN_100048b0((int)param_1);
              if (iVar3 == 0) {
                if (param_1[4] == 0) {
                  FUN_10001f30((int)param_1);
                }
                else if (param_1[8] == 0) {
                  FUN_10001930((int)param_1);
                }
                else {
                  FUN_10001a80((int)param_1);
                }
              }
            }
          }
          if (((param_1[9] == 0) || (*(int *)(param_1[0x4b95] + 0x114) <= (int)param_1[10])) &&
             ((param_1[0x20] == 0 || (param_1[0x21] != 0)))) {
            if (param_1[9] == 0) goto LAB_1000a261;
            iVar3 = param_1[0x4b95];
            FUN_10005520((int *)(iVar3 + 0x128),*(uint *)(iVar3 + 0xf8),*(int *)(iVar3 + 0xfc),0);
            if (*(int *)(param_1[0x4b95] + 0x168) == 0) {
              FUN_10005ce0((int *)(param_1[0x4b95] + 0x128),0xffffffff,0x1b3);
              if ((*(int *)(param_1[0x4b95] + 0x168) == 0) &&
                 (*(int *)(param_1[0x4b95] + 0x16c) == 0)) {
                iVar3 = 0;
                do {
                  uVar4 = FUN_10005cb0((int *)(param_1[0x4b95] + 0x128),8);
                  *(char *)((int)param_1 + iVar3 + 0x4d38) = (char)uVar4;
                  iVar3 = iVar3 + 1;
                } while (iVar3 < 0x96);
                param_1[0x134d] = 0x96;
LAB_1000a261:
                if (param_1[0x20] == 0) {
                  return 0;
                }
                *(undefined4 *)(param_1[0x4b95] + 0x2d4) = 0;
                iVar3 = param_1[0x4b95];
                FUN_10005520((int *)(iVar3 + 0x200),*(uint *)(iVar3 + 0xf8),*(int *)(iVar3 + 0xfc),0
                            );
                iVar3 = param_1[0x4b95];
                if (*(int *)(iVar3 + 0x240) == 0) {
                  switch(param_1[0x1396]) {
                  case 1:
                  case 2:
                  case 3:
                    iVar3 = FUN_10003f90((int)param_1);
                    if (iVar3 == 0) {
                      do {
                        uVar4 = FUN_10005cb0((int *)(param_1[0x4b95] + 0x200),8);
                        *(char *)((int)param_1 + iVar6 + 0x4dd4) = (char)uVar4;
                        iVar6 = iVar6 + 1;
                      } while (iVar6 < 4);
                      param_1[0x1374] = 4;
                      return 0;
                    }
                    pcVar9 = s_Unable_to_find_audio_sync_header_10018d28;
                    break;
                  case 4:
                    if (*(int *)(iVar3 + 0x2d4) != 0) {
                      local_10 = param_1[0x23];
                      local_14._2_2_ = *(undefined2 *)(param_1 + 0x328);
                      local_c = param_1[0x23] * param_1[0x29];
                      local_6 = *(undefined2 *)(param_1 + 0x25);
                      local_4 = 0;
                      local_14._0_2_ = 1;
                      local_8 = *(undefined2 *)(param_1 + 0x29);
                      puVar7 = &local_14;
                      puVar8 = param_1 + 0x1375;
                      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
                        *puVar8 = *puVar7;
                        puVar7 = puVar7 + 1;
                        puVar8 = puVar8 + 1;
                      }
                      param_1[0x1374] = 0x14;
                      param_1[0x138b] = *(undefined4 *)(iVar3 + 0x2c0);
                      uVar1 = *(undefined2 *)(iVar3 + 0x2c4);
                      param_1[0x138a] = 6;
                      *(undefined2 *)(param_1 + 0x138c) = uVar1;
                      return 0;
                    }
                    pcVar9 = s_Unable_to_find_PCM_audio_sync_he_10018f7c;
                    break;
                  case 5:
                    FUN_10005ce0((int *)(iVar3 + 0x200),0xffff0000,0xb770000);
                    do {
                      uVar4 = FUN_10005cb0((int *)(param_1[0x4b95] + 0x200),8);
                      *(char *)((int)param_1 + iVar6 + 0x4dd4) = (char)uVar4;
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < 0x54);
                    param_1[0x1374] = 0x54;
                    uVar2 = *(undefined4 *)(param_1[0x4b95] + 0x2c0);
                    param_1[0x138a] = 4;
                    param_1[0x138b] = uVar2;
                  default:
                    return 0;
                  }
                }
                else {
                  pcVar9 = s_Unable_to_find_audio_header_10018fa4;
                }
LAB_1000a31f:
                FUN_10007e90((int)param_1,(byte *)pcVar9);
                mpegSplitClose((int)param_1);
                return 1;
              }
            }
            pcVar9 = s_Unable_to_find_sequence_header_10018d94;
            goto LAB_1000a31f;
          }
          if (param_1[4] == 0) {
            FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_any_audio_or_vide_10018dd4);
            mpegSplitClose((int)param_1);
            return 1;
          }
          param_1[4] = 0;
        } while( true );
      }
      pcVar9 = s_Invalid_file_length_10018fc0;
    }
  }
  else {
    pcVar9 = s_An_MPEG_file_is_already_open_10018e54;
  }
  FUN_10007e90((int)param_1,(byte *)pcVar9);
  return 1;
}


