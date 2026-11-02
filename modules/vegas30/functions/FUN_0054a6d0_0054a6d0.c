/* Module: vegas30.exe
   Function: FUN_0054a6d0
   Address: 0054a6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0054a6d0(int *param_1,int param_2)

{
  LPSYSTEMTIME lpSystemTime;
  double dVar1;
  uchar uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UINT UVar8;
  LPCSTR pCVar9;
  HANDLE hFindFile;
  BOOL BVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uchar *puVar14;
  uint uVar15;
  CHAR *_Source;
  int iVar16;
  code *pcVar17;
  SHFILEINFOA *pSVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  DWORD dwFileAttributes;
  undefined4 uVar22;
  uchar *puVar23;
  UINT cbFileInfo;
  _WIN32_FIND_DATAA *lpFindFileData;
  uchar *puVar24;
  int local_580;
  int local_57c;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 local_564 [10];
  _FILETIME local_53c;
  uchar local_534 [255];
  undefined1 local_435;
  uchar local_430 [100];
  undefined1 local_3cc [100];
  uchar local_368 [100];
  undefined1 local_304 [100];
  SHFILEINFOA local_2a0;
  _WIN32_FIND_DATAA local_140;
  
  local_580 = -0x7fffbffb;
  *param_1 = param_2;
  param_1[0x1e5] = *(int *)(param_2 + 0x164);
  FUN_005bad20(DAT_0064b138);
  iVar7 = FUN_005ed430(*param_1);
  SfPrintF(param_1 + 9,&DAT_0061052c,iVar7 + -1);
  UVar8 = SetErrorMode(1);
  lpFindFileData = &local_140;
  pCVar9 = (LPCSTR)FUN_005f2d10();
  hFindFile = FindFirstFileA(pCVar9,lpFindFileData);
  if (hFindFile != (HANDLE)0xffffffff) {
    BVar10 = FileTimeToLocalFileTime(&local_140.ftLastWriteTime,&local_53c);
    if (BVar10 != 0) {
      lpSystemTime = (LPSYSTEMTIME)(param_1 + 0x1f);
      BVar10 = FileTimeToSystemTime(&local_53c,lpSystemTime);
      if (((BVar10 != 0) &&
          (iVar7 = GetTimeFormatA(0x400,2,lpSystemTime,(LPCSTR)0x0,(LPSTR)local_368,100), iVar7 != 0
          )) && (iVar7 = GetDateFormatA(0x400,1,lpSystemTime,(LPCSTR)0x0,(LPSTR)local_430,100),
                iVar7 != 0)) {
        _snprintf((char *)(param_1 + 0x23),0x28,"%s %s",local_430,local_368);
        local_580 = 0;
      }
    }
    param_1[2] = 0;
    param_1[3] = local_140.nFileSizeHigh;
    param_1[2] = param_1[2] | local_140.nFileSizeLow;
    iVar7 = param_1[3];
    param_1[3] = iVar7;
    _SfGetByteSizeText_12(param_1[2],iVar7,param_1 + 4);
    FindClose(hFindFile);
  }
  SetErrorMode(UVar8);
  if (local_580 < 0) {
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0x23) = 0;
    local_580 = 0;
  }
  param_1[0xe] = 0;
  param_1[0x161] = 0;
  param_1[0xf] = 0;
  if ((*(byte *)(*param_1 + 0x134) & 0x20) == 0) {
    bVar5 = true;
    bVar6 = true;
    iVar7 = **(int **)(*param_1 + 0x130);
    local_57c = 0;
    if (0 < iVar7) {
      do {
        iVar16 = *param_1;
        iVar12 = *(int *)(*(int *)(*(int *)(iVar16 + 0x130) + 8) + local_57c * 4);
        if (((*(uint *)(*(int *)(iVar12 + 8) + 0x134) >> 5 & 1) == 0) &&
           ((*(uint *)(iVar12 + 0x8c) & 1) == 0)) {
          iVar11 = param_1[0xf];
          iVar3 = *(int *)(iVar12 + 0x24);
          uVar15 = param_1[0xe];
          if ((iVar11 < iVar3) || ((iVar11 <= iVar3 && (uVar15 <= *(uint *)(iVar12 + 0x20))))) {
            iVar11 = iVar3;
            uVar15 = *(uint *)(iVar12 + 0x20);
          }
          param_1[0xe] = uVar15;
          param_1[0xf] = iVar11;
          if ((*(uint *)(iVar16 + 0x134) & 0x200) == 0) {
            uVar13 = *(undefined4 *)(iVar12 + 0x24);
            uVar22 = *(undefined4 *)(iVar12 + 0x20);
            puVar21 = &DAT_0064b110;
          }
          else {
            uVar4 = *(undefined4 *)(iVar16 + 0x108);
            puVar21 = local_564;
            for (iVar16 = 10; iVar16 != 0; iVar16 = iVar16 + -1) {
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            }
            if (*(int *)(iVar12 + 4) == 3) {
              local_564[2] = *(undefined4 *)(iVar12 + 0x48);
              local_564[3] = *(undefined4 *)(iVar12 + 0x4c);
            }
            else {
              local_564[2] = DAT_0064b118;
              local_564[3] = DAT_0064b11c;
            }
            uVar13 = *(undefined4 *)(iVar12 + 0x24);
            uVar22 = *(undefined4 *)(iVar12 + 0x20);
            puVar21 = local_564;
            local_564[0] = uVar4;
          }
          _SfNanoTimeToTextEx_20(local_304,puVar21,uVar22,uVar13,2);
          if (*(int *)(iVar12 + 4) == 2) {
            if (bVar5) {
              param_1[0x100] = local_57c;
              SfPrintF(param_1 + 0x101,&DAT_00611f6c,*(undefined4 *)(*(int *)(iVar12 + 0x2c) + 4));
              *(undefined1 *)(param_1 + 0x106) = 0;
              if (*(short *)(iVar12 + 0x68) != 0) {
                SfPrintF(param_1 + 0x106,&DAT_00612804,*(short *)(iVar12 + 0x68));
              }
              SfPrintF((int)param_1 + 0x422,&DAT_00612804,
                       *(undefined2 *)(*(int *)(iVar12 + 0x2c) + 2));
              FUN_005f7a90(param_1 + 0x10c);
              FUN_0054b220(param_1[0x10c],param_1[0x10d],param_1 + 0x10e,0x1e);
              FUN_005f3180(*(undefined4 *)(iVar12 + 0x10),(int)param_1 + 0x456,0x3c);
              bVar5 = false;
            }
            if (param_1[0x161] < 2) {
              FUN_00551fc0(1,local_3cc,100);
              local_534[0] = '\0';
              iVar16 = FUN_005f7af0(local_534,0x100);
              if (iVar16 < 0) {
                lstrcpynA((LPSTR)local_534,"Unknown Attributes",0x100);
                local_435 = 0;
              }
              SfPrintF(param_1[0x161] * 0xff + 0x588 + (int)param_1,"%s: %s$, %s",local_3cc,
                       local_534,local_304);
              pcVar17 = lstrlenA_exref;
              if ((-1 < iVar16) && (*(char *)((int)param_1 + 0x456) != '\0')) {
                SfPrintF(local_534,"$, %s",(int)param_1 + 0x456);
                iVar16 = param_1[0x161];
LAB_0054ae07:
                pcVar17 = lstrlenA_exref;
                iVar16 = lstrlenA((LPCSTR)(iVar16 * 0xff + 0x588 + (int)param_1));
                if (iVar16 + 1U < 0xff) {
                  puVar14 = (uchar *)(param_1[0x161] * 0xff + 0x588 + (int)param_1);
                  iVar12 = lstrlenA((LPCSTR)puVar14);
                  _mbsncat(puVar14,local_534,(0xfe - (iVar16 + 1U)) - iVar12);
                }
              }
LAB_0054ae52:
              local_580 = 0;
              iVar16 = (*pcVar17)(param_1[0x161] * 0xff + 0x588 + (int)param_1);
              param_1[param_1[0x161] + 0x1e2] = iVar16;
              param_1[0x161] = param_1[0x161] + 1;
            }
          }
          else if (*(int *)(iVar12 + 4) == 3) {
            if (*(double *)(iVar12 + 0x48) == _DAT_00610fd8) {
              _SfLoadString_16(DAT_00647204,0x6622,local_3cc,100);
            }
            else {
              FUN_00551fc0(2,local_3cc,100);
            }
            local_534[0] = '\0';
            local_580 = FUN_005f7af0(local_534,0x100);
            if (local_580 < 0) {
              lstrcpynA((LPSTR)local_534,"Unknown Attributes",0x100);
              local_435 = 0;
            }
            switch(*(undefined4 *)(iVar12 + 0x44)) {
            case 0:
              uVar13 = 0x5091;
              break;
            case 1:
              uVar13 = 0x5092;
              break;
            case 2:
              uVar13 = 0x5093;
              break;
            case 3:
              uVar13 = 0x5094;
              break;
            case 4:
              uVar13 = 0x5095;
              break;
            default:
              uVar13 = 0x5096;
            }
            _SfLoadString_16(DAT_00647204,uVar13,local_430,100);
            switch(*(undefined4 *)(iVar12 + 0x60)) {
            case 0:
              uVar13 = 0x6603;
              break;
            case 1:
              uVar13 = 0x6604;
              break;
            case 2:
              uVar13 = 0x6605;
              break;
            case 3:
              uVar13 = 0x6606;
              break;
            default:
              uVar13 = 0x6602;
            }
            _SfLoadString_16(DAT_00647204,uVar13,local_368,100);
            if (bVar6) {
              param_1[0x125] = local_57c;
              SfPrintF(param_1 + 0x126,&DAT_00619ba4,*(undefined4 *)(iVar12 + 0x48),
                       *(undefined4 *)(iVar12 + 0x4c));
              _mbscpy((uchar *)((int)param_1 + 0x4a2),local_430);
              _mbscpy((uchar *)((int)param_1 + 0x4ca),local_368);
              SfPrintF((int)param_1 + 0x4f2,&DAT_00619ba4,*(undefined4 *)(iVar12 + 0x50),
                       *(undefined4 *)(iVar12 + 0x54));
              SfPrintF(param_1 + 0x13f,"%ux%u",*(undefined4 *)(*(int *)(iVar12 + 0x30) + 4),
                       *(undefined4 *)(*(int *)(iVar12 + 0x30) + 8));
              SfPrintF(param_1 + 0x144,&DAT_00612804,*(undefined2 *)(*(int *)(iVar12 + 0x30) + 0xe))
              ;
              FUN_005f7a90(param_1 + 0x148);
              FUN_0054b220(param_1[0x148],param_1[0x149],param_1 + 0x14a,0x1e);
              FUN_005f3180(*(undefined4 *)(iVar12 + 0x10),(int)param_1 + 0x546,0x3c);
              bVar6 = false;
            }
            if (param_1[0x161] < 2) {
              dVar1 = *(double *)(iVar12 + 0x48);
              if (dVar1 == _DAT_00610fd8) {
                puVar24 = local_430;
                puVar23 = local_368;
                puVar14 = local_534;
                puVar20 = local_3cc;
                uVar13 = _SfGetString_8(DAT_00647204,0x6623);
                SfPrintF(param_1[0x161] * 0xff + 0x588 + (int)param_1,uVar13,puVar20,puVar14,puVar23
                         ,puVar24);
              }
              else {
                puVar24 = local_430;
                puVar23 = local_368;
                uStack_56c = (undefined4)((ulonglong)dVar1 >> 0x20);
                puVar20 = local_304;
                local_570 = SUB84(dVar1,0);
                puVar14 = local_534;
                puVar19 = local_3cc;
                uVar13 = _SfGetString_8(DAT_00647204,0x6601);
                SfPrintF(param_1[0x161] * 0xff + 0x588 + (int)param_1,uVar13,puVar19,puVar14,
                         local_570,uStack_56c,puVar20,puVar23,puVar24);
              }
              pcVar17 = lstrlenA_exref;
              if ((-1 < local_580) && (*(char *)((int)param_1 + 0x546) != '\0')) {
                SfPrintF(local_534,"$, %s",(int)param_1 + 0x546);
                iVar16 = param_1[0x161];
                goto LAB_0054ae07;
              }
              goto LAB_0054ae52;
            }
          }
        }
        local_57c = local_57c + 1;
      } while (local_57c < iVar7);
    }
    if ((*(uint *)(*param_1 + 0x134) & 0x200) == 0) {
      _SfNanoTimeToTextEx_20(param_1 + 0x10,&DAT_0064b110,param_1[0xe],param_1[0xf],2);
      _SfNanoTimeToTextEx_20
                (param_1 + 0x6e,&DAT_0064b110,*(undefined4 *)(*param_1 + 0x110),
                 *(undefined4 *)(*param_1 + 0x114),0);
      uVar15 = *(uint *)(*param_1 + 0x110);
      iVar7 = *(int *)(*param_1 + 0x114);
      param_1[0xb0] = uVar15 + param_1[0xe];
      iVar16 = iVar7 + param_1[0xf] + (uint)CARRY4(uVar15,param_1[0xe]);
      param_1[0xb1] = iVar16;
      iVar7 = param_1[0xb0];
      puVar21 = &DAT_0064b110;
    }
    else {
      uVar13 = *(undefined4 *)(*param_1 + 0x108);
      puVar21 = local_564;
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar21 = 0;
        puVar21 = puVar21 + 1;
      }
      local_564[0] = uVar13;
      iVar7 = FUN_005f13f0(3);
      if (iVar7 == 0) {
        local_564[2] = DAT_0064b118;
        local_564[3] = DAT_0064b11c;
      }
      else {
        local_564[2] = *(undefined4 *)(iVar7 + 0x48);
        local_564[3] = *(undefined4 *)(iVar7 + 0x4c);
      }
      _SfNanoTimeToTextEx_20(param_1 + 0x10,local_564,param_1[0xe],param_1[0xf],2);
      _SfNanoTimeToTextEx_20
                (param_1 + 0x6e,local_564,*(undefined4 *)(*param_1 + 0x110),
                 *(undefined4 *)(*param_1 + 0x114),0);
      uVar15 = *(uint *)(*param_1 + 0x110);
      iVar7 = *(int *)(*param_1 + 0x114);
      param_1[0xb0] = uVar15 + param_1[0xe];
      iVar16 = iVar7 + param_1[0xf] + (uint)CARRY4(uVar15,param_1[0xe]);
      param_1[0xb1] = iVar16;
      iVar7 = param_1[0xb0];
      puVar21 = local_564;
    }
    _SfNanoTimeToTextEx_20(param_1 + 0xb2,puVar21,iVar7,iVar16,0);
    FUN_005f3240(param_1 + 0xf4);
    FUN_0054b220(param_1[0xf4],param_1[0xf5],param_1 + 0xf6,0x28);
  }
  else {
    _SfLoadString_16(DAT_00647204,0x660c,param_1 + 0x162,0xff);
    iVar7 = lstrlenA((LPCSTR)(param_1[0x161] * 0xff + 0x588 + (int)param_1));
    param_1[param_1[0x161] + 0x1e2] = iVar7;
    param_1[0x161] = param_1[0x161] + 1;
  }
  UVar8 = 0x4411;
  pSVar18 = &local_2a0;
  for (iVar7 = 0x58; iVar7 != 0; iVar7 = iVar7 + -1) {
    pSVar18->hIcon = (HICON)0x0;
    pSVar18 = (SHFILEINFOA *)&pSVar18->iIcon;
  }
  cbFileInfo = 0x160;
  if ((*(uint *)(*param_1 + 0x134) & 0x400) == 0) {
    pSVar18 = &local_2a0;
    dwFileAttributes = 0x80;
    pCVar9 = (LPCSTR)FUN_005f2d10();
  }
  else {
    pSVar18 = &local_2a0;
    dwFileAttributes = 0x80;
    pCVar9 = ".avi";
  }
  SHGetFileInfoA(pCVar9,dwFileAttributes,pSVar18,cbFileInfo,UVar8);
  param_1[0x1e4] = local_2a0.iIcon;
  if ((*(uint *)(*param_1 + 0x134) & 0x400) == 0) {
    if (local_2a0.szTypeName[0] == '\0') {
      uVar13 = FUN_005f2d10();
      puVar14 = (uchar *)_SfGetFileNameExtensionPtrA_4(uVar13);
      if ((puVar14 == (uchar *)0x0) || (*puVar14 == '\0')) {
        *(undefined1 *)(param_1 + 0x2d) = 0;
      }
      else {
        if (*puVar14 == '.') {
          puVar14 = (uchar *)CharNextA((LPCSTR)puVar14);
        }
        _mbscpy(local_534,puVar14);
        puVar14 = local_534;
        uVar2 = local_534[0];
        while (uVar2 != '\0') {
          uVar15 = _mbctoupper((int)(char)uVar2);
          *puVar14 = (uchar)uVar15;
          puVar14 = (uchar *)CharNextA((LPCSTR)puVar14);
          uVar2 = *puVar14;
        }
        puVar14 = local_534;
        uVar13 = _SfGetString_8(DAT_00647204,0x6671);
        SfPrintF(param_1 + 0x2d,uVar13,puVar14);
      }
      goto LAB_0054b1a1;
    }
    _Source = local_2a0.szTypeName;
  }
  else {
    _Source = (CHAR *)_SfGetString_8(DAT_00647204,0x6e4c);
  }
  _mbscpy((uchar *)(param_1 + 0x2d),(uchar *)_Source);
LAB_0054b1a1:
  iVar7 = FUN_005f13f0(3);
  if (iVar7 != 0) {
    uVar13 = 0;
    if (*(undefined4 **)(*param_1 + 0x138) != (undefined4 *)0x0) {
      uVar13 = **(undefined4 **)(*param_1 + 0x138);
    }
    SfPrintF((int)param_1 + 0x2e,&DAT_0061052c,uVar13);
    return local_580;
  }
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  return local_580;
}


