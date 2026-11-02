/* Module: rmbe3260.dll
   Function: FUN_66023e20
   Address: 66023e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66023e20(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x24))(param_1);
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1f] = 0;
  }
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x20] = 0;
  }
  return;
}


