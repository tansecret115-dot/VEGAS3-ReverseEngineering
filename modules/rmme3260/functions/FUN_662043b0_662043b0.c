/* Module: rmme3260.dll
   Function: FUN_662043b0
   Address: 662043b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x662043c8) */

undefined4 FUN_662043b0(int param_1)

{
  int *piVar1;
  int local_c;
  int local_8;
  
  local_c = *(int *)(param_1 + 4);
  local_8 = param_1;
  while (local_c != 0) {
    piVar1 = (int *)FUN_66250c10(local_c);
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    FUN_66250bf0(&local_c);
  }
  return 0;
}


