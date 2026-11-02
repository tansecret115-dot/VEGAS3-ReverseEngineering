/* Module: aifplug.dll
   Function: FUN_5fbd4fc0
   Address: 5fbd4fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbd4fc0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar1 = FUN_5fbd5890(param_1);
    *(undefined **)(param_1 + 0x1c) = puVar1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0xc))
                    (param_1 + 8,*(undefined4 *)(param_1 + 0x1c),param_2);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


