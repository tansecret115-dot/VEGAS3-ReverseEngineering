/* Module: vegas30k.dll
   Function: FUN_011c1ec0
   Address: 011c1ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c1ec0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 4);
      (**(code **)(*piVar1 + 0x14))(piVar1);
      uVar2 = *(int *)(param_1 + 0x10) + 1;
      *(uint *)(param_1 + 0x10) = uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 0;
}


