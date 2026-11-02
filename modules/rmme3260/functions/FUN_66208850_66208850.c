/* Module: rmme3260.dll
   Function: FUN_66208850
   Address: 66208850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66208850(int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_10;
  int local_c;
  int *local_8;
  
  iVar2 = -0x7fffbffb;
  local_8 = (int *)0x0;
  local_10 = 0;
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x38) + local_c * 4);
      iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,&local_8);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,&local_10);
        if (-1 < iVar2) {
          piVar1 = (int *)FUN_66249ad0((undefined4 *)(param_1 + 0x58));
          iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,local_8,local_10 & 0xffff);
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x3c));
  }
  return iVar2;
}


