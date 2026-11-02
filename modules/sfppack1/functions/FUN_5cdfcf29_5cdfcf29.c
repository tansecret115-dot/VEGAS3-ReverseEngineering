/* Module: sfppack1.dll
   Function: FUN_5cdfcf29
   Address: 5cdfcf29
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdfcf29(int param_1)

{
  int *piVar1;
  
  if (*(LPCVOID *)(param_1 + 0x3c) != (LPCVOID)0x0) {
    FUN_5cdb2150(*(LPCVOID *)(param_1 + 0x3c));
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_5ce003b0();
  return;
}


