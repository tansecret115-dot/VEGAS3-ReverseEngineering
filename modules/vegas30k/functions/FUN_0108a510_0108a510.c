/* Module: vegas30k.dll
   Function: FUN_0108a510
   Address: 0108a510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0108a510(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  tagVTS_VOBU_ADMAPI *ptVar6;
  tagVTS_VOBU_AD *ptVar7;
  uint uVar8;
  UINT uFlags;
  
  pMem = (LPCVOID)*param_2;
  uVar5 = *param_3;
  *(uint *)((int)pMem + 0xe4) = (uint)((uVar5 & 0x7ff) != 0) + (uVar5 >> 0xb);
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  uVar5 = uVar5 + 4 + iVar4 * 4;
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  uVar8 = ((uint)((uVar5 & 0x7ff) != 0) + (uVar5 >> 0xb)) * 0x800;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  uVar5 = uVar8;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,uVar5,uFlags);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 != (LPVOID)0x0) {
    ptVar6 = (tagVTS_VOBU_ADMAPI *)(*(int *)((int)pvVar3 + 0xe4) * 0x800 + (int)pvVar3);
    *(int *)ptVar6 = iVar4 * 4 + 3;
    SfCdiSwap_VTS_VOBU_ADMAPI(ptVar6);
    uVar5 = 0;
    ptVar7 = (tagVTS_VOBU_AD *)(ptVar6 + 4);
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x38);
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
        *(undefined4 *)ptVar7 = uRam00000000;
        ptVar7 = ptVar7 + 4;
      }
      else {
        iVar4 = piVar1[1] * uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)ptVar7 = *(undefined4 *)(iVar4 + piVar1[2]);
        ptVar7 = ptVar7 + 4;
      }
    }
    SfCdiSwap_VTS_VOBU_AD((tagVTS_VOBU_AD *)(ptVar6 + 4),uVar5);
    *param_2 = pvVar3;
    *param_3 = uVar8;
    return 0;
  }
  return 0x8007000e;
}


