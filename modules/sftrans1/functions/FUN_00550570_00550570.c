/* Module: sftrans1.dll
   Function: FUN_00550570
   Address: 00550570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00550570(int param_1,double param_2,double param_3,double param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 param_10)

{
  SIZE_T dwBytes;
  double dVar1;
  int iVar2;
  HGLOBAL pvVar3;
  double *pMem;
  LPVOID pvVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  int iVar7;
  undefined4 uVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  code *pcVar13;
  double *local_1c;
  double local_10;
  
  iVar2 = ftol();
  iVar2 = iVar2 + 1;
  dwBytes = iVar2 * 8;
  pvVar3 = GlobalAlloc(0x40,dwBytes);
  pMem = GlobalLock(pvVar3);
  pvVar3 = GlobalAlloc(0x40,dwBytes);
  pvVar4 = GlobalLock(pvVar3);
  pvVar3 = GlobalAlloc(0x40,dwBytes);
  pvVar5 = GlobalLock(pvVar3);
  pvVar3 = GlobalAlloc(0x40,iVar2 * 4);
  pvVar6 = GlobalLock(pvVar3);
  pcVar12 = GlobalFree_exref;
  pcVar13 = GlobalHandle_exref;
  if (pMem != (double *)0x0) {
    if (((pvVar4 != (LPVOID)0x0) && (pvVar5 != (LPVOID)0x0)) && (pvVar6 != (LPVOID)0x0)) {
      local_1c = (double *)0x0;
      pdVar9 = pMem;
      if (0 < iVar2) {
        do {
          dVar1 = (double)(int)local_1c;
          local_1c = (double *)((int)local_1c + 1);
          *pdVar9 = dVar1 * *(double *)(param_1 + 0x110) + param_4;
          pdVar9 = pdVar9 + 1;
        } while ((int)local_1c < iVar2);
      }
      iVar7 = FUN_0054f730(pMem,pvVar4,pvVar6,iVar2,param_10,pvVar5);
      if (iVar7 != 0) {
        iVar7 = -1;
        iVar11 = 0;
        local_10 = -1.0;
        if (0 < iVar2) {
          iVar10 = iVar7;
          local_1c = pMem;
          do {
            dVar1 = param_3 - *(double *)(((int)pvVar4 - (int)pMem) + (int)local_1c);
            dVar1 = (param_2 - *local_1c) * (param_2 - *local_1c) + dVar1 * dVar1;
            iVar7 = iVar11;
            if ((local_10 <= dVar1) && (-1 < iVar10)) {
              iVar7 = iVar10;
              dVar1 = local_10;
            }
            local_10 = dVar1;
            iVar11 = iVar11 + 1;
            local_1c = local_1c + 1;
            iVar10 = iVar7;
          } while (iVar11 < iVar2);
        }
        *param_7 = *(undefined4 *)(pMem + iVar7);
        param_7[1] = *(undefined4 *)((int)pMem + iVar7 * 8 + 4);
        *param_8 = *(undefined4 *)((int)pvVar4 + iVar7 * 8);
        param_8[1] = *(undefined4 *)((int)pvVar4 + iVar7 * 8 + 4);
        if (param_9 != (undefined4 *)0x0) {
          *param_9 = *(undefined4 *)((int)pvVar5 + iVar7 * 8);
          param_9[1] = *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4);
        }
      }
    }
    pcVar13 = GlobalHandle_exref;
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    pcVar12 = GlobalFree_exref;
    GlobalFree(pvVar3);
  }
  if (pvVar4 != (LPVOID)0x0) {
    pvVar3 = (HGLOBAL)(*pcVar13)(pvVar4);
    GlobalUnlock(pvVar3);
    uVar8 = (*pcVar13)(pvVar4);
    (*pcVar12)(uVar8);
  }
  if (pvVar5 != (LPVOID)0x0) {
    pvVar3 = (HGLOBAL)(*pcVar13)(pvVar5);
    GlobalUnlock(pvVar3);
    uVar8 = (*pcVar13)(pvVar5);
    (*pcVar12)(uVar8);
  }
  if (pvVar6 != (LPVOID)0x0) {
    pvVar3 = (HGLOBAL)(*pcVar13)(pvVar6);
    GlobalUnlock(pvVar3);
    uVar8 = (*pcVar13)(pvVar4);
    (*pcVar12)(uVar8);
  }
  return;
}


