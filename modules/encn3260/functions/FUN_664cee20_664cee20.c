/* Module: encn3260.dll
   Function: FUN_664cee20
   Address: 664cee20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cee20(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    FUN_664cf5a0((void *)*param_1);
    *param_1 = 0;
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc] = 0;
  }
  FUN_664bb3e0(param_1 + 9);
  FUN_664bb3e0(param_1 + 6);
  FUN_664bb3e0(param_1 + 3);
  return;
}


