/* Module: mpgmux.dll
   Function: mpegOutMuxInitNames
   Address: 10005610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
mpegOutMuxInitNames(uint *param_1,char *param_2,LPCSTR param_3,LPCSTR param_4,LPCSTR param_5,
                   uint param_6)

{
  uint *_Str;
  char cVar1;
  double dVar2;
  undefined4 *puVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  LPCSTR pCVar9;
  uint *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  
                    /* 0x5610  4  mpegOutMuxInitNames */
  DAT_1001ab78._0_1_ = '\0';
  if (param_5 == (LPCSTR)0x0) {
LAB_10005c97:
    FUN_100050f0((int)param_1,(byte *)s_A_video_filename_must_be_specifi_1001739c);
    return 0x10;
  }
  iVar6 = -1;
  pCVar9 = param_5;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pCVar9;
    pCVar9 = pCVar9 + 1;
  } while (cVar1 != '\0');
  if (iVar6 == -2) goto LAB_10005c97;
  if (param_2 == (char *)0x0) {
LAB_10005c7b:
    FUN_100050f0((int)param_1,(byte *)s_An_output_filename_must_be_speci_100173c0);
    return 0x10;
  }
  iVar6 = -1;
  pcVar5 = param_2;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar6 == -2) goto LAB_10005c7b;
  param_1[0x46b] = 0;
  param_1[0xb97] = 0;
  param_1[0xb98] = 0;
  param_1[0xb99] = 0;
  param_1[0xb9a] = 0;
  param_1[0xb96] = param_6;
  uVar7 = param_1[0x46b];
  param_1[0x46b] = uVar7 | 1;
  if (param_3 != (LPCSTR)0x0) {
    iVar6 = -1;
    pCVar9 = param_3;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pCVar9;
      pCVar9 = pCVar9 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) {
      param_1[0x46b] = uVar7 | 3;
    }
  }
  if ((param_1[0xb] != 1) && (param_4 != (LPCSTR)0x0)) {
    iVar6 = -1;
    pCVar9 = param_4;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pCVar9;
      pCVar9 = pCVar9 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) {
      param_1[0x46b] = param_1[0x46b] | 4;
    }
  }
  uVar7 = 0xffffffff;
  _Str = param_1 + 0x22;
  pcVar5 = param_2;
  do {
    pcVar11 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  puVar4 = (uint *)(pcVar11 + -uVar7);
  puVar10 = _Str;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar10 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  FUN_10014a66(_Str);
  param_1[0x4ac] = 0;
  param_1[0x4ab] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_10006340((int)param_1);
  if ((param_1[0x46b] & 1) != 0) {
    puVar3 = FUN_10002110(param_5,0x20100,(undefined *)0x0);
    param_1[0x47f] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_open_video_file__s__10017530);
      return 0x10;
    }
  }
  if ((param_1[0x46b] & 2) != 0) {
    puVar3 = FUN_10002110(param_3,0x8000,(undefined *)0x0);
    param_1[0x480] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_open_audio_file__s__10017510);
      mpegOutMuxDone(param_1,1);
      return 0x10;
    }
  }
  if ((param_1[0x46b] & 4) != 0) {
    puVar3 = FUN_10002110(param_4,0x8000,(undefined *)0x0);
    param_1[0x481] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_open_secondary_audio_f_100174e8);
      mpegOutMuxDone(param_1,1);
      return 0x10;
    }
  }
  if ((param_1[0x46b] & 1) != 0) {
    puVar3 = FUN_10002110(param_5,0x8000,(undefined *)0x0);
    param_1[0x482] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_open_video_units_file___100174c4);
      mpegOutMuxDone(param_1,1);
      return 0x10;
    }
    DAT_1001ab78._0_1_ = '\0';
    uVar12 = FUN_10006840((int)param_1,param_1[0x482]);
    if ((int)uVar12 != 0) {
      if ((char)DAT_1001ab78 == '\0') {
        FUN_100050f0((int)param_1,(byte *)s_Unable_to_get_the_first_video_he_10017490);
        mpegOutMuxDone(param_1,1);
        return 0x10;
      }
      goto LAB_10005c58;
    }
    *(uint **)(param_1[0x482] + 0x24) = param_1;
    param_1[0xb78] = *(uint *)(param_1[0x482] + 0xc);
    *(undefined1 **)(param_1[0x482] + 0xc) = &LAB_100046b0;
    lVar13 = __ftol();
    iVar6 = (int)((ulonglong)lVar13 >> 0x20);
    *(longlong *)(param_1 + 0xb7a) = lVar13;
    uVar7 = param_1[0xb7a];
    uVar14 = __allshr(1,iVar6);
    *(undefined8 *)(param_1 + 0xb7c) = uVar14;
    param_1[0xb7e] = uVar7 + param_1[0xb7c];
    param_1[0xb7f] = iVar6 + (int)((ulonglong)uVar14 >> 0x20) + (uint)CARRY4(uVar7,param_1[0xb7c]);
  }
  if ((param_1[0x46b] & 2) != 0) {
    puVar3 = FUN_10002110(param_3,0x8000,(undefined *)0x0);
    param_1[0x483] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_open_audio_units_file___1001746c);
      mpegOutMuxDone(param_1,1);
      return 0x10;
    }
    uVar14 = FUN_10006620((int)(param_1 + 0x4f2),(int)puVar3);
    if ((int)uVar14 != 0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_get_the_first_audio_he_10017438);
      mpegOutMuxDone(param_1,1);
      return 0x10;
    }
    uVar7 = param_1[0x4fc];
    param_1[0xb87] = param_1[0x4f7];
    param_1[0xb8c] = 0;
    param_1[0xb8d] = uVar7;
    param_1[0xb88] = param_1[0x4f8];
    if (param_1[0x4f9] == 0) {
      dVar2 = *(double *)(&DAT_10017170 + uVar7 * 8) * _DAT_10015108;
    }
    else if (param_1[0x4f9] == 2) {
      dVar2 = *(double *)(&DAT_10017150 + uVar7 * 8) * _DAT_10015110;
    }
    else {
      dVar2 = *(double *)(&DAT_10017150 + uVar7 * 8) * _DAT_10015118;
    }
    *(double *)(param_1 + 0xb8a) = _DAT_10015120 / dVar2;
    *(uint **)(param_1[0x483] + 0x24) = param_1 + 0xb86;
    param_1[0xb86] = *(uint *)(param_1[0x483] + 0xc);
    *(undefined1 **)(param_1[0x483] + 0xc) = &LAB_10004ec0;
  }
  if ((param_1[0x46b] & 4) != 0) {
    puVar3 = FUN_10002110(param_4,0x8000,(undefined *)0x0);
    param_1[0x484] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_open_secondary_audio_u_10017408);
      mpegOutMuxDone(param_1,1);
      return 0x10;
    }
    uVar14 = FUN_10006620((int)(param_1 + 0x502),(int)puVar3);
    if ((int)uVar14 != 0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_get_the_first_audio_he_10017438);
      mpegOutMuxDone(param_1,1);
      return 0x10;
    }
    uVar7 = param_1[0x50c];
    param_1[0xb8f] = param_1[0x507];
    param_1[0xb94] = 0;
    param_1[0xb95] = uVar7;
    param_1[0xb90] = param_1[0x508];
    if (param_1[0x509] == 0) {
      dVar2 = *(double *)(&DAT_10017170 + uVar7 * 8) * _DAT_10015108;
    }
    else if (param_1[0x509] == 2) {
      dVar2 = *(double *)(&DAT_10017150 + uVar7 * 8) * _DAT_10015110;
    }
    else {
      dVar2 = *(double *)(&DAT_10017150 + uVar7 * 8) * _DAT_10015118;
    }
    *(double *)(param_1 + 0xb92) = _DAT_10015120 / dVar2;
    *(uint **)(param_1[0x484] + 0x24) = param_1 + 0xb8e;
    param_1[0xb8e] = *(uint *)(param_1[0x484] + 0xc);
    *(undefined1 **)(param_1[0x484] + 0xc) = &LAB_10004ec0;
  }
  iVar6 = FUN_100069e0((int)param_1);
  if (iVar6 == 0) {
    if ((param_1[0x15] != 0) && (puVar4 = FUN_1000c9b0(_Str,&DAT_10016148), puVar4 == (uint *)0x0))
    {
      pcVar5 = _strrchr((char *)_Str,0x2e);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = &DAT_10016148;
      }
      else {
        *pcVar5 = '0';
        pcVar5[1] = '0';
        pcVar5[2] = '\0';
        pcVar5 = _strrchr(param_2,0x2e);
      }
      uVar7 = 0xffffffff;
      do {
        pcVar11 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar6 = -1;
      puVar4 = _Str;
      do {
        puVar10 = puVar4;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        puVar10 = (uint *)((int)puVar4 + 1);
        uVar8 = *puVar4;
        puVar4 = puVar10;
      } while ((char)uVar8 != '\0');
      pcVar5 = pcVar11 + -uVar7;
      pcVar11 = (char *)((int)puVar10 + -1);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    puVar3 = FUN_100020d0((LPCSTR)_Str,0x8000,(undefined *)0x0);
    param_1[0x47e] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100050f0((int)param_1,(byte *)s_Unable_to_open_program_file__s__100173e8);
      mpegOutMuxDone(param_1,1);
      return 0x10;
    }
    if ((param_1[0x14] == 0) || (iVar6 = FUN_1000af00((int)param_1), iVar6 == 0)) {
      if ((param_1[0xb] == 4) && (param_1[0x10] != 0)) {
        iVar6 = FUN_10003b50((int)param_1);
        if (iVar6 != 0) goto LAB_10005c58;
        (**(code **)(param_1[0x47e] + 0x14))(param_1[0x47e],0,0xf1000,0,0);
      }
      iVar6 = FUN_10006bb0(param_1);
      if (iVar6 == 0) {
        param_1[0x1c] = 1;
        return 0;
      }
    }
  }
LAB_10005c58:
  mpegOutMuxDone(param_1,1);
  return 0x10;
}


