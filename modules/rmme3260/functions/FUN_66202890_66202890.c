/* Module: rmme3260.dll
   Function: FUN_66202890
   Address: 66202890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202890(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x84))();
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0xd8) + 0x24))(iVar1 + 0xd8);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return 0;
}


