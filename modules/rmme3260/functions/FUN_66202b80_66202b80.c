/* Module: rmme3260.dll
   Function: FUN_66202b80
   Address: 66202b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66202b80(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))(piVar1,param_2);
  }
  return 0;
}


