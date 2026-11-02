/* Module: mp3plug.dll
   Function: FUN_5f6e0300
   Address: 5f6e0300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6e0300(char *param_1,int param_2,char *param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_51c [256];
  char local_41c [1024];
  uint local_1c;
  undefined4 *local_18;
  
  *param_4 = 0;
  local_18 = param_4;
  if (DAT_5f7529bc == 0) {
    cVar2 = '\x02';
    local_1c = CONCAT31(local_1c._1_3_,2);
  }
  else {
    iVar6 = 0;
    if (0 < DAT_5f7529bc) {
      do {
        sVar3 = 0;
        cVar2 = *param_1;
        pcVar5 = param_1;
        while (cVar2 != '\0') {
          pcVar5 = pcVar5 + 1;
          sVar3 = sVar3 + 1;
          cVar2 = *pcVar5;
        }
        iVar4 = strncmp(param_1,*(char **)(DAT_5f7529b8 + iVar6 * 4),sVar3);
        if ((iVar4 == 0) && (*(char *)(sVar3 + *(int *)(DAT_5f7529b8 + iVar6 * 4)) == '\0')) {
          cVar2 = '\x02';
          local_1c = CONCAT31(local_1c._1_3_,2);
          goto LAB_5f6e03da;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_5f7529bc);
    }
    iVar6 = 0;
    if (0 < DAT_5f7529c4) {
      do {
        sVar3 = 0;
        cVar2 = *param_1;
        pcVar5 = param_1;
        while (cVar2 != '\0') {
          pcVar5 = pcVar5 + 1;
          sVar3 = sVar3 + 1;
          cVar2 = *pcVar5;
        }
        iVar4 = strncmp(param_1,*(char **)(DAT_5f7529c8 + iVar6 * 4),sVar3);
        if ((iVar4 == 0) && (*(char *)(sVar3 + *(int *)(DAT_5f7529c8 + iVar6 * 4)) == '\0')) {
          cVar2 = '\x01';
          local_1c = CONCAT31(local_1c._1_3_,1);
          goto LAB_5f6e03da;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_5f7529c4);
    }
    cVar2 = '\0';
    local_1c = local_1c & 0xffffff00;
  }
LAB_5f6e03da:
  if (cVar2 == '\0') {
    return 0;
  }
  iVar6 = 0;
  if (0 < DAT_5f73fd60) {
    do {
      iVar4 = strncmp(*(char **)(DAT_5f7529b0 + iVar6 * 0x18),param_1,100);
      if (iVar4 == 0) {
        iVar6 = iVar6 * 0x18 + DAT_5f7529b0;
        goto LAB_5f6e042f;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_5f73fd60);
  }
  iVar6 = 0;
LAB_5f6e042f:
  if ((DAT_5f7529c0 == 1) && ((char)local_1c == '\x02')) {
    if (iVar6 == 0) {
      iVar4 = FUN_5f6ddbb0(0,"");
      if (iVar4 == 0) {
        iVar6 = 0;
        if (0 < DAT_5f73fd60) {
          do {
            iVar4 = strncmp(*(char **)(DAT_5f7529b0 + iVar6 * 0x18),param_1,100);
            if (iVar4 == 0) {
              iVar4 = iVar6 * 0x18 + DAT_5f7529b0;
              goto LAB_5f6e062b;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < DAT_5f73fd60);
        }
        iVar4 = 0;
LAB_5f6e062b:
        *(undefined4 *)(iVar4 + 0x14) = 0;
        iVar6 = 0;
        *(undefined4 *)(iVar4 + 8) = 1;
      }
    }
    else {
      if (*(int *)(iVar6 + 8) == 1) goto LAB_5f6e0448;
      *(undefined4 *)(iVar6 + 8) = 1;
    }
    fprintf((FILE *)&rand_exref,s___s_5f75d270,param_1);
    if (param_2 == 0) {
      fputs(&DAT_5f75d200,(FILE *)&rand_exref);
    }
    else {
      fprintf((FILE *)&rand_exref,&DAT_5f75d1f0,param_2);
    }
  }
  if (iVar6 == 0) {
    return 8;
  }
LAB_5f6e0448:
  pcVar7 = *(char **)(iVar6 + 4);
  local_1c = 0;
  sprintf(local_51c,s_At_parameter__s__5f75d080,param_1);
  pcVar5 = local_41c;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar5 = cVar2;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  pcVar5 = strtok(local_41c,&DAT_5f75d0a0);
  if (pcVar5 != (char *)0x0) {
    pcVar7 = s_Too_many_arguments_in_configurat_5f75d0e0;
    local_1c = 4;
    iVar4 = -1;
    pcVar5 = local_51c;
    do {
      pcVar8 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar8 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar8;
    } while (cVar2 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
  }
  uVar1 = local_1c;
  *local_18 = 1;
  if ((*(int *)(iVar6 + 0xc) == 1) && (param_3 != (char *)0x0)) {
    iVar4 = 0;
    cVar2 = *param_3;
    pcVar5 = param_3;
    while (cVar2 != '\0') {
      pcVar5 = pcVar5 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = *pcVar5;
    }
    pcVar5 = (char *)FUN_5f6d9760(iVar4 + 1);
    *(char **)(iVar6 + 0x10) = pcVar5;
    do {
      cVar2 = *param_3;
      param_3 = param_3 + 1;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
  }
  *(undefined4 **)(iVar6 + 0x14) = local_18;
  return uVar1;
}


