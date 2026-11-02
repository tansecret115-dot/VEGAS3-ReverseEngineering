/* Module: mp3plug.dll
   Function: FUN_5f6df410
   Address: 5f6df410
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_5f6df410(char *param_1,int param_2,float param_3,float param_4,int param_5,char *param_6,
            float *param_7)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  double dVar10;
  char local_624 [256];
  char local_524 [256];
  char local_424 [1024];
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  
  local_18 = param_2;
  local_20 = 0;
  sprintf(local_624,s_At_parameter__s__5f75d080,param_1);
  if (DAT_5f7529bc == 0) {
    cVar3 = '\x02';
    local_24 = CONCAT31(local_24._1_3_,2);
  }
  else {
    iVar7 = 0;
    if (0 < DAT_5f7529bc) {
      do {
        sVar4 = 0;
        cVar3 = *param_1;
        pcVar6 = param_1;
        while (cVar3 != '\0') {
          pcVar6 = pcVar6 + 1;
          sVar4 = sVar4 + 1;
          cVar3 = *pcVar6;
        }
        iVar5 = strncmp(param_1,*(char **)(DAT_5f7529b8 + iVar7 * 4),sVar4);
        if ((iVar5 == 0) && (*(char *)(sVar4 + *(int *)(DAT_5f7529b8 + iVar7 * 4)) == '\0')) {
          cVar3 = '\x02';
          local_24 = CONCAT31(local_24._1_3_,2);
          goto LAB_5f6df4fa;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_5f7529bc);
    }
    iVar7 = 0;
    if (0 < DAT_5f7529c4) {
      do {
        sVar4 = 0;
        cVar3 = *param_1;
        pcVar6 = param_1;
        while (cVar3 != '\0') {
          pcVar6 = pcVar6 + 1;
          sVar4 = sVar4 + 1;
          cVar3 = *pcVar6;
        }
        iVar5 = strncmp(param_1,*(char **)(DAT_5f7529c8 + iVar7 * 4),sVar4);
        if ((iVar5 == 0) && (*(char *)(sVar4 + *(int *)(DAT_5f7529c8 + iVar7 * 4)) == '\0')) {
          cVar3 = '\x01';
          local_24 = CONCAT31(local_24._1_3_,1);
          goto LAB_5f6df4fa;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_5f7529c4);
    }
    cVar3 = '\0';
    local_24 = local_24 & 0xffffff00;
  }
LAB_5f6df4fa:
  if (cVar3 == '\0') {
    return 0;
  }
  iVar7 = 0;
  if (0 < DAT_5f73fd60) {
    do {
      iVar5 = strncmp(*(char **)(DAT_5f7529b0 + iVar7 * 0x18),param_1,100);
      if (iVar5 == 0) {
        local_1c = iVar7 * 0x18 + DAT_5f7529b0;
        goto LAB_5f6df54f;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_5f73fd60);
  }
  local_1c = 0;
LAB_5f6df54f:
  if ((DAT_5f7529c0 == 1) && ((char)local_24 == '\x02')) {
    if (local_1c == 0) {
      local_20 = FUN_5f6ddbb0(0,"");
      if (local_20 == 0) {
        iVar7 = 0;
        if (0 < DAT_5f73fd60) {
          do {
            iVar5 = strncmp(*(char **)(DAT_5f7529b0 + iVar7 * 0x18),param_1,100);
            if (iVar5 == 0) {
              iVar7 = iVar7 * 0x18 + DAT_5f7529b0;
              goto LAB_5f6df90b;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < DAT_5f73fd60);
        }
        iVar7 = 0;
LAB_5f6df90b:
        *(undefined4 *)(iVar7 + 0x14) = 0;
        local_1c = 0;
        *(undefined4 *)(iVar7 + 8) = 1;
      }
LAB_5f6df838:
      iVar7 = local_18;
      fprintf((FILE *)&rand_exref,s___s__d_float_5f75d240,param_1,local_18);
      if (param_5 == 0) {
        fputs(&DAT_5f75d200,(FILE *)&rand_exref);
      }
      else {
        fprintf((FILE *)&rand_exref,&DAT_5f75d1f0,param_5,iVar7);
      }
      goto LAB_5f6df565;
    }
    if (*(int *)(local_1c + 8) == 0) {
      *(undefined4 *)(local_1c + 8) = 1;
      goto LAB_5f6df838;
    }
  }
  else {
LAB_5f6df565:
    if (local_1c == 0) {
      return 0;
    }
  }
  if (((*(int *)(local_1c + 0xc) != 0) || (pcVar6 = *(char **)(local_1c + 4), *pcVar6 == '\0')) ||
     (DAT_5f7529c0 != 0)) goto LAB_5f6df57f;
  local_24 = 0;
  sprintf(local_524,s_At_parameter__s__5f75d080,param_1);
  pcVar8 = local_424;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar8 = cVar3;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  pcVar6 = strtok(local_424,&DAT_5f75d0a0);
  iVar7 = local_18;
  iVar5 = 0;
  if (0 < local_18) {
    do {
      if (pcVar6 == (char *)0x0) {
        local_24 = 3;
        pcVar8 = s_Too_few_arguments_in_configurati_5f75d0b0;
        local_18 = iVar5 + -1;
        iVar7 = -1;
        pcVar6 = local_524;
        goto code_r0x5f6df7eb;
      }
      pcVar6 = strtok((char *)0x0,&DAT_5f75d0a0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar7);
    local_18 = iVar7;
  }
  if (pcVar6 != (char *)0x0) {
    pcVar8 = s_Too_many_arguments_in_configurat_5f75d0e0;
    local_24 = 4;
    iVar7 = -1;
    pcVar6 = local_524;
    do {
      pcVar9 = pcVar6;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar6 + 1;
      cVar3 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar3 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar9 = cVar3;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
  }
  goto LAB_5f6df6e0;
  while( true ) {
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar6 + 1;
    cVar3 = *pcVar6;
    pcVar6 = pcVar9;
    if (cVar3 == '\0') break;
code_r0x5f6df7ae:
    pcVar9 = pcVar6;
    if (iVar7 == 0) break;
  }
  pcVar9 = pcVar9 + -1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    *pcVar9 = cVar3;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  goto LAB_5f6df57f;
  while( true ) {
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar6 + 1;
    cVar3 = *pcVar6;
    pcVar6 = pcVar9;
    if (cVar3 == '\0') break;
code_r0x5f6df7eb:
    pcVar9 = pcVar6;
    if (iVar7 == 0) break;
  }
  pcVar9 = pcVar9 + -1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    *pcVar9 = cVar3;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
LAB_5f6df6e0:
  local_20 = local_24;
  pcVar6 = strtok(*(char **)(local_1c + 4),&DAT_5f75d0a0);
  if (0 < local_18) {
    pfVar1 = param_7 + local_18;
    do {
      dVar10 = atof(pcVar6);
      fVar2 = (float)dVar10;
      if ((fVar2 < param_3) || (param_4 < fVar2)) {
        *(undefined4 *)(local_1c + 0xc) = 1;
        local_20 = 2;
        pcVar8 = s_Range_Check_failed_5f75d210;
        iVar7 = -1;
        pcVar6 = local_624;
        goto code_r0x5f6df7ae;
      }
      *param_7 = fVar2;
      pcVar6 = strtok((char *)0x0,&DAT_5f75d0a0);
      param_7 = param_7 + 1;
    } while ((int)param_7 < (int)pfVar1);
  }
LAB_5f6df57f:
  *(uint *)(local_1c + 0x14) = local_20;
  if ((*(int *)(local_1c + 0xc) == 1) && (param_6 != (char *)0x0)) {
    iVar7 = 0;
    cVar3 = *param_6;
    pcVar6 = param_6;
    while (cVar3 != '\0') {
      pcVar6 = pcVar6 + 1;
      iVar7 = iVar7 + 1;
      cVar3 = *pcVar6;
    }
    pcVar6 = (char *)FUN_5f6d9760(iVar7 + 1);
    *(char **)(local_18 + 0x10) = pcVar6;
    do {
      cVar3 = *param_6;
      param_6 = param_6 + 1;
      *pcVar6 = cVar3;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
  }
  return local_1c;
}


