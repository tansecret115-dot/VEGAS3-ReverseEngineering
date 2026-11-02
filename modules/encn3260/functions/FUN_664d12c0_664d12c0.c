/* Module: encn3260.dll
   Function: FUN_664d12c0
   Address: 664d12c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d12c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((param_1[1] != 0) && (param_1[3] != 0)) {
      (**(code **)(*piVar1 + 0x58))(piVar1,param_1[1]);
      param_1[1] = 0;
    }
    (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
    *param_1 = 0;
  }
  return;
}


