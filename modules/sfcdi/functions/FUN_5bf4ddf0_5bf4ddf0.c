/* Module: sfcdi.dll
   Function: FUN_5bf4ddf0
   Address: 5bf4ddf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf4ddf0(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined1 *puVar1;
  LPCVOID pMem;
  int *piVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  int *piVar7;
  undefined2 extraout_var;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  UINT uFlags;
  int local_10;
  
  pMem = (LPCVOID)*param_2;
  uVar3 = *param_3;
  if ((*(int **)(param_1 + 0x50) == (int *)0x0) || (**(int **)(param_1 + 0x50) == 0)) {
    *(undefined4 *)((int)pMem + 0xd4) = 0;
    return 0;
  }
  *(uint *)((int)pMem + 0xd4) = (uint)((uVar3 & 0x7ff) != 0) + (uVar3 >> 0xb);
  piVar7 = *(int **)(param_1 + 0x50);
  if (piVar7 == (int *)0x0) {
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    iVar9 = *piVar7;
    iVar6 = *piVar7;
  }
  uVar3 = uVar3 + 8 + (iVar6 + iVar9) * 4;
  iVar9 = 0;
  while( true ) {
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7;
    }
    if (iVar6 <= iVar9) break;
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7;
    }
    if ((iVar9 < 0) || (iVar6 + -1 < iVar9)) {
      iVar9 = iVar9 + 1;
      uVar3 = uVar3 + (uint)uRam00000004 * 4;
    }
    else {
      iVar6 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      uVar3 = uVar3 + (uint)*(ushort *)(*(int *)(piVar7[2] + iVar6) + 4) * 4;
    }
  }
  uVar10 = ((uint)((uVar3 & 0x7ff) != 0) + (uVar3 >> 0xb)) * 0x800;
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  uFlags = 0x42;
  uVar3 = uVar10;
  pvVar4 = GlobalHandle(pMem);
  pvVar4 = GlobalReAlloc(pvVar4,uVar3,uFlags);
  pvVar5 = GlobalLock(pvVar4);
  if (pvVar5 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  puVar8 = (undefined2 *)(*(int *)((int)pvVar5 + 0xd4) * 0x800 + (int)pvVar5);
  piVar7 = (int *)(puVar8 + 4);
  iVar9 = 0;
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    iVar9 = **(int **)(param_1 + 0x50);
  }
  iVar9 = iVar9 * 4 + 8;
  local_10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x50);
    if (piVar2 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    if (iVar6 <= local_10) break;
    if (piVar2 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar2;
    }
    if ((local_10 < 0) || (iVar6 + -1 < local_10)) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11 = *(undefined1 **)(piVar2[2] + local_10 * 4);
    }
    *piVar7 = iVar9;
    FUN_5bf4ccd0((undefined1 *)piVar7,1);
    puVar1 = (undefined1 *)(iVar9 + (int)puVar8);
    *puVar1 = *puVar11;
    *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar11 + 4);
    FUN_5bf4cd10((int)puVar1);
    if (*(short *)(puVar1 + 2) != 0) {
      memmove(puVar1 + 4,*(void **)(puVar11 + 8),(uint)*(ushort *)(puVar11 + 4) << 2);
      FUN_5bf4ccf0(puVar1 + 4,CONCAT22(extraout_var,*(undefined2 *)(puVar11 + 4)));
    }
    local_10 = local_10 + 1;
    iVar9 = iVar9 + 4 + (uint)*(ushort *)(puVar11 + 4) * 4;
    piVar7 = piVar7 + 1;
  }
  *puVar8 = (undefined2)local_10;
  *(int *)(puVar8 + 2) = iVar9 + -1;
  FUN_5bf4ccb0((undefined1 *)puVar8);
  *param_2 = pvVar5;
  *param_3 = uVar10;
  return 0;
}


