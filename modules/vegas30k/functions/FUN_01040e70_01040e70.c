/* Module: vegas30k.dll
   Function: FUN_01040e70
   Address: 01040e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01040e70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  undefined4 *pMem;
  undefined4 *puVar3;
  HGLOBAL pvVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  EnterCriticalSection(lpCriticalSection);
  uVar5 = *(uint *)(param_1 + 0x80);
  if (uVar5 <= *(uint *)(param_1 + 0x84)) {
    pMem = *(undefined4 **)(param_1 + 0x74);
    *(uint *)(param_1 + 0x80) = uVar5 + 0x100;
    *(undefined4 *)(param_1 + 0x74) = 0;
    FUN_01040d80();
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x74);
    puVar3 = pMem;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      **(undefined4 **)(param_1 + 0x7c) = *puVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4) = puVar3[1];
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + 8) = puVar3[2];
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xc) = puVar3[3];
      iVar1 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(iVar1 + 0x10) = puVar3[4];
      *(undefined4 *)(iVar1 + 0x14) = puVar3[5];
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x18);
      puVar3 = (undefined4 *)puVar3[6];
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
    **(undefined4 **)(param_1 + 0x7c) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4) = param_3;
    *(undefined4 **)(*(int *)(param_1 + 0x7c) + 8) = puVar3;
    *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xc) = param_4;
    iVar1 = *(int *)(param_1 + 0x94);
    iVar2 = *(int *)(param_1 + 0x7c);
    *(int *)(iVar2 + 0x10) = iVar1;
    *(int *)(iVar2 + 0x14) = iVar1 >> 0x1f;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x18);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  **(undefined4 **)(param_1 + 0x7c) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 8) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0xc) = param_4;
  iVar1 = *(int *)(param_1 + 0x94);
  iVar2 = *(int *)(param_1 + 0x7c);
  *(int *)(iVar2 + 0x10) = iVar1;
  *(int *)(iVar2 + 0x14) = iVar1 >> 0x1f;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x18);
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  LeaveCriticalSection(lpCriticalSection);
  return;
}


