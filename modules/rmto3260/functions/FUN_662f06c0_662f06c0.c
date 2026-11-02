/* Module: rmto3260.dll
   Function: FUN_662f06c0
   Address: 662f06c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f06c0(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x18))();
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
    }
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


