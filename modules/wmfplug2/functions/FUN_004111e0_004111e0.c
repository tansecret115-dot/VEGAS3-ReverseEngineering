/* Module: wmfplug2.dll
   Function: FUN_004111e0
   Address: 004111e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004111e0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_0047c6e0;
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


