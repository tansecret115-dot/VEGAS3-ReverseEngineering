/* Module: cook3260.dll
   Function: FUN_633a1750
   Address: 633a1750
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a1750(int *param_1)

{
  if ((param_1[10] == 2) && ((int *)*param_1 != (int *)0x0)) {
    (**(code **)(*(int *)*param_1 + 8))();
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
  }
  param_1[10] = 0;
  return;
}


