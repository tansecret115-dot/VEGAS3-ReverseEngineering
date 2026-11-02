/* Module: encn3260.dll
   Function: FUN_6649e510
   Address: 6649e510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649e510(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  local_8 = param_1 + 0x1c;
  local_c = *(int *)(param_1 + 0x20);
  if (local_c != 0) {
    iVar2 = 0;
    if (local_c == 0) goto LAB_6649e53c;
    do {
      piVar1 = (int *)FUN_664bab80(local_c);
      iVar2 = *piVar1;
LAB_6649e53c:
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
      }
      FUN_664bab40(&local_c);
    } while (local_c != 0);
  }
  return 0;
}


