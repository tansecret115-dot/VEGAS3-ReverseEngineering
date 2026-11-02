/* Module: vegas30k.dll
   Function: FUN_0118d470
   Address: 0118d470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118d470(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint local_8;
  int local_4;
  
  local_8 = *(uint *)(param_1 + 0x168);
  uVar2 = FUN_01177970(0);
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  local_4 = 0;
  uVar3 = local_8 & 0x30000000;
  if (uVar3 == 0x10000000) {
    piVar1 = *(int **)(param_1 + 0x1f0);
    if ((local_8 & 0x800000) == 0) {
      iVar4 = (**(code **)(*piVar1 + 0x154))(piVar1,param_2,param_3);
    }
    else {
      iVar4 = (**(code **)(*piVar1 + 0x160))(piVar1,&local_4);
    }
LAB_0118d53f:
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else {
    if (uVar3 == 0x20000000) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x1f0) + 300))
                        (*(int **)(param_1 + 0x1f0),param_2,param_3);
      goto LAB_0118d53f;
    }
    if (uVar3 == 0x30000000) {
      piVar1 = *(int **)(param_1 + 0x1f0);
      if ((local_8 & 0x800000) == 0) {
        iVar4 = (**(code **)(*piVar1 + 0x16c))(piVar1,param_2,param_3);
      }
      else {
        iVar4 = (**(code **)(*piVar1 + 0x178))(piVar1,param_2,param_3,&local_4);
      }
      goto LAB_0118d53f;
    }
  }
  uVar3 = local_8 & 0xc0000000;
  if (uVar3 == 0x40000000) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x24))(*(int **)(param_1 + 0x1fc));
LAB_0118d59f:
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else {
    if (uVar3 == 0x80000000) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x14))
                        (*(int **)(param_1 + 0x1fc),param_2,param_3);
      goto LAB_0118d59f;
    }
    if (uVar3 == 0xc0000000) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x44))(*(int **)(param_1 + 0x1fc));
      goto LAB_0118d59f;
    }
    iVar4 = 0;
  }
  uVar2 = FUN_01177970(0);
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  if (((*(int *)(param_1 + 0xb8) != 0) && ((*(uint *)(param_1 + 0x54) & 0x100000) != 0)) &&
     (iVar5 = FUN_0118f1f0(param_2,param_3), iVar5 == 0)) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x200000;
  }
  if (((*(int *)(param_1 + 0xbc) != 0) && ((*(uint *)(param_1 + 0x54) & 0x400000) != 0)) &&
     (iVar5 = FUN_0118e160(param_2,param_3,1), iVar5 == 0)) {
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x800000;
  }
  if ((local_8 & 0x10000000) == 0) goto LAB_0118d685;
  if ((local_8 & 0x800000) == 0) {
    uVar3 = *(uint *)(param_1 + 0x50) | 0x20;
  }
  else {
    if ((*(int *)(param_1 + 0x204) == 0) && (local_4 != 0)) {
      *(int *)(param_1 + 0x204) = local_4;
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x10;
      (**(code **)(param_1 + 0x158))
                (param_1,0xb,&local_8,*(undefined4 *)(param_1 + 0x15c),&param_2,0);
      goto LAB_0118d685;
    }
    iVar5 = local_4 + *(int *)(param_1 + 0x204);
    *(int *)(param_1 + 0x204) = iVar5;
    if (iVar5 == 0) goto LAB_0118d685;
    uVar3 = *(uint *)(param_1 + 0x50) | 0x10;
  }
  *(uint *)(param_1 + 0x50) = uVar3;
LAB_0118d685:
  if ((local_8 & 0xe0000000) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | (local_8 & 0x400000 | 0x800200) >> 8;
    *(uint *)(param_1 + 0x5c) =
         (local_8 >> 0x16 & 1) << 8 | *(uint *)(param_1 + 0x5c) & 0xfffffeff | 0x88;
    SetEvent(*(HANDLE *)(param_1 + 0x40));
  }
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffffb | 2;
  if ((*(code **)(param_1 + 0x158) != (code *)0x0) && ((*(uint *)(param_1 + 0x50) & 0x22) != 0)) {
    puVar6 = &local_8;
    iVar4 = (**(code **)(param_1 + 0x158))
                      (param_1,0x4001,puVar6,*(undefined4 *)(param_1 + 0x15c),&param_2,0);
    if (iVar4 < 0) {
      FUN_0118c6e0(puVar6,0);
      return iVar4;
    }
    *(uint *)(param_1 + 0x160) = (uint)puVar6 & 0xffff;
    *(uint *)(param_1 + 0x164) = (uint)puVar6 & 0xffff0000;
  }
  return iVar4;
}


