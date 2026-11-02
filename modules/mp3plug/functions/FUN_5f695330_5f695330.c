/* Module: mp3plug.dll
   Function: FUN_5f695330
   Address: 5f695330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f695330(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_5f72d1f0;
  if (*(int *)param_1[10] != 0) {
    *(int *)param_1[10] = 0;
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


