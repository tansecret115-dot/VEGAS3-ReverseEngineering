/* Module: sftrans1.dll
   Function: FUN_0048ae40
   Address: 0048ae40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0048ae40(int param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *pMem;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar7 = param_2;
  if ((int)param_2 < 0) {
    iVar7 = 0;
  }
  if (param_3 < 0) {
    param_3 = **(int **)(param_1 + 0xa4) + -1;
  }
  if ((((((int)param_4 < 1) || (param_5 == (undefined4 *)0x0)) || (iVar7 < 0)) ||
      ((**(int **)(param_1 + 0xa4) <= iVar7 || (param_3 < 0)))) ||
     ((**(int **)(param_1 + 0xa4) <= param_3 || (param_3 < iVar7)))) {
    return 1;
  }
  uVar5 = (uint)param_4 >> 1;
  param_2 = 0;
  iVar2 = FUN_0048adc0(&param_5,iVar7);
  param_4 = param_5;
  if (iVar2 == 0) {
    return 0;
  }
  for (; iVar7 < param_3; iVar7 = iVar7 + 1) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + iVar7 * 4);
    if ((-1 < *piVar1) && (*piVar1 < **(int **)(param_1 + 0xac) + 3)) {
      iVar2 = FUN_0048b3d0(piVar1);
      uVar6 = iVar2 - 1;
      if ((int)uVar5 < (int)(param_2 + 1 + uVar6)) break;
      pvVar3 = GlobalAlloc(0x40,iVar2 * 2);
      pMem = GlobalLock(pvVar3);
      if (pMem == (undefined4 *)0x0) break;
      FUN_0048b460(piVar1,iVar2,pMem);
      puVar8 = pMem;
      puVar9 = param_4;
      for (uVar4 = (uVar6 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar4 = uVar6 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      param_2 = uVar6 + param_2;
      param_4 = (undefined4 *)((int)param_4 + uVar6 * 2);
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
  }
  if ((int)uVar5 <= (int)param_2) {
    if (uVar5 != 0) {
      *(undefined2 *)((int)param_5 + uVar5 * 2 + -2) = 0;
      param_2 = uVar5;
    }
    return param_2 * 2;
  }
  *(undefined2 *)((int)param_5 + param_2 * 2) = 0;
  return (param_2 + 1) * 2;
}


