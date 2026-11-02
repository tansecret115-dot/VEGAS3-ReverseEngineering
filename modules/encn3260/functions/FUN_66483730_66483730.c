/* Module: encn3260.dll
   Function: FUN_66483730
   Address: 66483730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66483730(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_c;
  int *local_8;
  
  local_c = *(int *)(param_1 + 0x11);
  piVar1 = (int *)(param_1 + 0xd);
  local_8 = piVar1;
  if (local_c != 0) {
    if (local_c != 0) goto LAB_66483750;
    piVar3 = (int *)0x0;
    while( true ) {
      if (piVar3 != (int *)0x0) {
        FUN_66483630(piVar3);
        operator_delete(piVar3);
      }
      FUN_664bab40(&local_c);
      if (local_c == 0) break;
LAB_66483750:
      puVar2 = (undefined4 *)FUN_664bab80(local_c);
      piVar3 = (int *)*puVar2;
    }
  }
  FUN_664ba950(piVar1);
  return;
}


