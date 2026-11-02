/* Module: sfppack2.dll
   Function: FUN_5ccdf8a0
   Address: 5ccdf8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ccdf8a0(undefined4 param_1,double *param_2,int param_3,int param_4)

{
  HGLOBAL pvVar1;
  double *pMem;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int local_c;
  
  iVar5 = param_3 * 2;
  pvVar1 = GlobalAlloc(0x42,param_3 << 5);
  pMem = GlobalLock(pvVar1);
  iVar2 = iVar5 / 2;
  pdVar3 = pMem;
  pdVar4 = param_2;
  iVar6 = iVar2;
  if (0 < iVar2) {
    do {
      *(undefined4 *)pdVar3 = *(undefined4 *)pdVar4;
      *(undefined4 *)((int)pdVar3 + 4) = *(undefined4 *)((int)pdVar4 + 4);
      *(undefined4 *)(pdVar3 + 1) = 0;
      *(undefined4 *)((int)pdVar3 + 0xc) = 0;
      iVar6 = iVar6 + -1;
      pdVar3 = pdVar3 + 2;
      pdVar4 = pdVar4 + 1;
    } while (iVar6 != 0);
    if (0 < iVar2) {
      pdVar3 = pMem + iVar2 * 2;
      pdVar4 = pMem + iVar2 * 2 + -1;
      do {
        *(undefined4 *)pdVar3 = *(undefined4 *)(pdVar4 + -1);
        *(undefined4 *)((int)pdVar3 + 4) = *(undefined4 *)((int)pdVar4 + -4);
        pdVar3[1] = -*pdVar4;
        iVar2 = iVar2 + -1;
        pdVar3 = pdVar3 + 2;
        pdVar4 = pdVar4 + -2;
      } while (iVar2 != 0);
    }
  }
  FUN_5cd279d0(pMem,iVar5,-1);
  iVar6 = 0;
  iVar5 = iVar5 + -1;
  pdVar3 = param_2;
  pdVar4 = pMem;
  if (-1 < iVar5) {
    do {
      if ((iVar6 == 0) || (iVar6 == iVar5)) {
        *(undefined4 *)pdVar3 = *(undefined4 *)pdVar4;
        *(undefined4 *)((int)pdVar3 + 4) = *(undefined4 *)((int)pdVar4 + 4);
      }
      else {
        *pdVar3 = *pdVar4 + *pdVar4;
      }
      iVar6 = iVar6 + 1;
      pdVar3 = pdVar3 + 1;
      pdVar4 = pdVar4 + 2;
    } while (iVar6 <= iVar5);
  }
  local_c = param_4;
  if (-1 < param_4) {
    do {
      fVar7 = (float10)local_c;
      local_c = local_c + -1;
      fVar7 = (float10)fcos((fVar7 * (float10)_DAT_5cd51720) / (float10)param_4);
      *param_2 = (double)(((float10)_DAT_5cd51710 - fVar7 * (float10)_DAT_5cd51718) *
                         (float10)*param_2);
      param_2 = param_2 + 1;
    } while (-1 < local_c);
  }
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  return;
}


