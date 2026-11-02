/* Module: vegas30k.dll
   Function: FUN_011b28f0
   Address: 011b28f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b28f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_10;
  
  if ((param_2 != 0) && (iVar3 = *(int *)(param_1 + 0x19c), iVar3 != 0)) {
    iVar4 = *(int *)(param_2 + 4);
    if (*(int *)(iVar3 + 4) < *(int *)(param_2 + 4)) {
      iVar4 = *(int *)(iVar3 + 4);
    }
    *(uint *)(iVar3 + 8) = (iVar4 <= (int)*(uint *)(param_2 + 8)) - 1 & *(uint *)(param_2 + 8);
    iVar3 = *(int *)(param_1 + 0x19c);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    iVar3 = *(int *)(param_1 + 0x19c);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(*(int *)(param_1 + 0x19c) + 0x20) = *(undefined4 *)(param_2 + 0x20);
    iVar3 = 0;
    local_10 = 0;
    if (0 < iVar4) {
      do {
        iVar1 = *(int *)(param_2 + 0x24);
        iVar2 = *(int *)(*(int *)(param_1 + 0x19c) + 0x24);
        *(undefined4 *)(iVar2 + iVar3) = *(undefined4 *)(iVar1 + iVar3);
        *(undefined4 *)(iVar2 + 4 + iVar3) = *(undefined4 *)(iVar1 + 4 + iVar3);
        iVar1 = *(int *)(param_2 + 0x24);
        iVar3 = iVar3 + 0x10;
        iVar2 = *(int *)(*(int *)(param_1 + 0x19c) + 0x24);
        *(undefined4 *)(iVar2 + -8 + iVar3) = *(undefined4 *)(iVar1 + -8 + iVar3);
        *(undefined4 *)(iVar2 + -4 + iVar3) = *(undefined4 *)(iVar1 + -4 + iVar3);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x19c) + 0x28) + local_10 * 4) =
             *(undefined4 *)(*(int *)(param_2 + 0x28) + local_10 * 4);
        local_10 = local_10 + 1;
      } while (local_10 < iVar4);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x19c) + 0x2c);
    if (*(int *)(param_2 + 0x2c) <= iVar3) {
      iVar3 = *(int *)(param_2 + 0x2c);
    }
    local_10 = 0;
    if (0 < iVar3) {
      iVar4 = 0;
      do {
        iVar5 = iVar4 + 0x10;
        iVar1 = *(int *)(*(int *)(param_1 + 0x19c) + 0x30);
        puVar6 = (undefined4 *)(iVar4 + *(int *)(param_2 + 0x30));
        *(undefined4 *)(iVar1 + -0x10 + iVar5) = *puVar6;
        *(undefined4 *)(iVar1 + -0xc + iVar5) = puVar6[1];
        iVar1 = *(int *)(param_2 + 0x30);
        iVar2 = *(int *)(*(int *)(param_1 + 0x19c) + 0x30);
        *(undefined4 *)(iVar2 + -8 + iVar5) = *(undefined4 *)(iVar4 + 8 + iVar1);
        *(undefined4 *)(iVar2 + -4 + iVar5) = *(undefined4 *)(iVar4 + 0xc + iVar1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x19c) + 0x34) + local_10 * 4) =
             *(undefined4 *)(*(int *)(param_2 + 0x34) + local_10 * 4);
        local_10 = local_10 + 1;
        iVar4 = iVar5;
      } while (local_10 < iVar3);
    }
    return 0;
  }
  return 0x8000ffff;
}


