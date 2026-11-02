/* Module: vegas30k.dll
   Function: FUN_011a2cb0
   Address: 011a2cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011a2cb0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_011ead60;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[2] = 0;
  return;
}


