/* Module: mpegin.dll
   Function: FUN_10007010
   Address: 10007010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10007010(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (*(int *)(param_1 + 0x18c) == 0) {
    if (*(int *)(param_1 + 0x1f0) != 3) goto LAB_1000703d;
    iVar2 = *(int *)(param_1 + 0x204);
  }
  else {
    if (*(int *)(param_1 + 0x204) == 0) {
LAB_1000703d:
      iVar2 = 1;
      goto LAB_10007054;
    }
    iVar2 = *(int *)(param_1 + 500);
  }
  iVar2 = (iVar2 != 0) + 2;
LAB_10007054:
  if (iVar2 != 0) {
    puVar3 = (uint *)(param_1 + 0x234);
    do {
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x11);
      puVar3[-3] = uVar1 >> 1;
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x11);
      *puVar3 = uVar1 >> 1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


