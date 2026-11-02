/* Module: vegas30k.dll
   Function: FUN_01192080
   Address: 01192080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01192080(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_011ea888;
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


