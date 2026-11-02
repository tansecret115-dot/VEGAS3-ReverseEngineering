/* Module: vegas30k.dll
   Function: FUN_011995d0
   Address: 011995d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011995d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *pMem;
  undefined4 *puVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x4a0);
  EnterCriticalSection(lpCriticalSection);
  uVar4 = *(uint *)(param_1 + 0x4cc);
  if (uVar4 <= *(uint *)(param_1 + 0x4d0)) {
    pMem = *(undefined4 **)(param_1 + 0x4c0);
    *(uint *)(param_1 + 0x4cc) = uVar4 + 0x100;
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    FUN_01199490();
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4c0);
    puVar2 = pMem;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      **(undefined4 **)(param_1 + 0x4c8) = *puVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 4) = puVar2[1];
      *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 8) = puVar2[2];
      *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 0xc) = puVar2[3];
      iVar1 = *(int *)(param_1 + 0x4c8);
      *(undefined4 *)(iVar1 + 0x10) = puVar2[4];
      *(undefined4 *)(iVar1 + 0x14) = puVar2[5];
      *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 0x18);
      puVar2 = (undefined4 *)puVar2[6];
      *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + 1;
    }
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
    **(undefined4 **)(param_1 + 0x4c8) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 4) = param_3;
    *(undefined4 **)(*(int *)(param_1 + 0x4c8) + 8) = puVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 0xc) = param_4;
    iVar1 = *(int *)(param_1 + 0x4c8);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x4e0);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x4e4);
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 0x18);
    *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + 1;
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  **(undefined4 **)(param_1 + 0x4c8) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 4) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 8) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 0xc) = param_4;
  iVar1 = *(int *)(param_1 + 0x4c8);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 0x18);
  *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + 1;
  LeaveCriticalSection(lpCriticalSection);
  return;
}


