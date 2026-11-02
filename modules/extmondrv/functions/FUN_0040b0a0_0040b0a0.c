/* Module: extmondrv.dll
   Function: FUN_0040b0a0
   Address: 0040b0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040b0a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0xb];
  *param_1 = &PTR_LAB_0044e928;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    *piVar1 = 0;
  }
  FUN_0040b240(param_1,0,(int *)0x0);
  return;
}


