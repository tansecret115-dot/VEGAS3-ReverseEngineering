/* Module: sfppack1.dll
   Function: FUN_5ce021b5
   Address: 5ce021b5
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5ce021b5(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return *param_1;
}


