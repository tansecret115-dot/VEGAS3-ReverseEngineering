/* Module: vegas30k.dll
   Function: FUN_011c0e70
   Address: 011c0e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c0e70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x50];
  *param_1 = &PTR_LAB_011ebd70;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_011b59e0();
  return;
}


