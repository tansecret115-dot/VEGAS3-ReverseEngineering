/* Module: sdpp3260.dll
   Function: FUN_10002a10
   Address: 10002a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10002a10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    FUN_10005b80(piVar1);
    operator_delete(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    FUN_10005b80(piVar1);
    operator_delete(piVar1);
  }
  FUN_100058c0(param_1);
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  return;
}


