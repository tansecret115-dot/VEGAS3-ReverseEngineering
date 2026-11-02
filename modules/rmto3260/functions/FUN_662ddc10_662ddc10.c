/* Module: rmto3260.dll
   Function: FUN_662ddc10
   Address: 662ddc10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662ddc10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),param_2);
    return uVar1;
  }
  return 0x80004005;
}


