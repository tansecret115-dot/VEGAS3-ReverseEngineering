/* Module: sftrkfx1.dll
   Function: FUN_5cba9e60
   Address: 5cba9e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba9e60(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    if (iVar2 != 0) {
      uVar3 = *(uint *)(param_1 + 0x5c);
      if (param_3 < uVar3) {
        *(uint *)(param_1 + 0x5c) = uVar3 - 1;
      }
      else if (param_3 < uVar3 + iVar2) {
        *(int *)(param_1 + 0x60) = iVar2 + -1;
      }
    }
    uVar3 = param_3 + 1;
    if (uVar3 < *(uint *)(param_2 + 0x28)) {
      puVar1 = (undefined4 *)(uVar3 * 0x20 + 0x10 + param_2);
      do {
        uVar3 = uVar3 + 1;
        puVar4 = puVar1 + 8;
        puVar5 = puVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar1 = puVar1 + 8;
      } while (uVar3 < *(uint *)(param_2 + 0x28));
    }
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
    return 1;
  }
  return 0;
}


