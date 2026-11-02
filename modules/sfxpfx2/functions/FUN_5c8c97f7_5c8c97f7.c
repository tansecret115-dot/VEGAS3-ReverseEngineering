/* Module: sfxpfx2.dll
   Function: FUN_5c8c97f7
   Address: 5c8c97f7
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8c97f7(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_5c8c8de6(param_1);
  return;
}


