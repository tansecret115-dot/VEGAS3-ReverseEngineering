/* Module: cook3260.dll
   Function: FUN_633a1940
   Address: 633a1940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a1940(int *param_1)

{
  if ((param_1[10] == 1) && ((int *)*param_1 != (int *)0x0)) {
    (**(code **)(*(int *)*param_1 + 4))();
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
  }
  param_1[10] = 0;
  return;
}


