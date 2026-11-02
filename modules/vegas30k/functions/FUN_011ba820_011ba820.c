/* Module: vegas30k.dll
   Function: FUN_011ba820
   Address: 011ba820
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011ba820(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_011eb9dc;
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


