/* Module: rmto3260.dll
   Function: FUN_662c16b0
   Address: 662c16b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c16b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
    return uVar2;
  }
  return 0x80004005;
}


