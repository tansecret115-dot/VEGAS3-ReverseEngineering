/* Module: vegas30k.dll
   Function: FUN_0118f8e0
   Address: 0118f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0118f8e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xe];
  *param_1 = &PTR_FUN_011ea858;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0xf];
  param_1[0xe] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0xd];
  param_1[0xf] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x10];
  param_1[0xd] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0xc];
  param_1[0x10] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0xc] = 0;
  return;
}


