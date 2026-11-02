/* Module: vegas30k.dll
   Function: FUN_011833d0
   Address: 011833d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0118372f) */

void FUN_011833d0(int *param_1)

{
  SIZE_T dwBytes;
  int *piVar1;
  bool bVar2;
  LPCVOID pMem;
  byte bVar3;
  HGLOBAL pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  int iVar8;
  int iVar9;
  uint unaff_EBP;
  LPCVOID unaff_ESI;
  int **ppiStack_6c;
  int *piStack_68;
  int **ppiStack_64;
  int *piVar10;
  int *piVar11;
  undefined1 **ppuVar12;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  LPCVOID pvStack_48;
  undefined1 *puStack_44;
  int **ppiVar13;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *apiStack_20 [2];
  int **ppiStack_18;
  undefined4 local_14;
  int *local_10;
  byte bStack_c;
  undefined1 local_4 [4];
  
  puStack_44 = local_4;
  pvStack_48 = (LPCVOID)0xf;
  piStack_4c = param_1;
  local_14 = 0;
  local_10 = (int *)0x0;
  iVar9 = 0;
  piStack_50 = (int *)0x11833f7;
  (**(code **)(*param_1 + 0x84))();
  piStack_50 = (int *)&DAT_00000004;
  piStack_54 = param_1;
  iStack_2c = (**(code **)(*param_1 + 0x1f0))();
  ppiVar13 = (int **)0x0;
  if ((0 < iStack_2c) && ((bStack_c & 4) != 0)) {
    dwBytes = iStack_2c * 4;
    pvVar4 = GlobalAlloc(0x40,dwBytes);
    ppiVar13 = GlobalLock(pvVar4);
    pvVar4 = GlobalAlloc(0x40,dwBytes);
    puVar5 = GlobalLock(pvVar4);
    if (0 < iStack_2c) {
      puVar6 = puVar5;
      iVar8 = iStack_2c;
      do {
        *(undefined4 *)(((int)ppiVar13 - (int)puVar5) + (int)puVar6) = 0;
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    unaff_ESI = (LPCVOID)0x0;
    iVar8 = (**(code **)(*local_10 + 0x1fc))();
    if (iVar8 < 0) {
      puStack_44 = (undefined1 *)0x0;
      piVar11 = local_10;
    }
    else {
      ppuVar12 = &puStack_44;
      puStack_44 = (undefined1 *)0x0;
      piVar10 = (int *)0x1;
      ppiStack_64 = (int **)0x0;
      piStack_68 = (int *)0x11834a1;
      iVar8 = (**(code **)(iRam00000000 + 0xc))();
      piVar11 = apiStack_20[0];
      while (iVar8 == 0) {
        piStack_68 = &iStack_2c;
        iStack_2c = 0;
        ppiStack_6c = (int **)0xf;
        (**(code **)(*piStack_54 + 0x8c))(piStack_54);
        if (((unaff_EBP & 0x80) != 0) && ((unaff_EBP & 4) != 0)) {
          (**(code **)(*piVar10 + 0x8c))(piVar10,0x32,ppiVar13 + iVar9);
          if (iVar9 == 0) {
            piVar11 = *ppiVar13;
          }
          else {
            piVar1 = ppiVar13[iVar9];
            if ((int)piVar1 <= (int)piVar11) {
              piVar11 = piVar1;
            }
          }
          iVar9 = iVar9 + 1;
        }
        (**(code **)(*piVar10 + 8))(piVar10);
        iVar8 = (**(code **)(*ppuVar12 + 0xc))(ppuVar12,1,&ppiStack_64,0);
      }
      ppiStack_6c = (int **)0x118351f;
      piStack_68 = piStack_4c;
      (**(code **)(*piStack_4c + 8))();
      puStack_44 = (undefined1 *)0x0;
    }
    do {
      bVar2 = true;
      piVar10 = piVar11;
      if (0 < iStack_2c) {
        ppiVar7 = ppiVar13;
        iVar9 = iStack_2c;
        do {
          piVar1 = *ppiVar7;
          if (piVar1 == piVar11) {
            *(undefined1 **)(((int)puVar5 - (int)ppiVar13) + (int)ppiVar7) = puStack_44;
            puStack_44 = puStack_44 + 1;
          }
          else if ((int)piVar11 < (int)piVar1) {
            if (bVar2) {
              bVar2 = false;
              piVar10 = piVar1;
            }
            else if ((int)piVar1 <= (int)piVar10) {
              piVar10 = piVar1;
            }
          }
          ppiVar7 = ppiVar7 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      param_1 = local_10;
      piVar11 = piVar10;
    } while ((int)puStack_44 < iStack_2c);
  }
  iVar9 = (**(code **)(*param_1 + 0x1fc))();
  if (-1 < iVar9) {
    ppiStack_64 = &piStack_4c;
    piVar11 = (int *)0x0;
    piStack_4c = (int *)0x0;
    piStack_68 = (int *)0x1;
    ppiStack_6c = ppiVar13;
    iVar9 = (*(code *)(*ppiVar13)[3])();
    piVar10 = piStack_4c;
    while (iVar9 == 0) {
      piStack_54 = (int *)0x0;
      (**(code **)(*param_1 + 0x8c))(param_1,0xf,&piStack_54);
      bVar3 = (byte)piVar11;
      if (((uint)piVar11 & 0x80) != 0) {
        if ((((uint)piVar11 & 1) != 0) && (((uint)piStack_30 & 1) != 0)) {
          (**(code **)(*piStack_68 + 0x90))(piStack_68,0x32,&piStack_4c);
          piStack_4c = (int *)((int)piStack_4c + 1);
          bVar3 = (byte)piVar11;
        }
        if (((bVar3 & 2) != 0) && (((uint)piStack_30 & 2) != 0)) {
          (**(code **)(*piStack_68 + 0x90))(piStack_68,0x32,&pvStack_48);
          pvStack_48 = (LPCVOID)((int)pvStack_48 + 1);
          bVar3 = (byte)piVar11;
        }
        if (((bVar3 & 4) != 0) && (((uint)piStack_30 & 4) != 0)) {
          (**(code **)(*piStack_68 + 0x90))(piStack_68,0x32,piVar10);
          piVar10 = piVar10 + 1;
        }
      }
      (**(code **)(*piStack_68 + 8))(piStack_68);
      iVar9 = (**(code **)(*piVar11 + 0xc))(piVar11,1,&ppiStack_6c,0);
    }
    (**(code **)(*piStack_50 + 8))(piStack_50);
  }
  pMem = pvStack_48;
  if (pvStack_48 != (LPCVOID)0x0) {
    ppiStack_64 = (int **)0x11836a5;
    pvVar4 = GlobalHandle(pvStack_48);
    ppiStack_64 = (int **)0x11836a8;
    GlobalUnlock(pvVar4);
    ppiStack_64 = (int **)0x11836ab;
    pvVar4 = GlobalHandle(pMem);
    ppiStack_64 = (int **)0x11836ae;
    GlobalFree(pvVar4);
  }
  if (unaff_ESI != (LPCVOID)0x0) {
    ppiStack_64 = (int **)0x11836b9;
    pvVar4 = GlobalHandle(unaff_ESI);
    ppiStack_64 = (int **)0x11836bc;
    GlobalUnlock(pvVar4);
    ppiStack_64 = (int **)0x11836bf;
    pvVar4 = GlobalHandle(unaff_ESI);
    ppiStack_64 = (int **)0x11836c2;
    GlobalFree(pvVar4);
  }
  piVar11 = (int *)&stack0xffffffc8;
  uStack_28 = 0;
  ppiStack_64 = ppiStack_18;
  piStack_68 = (int *)0x11836de;
  iVar9 = (*(code *)(*ppiStack_18)[0x80])();
  if (-1 < iVar9) {
    ppiStack_6c = apiStack_20;
    piStack_68 = (int *)0x0;
    apiStack_20[0] = (int *)0x0;
    iVar9 = (*(code *)(*ppiVar13)[3])(ppiVar13,1);
    while (iVar9 == 0) {
      (**(code **)(*piStack_30 + 0x3c))(piStack_30,0xf,&stack0xffffffc4);
      (**(code **)(iRam00000000 + 8))(0);
      iVar9 = (**(code **)(*piVar11 + 0xc))(piVar11,1,&stack0xffffffc0,0);
    }
    (**(code **)(*piStack_50 + 8))(piStack_50);
  }
  return;
}


