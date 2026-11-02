/* Module: sfs4rw.dll
   Function: FUN_0047e480
   Address: 0047e480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e480(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1ad);
  if (*(char *)(iVar2 + 0x30) == '\0') {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x1b1) + 0xc))
                      (param_1,*(undefined4 *)(iVar2 + 0x35 + *(int *)(iVar2 + 0x3d) * 4));
    if (iVar3 == 0) {
      return;
    }
    *(undefined1 *)(iVar2 + 0x30) = 1;
    *(int *)(iVar2 + 0x49) = *(int *)(iVar2 + 0x49) + 1;
  }
  iVar3 = *(int *)(iVar2 + 0x41);
  if (iVar3 != 0) {
    if (iVar3 == 1) goto LAB_0047e541;
    if (iVar3 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1b5) + 4))
              (param_1,*(undefined4 *)(iVar2 + 0x35 + *(int *)(iVar2 + 0x3d) * 4),
               (uint *)(iVar2 + 0x31),*(undefined4 *)(iVar2 + 0x45),param_2,param_3,param_4);
    if (*(uint *)(iVar2 + 0x31) < *(uint *)(iVar2 + 0x45)) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x41) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x31) = 0;
  *(int *)(iVar2 + 0x45) = *(int *)(param_1 + 0x141) + -1;
  if (*(int *)(iVar2 + 0x49) == *(int *)(param_1 + 0x145)) {
    FUN_0047e6d0(param_1);
  }
  *(undefined4 *)(iVar2 + 0x41) = 1;
LAB_0047e541:
  puVar1 = (uint *)(iVar2 + 0x31);
  (**(code **)(*(int *)(param_1 + 0x1b5) + 4))
            (param_1,*(undefined4 *)(iVar2 + 0x35 + *(int *)(iVar2 + 0x3d) * 4),puVar1,
             *(undefined4 *)(iVar2 + 0x45),param_2,param_3,param_4);
  if (*(uint *)(iVar2 + 0x45) <= *puVar1) {
    if (*(int *)(iVar2 + 0x49) == 1) {
      FUN_0047e5c0(param_1);
    }
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *(uint *)(iVar2 + 0x3d) = *(uint *)(iVar2 + 0x3d) ^ 1;
    *puVar1 = *(int *)(param_1 + 0x141) + 1;
    iVar3 = *(int *)(param_1 + 0x141);
    *(undefined4 *)(iVar2 + 0x41) = 2;
    *(int *)(iVar2 + 0x45) = iVar3 + 2;
  }
  return;
}


