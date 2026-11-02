/* Module: vegas30k.dll
   Function: FUN_01191cd0
   Address: 01191cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01191cd0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  uVar2 = 1;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
  }
  return uVar2;
}


