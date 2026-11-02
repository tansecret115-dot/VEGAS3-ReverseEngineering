/* Module: encn3260.dll
   Function: FUN_66482cb0
   Address: 66482cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66482cb0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x72) = 1;
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  }
  FUN_66483250(param_1 + -0x14);
  return 0;
}


