/* Module: vegas30k.dll
   Function: FUN_011c0670
   Address: 011c0670
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c0670(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  *param_1 = &PTR_LAB_011ebd38;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[3] = 0;
  return;
}


