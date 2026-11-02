/* Module: basc3260.dll
   Function: FUN_627f31a0
   Address: 627f31a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_627f31a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    *param_3 = 0;
    return 0x80004005;
  }
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_627f2dd0(puVar1);
  }
  *param_3 = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    (**(code **)(*(int *)*param_3 + 0x10))((int *)*param_3,param_1,param_2);
    return 0;
  }
  return 0x8007000e;
}


