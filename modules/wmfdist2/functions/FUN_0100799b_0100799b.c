/* Module: wmfdist2.exe
   Function: FUN_0100799b
   Address: 0100799b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100799b(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(undefined4 **)(param_1 + 0x2b0c) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x2b0c);
    for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if ((*(int *)(param_1 + 0x2ec4) != 0) && (*(uint *)(param_1 + 0x2ecc) < 0x8000)) {
      FUN_0100758b(param_1,*(uint **)(param_1 + 0x2b0c),param_2);
    }
  }
  return;
}


