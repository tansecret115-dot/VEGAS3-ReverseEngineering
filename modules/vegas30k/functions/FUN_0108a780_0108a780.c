/* Module: vegas30k.dll
   Function: FUN_0108a780
   Address: 0108a780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0108a780(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  tagVTSM_VOBU_ADMAPI *ptVar7;
  tagVTSM_VOBU_AD *ptVar8;
  UINT uFlags;
  
  pMem = (LPCVOID)*param_2;
  uVar5 = *param_3;
  if ((*(int *)(param_1 + 0x10) == 0) || (*(char *)(*(int *)(param_1 + 0x10) + 5) == '\0')) {
    *(undefined4 *)((int)pMem + 0xdc) = 0;
    return 0;
  }
  *(uint *)((int)pMem + 0xdc) = (uint)((uVar5 & 0x7ff) != 0) + (uVar5 >> 0xb);
  iVar4 = 0;
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    iVar4 = **(int **)(param_1 + 0x14);
  }
  uVar5 = uVar5 + 4 + iVar4 * 4;
  uVar6 = ((uint)((uVar5 & 0x7ff) != 0) + (uVar5 >> 0xb)) * 0x800;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  uVar5 = uVar6;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,uVar5,uFlags);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 != (LPVOID)0x0) {
    ptVar7 = (tagVTSM_VOBU_ADMAPI *)(*(int *)((int)pvVar3 + 0xdc) * 0x800 + (int)pvVar3);
    iVar4 = 0;
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      iVar4 = **(int **)(param_1 + 0x14);
    }
    *(int *)ptVar7 = iVar4 * 4 + 3;
    SfCdiSwap_VTSM_VOBU_ADMAPI(ptVar7);
    uVar5 = 0;
    ptVar8 = (tagVTSM_VOBU_AD *)(ptVar7 + 4);
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x14);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= (int)uVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (((int)uVar5 < 0) || (iVar4 + -1 < (int)uVar5)) {
        uVar5 = uVar5 + 1;
        *(undefined4 *)ptVar8 = uRam00000000;
        ptVar8 = ptVar8 + 4;
      }
      else {
        iVar4 = piVar1[1] * uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)ptVar8 = *(undefined4 *)(iVar4 + piVar1[2]);
        ptVar8 = ptVar8 + 4;
      }
    }
    SfCdiSwap_VTSM_VOBU_AD((tagVTSM_VOBU_AD *)(ptVar7 + 4),uVar5);
    *param_2 = pvVar3;
    *param_3 = uVar6;
    return 0;
  }
  return 0x8007000e;
}


