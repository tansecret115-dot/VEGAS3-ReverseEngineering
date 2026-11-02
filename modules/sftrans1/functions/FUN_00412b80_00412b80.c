/* Module: sftrans1.dll
   Function: FUN_00412b80
   Address: 00412b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00412b80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


