/* Module: rmme3260.dll
   Function: FUN_66202b40
   Address: 66202b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202b40(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
  }
  return 0;
}


