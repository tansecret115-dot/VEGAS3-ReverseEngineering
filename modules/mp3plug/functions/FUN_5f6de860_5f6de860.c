/* Module: mp3plug.dll
   Function: FUN_5f6de860
   Address: 5f6de860
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_5f6de860(char *param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,
            long *param_7)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_a24 [256];
  char local_924 [256];
  char local_824 [1024];
  char local_424 [1024];
  long *local_24;
  long *local_20;
  int local_1c;
  int local_18;
  
  local_18 = param_2;
  local_20 = (long *)0x0;
  sprintf(local_a24,s_At_parameter__s__5f75d080,param_1);
  if (DAT_5f7529bc == 0) {
    cVar1 = '\x02';
    local_24 = (long *)CONCAT31(local_24._1_3_,2);
  }
  else {
    iVar6 = 0;
    if (0 < DAT_5f7529bc) {
      do {
        sVar2 = 0;
        cVar1 = *param_1;
        pcVar5 = param_1;
        while (cVar1 != '\0') {
          pcVar5 = pcVar5 + 1;
          sVar2 = sVar2 + 1;
          cVar1 = *pcVar5;
        }
        iVar3 = strncmp(param_1,*(char **)(DAT_5f7529b8 + iVar6 * 4),sVar2);
        if ((iVar3 == 0) && (*(char *)(sVar2 + *(int *)(DAT_5f7529b8 + iVar6 * 4)) == '\0')) {
          cVar1 = '\x02';
          local_24 = (long *)CONCAT31(local_24._1_3_,2);
          goto LAB_5f6de94a;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_5f7529bc);
    }
    iVar6 = 0;
    if (0 < DAT_5f7529c4) {
      do {
        sVar2 = 0;
        cVar1 = *param_1;
        pcVar5 = param_1;
        while (cVar1 != '\0') {
          pcVar5 = pcVar5 + 1;
          sVar2 = sVar2 + 1;
          cVar1 = *pcVar5;
        }
        iVar3 = strncmp(param_1,*(char **)(DAT_5f7529c8 + iVar6 * 4),sVar2);
        if ((iVar3 == 0) && (*(char *)(sVar2 + *(int *)(DAT_5f7529c8 + iVar6 * 4)) == '\0')) {
          cVar1 = '\x01';
          local_24 = (long *)CONCAT31(local_24._1_3_,1);
          goto LAB_5f6de94a;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_5f7529c4);
    }
    cVar1 = '\0';
    local_24 = (long *)((uint)local_24 & 0xffffff00);
  }
LAB_5f6de94a:
  if (cVar1 == '\0') {
    return 0;
  }
  iVar6 = 0;
  if (0 < DAT_5f73fd60) {
    do {
      iVar3 = strncmp(*(char **)(DAT_5f7529b0 + iVar6 * 0x18),param_1,100);
      if (iVar3 == 0) {
        local_1c = iVar6 * 0x18 + DAT_5f7529b0;
        goto LAB_5f6de99f;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_5f73fd60);
  }
  local_1c = 0;
LAB_5f6de99f:
  if ((DAT_5f7529c0 == 1) && ((char)local_24 == '\x02')) {
    if (local_1c == 0) {
      local_20 = (long *)FUN_5f6ddbb0(0,"");
      if (local_20 == (long *)0x0) {
        iVar6 = 0;
        if (0 < DAT_5f73fd60) {
          do {
            iVar3 = strncmp(*(char **)(DAT_5f7529b0 + iVar6 * 0x18),param_1,100);
            if (iVar3 == 0) {
              iVar6 = iVar6 * 0x18 + DAT_5f7529b0;
              goto LAB_5f6ded7b;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < DAT_5f73fd60);
        }
        iVar6 = 0;
LAB_5f6ded7b:
        *(undefined4 *)(iVar6 + 0x14) = 0;
        local_1c = 0;
        *(undefined4 *)(iVar6 + 8) = 1;
      }
LAB_5f6decb2:
      iVar6 = local_18;
      fprintf((FILE *)&rand_exref,s___s__d_int_5f75d1e0,param_1,local_18);
      if (param_5 == 0) {
        fputs(&DAT_5f75d200,(FILE *)&rand_exref);
      }
      else {
        fprintf((FILE *)&rand_exref,&DAT_5f75d1f0,param_5,iVar6);
      }
      goto LAB_5f6de9b5;
    }
    if (*(int *)(local_1c + 8) == 0) {
      *(undefined4 *)(local_1c + 8) = 1;
      goto LAB_5f6decb2;
    }
  }
  else {
LAB_5f6de9b5:
    if (local_1c == 0) {
      return 0;
    }
  }
  if (((*(int *)(local_1c + 0xc) != 0) || (pcVar5 = *(char **)(local_1c + 4), *pcVar5 == '\0')) ||
     (DAT_5f7529c0 != 0)) goto LAB_5f6de9cf;
  local_24 = (long *)0x0;
  sprintf(local_924,s_At_parameter__s__5f75d080,param_1);
  pcVar7 = local_824;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar5 = strtok(local_824,&DAT_5f75d0a0);
  iVar6 = local_18;
  iVar3 = 0;
  if (0 < local_18) {
    do {
      if (pcVar5 == (char *)0x0) {
        local_24 = (long *)0x3;
        pcVar7 = s_Too_few_arguments_in_configurati_5f75d0b0;
        local_18 = iVar3 + -1;
        iVar6 = -1;
        pcVar5 = local_924;
        goto code_r0x5f6dec65;
      }
      pcVar5 = strtok((char *)0x0,&DAT_5f75d0a0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar6);
    local_18 = iVar6;
  }
  if (pcVar5 != (char *)0x0) {
    pcVar7 = s_Too_many_arguments_in_configurat_5f75d0e0;
    local_24 = (long *)0x4;
    iVar6 = -1;
    pcVar5 = local_924;
    do {
      pcVar8 = pcVar5;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  goto LAB_5f6deb30;
  while( true ) {
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar8;
    if (cVar1 == '\0') break;
code_r0x5f6dec2c:
    pcVar8 = pcVar5;
    if (iVar6 == 0) break;
  }
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  goto LAB_5f6de9cf;
  while( true ) {
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar8;
    if (cVar1 == '\0') break;
code_r0x5f6dec65:
    pcVar8 = pcVar5;
    if (iVar6 == 0) break;
  }
  pcVar8 = pcVar8 + -1;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
LAB_5f6deb30:
  local_20 = local_24;
  pcVar7 = *(char **)(local_1c + 4);
  pcVar5 = local_424;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = strtok(local_424,&DAT_5f75d0a0);
  if (0 < local_18) {
    local_24 = param_7 + local_18;
    do {
      lVar4 = strtol(pcVar5,(char **)0x0,0);
      if ((param_4 != param_3) && ((lVar4 < param_3 || (param_4 < lVar4)))) {
        *(undefined4 *)(local_1c + 0xc) = 1;
        local_20 = (long *)0x2;
        pcVar7 = s_Range_Check_failed_5f75d210;
        iVar6 = -1;
        pcVar5 = local_a24;
        goto code_r0x5f6dec2c;
      }
      *param_7 = lVar4;
      pcVar5 = strtok((char *)0x0,&DAT_5f75d0a0);
      param_7 = param_7 + 1;
    } while ((int)param_7 < (int)local_24);
  }
LAB_5f6de9cf:
  *(long **)(local_1c + 0x14) = local_20;
  if ((*(int *)(local_1c + 0xc) == 1) && (param_6 != (char *)0x0)) {
    iVar6 = 0;
    cVar1 = *param_6;
    pcVar5 = param_6;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      iVar6 = iVar6 + 1;
      cVar1 = *pcVar5;
    }
    pcVar5 = (char *)FUN_5f6d9760(iVar6 + 1);
    *(char **)(local_18 + 0x10) = pcVar5;
    do {
      cVar1 = *param_6;
      param_6 = param_6 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  return local_1c;
}


