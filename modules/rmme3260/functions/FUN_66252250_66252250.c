/* Module: rmme3260.dll
   Function: FUN_66252250
   Address: 66252250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66252250(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_6626c9ac;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  FUN_66252140(param_1);
  return;
}


