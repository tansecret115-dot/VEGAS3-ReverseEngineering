/* Module: rmbe3260.dll
   Function: FUN_660131a0
   Address: 660131a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660131a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[6];
  *param_1 = &PTR_LAB_66064cd0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  FUN_6605b770(param_1 + 7);
  FUN_6605b770(param_1 + 3);
  return;
}


