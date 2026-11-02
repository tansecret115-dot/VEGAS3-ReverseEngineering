/* Module: sfs4rw.dll
   Function: FUN_0047e8c0
   Address: 0047e8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e8c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = *(int *)(param_1 + 0x1b1);
  if (*(int *)(param_1 + 0x14d) < 2) {
    if (*(uint *)(param_1 + 0xb2) < *(int *)(param_1 + 0x145) - 1U) {
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x151) + 0xc);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x151) + 0x45);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}


