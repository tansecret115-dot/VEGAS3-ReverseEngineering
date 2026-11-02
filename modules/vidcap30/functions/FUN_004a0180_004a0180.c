/* Module: vidcap30.exe
   Function: FUN_004a0180
   Address: 004a0180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004a0180(int param_1,undefined4 param_2,uchar *param_3,uchar *param_4)

{
  uchar uVar1;
  undefined4 uVar2;
  char *pcVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uchar *puVar9;
  bool bVar10;
  uchar local_208;
  uchar local_207;
  char local_206 [518];
  
  switch(param_2) {
  case 0:
    param_3 = "";
    break;
  case 3:
    param_3 = &DAT_005c1cac;
    break;
  case 5:
    param_3 = (uchar *)(param_1 + 0xb0);
    break;
  case 6:
    param_3 = (uchar *)FUN_004a0530(param_3,2);
    if (*param_3 == '*') {
      _mbscpy(&local_208,param_3 + 1);
      puVar4 = &local_208;
      uVar1 = local_208;
      while ((uVar1 != '\0' && (uVar1 != '*'))) {
        puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
        uVar1 = *puVar4;
      }
      memmove(&local_207,&local_208,(int)puVar4 - (int)&local_208);
      param_3 = &local_207;
      if ((local_207 != '\\') && (local_206[0] != ':')) {
        iVar6 = FUN_004a0530(&local_207,2);
        param_3 = (uchar *)(iVar6 + -2);
        *param_3 = '\\';
      }
    }
    break;
  case 7:
  case 8:
    pcVar3 = (char *)FUN_004a0530(param_3,1);
    bVar10 = true;
    pcVar7 = pcVar3;
    pcVar8 = &DAT_005c1eb4;
    iVar6 = DAT_005c1998;
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) break;
      bVar10 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar10);
    if (bVar10) {
      pcVar3 = (char *)FUN_004a0530(pcVar3,1);
      bVar10 = true;
      pcVar7 = pcVar3;
      pcVar8 = (char *)(param_1 + 0xf6);
      iVar6 = DAT_005c1990;
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) break;
        bVar10 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar10);
      if (bVar10) {
LAB_004a04b4:
        pcVar3 = (char *)FUN_004a0530(pcVar3,3);
      }
LAB_004a04bc:
      wsprintfA((LPSTR)&local_208,"\\\\%s",pcVar3);
    }
    else {
      bVar10 = true;
      pcVar7 = pcVar3;
      pcVar8 = &DAT_005c1fb8;
      iVar6 = DAT_005c199c;
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) break;
        bVar10 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar10);
      if (bVar10) {
        param_3 = (uchar *)FUN_004a0530(pcVar3,1);
        break;
      }
      bVar10 = true;
      pcVar7 = pcVar3;
      pcVar8 = s__My_Favorites__005b73e8;
      iVar6 = DAT_005b73f8;
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) break;
        bVar10 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar10);
      if (bVar10) {
        iVar6 = FUN_004a0530(pcVar3,1);
        _mbscpy(&local_208,(uchar *)(iVar6 + 1));
        puVar4 = &local_208;
        uVar1 = local_208;
        while ((uVar1 != '\0' && (uVar1 != '*'))) {
          puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
          uVar1 = *puVar4;
        }
        memmove(&local_207,&local_208,(int)puVar4 - (int)&local_208);
        param_3 = &local_207;
        break;
      }
      bVar10 = true;
      iVar6 = DAT_005c1994 + -1;
      iVar5 = iVar6;
      pcVar7 = pcVar3;
      pcVar8 = (char *)(param_1 + 0x6a);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar10 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar10);
      if (bVar10) {
        uVar2 = FUN_004a0530(pcVar3,1);
        wsprintfA((LPSTR)&local_208,"%s\\%s",&DAT_005c1cac,uVar2);
      }
      else {
        bVar10 = true;
        pcVar7 = pcVar3;
        pcVar8 = (char *)(param_1 + 0x182);
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar10 = *pcVar7 == *pcVar8;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar10);
        if (bVar10) {
          uVar2 = FUN_004a0530(pcVar3,1);
          wsprintfA((LPSTR)&local_208,"%s\\%s",param_1 + 0x1c8,uVar2);
        }
        else {
          wsprintfA((LPSTR)&local_208,"%s\\%s",&DAT_005c1ba8,pcVar3);
        }
      }
    }
    goto LAB_004a04d0;
  case 10:
  case 0xb:
    param_3 = (uchar *)FUN_004a0530(param_3,3);
    break;
  case 0xc:
    param_3 = (uchar *)FUN_004a0530(param_3,2);
    bVar10 = true;
    puVar4 = param_3;
    puVar9 = (uchar *)(param_1 + 0xf6);
    iVar6 = DAT_005c1990;
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) break;
      bVar10 = *puVar4 == *puVar9;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    } while (bVar10);
    if (!bVar10) {
      wsprintfA((LPSTR)&local_208,"%s\\%s\\%s",&DAT_005c1aa4,&DAT_005c19a0,param_3);
      goto LAB_004a04d0;
    }
  case 2:
    param_3 = (uchar *)FUN_004a0530(param_3,1);
    break;
  case 0xd:
    pcVar3 = (char *)FUN_004a0530(param_3,1);
    bVar10 = true;
    pcVar7 = pcVar3;
    pcVar8 = s__My_Favorites__005b73e8;
    iVar6 = DAT_005b73f8;
    do {
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) break;
      bVar10 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar10);
    if (!bVar10) {
      pcVar3 = (char *)FUN_004a0530(pcVar3,1);
      bVar10 = true;
      pcVar7 = pcVar3;
      pcVar8 = (char *)(param_1 + 0xf6);
      iVar6 = DAT_005c1990;
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) break;
        bVar10 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar10);
      if (bVar10) goto LAB_004a04b4;
      goto LAB_004a04bc;
    }
    puVar4 = (uchar *)FUN_004a0530(pcVar3,3);
    _mbscpy(&local_207,puVar4);
    puVar4 = &local_207;
    while ((local_207 != '\0' && (local_207 != '*'))) {
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
      local_207 = *puVar4;
    }
    memmove(local_206,&local_207,(int)puVar4 - (int)&local_207);
    local_208 = '\\';
    local_207 = '\\';
LAB_004a04d0:
    param_3 = &local_208;
    break;
  case 0xe:
    param_3 = (uchar *)(param_1 + 0x182);
  }
  _mbscpy(param_4,param_3);
  return;
}


