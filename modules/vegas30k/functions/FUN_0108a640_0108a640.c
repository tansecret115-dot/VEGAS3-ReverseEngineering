/* Module: vegas30k.dll
   Function: FUN_0108a640
   Address: 0108a640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0108a640(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int iVar5;
  tagVTS_C_ADTI *ptVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  UINT uFlags;
  tagVTS_CPI *local_4;
  
  pMem = (LPCVOID)*param_2;
  uVar9 = *param_3;
  if ((*(int **)(param_1 + 0x44) != (int *)0x0) && (**(int **)(param_1 + 0x44) != 0)) {
    *(uint *)((int)pMem + 0xe0) = (uint)((uVar9 & 0x7ff) != 0) + (uVar9 >> 0xb);
    iVar8 = 0;
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      iVar8 = **(int **)(param_1 + 0x44);
    }
    uVar9 = uVar9 + 0x14 + iVar8;
    uVar7 = ((uint)((uVar9 & 0x7ff) != 0) + (uVar9 >> 0xb)) * 0x800;
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    uFlags = 0x42;
    uVar9 = uVar7;
    pvVar2 = GlobalHandle(pMem);
    pvVar2 = GlobalReAlloc(pvVar2,uVar9,uFlags);
    pvVar3 = GlobalLock(pvVar2);
    if (pvVar3 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    ptVar6 = (tagVTS_C_ADTI *)(*(int *)((int)pvVar3 + 0xe0) * 0x800 + (int)pvVar3);
    iVar8 = 0;
    local_4 = (tagVTS_CPI *)(ptVar6 + 8);
    *(undefined2 *)ptVar6 = *(undefined2 *)(param_1 + 0x40);
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x44);
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if (iVar5 <= iVar8) break;
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if ((iVar8 < 0) || (iVar5 + -1 < iVar8)) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(piVar1[2] + iVar8 * 4);
      }
      *(undefined4 *)local_4 = *puVar4;
      *(undefined4 *)(local_4 + 4) = puVar4[1];
      *(undefined4 *)(local_4 + 8) = puVar4[2];
      SfCdiSwap_VTS_CPI(local_4);
      iVar8 = iVar8 + 1;
      local_4 = local_4 + 0xc;
    }
    *(int *)(ptVar6 + 4) = iVar8 * 0xc + 7;
    SfCdiSwap_VTS_C_ADTI(ptVar6);
    *param_2 = pvVar3;
    *param_3 = uVar7;
  }
  return 0;
}


