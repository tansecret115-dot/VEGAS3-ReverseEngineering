/* Module: vegas30k.dll
   Function: FUN_0118e810
   Address: 0118e810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0118e810(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x1a];
  *param_1 = &PTR_FUN_011ea830;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x19];
  param_1[0x1a] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x18];
  param_1[0x19] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x18] = 0;
  return;
}


