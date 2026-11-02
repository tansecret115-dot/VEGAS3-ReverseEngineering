/* Module: wavplug.dll
   Function: FUN_5f384ee0
   Address: 5f384ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f384ee0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar1 = FUN_5f3855f0(param_1);
    *(undefined **)(param_1 + 0x20) = puVar1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0xc))
                    (param_1 + 0xc,*(undefined4 *)(param_1 + 0x20),param_2);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


