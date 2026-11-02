/* Module: encn3260.dll
   Function: FUN_664d0d90
   Address: 664d0d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664d0d90(undefined4 *param_1)

{
  int *piVar1;
  
  param_1[1] = 0;
  piVar1 = operator_new(0x6c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_LAB_664ddfd0;
    piVar1[1] = 0;
    FUN_664bdbb0(piVar1 + 2,10);
    FUN_664bdbb0(piVar1 + 9,10);
    FUN_664bdbb0(piVar1 + 0x10,10);
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    *piVar1 = (int)&PTR_FUN_664ddf90;
  }
  *param_1 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_1;
}


