/* Module: sfnetmedia.dll
   Function: FUN_00407b70
   Address: 00407b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00407b70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


