/* Module: mcplug.dll
   Function: FUN_00406560
   Address: 00406560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406560(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar1 = FUN_00407020(param_1);
    *(undefined **)(param_1 + 0x20) = puVar1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x10) + 0xc))
                    (param_1 + 0x10,*(undefined4 *)(param_1 + 0x20),param_2);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


