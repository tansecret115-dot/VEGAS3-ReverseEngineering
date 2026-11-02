/* Module: vegas30k.dll
   Function: FUN_011d3710
   Address: 011d3710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011d3710(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[6];
  *param_1 = &PTR_LAB_011ec634;
  param_1[4] = 0;
  param_1[7] = 0;
  if (piVar1 != (int *)0x0) {
    if (param_1[5] != 0) {
      (**(code **)(*piVar1 + 0x24))(piVar1);
    }
    (**(code **)(*(int *)param_1[6] + 8))((int *)param_1[6]);
  }
  return;
}


