/* Module: encn3260.dll
   Function: FUN_66483030
   Address: 66483030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66483030(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  uVar2 = (**(code **)(*piVar1 + 0xa4))(piVar1,param_2);
  return uVar2;
}


