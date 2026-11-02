/* Module: rmme3260.dll
   Function: FUN_662341e0
   Address: 662341e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662341e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  local_8 = param_1 + 0x1c;
  local_c = *(int *)(param_1 + 0x20);
  if (local_c != 0) {
    iVar2 = 0;
    if (local_c == 0) goto LAB_6623420c;
    do {
      piVar1 = (int *)FUN_66250c10(local_c);
      iVar2 = *piVar1;
LAB_6623420c:
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
      }
      FUN_66250bf0(&local_c);
    } while (local_c != 0);
  }
  return 0;
}


