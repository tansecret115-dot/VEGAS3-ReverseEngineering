/* Module: qt4plug.dll
   Function: FUN_5f525940
   Address: 5f525940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f525940(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_5f596f0c;
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


