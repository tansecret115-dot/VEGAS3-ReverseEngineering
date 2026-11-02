/* Module: vegas30.exe
   Function: FUN_00560ab0
   Address: 00560ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00560ab0(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  byte bVar1;
  LPCSTR lpString2;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  CHAR local_514 [259];
  undefined1 local_411;
  uchar local_410 [260];
  CHAR local_30c [259];
  undefined1 local_209;
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  *param_3 = '\0';
  _mbscpy(local_208,".wav");
  lstrcpynA(local_514,&DAT_006474f4,0x104);
  local_411 = 0;
  _SfAddSlashToPathName_8(local_514,0x104);
  lpString2 = (LPCSTR)_SfGetFileNamePtrA_4(param_2);
  lstrcpynA(local_30c,lpString2,0x104);
  local_209 = 0;
  puVar2 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(local_30c);
  *puVar2 = 0;
  pcVar3 = (char *)FUN_005bad20(param_1);
  iVar4 = lstrlenA((LPCSTR)local_208);
  iVar5 = lstrlenA(local_514);
  iVar6 = lstrlenA(local_30c);
  iVar9 = 0;
  do {
    iVar7 = SfPrintF(local_104," Take %d",iVar9 + 2);
    if (iVar7 + iVar6 + iVar5 + 1 + iVar4 < 0x105) {
      SfPrintF(local_410,"%s%s%s%s",local_514,local_30c,local_104,local_208);
    }
    else {
      SfPrintF(local_410,"%s%s%s",local_514,local_104,local_208);
    }
    if (*pcVar3 == '\0') {
LAB_00560c65:
      iVar7 = _SfDoesFileExist_4(local_410);
      if (iVar7 == 0) {
        _mbscpy(param_3,local_410);
        return 0;
      }
    }
    else {
      puVar8 = *(undefined4 **)(pcVar3 + 8);
      bVar1 = *(byte *)(puVar8 + 6);
      while ((bVar1 & 2) != 2) {
        iVar7 = lstrcmpiA((LPCSTR)local_410,(LPCSTR)*puVar8);
        if (iVar7 == 0) break;
        if (iVar7 < 0) {
          puVar8 = (undefined4 *)puVar8[4];
        }
        else {
          puVar8 = (undefined4 *)puVar8[5];
        }
        bVar1 = *(byte *)(puVar8 + 6);
      }
      if (((*(byte *)(puVar8 + 6) & 2) == 2) || (iVar7 = FUN_005ed430(puVar8[1]), iVar7 < 2))
      goto LAB_00560c65;
    }
    iVar9 = iVar9 + 1;
    if (999 < iVar9) {
      return 1;
    }
  } while( true );
}


