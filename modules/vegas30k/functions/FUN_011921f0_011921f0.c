/* Module: vegas30k.dll
   Function: FUN_011921f0
   Address: 011921f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011921f0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_011ea89c;
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


