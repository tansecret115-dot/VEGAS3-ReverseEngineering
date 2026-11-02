/* Module: sfpaplug.dll
   Function: FUN_00403870
   Address: 00403870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00403870(int *param_1,int *param_2,double *param_3,int param_4)

{
  SIZE_T dwBytes;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  HGLOBAL pvVar5;
  double *pMem;
  double *pMem_00;
  double *pdVar6;
  double *pdVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_c;
  double local_8;
  
  dwBytes = param_4 * 8 + 0x10;
  pvVar5 = GlobalAlloc(0x42,dwBytes);
  pMem = GlobalLock(pvVar5);
  pvVar5 = GlobalAlloc(0x42,dwBytes);
  pMem_00 = GlobalLock(pvVar5);
  iVar12 = (int)param_2 + (-1 - param_4);
  if (-1 < param_4 + 1) {
    local_c = param_4 + 2;
    param_2 = param_1;
    pdVar6 = pMem;
    do {
      *(undefined4 *)pdVar6 = 0;
      *(undefined4 *)((int)pdVar6 + 4) = 0;
      piVar8 = param_2;
      piVar10 = param_1;
      iVar11 = iVar12;
      if (0 < iVar12) {
        do {
          iVar11 = iVar11 + -1;
          *pdVar6 = (double)(*piVar8 * *piVar10) + *pdVar6;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar11 != 0);
      }
      pdVar6 = pdVar6 + 1;
      param_2 = param_2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0x3ff00000;
  if (*pMem == _DAT_0044e6c8) {
    *(undefined4 *)pMem_00 = 0;
    *(undefined4 *)((int)pMem_00 + 4) = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    *(undefined4 *)((int)param_3 + 0xc) = 0;
  }
  else {
    dVar1 = pMem[1];
    dVar2 = *pMem;
    *pMem_00 = -(dVar1 / dVar2);
    param_3[1] = -(dVar1 / dVar2);
  }
  if (1 < param_4) {
    pdVar6 = param_3 + 2;
    for (uVar9 = param_4 * 2 - 1U & 0x3ffffffe; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pdVar6 = 0;
      pdVar6 = (double *)((int)pdVar6 + 4);
    }
  }
  uVar9 = 1;
  local_8 = pMem[1] * *pMem_00 + *pMem;
  if (1 < param_4) {
    do {
      dVar1 = _DAT_0044e6c8;
      if (-1 < (int)uVar9) {
        iVar12 = uVar9 + 1;
        pdVar6 = pMem + iVar12;
        pdVar7 = param_3;
        do {
          dVar2 = *pdVar7;
          dVar3 = *pdVar6;
          pdVar6 = pdVar6 + -1;
          pdVar7 = pdVar7 + 1;
          iVar12 = iVar12 + -1;
          dVar1 = dVar2 * dVar3 + dVar1;
        } while (iVar12 != 0);
      }
      dVar2 = _DAT_0044e6c8;
      if (local_8 != _DAT_0044e6c8) {
        dVar2 = -(dVar1 / local_8);
      }
      pMem_00[uVar9] = dVar2;
      iVar12 = uVar9 + 1;
      iVar11 = iVar12 >> 1;
      if (0 < iVar11) {
        pdVar7 = param_3 + uVar9;
        pdVar6 = param_3;
        do {
          pdVar6 = pdVar6 + 1;
          dVar2 = *pdVar7;
          dVar3 = pMem_00[uVar9];
          iVar11 = iVar11 + -1;
          dVar4 = *pdVar6;
          *pdVar7 = *pdVar6 * pMem_00[uVar9] + *pdVar7;
          *pdVar6 = dVar2 * dVar3 + dVar4;
          pdVar7 = pdVar7 + -1;
        } while (iVar11 != 0);
      }
      *(undefined4 *)(param_3 + iVar12) = *(undefined4 *)(pMem_00 + uVar9);
      *(undefined4 *)((int)param_3 + iVar12 * 8 + 4) = *(undefined4 *)((int)pMem_00 + uVar9 * 8 + 4)
      ;
      local_8 = dVar1 * pMem_00[uVar9] + local_8;
      if (local_8 < _DAT_0044e6c8) {
        uVar9 = 0;
        local_8 = local_8 * _DAT_0044e6c0;
        if (-1 < param_4 + 1) {
          uVar9 = param_4 + 2;
          pdVar6 = param_3;
          for (iVar12 = (uVar9 & 0x1fffffff) << 1; iVar12 != 0; iVar12 = iVar12 + -1) {
            *(undefined4 *)pdVar6 = 0;
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < param_4);
  }
  pvVar5 = GlobalHandle(pMem);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(pMem);
  GlobalFree(pvVar5);
  pvVar5 = GlobalHandle(pMem_00);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(pMem_00);
  GlobalFree(pvVar5);
  return (float10)local_8;
}


