/* Module: rmto3260.dll
   Function: FUN_662dd780
   Address: 662dd780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662dd780(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x30))(*(int **)(param_1 + 0x28),param_2);
    return uVar1;
  }
  return 0x80004005;
}


