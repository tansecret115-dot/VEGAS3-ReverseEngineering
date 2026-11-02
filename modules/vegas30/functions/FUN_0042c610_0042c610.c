/* Module: vegas30.exe
   Function: FUN_0042c610
   Address: 0042c610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042c610(undefined4 param_1,undefined4 param_2,uchar *param_3,undefined4 param_4,
                 int param_5)

{
  uchar *puVar1;
  int iVar2;
  LPCSTR lpString2;
  code *pcVar3;
  uchar *puVar4;
  uchar local_30c [260];
  uchar local_208 [260];
  CHAR local_104 [259];
  undefined1 local_1;
  
  if (param_5 == 0) {
    iVar2 = FUN_005c60a0(param_2);
    pcVar3 = _mbscpy_exref;
    if (iVar2 == 0) {
      _SfLoadString_16(DAT_00647204,0x50fa,local_30c,0x104);
    }
    else {
      lpString2 = (LPCSTR)FUN_005c60a0(param_2);
      lstrcpynA(local_104,lpString2,0x104);
      local_1 = 0;
      puVar1 = (uchar *)_SfGetFileNamePtrA_4(local_104);
      _mbscpy(local_30c,puVar1);
      puVar4 = (uchar *)0x0;
      puVar1 = local_30c;
      if (local_30c[0] == '\0') {
LAB_0042c6fe:
        puVar4 = puVar1;
      }
      else {
        do {
          if (local_30c[0] == '.') {
            puVar4 = puVar1;
          }
          puVar1 = (uchar *)CharNextA((LPCSTR)puVar1);
          local_30c[0] = *puVar1;
        } while (local_30c[0] != '\0');
        if (puVar4 == (uchar *)0x0) goto LAB_0042c6fe;
      }
      *puVar4 = '\0';
    }
    iVar2 = lstrlenA(&DAT_006488a8);
    if (iVar2 == 0) {
      puVar1 = (uchar *)FUN_005c60c0(param_2);
    }
    else {
      puVar1 = &DAT_006488a8;
    }
    _mbscpy(local_208,puVar1);
    goto LAB_0042c75d;
  }
  puVar1 = (uchar *)_SfGetFileNamePtrA_4(param_3);
  pcVar3 = _mbscpy_exref;
  _mbscpy(local_30c,puVar1);
  _SfGetPathNameFromFilePath_12(param_3,local_208,0x104);
  puVar4 = (uchar *)0x0;
  puVar1 = local_30c;
  if (local_30c[0] == '\0') {
LAB_0042c67b:
    puVar4 = puVar1;
  }
  else {
    do {
      if (local_30c[0] == '.') {
        puVar4 = puVar1;
      }
      puVar1 = (uchar *)CharNextA((LPCSTR)puVar1);
      local_30c[0] = *puVar1;
    } while (local_30c[0] != '\0');
    if (puVar4 == (uchar *)0x0) goto LAB_0042c67b;
  }
  *puVar4 = '\0';
LAB_0042c75d:
  (*pcVar3)(param_3,local_208);
  _SfAddSlashToPathName_8(param_3,param_4);
  _SfValidateFileName_8(local_30c,1);
  _mbscat(param_3,local_30c);
  _mbscat(param_3,&DAT_006489ac);
  return;
}


