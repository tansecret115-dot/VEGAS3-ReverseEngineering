/* Module: sfcdi.dll
   Function: FUN_5bf4a8c0
   Address: 5bf4a8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf4a8c0(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  UINT uFlags;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  pMem = (LPCVOID)*param_2;
  uVar9 = *param_3;
  *(uint *)((int)pMem + 0xdc) = (uint)((uVar9 & 0x7ff) != 0) + (uVar9 >> 0xb);
  iVar5 = 0;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    iVar5 = **(int **)(param_1 + 0x10);
  }
  uVar9 = uVar9 + 4 + iVar5 * 4;
  uVar6 = ((uint)((uVar9 & 0x7ff) != 0) + (uVar9 >> 0xb)) * 0x800;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  uVar9 = uVar6;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,uVar9,uFlags);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 != (LPVOID)0x0) {
    piVar7 = (int *)(*(int *)((int)pvVar3 + 0xdc) * 0x800 + (int)pvVar3);
    iVar5 = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      iVar5 = **(int **)(param_1 + 0x10);
    }
    *piVar7 = iVar5 * 4 + 3;
    FUN_5bf4a2f0((undefined1 *)piVar7);
    iVar5 = 0;
    piVar8 = piVar7 + 1;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x10);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
        iVar5 = iVar5 + 1;
        *piVar8 = iRam00000000;
        piVar8 = piVar8 + 1;
      }
      else {
        iVar4 = piVar1[1] * iVar5;
        iVar5 = iVar5 + 1;
        *piVar8 = *(int *)(iVar4 + piVar1[2]);
        piVar8 = piVar8 + 1;
      }
    }
    FUN_5bf4a2d0((undefined1 *)(piVar7 + 1),iVar5);
    *param_2 = pvVar3;
    *param_3 = uVar6;
    return 0;
  }
  return 0x8007000e;
}


