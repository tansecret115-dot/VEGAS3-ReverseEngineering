/* Module: rn5a3260.dll
   Function: FUN_628a23c0
   Address: 628a23c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a23c0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -0x24);
  *param_2 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


