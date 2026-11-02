/* Module: encn3260.dll
   Function: FUN_664c0060
   Address: 664c0060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c0060(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_8;
  
  local_8 = param_1[1];
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_664bab40(&local_8);
    piVar1 = (int *)*puVar2;
    if (piVar1 != (int *)0x0) {
      FUN_664bb3e0(piVar1);
      operator_delete(piVar1);
    }
  }
  (**(code **)(*param_1 + 8))();
  return;
}


