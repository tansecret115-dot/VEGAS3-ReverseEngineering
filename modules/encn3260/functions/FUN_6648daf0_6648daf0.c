/* Module: encn3260.dll
   Function: FUN_6648daf0
   Address: 6648daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648daf0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1,0x40040);
  }
  return;
}


