/* Module: vidcap30.exe
   Function: FUN_00422e00
   Address: 00422e00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00422e00(int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pMem;
  LPVOID pvVar5;
  int iVar6;
  int *piVar7;
  uchar *_Str;
  int *piVar8;
  undefined4 *puVar9;
  code *pcVar10;
  int *piVar11;
  float10 fVar12;
  undefined8 uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int aiStack_578 [12];
  undefined1 auStack_548 [32];
  uchar auStack_528 [259];
  undefined1 uStack_425;
  WCHAR aWStack_424 [270];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x28),-1,local_208,0x104);
  piVar16 = aiStack_578 + 1;
  local_2 = 0;
  piVar14 = DAT_005bba6c;
  iVar3 = (**(code **)(*DAT_005bba6c + 0x58))(DAT_005bba6c,local_208);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*piVar16 + 0x3c))(piVar16,aiStack_578);
    pcVar10 = GlobalAlloc_exref;
    if (-1 < iVar3) {
      pvVar4 = GlobalAlloc(0x42,(int)piVar16 * 0x2c);
      pMem = GlobalLock(pvVar4);
      if (pMem != (LPVOID)0x0) {
        iVar3 = (**(code **)(*piVar14 + 0x44))(piVar14,pMem,0,piVar16);
        if (-1 < iVar3) {
          iVar15 = 0;
          if (0 < (int)piVar16) {
            piVar7 = (int *)((int)pMem + 0x10);
            do {
              if (piVar7[-4] == 1) {
                iVar2 = piVar7[-3];
                piVar8 = &DAT_005bb810;
                piVar11 = aiStack_578 + 2;
                for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar11 = *piVar8;
                  piVar8 = piVar8 + 1;
                  piVar11 = piVar11 + 1;
                }
                if (iVar2 == 0) {
                  pvVar4 = GlobalAlloc(0x42,piVar7[-1]);
                  pvVar5 = GlobalLock(pvVar4);
                  piVar7[-3] = (int)pvVar5;
                  if (pvVar5 == (LPVOID)0x0) {
                    iVar3 = -0x7ff8fff2;
                  }
                  else {
                    piVar7[-2] = piVar7[-1];
                    iVar3 = (**(code **)(*piVar14 + 0x44))(piVar14,piVar7 + -4,iVar15,1);
                    if (-1 < iVar3) goto LAB_00423142;
                  }
                }
                else {
LAB_00423142:
                  FUN_0045ada0(aiStack_578 + 2);
                  if (*(int *)(piVar7[-3] + 4) == 0) {
                    uVar13 = 0;
                  }
                  else {
                    aiStack_578[1] = 0;
                    aiStack_578[0] = *(int *)(piVar7[-3] + 4);
                    uVar13 = ftol();
                  }
                  _SfNanoTimeToText_20(auStack_548,aiStack_578 + 2,uVar13,0);
                  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x10;
                  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
                  puVar9 = (undefined4 *)piVar7[-3];
                  *(undefined4 *)(param_1 + 0x33c) = *puVar9;
                  *(undefined4 *)(param_1 + 0x340) = puVar9[1];
                  *(undefined4 *)(param_1 + 0x344) = puVar9[2];
                  *(undefined4 *)(param_1 + 0x348) = puVar9[3];
                  *(undefined2 *)(param_1 + 0x34c) = *(undefined2 *)(puVar9 + 4);
                }
              }
              else if (piVar7[-4] == 2) {
                if (piVar7[-3] == 0) {
                  pvVar4 = (HGLOBAL)(*pcVar10)(0x42,piVar7[-1]);
                  pvVar5 = GlobalLock(pvVar4);
                  piVar7[-3] = (int)pvVar5;
                  if (pvVar5 == (LPVOID)0x0) {
                    iVar3 = -0x7ff8fff2;
                  }
                  else {
                    if (*piVar7 == 0) {
                      pvVar4 = (HGLOBAL)(*pcVar10)(0x42,piVar7[2]);
                      pvVar5 = GlobalLock(pvVar4);
                      *piVar7 = (int)pvVar5;
                      if (pvVar5 == (LPVOID)0x0) {
                        iVar3 = -0x7ff8fff2;
                        goto LAB_004231d6;
                      }
                      piVar7[1] = piVar7[2];
                    }
                    piVar7[-2] = piVar7[-1];
                    iVar3 = (**(code **)(*piVar14 + 0x44))(piVar14,piVar7 + -4,iVar15,1);
                    if (-1 < iVar3) goto LAB_00422f68;
                  }
                }
                else {
LAB_00422f68:
                  aWStack_424[0] = L'\0';
                  _Str = (uchar *)0x0;
                  iVar3 = (**(code **)(*piVar14 + 0x14))(piVar14,aWStack_424,0x104,iVar15,1);
                  if ((-1 < iVar3) && (aWStack_424[0] != L'\0')) {
                    WideCharToMultiByte(0,0,aWStack_424,-1,(LPSTR)auStack_528,0x104,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
                    uStack_425 = 0;
                    _Str = auStack_528;
                  }
                  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 8;
                  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
                  iVar2 = *piVar7;
                  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(iVar2 + 0x10);
                  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(iVar2 + 0x14);
                  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(piVar7[-3] + 4);
                  *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(piVar7[-3] + 8);
                  dVar1 = *(double *)(*piVar7 + 0x18);
                  *(double *)(param_1 + 0x378) = dVar1;
                  if (dVar1 < _DAT_0058a508) {
                    fVar12 = (float10)FUN_004219c0((undefined4 *)(param_1 + 0x370),0);
                    *(double *)(param_1 + 0x378) = (double)fVar12;
                  }
                  *(undefined2 *)(param_1 + 0x380) = *(undefined2 *)(piVar7[-3] + 0xe);
                  _mbsstr(_Str,"DV");
                  uVar13 = __allshl();
                  *(uint *)(param_1 + 0x148) =
                       (uint)uVar13 | *(uint *)(param_1 + 0x148) & 0xffffefff;
                  *(uint *)(param_1 + 0x14c) =
                       (uint)((ulonglong)uVar13 >> 0x20) | *(uint *)(param_1 + 0x14c);
                  uVar13 = __allshl();
                  *(uint *)(param_1 + 0x148) =
                       (uint)uVar13 | *(uint *)(param_1 + 0x148) & 0xffffdfff;
                  *(uint *)(param_1 + 0x14c) =
                       (uint)((ulonglong)uVar13 >> 0x20) | *(uint *)(param_1 + 0x14c);
                }
              }
LAB_004231d6:
              iVar15 = iVar15 + 1;
              piVar7 = piVar7 + 0xb;
              pcVar10 = GlobalAlloc_exref;
            } while (iVar15 < (int)piVar16);
          }
          iVar15 = 0;
          if (0 < (int)piVar16) {
            puVar9 = (undefined4 *)((int)pMem + 0x10);
            do {
              if ((LPCVOID)puVar9[-3] != (LPCVOID)0x0) {
                pvVar4 = GlobalHandle((LPCVOID)puVar9[-3]);
                GlobalUnlock(pvVar4);
                pvVar4 = GlobalHandle((LPCVOID)puVar9[-3]);
                GlobalFree(pvVar4);
              }
              if ((LPCVOID)*puVar9 != (LPCVOID)0x0) {
                pvVar4 = GlobalHandle((LPCVOID)*puVar9);
                GlobalUnlock(pvVar4);
                pvVar4 = GlobalHandle((LPCVOID)*puVar9);
                GlobalFree(pvVar4);
              }
              iVar15 = iVar15 + 1;
              puVar9 = puVar9 + 0xb;
            } while (iVar15 < (int)piVar16);
          }
        }
        pvVar4 = GlobalHandle(pMem);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pMem);
        GlobalFree(pvVar4);
      }
    }
    (**(code **)(*piVar14 + 8))(piVar14);
  }
  return iVar3;
}


