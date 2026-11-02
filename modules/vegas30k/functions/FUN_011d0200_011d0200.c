/* Module: vegas30k.dll
   Function: FUN_011d0200
   Address: 011d0200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d0200(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x78) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x338);
    do {
      if (*(int *)*puVar4 == param_2) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x338) + uVar3 * 4);
        break;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x78));
  }
  if ((*(byte *)(iVar5 + 0x10) & 0x10) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    *(uint *)(iVar5 + 4) = *(ushort *)(*(int *)(param_1 + 0x60) + 0xc) * param_3;
    *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x10;
    uVar3 = *(uint *)(param_1 + 0x1f0);
    uVar6 = *(ushort *)(*(int *)(param_1 + 0x60) + 0xc) * param_3;
    uVar1 = *(uint *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0x1f0) = uVar3 + uVar6;
    *(uint *)(param_1 + 0xa0) = uVar1 + param_3;
    uVar2 = *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 500) = *(int *)(param_1 + 500) + (uint)CARRY4(uVar3,uVar6);
    *(uint *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + (uint)CARRY4(uVar1,param_3);
    *(uint *)(param_1 + 0x88) = uVar2 + param_3;
    iVar5 = *(int *)(param_1 + 0x8c) + (uint)CARRY4(uVar2,param_3);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    *(int *)(param_1 + 0x8c) = iVar5;
    if ((*(int *)(param_1 + 0x84) <= iVar5) &&
       ((*(int *)(param_1 + 0x84) < iVar5 ||
        (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x88))))) {
      SetEvent(*(HANDLE *)(param_1 + 0x330));
      *(undefined4 *)(param_1 + 0x334) = 0x3bd;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
    return 0;
  }
  return 0x80070005;
}


