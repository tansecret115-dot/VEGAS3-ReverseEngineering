/* Module: rmme3260.dll
   Function: FUN_66234250
   Address: 66234250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6623427b) */

undefined4 FUN_66234250(int param_1,undefined4 param_2)

{
  int *piVar1;
  int local_c;
  int local_8;
  
  local_8 = param_1 + 0x1c;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 8;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  local_c = *(int *)(param_1 + 0x20);
  while (local_c != 0) {
    piVar1 = (int *)FUN_66250c10(local_c);
    piVar1 = *(int **)(*piVar1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,param_2);
    }
    FUN_66250bf0(&local_c);
  }
  return 0;
}


