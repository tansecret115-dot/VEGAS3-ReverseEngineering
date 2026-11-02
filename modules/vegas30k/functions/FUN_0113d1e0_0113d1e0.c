/* Module: vegas30k.dll
   Function: FUN_0113d1e0
   Address: 0113d1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0113d1e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_4;
  
  piVar2 = &local_4;
  piVar1 = *(int **)(param_1 + 0x168);
  local_4 = param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x168) + 0x14))(*(int **)(param_1 + 0x168));
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    (**(code **)(**(int **)(param_1 + 0x168) + 8))(*(int **)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1 + 4);
  return 1;
}


