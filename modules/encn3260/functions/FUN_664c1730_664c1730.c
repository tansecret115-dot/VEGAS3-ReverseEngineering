/* Module: encn3260.dll
   Function: FUN_664c1730
   Address: 664c1730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664c1730(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = operator_new(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_664c1430(puVar1);
  }
  *param_2 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    return 0;
  }
  return 0x8007000e;
}


