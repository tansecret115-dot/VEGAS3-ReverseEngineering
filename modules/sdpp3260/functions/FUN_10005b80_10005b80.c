/* Module: sdpp3260.dll
   Function: FUN_10005b80
   Address: 10005b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10005b80(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10005c60(param_1);
  while (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)FUN_10005c80((int)param_1);
  }
  (**(code **)(*(int *)*param_1 + 8))();
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  return;
}


