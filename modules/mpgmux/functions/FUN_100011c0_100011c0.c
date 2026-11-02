/* Module: mpgmux.dll
   Function: FUN_100011c0
   Address: 100011c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100011c0(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)FUN_1000ac00(*(int **)(*(int *)(param_1 + 0x34) + 0x70),param_3);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  FUN_1000ac80(*(int *)(*(int *)(param_1 + 0x34) + 0x70),param_3);
  return;
}


