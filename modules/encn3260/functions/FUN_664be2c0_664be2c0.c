/* Module: encn3260.dll
   Function: FUN_664be2c0
   Address: 664be2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664be2c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_664be280(param_1);
  while (piVar1 != (int *)0x0) {
    FUN_664bb3e0(piVar1 + 3);
    FUN_664bb3e0(piVar1);
    operator_delete(piVar1);
    piVar1 = (int *)FUN_664be2a0(param_1);
  }
  return;
}


