/* Module: mcplugrw.dll
   Function: FUN_00481540
   Address: 00481540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481540(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000014;
  int *in_stack_00000018;
  int in_stack_0000001c;
  
  iVar1 = *(int *)(param_1 + 0x1b5);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14),
                       *(undefined4 *)(iVar1 + 0x10),0);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  uVar4 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x18);
  uVar3 = in_stack_0000001c - *in_stack_00000018;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  uVar3 = *(int *)(param_1 + 0x92) - *(int *)(iVar1 + 0x14);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  (**(code **)(*(int *)(param_1 + 0x1d1) + 4))
            (param_1,*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) * 4,
             in_stack_00000014 + *in_stack_00000018 * 4,uVar4);
  *in_stack_00000018 = *in_stack_00000018 + uVar4;
  uVar4 = *(int *)(iVar1 + 0x18) + uVar4;
  *(uint *)(iVar1 + 0x18) = uVar4;
  if (*(uint *)(iVar1 + 0x10) <= uVar4) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(uint *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(uint *)(iVar1 + 0x10);
  }
  return;
}


