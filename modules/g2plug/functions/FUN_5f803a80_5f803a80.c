/* Module: g2plug.dll
   Function: FUN_5f803a80
   Address: 5f803a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f803a80(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar1 = FUN_5f804a90(param_1);
    *(undefined4 **)(param_1 + 0x1c) = puVar1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0xc))
                    (param_1 + 8,*(undefined4 *)(param_1 + 0x1c),param_2);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


