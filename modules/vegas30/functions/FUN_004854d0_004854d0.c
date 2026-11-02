/* Module: vegas30.exe
   Function: FUN_004854d0
   Address: 004854d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004854d0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uchar *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  char *pcVar7;
  uchar *puVar8;
  int iVar9;
  undefined4 uVar10;
  FILE *_File;
  FILE *_File_00;
  int iVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  uchar uVar15;
  LPCSTR lpsz;
  uchar *puVar16;
  int local_624;
  uchar local_608 [260];
  CHAR local_504 [1024];
  CHAR local_104 [260];
  
  param_2 = param_2 + 0x1bc;
  iVar1 = _SfSummary_GetItemText_8(param_2,0x4d414e49);
  iVar2 = _SfSummary_GetItemText_8(param_2,0x54524149);
  iVar3 = _SfSummary_GetItemText_8(param_2,0x474e4549);
  iVar4 = _SfSummary_GetItemText_8(param_2,0x544d4349);
  iVar5 = _SfSummary_GetItemText_8(param_2,0x504f4349);
  DVar6 = GetModuleFileNameA(DAT_006471fc,local_104,0x104);
  if (DVar6 == 0) {
    return 0x80004005;
  }
  pcVar7 = (char *)_SfGetFileNameExtensionPtrA_4(param_4);
  cVar14 = *pcVar7;
  lpsz = (LPCSTR)0x0;
  if (cVar14 == '\0') {
LAB_00485583:
    lpsz = pcVar7;
  }
  else {
    do {
      if (cVar14 == '.') {
        lpsz = pcVar7;
      }
      pcVar7 = CharNextA(pcVar7);
      cVar14 = *pcVar7;
    } while (cVar14 != '\0');
    if (lpsz == (LPCSTR)0x0) goto LAB_00485583;
  }
  puVar8 = (uchar *)CharNextA(lpsz);
  _SfGetPathNameFromFilePath_12(local_104,local_608,0x104);
  _mbscat(local_608,(uchar *)"MovieViewer");
  iVar9 = lstrcmpiA((LPCSTR)puVar8,"MOV");
  if ((iVar9 != 0) && (iVar9 = lstrcmpiA((LPCSTR)puVar8,"RM"), iVar9 != 0)) {
    puVar8 = "WMV";
  }
  _mbscat(local_608,puVar8);
  _mbscat(local_608,".htm");
  puVar16 = (uchar *)0x0;
  uVar15 = *param_5;
  puVar8 = param_5;
  if (uVar15 != '\0') {
    do {
      if (uVar15 == '.') {
        puVar16 = puVar8;
      }
      puVar8 = (uchar *)CharNextA((LPCSTR)puVar8);
      uVar15 = *puVar8;
    } while (uVar15 != '\0');
    if (puVar16 != (uchar *)0x0) goto LAB_00485621;
  }
  puVar16 = puVar8;
LAB_00485621:
  *puVar16 = '_';
  _mbscat(param_5,".htm");
  iVar9 = _SfDoesFileExist_4(param_5);
  if (iVar9 != 0) {
    puVar8 = param_5;
    uVar10 = _SfGetString_8(DAT_00647204,0x6e51);
    iVar9 = SfMsgBox(param_1,0x34,uVar10,puVar8);
    if (iVar9 != 6) {
      return 0x80004004;
    }
  }
  iVar9 = _SfGetFileNamePtrA_4(param_4);
  _File = fopen((char *)local_608,"r");
  _File_00 = fopen((char *)param_5,"w+");
  if (_File == (FILE *)0x0) {
    puVar8 = local_608;
    uVar10 = _SfGetString_8(DAT_00647204,0x6e82);
    SfMsgBox(param_1,0x10,uVar10,puVar8);
    if (_File_00 != (FILE *)0x0) {
      return 0x80004005;
    }
  }
  else if (_File_00 != (FILE *)0x0) {
    do {
      local_624 = fscanf(_File,"%1000[^$]",local_504);
      iVar11 = fprintf(_File_00,"%s",local_504);
      uVar12 = lstrlenA(local_504);
      if (uVar12 < 1000) {
        if (local_624 == 0) {
LAB_00485884:
          fclose(_File);
          fclose(_File_00);
          return 0;
        }
        if ((local_624 != -1) && (-1 < iVar11)) {
          local_624 = fscanf(_File,"$$%1000[^$]$$",local_504);
          iVar13 = lstrcmpiA(local_504,"Title");
          if (iVar13 == 0) {
            pcVar7 = "%s";
            iVar11 = iVar1;
          }
          else {
            iVar13 = lstrcmpiA(local_504,"Artist");
            if (iVar13 == 0) {
              pcVar7 = "%s";
              iVar11 = iVar2;
            }
            else {
              iVar13 = lstrcmpiA(local_504,"Engineer");
              if (iVar13 == 0) {
                pcVar7 = "%s";
                iVar11 = iVar3;
              }
              else {
                iVar13 = lstrcmpiA(local_504,"Comments");
                if (iVar13 == 0) {
                  pcVar7 = "%s";
                  iVar11 = iVar4;
                }
                else {
                  iVar13 = lstrcmpiA(local_504,"Copyright");
                  if (iVar13 == 0) {
                    pcVar7 = "%s";
                    iVar11 = iVar5;
                  }
                  else {
                    iVar13 = lstrcmpiA(local_504,"MovieFile");
                    if (iVar13 == 0) {
                      pcVar7 = "%s";
                      iVar11 = iVar9;
                    }
                    else {
                      iVar13 = lstrcmpiA(local_504,"Width");
                      if (iVar13 == 0) {
                        iVar11 = *(int *)(param_3 + 0x250);
                      }
                      else {
                        iVar13 = lstrcmpiA(local_504,"Height");
                        if (iVar13 != 0) goto LAB_0048586f;
                        iVar11 = *(int *)(param_3 + 0x254) + 0x4b;
                      }
                      pcVar7 = "%d";
                    }
                  }
                }
              }
            }
          }
          iVar11 = fprintf(_File_00,pcVar7,iVar11);
        }
      }
LAB_0048586f:
      if (((local_624 == 0) || (local_624 == -1)) || (iVar11 < 0)) goto LAB_00485884;
    } while( true );
  }
  uVar10 = _SfGetString_8(DAT_00647204,0x6e83);
  SfMsgBox(param_1,0x10,uVar10,param_5);
  return 0x80004005;
}


