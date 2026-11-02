/* Module: sctplug.dll
   Function: FUN_0040a790
   Address: 0040a790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040a790(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_00432914;
  param_1[1] = &PTR_LAB_00432900;
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


