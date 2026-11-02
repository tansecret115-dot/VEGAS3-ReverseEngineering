/* Module: encn3260.dll
   Function: FUN_6649e5e0
   Address: 6649e5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6649e5fb) */

undefined4 FUN_6649e5e0(int param_1)

{
  int *piVar1;
  int local_c;
  int local_8;
  
  local_8 = param_1 + 0x1c;
  local_c = *(int *)(param_1 + 0x20);
  while (local_c != 0) {
    piVar1 = (int *)FUN_664bab80(local_c);
    piVar1 = *(int **)(*piVar1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
    }
    FUN_664bab40(&local_c);
  }
  return 0;
}


