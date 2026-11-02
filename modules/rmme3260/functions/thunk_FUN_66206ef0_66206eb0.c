/* Module: rmme3260.dll
   Function: thunk_FUN_66206ef0
   Address: 66206eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_66206ef0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  return;
}


