/* Module: rmme3260.dll
   Function: FUN_66265860
   Address: 66265860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66265860(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_6626d4b0;
  param_1[1] = &PTR_LAB_6626d498;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  return;
}


