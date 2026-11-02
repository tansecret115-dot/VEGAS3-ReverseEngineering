/* Module: aviplug.dll
   Function: FUN_5f94fb40
   Address: 5f94fb40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94fb40(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  if (*(SIZE_T *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      return 0x8000ffff;
    }
    puVar1 = CoTaskMemAlloc(*(SIZE_T *)(param_1 + 0x40));
    *(undefined4 **)(param_2 + 0x44) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    uVar3 = *(uint *)(param_1 + 0x40);
    *(uint *)(param_2 + 0x40) = uVar3;
    puVar4 = *(undefined4 **)(param_1 + 0x44);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  return 0;
}


