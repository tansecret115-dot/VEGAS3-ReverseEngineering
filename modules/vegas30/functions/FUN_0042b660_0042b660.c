/* Module: vegas30.exe
   Function: FUN_0042b660
   Address: 0042b660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042b660(undefined4 param_1,undefined4 param_2,uchar *param_3,undefined4 param_4,
                 int *param_5,int param_6)

{
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  LPCSTR lpString2;
  code *pcVar4;
  uchar *puVar5;
  code *pcVar6;
  uchar local_618 [232];
  uchar auStack_530 [259];
  undefined1 uStack_42d;
  uchar local_410 [260];
  CHAR local_30c [232];
  WCHAR aWStack_224 [13];
  undefined1 local_209;
  undefined1 local_208 [520];
  
  if (param_6 == 0) {
    iVar3 = FUN_005c60a0(param_2);
    pcVar4 = CharNextA_exref;
    pcVar6 = _mbscpy_exref;
    if (iVar3 == 0) {
      _SfLoadString_16(DAT_00647204,0x50fa,local_618,0x104);
    }
    else {
      lpString2 = (LPCSTR)FUN_005c60a0(param_2);
      lstrcpynA(local_30c,lpString2,0x104);
      local_209 = 0;
      puVar2 = (uchar *)_SfGetFileNamePtrA_4(local_30c);
      _mbscpy(local_618,puVar2);
      puVar5 = (uchar *)0x0;
      puVar2 = local_618;
      if (local_618[0] == '\0') {
LAB_0042b74e:
        puVar5 = puVar2;
      }
      else {
        do {
          if (local_618[0] == '.') {
            puVar5 = puVar2;
          }
          puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
          local_618[0] = *puVar2;
        } while (local_618[0] != '\0');
        if (puVar5 == (uchar *)0x0) goto LAB_0042b74e;
      }
      *puVar5 = '\0';
    }
    iVar3 = lstrlenA(&DAT_006488a8);
    if (iVar3 == 0) {
      puVar2 = (uchar *)FUN_005c60c0(param_2);
    }
    else {
      puVar2 = &DAT_006488a8;
    }
    _mbscpy(local_410,puVar2);
    iVar3 = _SfIsDirectoryWritable_4(local_410);
    if (iVar3 == 0) {
      puVar2 = (uchar *)FUN_005c60c0(param_2);
      _mbscpy(local_410,puVar2);
    }
    goto LAB_0042b7d2;
  }
  puVar2 = (uchar *)_SfGetFileNamePtrA_4(param_3);
  pcVar6 = _mbscpy_exref;
  _mbscpy(local_618,puVar2);
  _SfGetPathNameFromFilePath_12(param_3,local_410,0x104);
  pcVar4 = CharNextA_exref;
  puVar5 = (uchar *)0x0;
  puVar2 = local_618;
  if (local_618[0] == '\0') {
LAB_0042b6cb:
    puVar5 = puVar2;
  }
  else {
    do {
      if (local_618[0] == '.') {
        puVar5 = puVar2;
      }
      puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
      local_618[0] = *puVar2;
    } while (local_618[0] != '\0');
    if (puVar5 == (uchar *)0x0) goto LAB_0042b6cb;
  }
  *puVar5 = '\0';
LAB_0042b7d2:
  (*pcVar6)(param_3,local_410);
  _SfAddSlashToPathName_8(param_3,param_4);
  _SfValidateFileName_8(local_618,1);
  _mbscat(param_3,local_618);
  (**(code **)(*param_5 + 0x2c))(param_5,0,0,local_208,0x104,0,0);
  if ((&stack0x00000000 == (undefined1 *)0x224) || (aWStack_224[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_224,-1,(LPSTR)auStack_530,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x530) {
    auStack_530[0] = '\0';
  }
  uStack_42d = 0;
  puVar2 = auStack_530;
  uVar1 = auStack_530[0];
  while ((uVar1 != '\0' && (uVar1 != '.'))) {
    puVar2 = (uchar *)(*pcVar4)(puVar2);
    uVar1 = *puVar2;
  }
  uVar1 = *puVar2;
  puVar5 = puVar2;
  while ((uVar1 != '\0' && (uVar1 != ';'))) {
    puVar5 = (uchar *)(*pcVar4)(puVar5);
    uVar1 = *puVar5;
  }
  *puVar5 = '\0';
  _mbscat(param_3,puVar2);
  return;
}


