/* Module: rmbe3260.dll
   Function: FUN_66016890
   Address: 66016890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66016890(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_6605b770((int *)(param_1 + 0x20));
  return;
}


