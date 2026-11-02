/* Module: sfpaplug.dll
   Function: FUN_00446d30
   Address: 00446d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00446d30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_LAB_00455348;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_00447630((int)param_1);
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  return;
}


