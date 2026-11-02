/* Module: sftrkfx1.dll
   Function: FUN_5cbf0349
   Address: 5cbf0349
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf0349(int param_1)

{
  int *piVar1;
  
  if (*(LPCVOID *)(param_1 + 0x3c) != (LPCVOID)0x0) {
    FUN_5cba1ab0(*(LPCVOID *)(param_1 + 0x3c));
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_5cbf40fd();
  return;
}


