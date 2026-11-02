/* Module: vegas30.exe
   Function: FUN_004326a0
   Address: 004326a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00432edd) */
/* WARNING: Removing unreachable block (ram,0x00432990) */
/* WARNING: Removing unreachable block (ram,0x00432bac) */
/* WARNING: Removing unreachable block (ram,0x00432cb7) */

long FUN_004326a0(void)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  HGLOBAL pvVar7;
  int *pMem;
  int iVar8;
  int iVar9;
  LPCSTR lpString2;
  LPCSTR lpString1;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int in_stack_00000010;
  int *piStack00000020;
  int iStack00000024;
  int iStack0000002c;
  undefined1 *in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  LPCSTR in_stack_00000054;
  uchar in_stack_00000074;
  char in_stack_00000178;
  char *in_stack_00001448;
  
  FUN_0060ac30();
  iVar11 = 0;
  if ((*in_stack_00001448 != '\0') && (0 < *(int *)(in_stack_00001448 + 4))) {
    in_stack_00000178 = '\0';
    in_stack_00000074 = '\0';
    bVar5 = false;
    bVar4 = false;
    pvVar7 = GlobalAlloc(2,*(int *)(in_stack_00001448 + 4) << 2);
    pMem = GlobalLock(pvVar7);
    if (pMem == (int *)0x0) {
      return -0x7ff8fff2;
    }
    iVar8 = 0;
    if ((*in_stack_00001448 != '\0') &&
       (iVar8 = *(int *)(in_stack_00001448 + 8), (*(byte *)(iVar8 + 0x18) & 2) != 2)) {
      bVar1 = *(byte *)(*(int *)(iVar8 + 0x10) + 0x18);
      iVar12 = *(int *)(iVar8 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar12 + 0x10) + 0x18);
        iVar8 = iVar12;
        iVar12 = *(int *)(iVar12 + 0x10);
      }
    }
    iVar12 = 0;
    piVar14 = pMem;
    while( true ) {
      if (*in_stack_00001448 == '\0') {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(in_stack_00001448 + 0xc);
      }
      if (iVar8 == iVar9) break;
      uVar2 = *(uint *)(*(int *)(iVar8 + 4) + 0x134);
      if (((uVar2 & 0x20) != 0) && ((uVar2 & 2) == 0)) {
        *piVar14 = *(int *)(iVar8 + 4);
        iVar12 = iVar12 + 1;
        piVar14 = piVar14 + 1;
      }
      FUN_00436e20();
    }
    bVar6 = false;
    puVar13 = (undefined4 *)&stack0x0000078c;
    for (iVar8 = 0xc5; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    iStack00000024 = 0;
    piStack00000020 = pMem;
    if (0 < iVar12) {
      do {
        iVar8 = *piStack00000020;
        bVar3 = false;
        *(uint *)(iVar8 + 0x134) = *(uint *)(iVar8 + 0x134) | 2;
        FUN_005f3120();
        if (in_stack_00000010 == -0x7ffb1ff6) {
          if (in_stack_00000178 != '\0') {
            _mbscpy(&stack0x00000074,(uchar *)(iVar8 + 0x170));
            iVar11 = FUN_005c4200();
            if (iVar11 == 0) {
              iStack0000002c = 7;
              if (bVar4) {
LAB_004328de:
                FUN_005b83b0();
                if ((*in_stack_00001448 == '\0') ||
                   (iVar11 = FUN_00436ff0(), (*(byte *)(iVar11 + 0x18) & 2) == 2)) {
                  iVar11 = FUN_005f0ea0();
                  if (iVar11 < 0) {
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = FUN_005ebfb0();
                    if (-1 < iVar11) {
                      iVar11 = FUN_005ec540();
                      if (iVar11 < 0) {
                        FUN_005ec540();
                      }
                      else {
                        bVar3 = true;
                        iVar8 = 0;
                      }
                    }
                  }
                }
                else {
                  iVar11 = FUN_005ec540();
                }
                FUN_005b84d0();
              }
              else {
                _SfGetPathNameFromFilePath_12();
                _SfGetFileNamePtrA_4();
                _SfGetString_8();
                iStack0000002c = SfMsgBox_Custom();
                if (iStack0000002c == 100) {
                  bVar4 = true;
                  goto LAB_004328de;
                }
                if (iStack0000002c == 6) goto LAB_004328de;
              }
              if (iStack0000002c == 2) {
                iVar11 = -0x7ffb1ff4;
                break;
              }
            }
            else {
              bVar4 = false;
            }
          }
          if (iVar11 < 0) break;
          if ((!bVar3) && (FUN_00401f40(), !bVar5)) {
            _mbscpy(&stack0x00000993,(uchar *)(iVar8 + 0x170));
            iVar9 = _SfDialogBoxParam_20();
            _mbscpy(&stack0x00000074,&stack0x00000993);
            if (iVar9 == 0) {
              _SfGetPathNameFromFilePath_12();
              lpString2 = (LPCSTR)_SfGetFileNamePtrA_4();
              lpString1 = (LPCSTR)_SfGetFileNamePtrA_4();
              iVar11 = lstrcmpiA(lpString1,lpString2);
              if (iVar11 == 0) {
                _SfGetBasePathRelative_16();
                _SfGetBasePathRelative_16();
              }
              FUN_005b83b0();
              bVar3 = false;
              if ((*in_stack_00001448 == '\0') ||
                 (iVar11 = FUN_00436ff0(), (*(byte *)(iVar11 + 0x18) & 2) == 2)) {
                iVar11 = FUN_005f0ea0();
                if (-1 < iVar11) {
                  iVar11 = FUN_005ebfb0();
                  if (-1 < iVar11) {
                    iVar11 = FUN_005ec540();
                    if (iVar11 < 0) {
                      FUN_005ec540();
                    }
                    else {
                      bVar3 = true;
                      iVar8 = 0;
                    }
                  }
                  goto LAB_00432bd1;
                }
LAB_00432bd5:
                _SfGetString_8();
                SfErrorHandler_DetailsAddString();
                iVar11 = 0;
              }
              else {
                iVar11 = FUN_005ec540();
LAB_00432bd1:
                if (iVar11 < 0) goto LAB_00432bd5;
              }
              FUN_005b84d0();
              if (!bVar3) goto LAB_00432c0d;
            }
            else if (iVar9 != 1) {
              if (iVar9 != 2) {
                if (iVar9 != 3) goto LAB_00432c0d;
                goto LAB_00432cad;
              }
              bVar5 = true;
            }
          }
        }
        else {
          if (((in_stack_00000010 == -0x7ffb1fb9) && (!bVar6)) &&
             (lVar10 = SfShowFioInstallWizard(DAT_00647624,DAT_0064b510,(char *)(iVar8 + 0x170),3,1)
             , lVar10 == 0)) {
            bVar6 = true;
          }
          FUN_005f3120();
          _mbscpy(&stack0x00000e27,(uchar *)(iVar8 + 0x170));
          iVar9 = _SfDialogBoxParam_20();
          if (iVar9 == 2) {
LAB_00432cad:
            iVar11 = -0x7ffb1ff4;
          }
          else if (iVar9 == 0x1389) {
            _SfGetString_8();
            SfPrintF();
            puVar13 = &stack0x00000034;
            for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
            in_stack_00000034 = &stack0x00000aa0;
            in_stack_00000038 = 0xf;
            in_stack_00000040 = 0x104;
            in_stack_0000003c = 4;
            _mbscpy(&stack0x00000074,(uchar *)(iVar8 + 0x170));
            in_stack_00000054 = (LPCSTR)_SfGetFileNameExtensionPtrA_4();
            if (*in_stack_00000054 != '\0') {
              in_stack_00000054 = CharNextA(in_stack_00000054);
            }
            iVar11 = Project_FileOpenDlg(DAT_00647624,(char *)&stack0x00000074,
                                         (SFFILE_DLG_PARAMS *)&stack0x00000034,
                                         (SFFILETYPEINFO *)&stack0x00000f2c);
            if (iVar11 == 0) {
              if (*in_stack_00001448 != '\0') {
                puVar13 = *(undefined4 **)(in_stack_00001448 + 8);
                bVar1 = *(byte *)(puVar13 + 6);
                while ((bVar1 & 2) != 2) {
                  iVar11 = lstrcmpiA((LPCSTR)&stack0x00000074,(LPCSTR)*puVar13);
                  if (iVar11 == 0) break;
                  if (iVar11 < 0) {
                    puVar13 = (undefined4 *)puVar13[4];
                  }
                  else {
                    puVar13 = (undefined4 *)puVar13[5];
                  }
                  bVar1 = *(byte *)(puVar13 + 6);
                }
                if ((*(byte *)(puVar13 + 6) & 2) != 2) {
                  iVar11 = FUN_005ec540();
                  goto LAB_00432c0d;
                }
              }
              iVar11 = FUN_005f0ea0();
              if ((-1 < iVar11) && (iVar11 = FUN_005ebfb0(), -1 < iVar11)) {
                iVar11 = FUN_005ec540();
                if (-1 < iVar11) goto LAB_00432c64;
                FUN_005ec540();
              }
            }
          }
          else if (iVar9 == 0x138a) goto LAB_00432c64;
LAB_00432c0d:
          FUN_005f3120();
          _mbscat(&stack0x00000484,"\r\n");
          _mbscat(&stack0x00000484,(uchar *)(iVar8 + 0x170));
          SfErrorHandler_DetailsAddString();
        }
LAB_00432c64:
        iStack00000024 = iStack00000024 + 1;
        piStack00000020 = piStack00000020 + 1;
      } while (iStack00000024 < iVar12);
    }
    pvVar7 = GlobalHandle(pMem);
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(pMem);
    GlobalFree(pvVar7);
    if (iVar11 == -0x7ffb1ff4) {
      _SfErrorHandler_DetailsInit_0();
    }
  }
  return iVar11;
}


