/* Module: basc3260.dll
   Function: FUN_627f2330
   Address: 627f2330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f2330(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -0x24);
  *param_2 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


