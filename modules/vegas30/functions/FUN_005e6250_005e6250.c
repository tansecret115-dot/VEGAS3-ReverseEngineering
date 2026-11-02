/* Module: vegas30.exe
   Function: FUN_005e6250
   Address: 005e6250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e6250(int param_1)

{
  int *piVar1;
  ULONG UVar2;
  int iVar3;
  int iVar4;
  HRESULT HVar5;
  int iVar6;
  LPCWSTR pWVar7;
  LPCWSTR pWVar8;
  int *piVar9;
  ULONG *pUVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 *puStack_4a8;
  int iStack_4a4;
  int iStack_4a0;
  int aiStack_494 [3];
  int *piStack_488;
  int aiStack_484 [3];
  undefined1 *puStack_478;
  undefined1 local_450 [220];
  CHAR aCStack_374 [259];
  undefined1 uStack_271;
  CHAR aCStack_270 [259];
  undefined1 uStack_16d;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_12c;
  LPSTREAM apIStack_128 [3];
  ULONG aUStack_11c [26];
  int aiStack_b4 [27];
  int iStack_48;
  int *piStack_44;
  int iStack_40;
  
  piVar1 = *(int **)(param_1 + 0x560);
  puStack_478 = local_450;
  aiStack_484[2] = 1;
  aiStack_484[1] = 0;
  aiStack_484[0] = 0;
  aiStack_494[2] = 0x5e627e;
  piStack_488 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x14))();
  if (-1 < iVar3) {
    aiStack_494[2] = 0;
    aiStack_494[1] = 0;
    aiStack_494[0] = 0;
    iVar3 = (**(code **)(*piVar1 + 0x14))();
    if (((-1 < iVar3) && (iVar3 = (**(code **)(*piVar1 + 0xc))(), -1 < iVar3)) &&
       (iVar3 = (**(code **)(*piVar1 + 0x14))(), -1 < iVar3)) {
      piVar9 = aiStack_b4;
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      }
      pUVar10 = aUStack_11c;
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pUVar10 = 0;
        pUVar10 = pUVar10 + 1;
      }
      if ((*piStack_44 == 0) || (iStack_40 < *piStack_44)) {
        iVar3 = 1;
      }
      else {
        if (1 < *(uint *)(iStack_48 + 0x114)) {
          *(undefined4 *)(iStack_48 + 0x128) = DAT_0064a924;
          piVar9 = aiStack_484;
          for (iVar3 = 0xda; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar9 = 0;
            piVar9 = piVar9 + 1;
          }
          aiStack_484[0] = 2;
          aiStack_484[1] = 0;
          aiStack_484[2] = DAT_0064a924;
          _mbscpy((uchar *)&puStack_478,&DAT_0064a928);
          iStack_144 = 0;
          iStack_140 = 0x3ff00000;
          iStack_14c = 0;
          iStack_148 = 0x3ff00000;
          iStack_13c = 0;
          iStack_138 = 0;
          iStack_134 = 0;
          iStack_16c = 0;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_12c = 0;
          apIStack_128[0] = (IStream *)0x0;
          iVar3 = FUN_005e8430();
          if (iVar3 < 0) {
            return iVar3;
          }
        }
        aiStack_494[0] = piStack_44[1];
        aiStack_494[1] = piStack_44[2];
        aiStack_494[2] = piStack_44[3];
        bVar12 = true;
        iVar3 = 4;
        piStack_488 = (int *)piStack_44[4];
        piVar9 = &DAT_0062ac80;
        piVar11 = aiStack_494;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar12 = *piVar9 == *piVar11;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        } while (bVar12);
        if (bVar12) {
          aiStack_494[0] = piStack_44[5];
          aiStack_494[1] = piStack_44[6];
          aiStack_494[2] = piStack_44[7];
          iVar3 = 4;
          bVar12 = true;
          piStack_488 = (int *)piStack_44[8];
          piVar9 = &DAT_0062acc0;
          piVar11 = aiStack_494;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar12 = *piVar9 == *piVar11;
            piVar9 = piVar9 + 1;
            piVar11 = piVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            iVar3 = piStack_44[9];
            pWVar8 = (LPCWSTR)(piStack_44 + 10);
            iStack_4a0 = 1;
            if (0 < iVar3) {
              puStack_4a8 = (undefined4 *)(iStack_48 + 300);
              do {
                piVar9 = aiStack_484;
                for (iVar6 = 0xda; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *piVar9 = 0;
                  piVar9 = piVar9 + 1;
                }
                if (iVar3 == 1) {
                  aiStack_484[0] = 2;
                  aiStack_484[1] = 0;
                  aiStack_484[2] = DAT_0064a924;
                  _mbscpy((uchar *)&puStack_478,&DAT_0064a928);
                  *(undefined4 *)(iStack_48 + 0x128) = DAT_0064a924;
                }
                else {
                  aiStack_484[0] = 4;
                  aiStack_484[1] = iStack_4a0;
                  aiStack_484[2] = 0x80000000;
                  *puStack_4a8 = 0x80000000;
                }
                uStack_168 = 0;
                iStack_16c = aiStack_484[1];
                uStack_164 = 0;
                iStack_14c = *(int *)pWVar8;
                iStack_148 = *(int *)(pWVar8 + 2);
                iStack_144 = *(int *)(pWVar8 + 4);
                iStack_140 = *(int *)(pWVar8 + 6);
                iStack_13c = *(int *)(pWVar8 + 8);
                iStack_138 = *(int *)(pWVar8 + 10);
                iStack_134 = *(int *)(pWVar8 + 0xc);
                pWVar7 = pWVar8 + 0xe;
                if ((pWVar7 == (LPCWSTR)0x0) || (*pWVar7 != L'\0')) {
                  WideCharToMultiByte(0,0,pWVar7,-1,aCStack_374,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                }
                else if (&stack0x00000000 != (undefined1 *)0x374) {
                  aCStack_374[0] = '\0';
                }
                uStack_271 = 0;
                iVar6 = lstrlenA(aCStack_374);
                pWVar7 = pWVar8 + iVar6 + 0xf;
                if ((pWVar7 == (LPCWSTR)0x0) || (*pWVar7 != L'\0')) {
                  WideCharToMultiByte(0,0,pWVar7,-1,aCStack_270,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                }
                else if (&stack0x00000000 != (undefined1 *)0x270) {
                  aCStack_270[0] = '\0';
                }
                uStack_16d = 0;
                iVar4 = lstrlenA(aCStack_270);
                iVar6 = *(int *)(pWVar7 + iVar4 + 1);
                UVar2 = *(ULONG *)(pWVar7 + iVar4 + 3);
                pWVar8 = pWVar7 + iVar4 + 5;
                aUStack_11c[iVar6] = UVar2;
                if (UVar2 != 0) {
                  pWVar8 = (LPCWSTR)((int)pWVar8 + UVar2);
                  aiStack_b4[iVar6] = (int)(pWVar7 + iVar4 + 7);
                  aUStack_11c[iVar6] = UVar2 - 4;
                  uStack_12c = 0xffffffff;
                  HVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,apIStack_128);
                  if (HVar5 < 0) break;
                  HVar5 = (*apIStack_128[0]->lpVtbl->Write)
                                    (apIStack_128[0],(void *)aiStack_b4[iVar6],UVar2 - 4,
                                     (ULONG *)0x0);
                  if (HVar5 < 0) {
                    (*apIStack_128[0]->lpVtbl->Release)(apIStack_128[0]);
                    apIStack_128[0] = (IStream *)0x0;
                    break;
                  }
                }
                iVar6 = FUN_005e8430();
                if (apIStack_128[0] != (IStream *)0x0) {
                  (*apIStack_128[0]->lpVtbl->Release)(apIStack_128[0]);
                }
                apIStack_128[0] = (IStream *)0x0;
                if (iVar6 < 0) break;
                iStack_4a0 = iStack_4a0 + 1;
                puStack_4a8 = puStack_4a8 + 1;
              } while (iStack_4a0 <= iVar3);
            }
          }
          else {
            iVar3 = 4;
            bVar12 = true;
            piVar9 = &DAT_0062acb0;
            piVar11 = aiStack_494;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar12 = *piVar9 == *piVar11;
              piVar9 = piVar9 + 1;
              piVar11 = piVar11 + 1;
            } while (bVar12);
            if (bVar12) {
              iVar3 = piStack_44[9];
              piVar9 = piStack_44 + 10;
              iStack_4a4 = 0;
              if (0 < iVar3) {
                do {
                  piVar11 = aiStack_484;
                  for (iVar6 = 0xda; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *piVar11 = 0;
                    piVar11 = piVar11 + 1;
                  }
                  if (iVar3 == 1) {
                    aiStack_484[0] = 2;
                    aiStack_484[1] = 0;
                    aiStack_484[2] = DAT_0064a924;
                    _mbscpy((uchar *)&puStack_478,&DAT_0064a928);
                    *(undefined4 *)(iStack_48 + 0x128) = DAT_0064a924;
                  }
                  else {
                    aiStack_484[0] = 4;
                    aiStack_484[2] = 0x80000000;
                    *(undefined4 *)(iStack_48 + 0x128) = 0x80000000;
                    aiStack_484[1] = iStack_4a4;
                  }
                  uStack_168 = 0;
                  iStack_16c = aiStack_484[1];
                  uStack_164 = 0;
                  iStack_14c = *piVar9;
                  iStack_148 = piVar9[1];
                  iStack_144 = piVar9[2];
                  iStack_140 = piVar9[3];
                  iStack_13c = piVar9[4];
                  iStack_138 = piVar9[5];
                  iStack_134 = piVar9[6];
                  pWVar8 = (LPCWSTR)(piVar9 + 7);
                  if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) {
                    WideCharToMultiByte(0,0,pWVar8,-1,aCStack_374,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else if (&stack0x00000000 != (undefined1 *)0x374) {
                    aCStack_374[0] = '\0';
                  }
                  pWVar8 = (LPCWSTR)(piVar9 + 0x89);
                  uStack_271 = 0;
                  if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) {
                    WideCharToMultiByte(0,0,pWVar8,-1,aCStack_270,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else if (&stack0x00000000 != (undefined1 *)0x270) {
                    aCStack_270[0] = '\0';
                  }
                  uStack_16d = 0;
                  iVar6 = piVar9[0x10b];
                  UVar2 = piVar9[0x10c];
                  piVar9 = piVar9 + 0x10d;
                  aUStack_11c[iVar6] = UVar2;
                  if (UVar2 != 0) {
                    aiStack_b4[iVar6] = (int)piVar9;
                    piVar9 = (int *)((int)piVar9 + UVar2);
                    uStack_12c = 0xffffffff;
                    HVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,apIStack_128);
                    if (HVar5 < 0) break;
                    (*apIStack_128[0]->lpVtbl->Write)
                              (apIStack_128[0],(void *)aiStack_b4[iVar6],UVar2,(ULONG *)0x0);
                  }
                  iVar6 = FUN_005e8430();
                  if (apIStack_128[0] != (IStream *)0x0) {
                    (*apIStack_128[0]->lpVtbl->Release)(apIStack_128[0]);
                  }
                  apIStack_128[0] = (IStream *)0x0;
                  if ((iVar6 < 0) || (iStack_4a4 = iStack_4a4 + 1, iVar3 <= iStack_4a4)) break;
                } while( true );
              }
            }
            else {
              iVar3 = piStack_44[5];
              piVar9 = piStack_44 + 6;
              iStack_4a4 = 0;
              if (0 < iVar3) {
                do {
                  piVar11 = aiStack_484;
                  for (iVar6 = 0xda; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *piVar11 = 0;
                    piVar11 = piVar11 + 1;
                  }
                  if (iVar3 == 1) {
                    aiStack_484[0] = 2;
                    aiStack_484[1] = 0;
                    aiStack_484[2] = DAT_0064a924;
                    _mbscpy((uchar *)&puStack_478,&DAT_0064a928);
                    *(undefined4 *)(iStack_48 + 0x128) = DAT_0064a924;
                  }
                  else {
                    aiStack_484[0] = 4;
                    aiStack_484[2] = 0x80000000;
                    *(undefined4 *)(iStack_48 + 0x128) = 0x80000000;
                    aiStack_484[1] = iStack_4a4;
                  }
                  uStack_168 = 0;
                  iStack_16c = aiStack_484[1];
                  uStack_164 = 0;
                  iStack_14c = *piVar9;
                  iStack_148 = piVar9[1];
                  iStack_144 = piVar9[2];
                  iStack_140 = piVar9[3];
                  iStack_13c = piVar9[4];
                  iStack_138 = piVar9[5];
                  pWVar8 = (LPCWSTR)(piVar9 + 6);
                  iStack_134 = 0;
                  if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) {
                    WideCharToMultiByte(0,0,pWVar8,-1,aCStack_374,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else if (&stack0x00000000 != (undefined1 *)0x374) {
                    aCStack_374[0] = '\0';
                  }
                  pWVar8 = (LPCWSTR)(piVar9 + 0x88);
                  uStack_271 = 0;
                  if ((pWVar8 == (LPCWSTR)0x0) || (*pWVar8 != L'\0')) {
                    WideCharToMultiByte(0,0,pWVar8,-1,aCStack_270,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else if (&stack0x00000000 != (undefined1 *)0x270) {
                    aCStack_270[0] = '\0';
                  }
                  uStack_16d = 0;
                  iVar6 = piVar9[0x10a];
                  UVar2 = piVar9[0x10b];
                  piVar9 = piVar9 + 0x10c;
                  aUStack_11c[iVar6] = UVar2;
                  if (UVar2 != 0) {
                    aiStack_b4[iVar6] = (int)piVar9;
                    piVar9 = (int *)((int)piVar9 + UVar2);
                    uStack_12c = 0xffffffff;
                    HVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,apIStack_128);
                    if (HVar5 < 0) break;
                    (*apIStack_128[0]->lpVtbl->Write)
                              (apIStack_128[0],(void *)aiStack_b4[iVar6],UVar2,(ULONG *)0x0);
                  }
                  iVar6 = FUN_005e8430();
                  if (apIStack_128[0] != (IStream *)0x0) {
                    (*apIStack_128[0]->lpVtbl->Release)(apIStack_128[0]);
                  }
                  apIStack_128[0] = (IStream *)0x0;
                  if ((iVar6 < 0) || (iStack_4a4 = iStack_4a4 + 1, iVar3 <= iStack_4a4)) break;
                } while( true );
              }
            }
          }
        }
        piVar9 = aiStack_484;
        for (iVar3 = 0xda; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar9 = 0;
          piVar9 = piVar9 + 1;
        }
        aiStack_484[0] = 7;
        aiStack_484[1] = 0xffffffff;
        aiStack_484[2] = DAT_0064a924;
        _mbscpy((uchar *)&puStack_478,&DAT_0064a928);
        iStack_144 = 0;
        iStack_140 = 0x3ff00000;
        iStack_14c = 0;
        iStack_148 = 0x3ff00000;
        iStack_13c = 0;
        iStack_138 = 0;
        iStack_134 = 0;
        iStack_16c = 0;
        uStack_168 = 0;
        uStack_164 = 0;
        uStack_12c = 0;
        apIStack_128[0] = (LPSTREAM)0x0;
        iVar3 = FUN_005e8430();
        if (-1 < iVar3) {
          uVar13 = 0;
          piVar9 = piVar1;
          iVar3 = (**(code **)(*piVar1 + 0x14))();
          if (((-1 < iVar3) && (iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,0,0,0), -1 < iVar3)) &&
             (iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,&stack0xfffffb28,4,0), -1 < iVar3)) {
            iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,piVar9,uVar13,0,0);
            return iVar3;
          }
        }
      }
    }
  }
  return iVar3;
}


