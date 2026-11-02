/* Module: rmto3260.dll
   Function: FUN_662f27e0
   Address: 662f27e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_662f27e0(undefined4 *param_1)

{
  int *piVar1;
  
  param_1[1] = 0;
  piVar1 = operator_new(0x6c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_LAB_66306468;
    piVar1[1] = 0;
    FUN_662ee790(piVar1 + 2,10);
    FUN_662ee790(piVar1 + 9,10);
    FUN_662ee790(piVar1 + 0x10,10);
    piVar1[0x17] = 0;
    piVar1[0x18] = 0;
    piVar1[0x19] = 0;
    piVar1[0x1a] = 0;
    *piVar1 = (int)&PTR_FUN_66306428;
  }
  *param_1 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return param_1;
}


