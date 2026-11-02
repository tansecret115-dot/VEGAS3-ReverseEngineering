/* Module: vidcap30.exe
   Function: FUN_004334b0
   Address: 004334b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004334b0(LPCSTR param_1)

{
  uchar *_Source;
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pMem;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *unaff_EDI;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined1 *puVar14;
  WCHAR *pWVar15;
  undefined1 *puVar16;
  undefined1 local_460 [32];
  undefined1 auStack_440 [128];
  uchar auStack_3c0 [440];
  WCHAR local_208 [252];
  uchar *puStack_10;
  undefined2 local_2;
  
  iVar7 = 0;
  MultiByteToWideChar(0,1,param_1,-1,local_208,0x104);
  puVar16 = local_460;
  pWVar15 = local_208;
  local_2 = 0;
  iVar1 = (**(code **)(*DAT_005bba6c + 0x58))(DAT_005bba6c);
  if (-1 < iVar1) {
    *param_1 = '\0';
    iVar1 = (**(code **)(*unaff_EDI + 0x3c))(unaff_EDI,&stack0xfffffb98);
    if (-1 < iVar1) {
      pvVar2 = GlobalAlloc(0x42,(int)puVar16 * 0x2c);
      pMem = GlobalLock(pvVar2);
      if (pMem != (LPVOID)0x0) {
        iVar1 = (**(code **)(*(int *)pWVar15 + 0x44))(pWVar15,pMem,0,puVar16);
        if (-1 < iVar1) {
          if (0 < (int)puVar16) {
            piVar8 = (int *)((int)pMem + 0x10);
            do {
              if (piVar8[-4] == 1) {
                if (piVar8[-3] != 0) {
LAB_004336f6:
                  if (*(int *)(piVar8[-3] + 4) == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = ftol();
                  }
                  _SfNanoTimeToText_20(local_460,&DAT_005bb810,uVar10,0);
                  _SfAudio_GetAttribsText_12(piVar8[-3],auStack_440,0x80);
                  puVar14 = local_460;
                  puVar11 = auStack_440;
                  uVar3 = _SfGetString_8(DAT_005ba2a0,0x9cf5);
                  SfPrintF(auStack_3c0,"%s: %s$, %s",uVar3,puVar11,puVar14);
                  goto LAB_0043377f;
                }
                pvVar2 = GlobalAlloc(0x42,piVar8[-1]);
                pvVar4 = GlobalLock(pvVar2);
                piVar8[-3] = (int)pvVar4;
                if (pvVar4 == (LPVOID)0x0) {
                  iVar1 = -0x7ff8fff2;
                  goto LAB_0043377f;
                }
                piVar8[-2] = piVar8[-1];
                iVar1 = (**(code **)(*(int *)pWVar15 + 0x44))(pWVar15,piVar8 + -4,iVar7,1);
                if (-1 < iVar1) goto LAB_004336f6;
              }
              else {
                if (piVar8[-4] == 2) {
                  if (piVar8[-3] == 0) {
                    pvVar2 = GlobalAlloc(0x42,piVar8[-1]);
                    pvVar4 = GlobalLock(pvVar2);
                    piVar8[-3] = (int)pvVar4;
                    if (pvVar4 == (LPVOID)0x0) {
                      iVar1 = -0x7ff8fff2;
                      goto LAB_0043377f;
                    }
                    if (*piVar8 == 0) {
                      pvVar2 = GlobalAlloc(0x42,piVar8[2]);
                      pvVar4 = GlobalLock(pvVar2);
                      *piVar8 = (int)pvVar4;
                      if (pvVar4 == (LPVOID)0x0) {
                        iVar1 = -0x7ff8fff2;
                        goto LAB_0043377f;
                      }
                      piVar8[1] = piVar8[2];
                    }
                    piVar8[-2] = piVar8[-1];
                    iVar1 = (**(code **)(*(int *)pWVar15 + 0x44))(pWVar15,piVar8 + -4,iVar7,1);
                    if (iVar1 < 0) goto LAB_004337cc;
                  }
                  uVar3 = 0;
                  uVar10 = ftol(0);
                  _SfNanoTimeToText_20(local_460,&DAT_005bb810,uVar10,uVar3);
                  _SfVideo_GetAttribsText_12(piVar8[-3],auStack_440,0x80);
                  puVar14 = local_460;
                  uVar3 = *(undefined4 *)(*piVar8 + 0x14);
                  uVar12 = *(undefined4 *)(*piVar8 + 0x10);
                  puVar11 = auStack_440;
                  uVar5 = _SfGetString_8(DAT_005ba2a0,0x9cf6);
                  uVar6 = _SfGetString_8(DAT_005ba2a0,0x9cf7);
                  SfPrintF(auStack_3c0,uVar6,uVar5,puVar11,uVar12,uVar3,puVar14);
                }
                else {
                  iVar13 = iVar7;
                  uVar3 = _SfGetString_8(DAT_005ba2a0,0x9cf8);
                  SfPrintF(auStack_3c0,uVar3,iVar13);
                }
LAB_0043377f:
                _Source = puStack_10;
                if (*puStack_10 != '\0') {
                  _mbscat(auStack_3c0,"\n");
                  _mbscat(auStack_3c0,_Source);
                }
                lstrcpynA((LPSTR)_Source,(LPCSTR)auStack_3c0,0x103);
                _Source[0x102] = '\0';
              }
LAB_004337cc:
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 0xb;
            } while (iVar7 < (int)puVar16);
          }
          iVar7 = 0;
          if (0 < (int)puVar16) {
            puVar9 = (undefined4 *)((int)pMem + 0x10);
            do {
              if ((LPCVOID)puVar9[-3] != (LPCVOID)0x0) {
                pvVar2 = GlobalHandle((LPCVOID)puVar9[-3]);
                GlobalUnlock(pvVar2);
                pvVar2 = GlobalHandle((LPCVOID)puVar9[-3]);
                GlobalFree(pvVar2);
              }
              if ((LPCVOID)*puVar9 != (LPCVOID)0x0) {
                pvVar2 = GlobalHandle((LPCVOID)*puVar9);
                GlobalUnlock(pvVar2);
                pvVar2 = GlobalHandle((LPCVOID)*puVar9);
                GlobalFree(pvVar2);
              }
              iVar7 = iVar7 + 1;
              puVar9 = puVar9 + 0xb;
            } while (iVar7 < (int)puVar16);
          }
        }
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
    }
    (**(code **)(*(int *)pWVar15 + 8))(pWVar15);
  }
  if ((iVar1 != -0x7ffb1fcd) && (iVar1 != -0x7ffb1fea)) {
    return iVar1;
  }
  return 1;
}


