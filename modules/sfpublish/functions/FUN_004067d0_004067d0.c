/* Module: sfpublish.dll
   Function: FUN_004067d0
   Address: 004067d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004067d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  iVar5 = *(int *)(iVar3 + -4);
  iVar6 = iVar3 + iVar5 * 0xc;
  if (-1 < iVar5 + -1) {
    do {
      puVar1 = (undefined4 *)(iVar6 + -0xc);
      iVar6 = iVar6 + -0xc;
      Ordinal_6(*puVar1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar4 = GlobalHandle((LPCVOID)(iVar3 + -4));
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle((LPCVOID)(iVar3 + -4));
  GlobalFree(pvVar4);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


