/* Module: vidcap30.exe
   Function: FUN_004cfba0
   Address: 004cfba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004cfba0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_LAB_0059a30c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_004d04a0();
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  return;
}


