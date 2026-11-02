/* Module: sfcdi.dll
   Function: FUN_5bf4d8f0
   Address: 5bf4d8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf4d8f0(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  UINT uFlags;
  
  pMem = (LPCVOID)*param_2;
  uVar9 = *param_3;
  *(uint *)((int)pMem + 0xe4) = (uint)((uVar9 & 0x7ff) != 0) + (uVar9 >> 0xb);
  piVar7 = *(int **)(param_1 + 0x38);
  if (piVar7 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar7;
  }
  uVar9 = uVar9 + 4 + iVar5 * 4;
  if (piVar7 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar7;
  }
  uVar8 = ((uint)((uVar9 & 0x7ff) != 0) + (uVar9 >> 0xb)) * 0x800;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  uVar9 = uVar8;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,uVar9,uFlags);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 != (LPVOID)0x0) {
    piVar6 = (int *)(*(int *)((int)pvVar3 + 0xe4) * 0x800 + (int)pvVar3);
    *piVar6 = iVar5 * 4 + 3;
    FUN_5bf4cde0((undefined1 *)piVar6);
    iVar5 = 0;
    piVar7 = piVar6 + 1;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x38);
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
        *piVar7 = iRam00000000;
        piVar7 = piVar7 + 1;
      }
      else {
        iVar4 = piVar1[1] * iVar5;
        iVar5 = iVar5 + 1;
        *piVar7 = *(int *)(iVar4 + piVar1[2]);
        piVar7 = piVar7 + 1;
      }
    }
    FUN_5bf4cdf0((undefined1 *)(piVar6 + 1),iVar5);
    *param_2 = pvVar3;
    *param_3 = uVar8;
    return 0;
  }
  return 0x8007000e;
}


