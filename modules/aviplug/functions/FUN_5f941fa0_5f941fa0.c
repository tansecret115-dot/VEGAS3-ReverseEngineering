/* Module: aviplug.dll
   Function: FUN_5f941fa0
   Address: 5f941fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f941fa0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x158);
  iVar3 = 4;
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x2c))(iVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    puVar2 = (undefined4 *)(param_1 + 0x108);
    do {
      puVar2[-2] = 0;
      *puVar2 = 0;
      puVar2[-1] = 0;
      puVar2[-3] = 0;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 6;
    } while (iVar3 < *(int *)(param_1 + 0xf4));
  }
  return;
}


