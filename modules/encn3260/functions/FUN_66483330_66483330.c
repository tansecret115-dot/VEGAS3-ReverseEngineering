/* Module: encn3260.dll
   Function: FUN_66483330
   Address: 66483330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66483330(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_FUN_664dc5b0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  return;
}


