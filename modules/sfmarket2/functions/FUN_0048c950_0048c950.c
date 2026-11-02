/* Module: sfmarket2.dll
   Function: FUN_0048c950
   Address: 0048c950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048c950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = *(int *)(param_1 + 0x175);
  if (*(int *)(param_1 + 0x111) < 2) {
    if (*(uint *)(iVar1 + 8) < *(int *)(param_1 + 0x10d) - 1U) {
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x115) + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x115) + 0x45);
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}


