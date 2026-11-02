/* Module: encn3260.dll
   Function: FUN_6648a090
   Address: 6648a090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6648a0af) */

void __fastcall FUN_6648a090(int param_1)

{
  int *piVar1;
  int local_c;
  int *local_8;
  
  local_c = *(int *)(param_1 + 0x122);
  local_8 = (int *)(param_1 + 0x11e);
  while (local_c != 0) {
    piVar1 = (int *)FUN_664bab80(local_c);
    piVar1 = (int *)*piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    FUN_664bab40(&local_c);
  }
  (**(code **)(*(int *)(param_1 + 0x11e) + 8))();
  return;
}


