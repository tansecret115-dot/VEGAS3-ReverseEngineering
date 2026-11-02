/* Module: encn3260.dll
   Function: FUN_66493230
   Address: 66493230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66493230(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_FUN_664de738;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  return;
}


