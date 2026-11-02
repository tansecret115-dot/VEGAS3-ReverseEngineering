/* Module: vegas30k.dll
   Function: FUN_011a6cc0
   Address: 011a6cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011a6cc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *pMem;
  undefined4 *puVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x34);
  EnterCriticalSection(lpCriticalSection);
  uVar4 = *(uint *)(param_1 + 0x60);
  if (uVar4 <= *(uint *)(param_1 + 100)) {
    pMem = *(undefined4 **)(param_1 + 0x54);
    *(uint *)(param_1 + 0x60) = uVar4 + 0x100;
    *(undefined4 *)(param_1 + 0x54) = 0;
    FUN_011a6bd0();
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    puVar2 = pMem;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      **(undefined4 **)(param_1 + 0x5c) = *puVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 4) = puVar2[1];
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 8) = puVar2[2];
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc) = puVar2[3];
      iVar1 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar1 + 0x10) = puVar2[4];
      *(undefined4 *)(iVar1 + 0x14) = puVar2[5];
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x18);
      puVar2 = (undefined4 *)puVar2[6];
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    }
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
    **(undefined4 **)(param_1 + 0x5c) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 4) = param_3;
    *(undefined4 **)(*(int *)(param_1 + 0x5c) + 8) = puVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc) = param_4;
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x18);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  **(undefined4 **)(param_1 + 0x5c) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 4) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 8) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc) = param_4;
  iVar1 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x18);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  LeaveCriticalSection(lpCriticalSection);
  return;
}


