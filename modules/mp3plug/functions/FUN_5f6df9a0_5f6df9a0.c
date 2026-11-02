/* Module: mp3plug.dll
   Function: FUN_5f6df9a0
   Address: 5f6df9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl
FUN_5f6df9a0(char *param_1,float param_2,float param_3,int param_4,char *param_5,float *param_6)

{
  float fVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  double dVar9;
  char local_a24 [256];
  char local_924 [1024];
  char local_524 [256];
  char local_424 [1024];
  uint local_24;
  int local_20;
  uint local_1c;
  char *local_18;
  
  local_1c = 0;
  local_18 = param_1;
  sprintf(local_a24,s_At_parameter__s__5f75d080,param_1);
  pcVar6 = local_18;
  if (DAT_5f7529bc == 0) {
    cVar2 = '\x02';
    local_24 = CONCAT31(local_24._1_3_,2);
  }
  else {
    iVar7 = 0;
    if (0 < DAT_5f7529bc) {
      do {
        sVar3 = 0;
        cVar2 = *pcVar6;
        pcVar5 = pcVar6;
        while (cVar2 != '\0') {
          pcVar5 = pcVar5 + 1;
          sVar3 = sVar3 + 1;
          cVar2 = *pcVar5;
        }
        iVar4 = strncmp(pcVar6,*(char **)(DAT_5f7529b8 + iVar7 * 4),sVar3);
        if ((iVar4 == 0) && (*(char *)(sVar3 + *(int *)(DAT_5f7529b8 + iVar7 * 4)) == '\0')) {
          cVar2 = '\x02';
          local_24 = CONCAT31(local_24._1_3_,2);
          goto LAB_5f6dfab1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_5f7529bc);
    }
    iVar7 = 0;
    local_18 = pcVar6;
    if (0 < DAT_5f7529c4) {
      do {
        sVar3 = 0;
        cVar2 = *pcVar6;
        pcVar5 = pcVar6;
        while (cVar2 != '\0') {
          pcVar5 = pcVar5 + 1;
          sVar3 = sVar3 + 1;
          cVar2 = *pcVar5;
        }
        iVar4 = strncmp(pcVar6,*(char **)(DAT_5f7529c8 + iVar7 * 4),sVar3);
        if ((iVar4 == 0) && (*(char *)(sVar3 + *(int *)(DAT_5f7529c8 + iVar7 * 4)) == '\0')) {
          cVar2 = '\x01';
          local_24 = CONCAT31(local_24._1_3_,1);
          goto LAB_5f6dfab1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_5f7529c4);
    }
    cVar2 = '\0';
    local_24 = local_24 & 0xffffff00;
  }
LAB_5f6dfab1:
  if (cVar2 == '\0') {
    return (char *)0x0;
  }
  iVar7 = 0;
  local_18 = pcVar6;
  if (0 < DAT_5f73fd60) {
    do {
      iVar4 = strncmp(*(char **)(DAT_5f7529b0 + iVar7 * 0x18),pcVar6,100);
      if (iVar4 == 0) {
        local_20 = iVar7 * 0x18 + DAT_5f7529b0;
        goto LAB_5f6dfb16;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_5f73fd60);
  }
  local_20 = 0;
LAB_5f6dfb16:
  local_18 = pcVar6;
  if ((DAT_5f7529c0 == 1) && ((char)local_24 == '\x02')) {
    if (local_20 == 0) {
      local_1c = FUN_5f6ddbb0(0,"");
      pcVar6 = local_18;
      local_18 = pcVar6;
      if (local_1c == 0) {
        iVar7 = 0;
        if (0 < DAT_5f73fd60) {
          do {
            iVar4 = strncmp(*(char **)(DAT_5f7529b0 + iVar7 * 0x18),pcVar6,100);
            if (iVar4 == 0) {
              iVar7 = iVar7 * 0x18 + DAT_5f7529b0;
              goto LAB_5f6dfef2;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < DAT_5f73fd60);
        }
        iVar7 = 0;
LAB_5f6dfef2:
        *(undefined4 *)(iVar7 + 0x14) = 0;
        local_20 = 0;
        *(undefined4 *)(iVar7 + 8) = 1;
        local_18 = pcVar6;
      }
LAB_5f6dfe15:
      fprintf((FILE *)&rand_exref,s___s_float_5f75d250,local_18);
      if (param_4 == 0) {
        fputs(&DAT_5f75d200,(FILE *)&rand_exref);
      }
      else {
        fprintf((FILE *)&rand_exref,&DAT_5f75d1f0,param_4);
      }
      goto LAB_5f6dfb2c;
    }
    if (*(int *)(local_20 + 8) == 0) {
      *(undefined4 *)(local_20 + 8) = 1;
      goto LAB_5f6dfe15;
    }
  }
  else {
LAB_5f6dfb2c:
    if (local_20 == 0) {
      return local_18;
    }
  }
  iVar7 = DAT_5f73fd64;
  if (((*(int *)(local_20 + 0xc) != 0) || (pcVar6 = *(char **)(local_20 + 4), *pcVar6 == '\0')) ||
     (DAT_5f7529c0 != 0)) goto LAB_5f6dfb46;
  pcVar5 = local_924;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar5 = cVar2;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  local_24 = 0;
  pcVar6 = local_924;
  sprintf(local_524,s_At_parameter__s__5f75d080,local_18);
  pcVar5 = local_424;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar5 = cVar2;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  pcVar6 = strtok(local_424,&DAT_5f75d0a0);
  if (0 < iVar7) {
    iVar4 = 0;
    do {
      if (pcVar6 == (char *)0x0) {
        iVar7 = iVar4 + -1;
        local_24 = 3;
        pcVar5 = s_Too_few_arguments_in_configurati_5f75d0b0;
        iVar4 = -1;
        pcVar6 = local_524;
        goto code_r0x5f6dfdc8;
      }
      pcVar6 = strtok((char *)0x0,&DAT_5f75d0a0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  if (pcVar6 != (char *)0x0) {
    pcVar5 = s_Too_many_arguments_in_configurat_5f75d0e0;
    local_24 = 4;
    iVar4 = -1;
    pcVar6 = local_524;
    do {
      pcVar8 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar2 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
  }
  goto LAB_5f6dfcbb;
  while( true ) {
    iVar7 = iVar7 + -1;
    pcVar8 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar8;
    if (cVar2 == '\0') break;
code_r0x5f6dfd6e:
    pcVar8 = pcVar6;
    if (iVar7 == 0) break;
  }
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar8 = cVar2;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  goto LAB_5f6dfb46;
  while( true ) {
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar8;
    if (cVar2 == '\0') break;
code_r0x5f6dfdc8:
    pcVar8 = pcVar6;
    if (iVar4 == 0) break;
  }
  pcVar8 = pcVar8 + -1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar8 = cVar2;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
LAB_5f6dfcbb:
  local_1c = local_24;
  pcVar6 = strtok(local_924,&DAT_5f75d0a0);
  if (0 < iVar7) {
    iVar4 = 0;
    do {
      if (iVar4 == DAT_5f7529b4) {
        dVar9 = atof(pcVar6);
        fVar1 = (float)dVar9;
        if ((fVar1 < param_2) || (param_3 < fVar1)) {
          *(undefined4 *)(local_20 + 0xc) = 1;
          local_1c = 2;
          pcVar5 = s_Range_Check_failed_5f75d210;
          iVar7 = -1;
          pcVar6 = local_a24;
          goto code_r0x5f6dfd6e;
        }
        *param_6 = fVar1;
      }
      pcVar6 = strtok((char *)0x0,&DAT_5f75d0a0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
LAB_5f6dfb46:
  *(uint *)(local_20 + 0x14) = local_1c;
  if ((*(int *)(local_20 + 0xc) == 1) && (param_5 != (char *)0x0)) {
    iVar7 = 0;
    cVar2 = *param_5;
    pcVar6 = param_5;
    while (cVar2 != '\0') {
      pcVar6 = pcVar6 + 1;
      iVar7 = iVar7 + 1;
      cVar2 = *pcVar6;
    }
    pcVar6 = (char *)FUN_5f6d9760(iVar7 + 1);
    *(char **)(local_1c + 0x10) = pcVar6;
    do {
      cVar2 = *param_5;
      param_5 = param_5 + 1;
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
  }
  return local_18;
}


