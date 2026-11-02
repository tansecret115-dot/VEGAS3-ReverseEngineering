/* Module: rmbe3260.dll
   Function: thunk_FUN_66014790
   Address: 66014690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_66014790(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  return;
}


