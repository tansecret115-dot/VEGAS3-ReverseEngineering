/* Module: mpegin.dll
   Function: FUN_10008450
   Address: 10008450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10008450(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_98 [152];
  
  if (param_1[7] != 0) {
    FUN_10007e90((int)param_1,(byte *)s_An_MPEG_file_is_already_open_10018e54);
    return 1;
  }
  if (param_2 < 1) {
    iVar4 = -1;
    pcVar6 = (char *)*param_1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar4 == -2) {
      FUN_10007e90((int)param_1,(byte *)s_Invalid_MPEG_filename_10018e3c);
      return 1;
    }
  }
  iVar4 = FUN_10007f30((int)param_1,param_2,0,param_3);
  if (iVar4 != 0) {
    mpegInCloseMPEG((int)param_1);
    return 1;
  }
  iVar4 = FUN_10005440((int)param_1,param_1[0x4b95] + 0x128,(LPCSTR)*param_1);
  if (iVar4 != 0) {
    mpegInCloseMPEG((int)param_1);
    return 1;
  }
  param_1[7] = 1;
  iVar4 = FUN_10002f70((int)param_1,0x100000);
  if (iVar4 != 0) {
    mpegInCloseMPEG((int)param_1);
    return 1;
  }
  do {
    while( true ) {
      param_1[0x21] = 0;
      param_1[10] = 0;
      if (param_1[9] == 0) break;
      if (((int)param_1[0x341] < 1) || ((int)param_1[0x33f] < (int)param_1[0x341])) {
        param_1[0x341] = 1;
      }
      iVar4 = param_1[0x341];
      iVar5 = 0;
      if (iVar4 != 0) {
        while( true ) {
          if ((param_1[0x33d] & 1 << ((byte)iVar5 & 0x1f)) != 0) {
            iVar4 = iVar4 + -1;
          }
          if (iVar4 == 0) break;
          iVar5 = iVar5 + 1;
        }
      }
      *(int *)(param_1[0x4b95] + 0x158) = iVar5 + 0x1e0;
      *(undefined4 *)(param_1[0x4b95] + 0x15c) = 0;
      iVar4 = param_1[0x4b95];
      *(undefined4 *)(iVar4 + 0x78) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x7c) = 0xffffffff;
      iVar4 = param_1[0x4b95];
      FUN_10005520((int *)(iVar4 + 0x128),*(uint *)(iVar4 + 0xf8),*(int *)(iVar4 + 0xfc),0);
      if (((undefined4 *)param_1[0x4b95])[0x5a] != 0) break;
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
      iVar4 = param_1[0x4b95];
      if (*(int *)(iVar4 + 0x114) <= (int)param_1[10]) {
        if (((*(int *)(iVar4 + 0x168) == 0) && (*(int *)(iVar4 + 0x10c) == 0)) && (param_1[10] != 0)
           ) {
          FUN_10005520((int *)(iVar4 + 0x128),*(uint *)(iVar4 + 0xf8),*(int *)(iVar4 + 0xfc),0);
          iVar4 = FUN_10006440((int)param_1,0);
          if ((iVar4 != 0) || (iVar4 = FUN_100094e0((int)param_1), iVar4 != 0)) {
            param_1[10] = 0;
          }
        }
        break;
      }
      if (param_1[4] == 0) {
        FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_any_audio_or_vide_10018dd4);
        mpegInCloseMPEG((int)param_1);
        return 1;
      }
      param_1[4] = 0;
    }
    if (param_1[0x20] != 0) {
      iVar4 = FUN_10005440((int)param_1,param_1[0x4b95] + 0x200,(LPCSTR)*param_1);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1[0x4b95] + 0x22c) = param_1[8];
        if (param_1[0x33e] == 0) {
          if (param_1[0x1394] == 0) {
LAB_10008880:
            param_1[0x20] = 0;
            FUN_100054f0(param_1[0x4b95] + 0x200);
          }
          else {
            if (((int)param_1[0x340] < 1) || ((int)param_1[0x1394] < (int)param_1[0x340])) {
              param_1[0x340] = 1;
            }
            iVar4 = param_1[0x340];
            iVar5 = 0;
            if (iVar4 != 0) {
              while( true ) {
                if ((param_1[0x1393] & 1 << ((byte)iVar5 & 0x1f)) != 0) {
                  iVar4 = iVar4 + -1;
                }
                if (iVar4 == 0) break;
                iVar5 = iVar5 + 1;
              }
            }
            *(undefined4 *)(param_1[0x4b95] + 0x230) = 0x1bd;
            *(int *)(param_1[0x4b95] + 0x234) = iVar5 + 0xa0;
            iVar4 = param_1[0x4b95];
            FUN_10005520((int *)(iVar4 + 0x200),*(uint *)(iVar4 + 0xf8),*(int *)(iVar4 + 0xfc),0);
            iVar4 = param_1[0x4b95];
            *(undefined4 *)(iVar4 + 0xd8) = 0;
            *(undefined4 *)(iVar4 + 0xdc) = 0xbff00000;
            iVar4 = FUN_10004c10((int)param_1);
            if (iVar4 == 0) {
              FUN_1000a770((int)param_1);
            }
          }
        }
        else {
          if (((int)param_1[0x340] < 1) || ((int)param_1[0x33e] < (int)param_1[0x340])) {
            param_1[0x340] = 1;
          }
          iVar4 = param_1[0x340];
          iVar5 = 0;
          if (iVar4 != 0) {
            while( true ) {
              if ((param_1[0x33c] & 1 << ((byte)iVar5 & 0x1f)) != 0) {
                iVar4 = iVar4 + -1;
              }
              if (iVar4 == 0) break;
              iVar5 = iVar5 + 1;
            }
          }
          *(int *)(param_1[0x4b95] + 0x230) = iVar5 + 0x1c0;
          *(undefined4 *)(param_1[0x4b95] + 0x234) = 0;
          iVar4 = param_1[0x4b95];
          FUN_10005520((int *)(iVar4 + 0x200),*(uint *)(iVar4 + 0xf8),*(int *)(iVar4 + 0xfc),0);
          iVar4 = param_1[0x4b95];
          *(undefined4 *)(iVar4 + 0xd8) = 0;
          *(undefined4 *)(iVar4 + 0xdc) = 0xbff00000;
          iVar4 = FUN_100048b0((int)param_1);
          if (iVar4 == 0) {
            if (param_1[0x26] == 3) goto LAB_10008880;
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
        if ((((param_1[0x20] != 0) && (param_1[0x21] != 0)) && ((*(byte *)(param_1 + 2) & 4) != 0))
           && ((int)param_1[0x1396] < 4)) {
          uVar2 = (*(code *)param_1[0x4b93])(param_1[0x32c] * param_1[0x29] * 2);
          *(undefined4 *)(param_1[0x4b95] + 0x5c) = uVar2;
          if (*(int *)(param_1[0x4b95] + 0x5c) == 0) {
            FUN_10007e90((int)param_1,(byte *)s_Unable_to_allocate_memory_for_au_10018e08);
            goto LAB_100088fa;
          }
        }
      }
      else {
LAB_100088fa:
        param_1[0x20] = 0;
      }
    }
    if (((param_1[9] == 0) || (*(int *)(param_1[0x4b95] + 0x114) <= (int)param_1[10])) &&
       ((param_1[0x20] == 0 || (param_1[0x21] != 0)))) {
      FUN_10008df0((int)param_1);
      if ((param_1[9] == 0) || (param_1[0x342] == 0)) goto LAB_10008c29;
      uVar2 = Ordinal_1();
      *(undefined4 *)(param_1[0x4b95] + 0x310) = uVar2;
      iVar4 = *(int *)(param_1[0x4b95] + 0x310);
      if (iVar4 == 0) {
        FUN_10007e90((int)param_1,(byte *)s_Unable_to_create_video_decoder_10018db4);
        mpegInCloseMPEG((int)param_1);
        return 1;
      }
      (**(code **)(iVar4 + 0x14))(iVar4,0,0x10002,0,0);
      (**(code **)(*(int *)(param_1[0x4b95] + 0x310) + 0x14))
                (*(int *)(param_1[0x4b95] + 0x310),0,0x101b3,0,0);
      iVar4 = param_1[0x4b95];
      FUN_10005520((int *)(iVar4 + 0x128),*(uint *)(iVar4 + 0xf8),*(int *)(iVar4 + 0xfc),0);
      if (*(int *)(param_1[0x4b95] + 0x168) != 0) {
        FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_sequence_header_10018d94);
        mpegInCloseMPEG((int)param_1);
        return 1;
      }
      FUN_10005ce0((int *)(param_1[0x4b95] + 0x128),0xffffffff,0x1b3);
      if ((*(int *)(param_1[0x4b95] + 0x168) == 0) && (*(int *)(param_1[0x4b95] + 0x16c) == 0)) {
        iVar4 = 0;
        do {
          uVar3 = FUN_10005cb0((int *)(param_1[0x4b95] + 0x128),8);
          auStack_98[iVar4] = (char)uVar3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x96);
        iVar4 = (**(code **)(*(int *)(param_1[0x4b95] + 0x310) + 0xc))
                          (*(int *)(param_1[0x4b95] + 0x310),auStack_98,0x96);
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*(int *)(param_1[0x4b95] + 0x310) + 0x14))
                            (*(int *)(param_1[0x4b95] + 0x310),0,0x10202,0,0);
          if (iVar4 != 0) {
            FUN_10007e90((int)param_1,(byte *)s_Could_not_find_initialize_frame_p_10018d6c);
            mpegInCloseMPEG((int)param_1);
            return 1;
          }
          *(undefined4 *)(param_1[0x4b95] + 0x314) = param_1[0xb];
          *(undefined4 *)(param_1[0x4b95] + 0x318) = param_1[0xc];
          *(undefined4 *)(param_1[0x4b95] + 0x31c) = param_1[0x342];
          iVar4 = param_1[0x342];
          if (iVar4 < 0x35353553) {
            if (iVar4 != 0x35353552) {
              if (iVar4 < 0x3259555a) {
                if (iVar4 != 0x32595559) {
                  if ((iVar4 == 0x30323449) || (iVar4 == 0x32315659)) {
                    *(undefined4 *)(param_1[0x4b95] + 0x334) = param_1[0x19];
                    *(undefined4 *)(param_1[0x4b95] + 0x338) = param_1[0x1b];
                    *(undefined4 *)(param_1[0x4b95] + 0x33c) = param_1[0x1b];
                  }
                  goto LAB_10008c29;
                }
                goto LAB_10008c1a;
              }
              if ((iVar4 != 0x33524742) && (iVar4 != 0x34524742)) goto LAB_10008c29;
            }
LAB_10008c00:
            *(undefined4 *)(param_1[0x4b95] + 0x334) = -param_1[0x15];
          }
          else {
            if (iVar4 < 0x5659555a) {
              if (iVar4 != 0x56595559) {
                if ((iVar4 != 0x35363552) && (iVar4 != 0x41524742)) goto LAB_10008c29;
                goto LAB_10008c00;
              }
            }
            else if (iVar4 != 0x59565955) goto LAB_10008c29;
LAB_10008c1a:
            *(undefined4 *)(param_1[0x4b95] + 0x334) = param_1[0x19];
          }
LAB_10008c29:
          if (((param_1[0x20] != 0) && ((int)param_1[0x1396] < 4)) &&
             ((*(byte *)(param_1 + 2) & 4) != 0)) {
            uVar2 = Ordinal_2();
            *(undefined4 *)(param_1[0x4b95] + 0x30c) = uVar2;
            iVar4 = *(int *)(param_1[0x4b95] + 0x30c);
            if (iVar4 == 0) {
              FUN_10007e90((int)param_1,(byte *)s_Unable_to_create_audio_decoder_10018d4c);
              mpegInCloseMPEG((int)param_1);
              return 1;
            }
            (**(code **)(iVar4 + 0x14))(iVar4,0,0x10fff,0,0);
            iVar4 = param_1[0x4b95];
            FUN_10005520((int *)(iVar4 + 0x200),*(uint *)(iVar4 + 0xf8),*(int *)(iVar4 + 0xfc),0);
            if (*(int *)(param_1[0x4b95] + 0x240) != 0) {
              FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_audio_sync_header_10018d28);
              mpegInCloseMPEG((int)param_1);
              return 1;
            }
            iVar4 = FUN_10003f90((int)param_1);
            if (iVar4 != 0) {
              FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_audio_sync_header_10018d28);
              mpegInCloseMPEG((int)param_1);
              return 1;
            }
            uVar3 = FUN_100058d0(param_1[0x4b95] + 0x200,' ');
            auStack_98[0] = (undefined1)(uVar3 >> 0x18);
            auStack_98[3] = (undefined1)uVar3;
            auStack_98[1] = (undefined1)(uVar3 >> 0x10);
            auStack_98[2] = (undefined1)(uVar3 >> 8);
            iVar4 = (**(code **)(*(int *)(param_1[0x4b95] + 0x30c) + 0xc))
                              (*(int *)(param_1[0x4b95] + 0x30c),auStack_98,4);
            if (iVar4 == 0) {
              FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_audio_sync_header_10018d28);
              mpegInCloseMPEG((int)param_1);
              return 1;
            }
            iVar4 = (**(code **)(*(int *)(param_1[0x4b95] + 0x30c) + 0x14))
                              (*(int *)(param_1[0x4b95] + 0x30c),0,0x10202,0,0);
            if (iVar4 != 0) {
              FUN_10007e90((int)param_1,(byte *)s_Could_not_find_initialize_audio_f_10018cf8);
              mpegInCloseMPEG((int)param_1);
              return 1;
            }
          }
          return 0;
        }
      }
      FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_sequence_header_10018d94);
      mpegInCloseMPEG((int)param_1);
      return 1;
    }
    if (param_1[4] == 0) {
      FUN_10007e90((int)param_1,(byte *)s_Unable_to_find_any_audio_or_vide_10018dd4);
      mpegInCloseMPEG((int)param_1);
      return 1;
    }
    if (*(int *)(param_1[0x4b95] + 0x228) != 0) {
      FUN_100054f0(param_1[0x4b95] + 0x200);
    }
    param_1[4] = 0;
  } while( true );
}


