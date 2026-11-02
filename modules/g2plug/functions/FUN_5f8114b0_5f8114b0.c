/* Module: g2plug.dll
   Function: FUN_5f8114b0
   Address: 5f8114b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f8114b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[10];
  *param_1 = &PTR_LAB_5f86b638;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    *piVar1 = 0;
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


