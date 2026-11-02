/* Module: sfppack3.dll
   Function: FUN_5cc772b6
   Address: 5cc772b6
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5cc772b6(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  return *param_1;
}


