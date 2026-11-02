/* Module: encn3260.dll
   Function: FUN_664bd120
   Address: 664bd120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664bd120(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_664df574;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  FUN_664bd010(param_1);
  return;
}


