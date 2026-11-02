/* Module: vegas30.exe
   Function: FUN_005d9660
   Address: 005d9660
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d9660(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  
  iVar4 = 0;
  local_10 = 0;
  piVar1 = (int *)FUN_005d9710(param_1);
  if (piVar1 == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *piVar1;
  }
  if (local_c < 1) {
    return 0;
  }
  puVar2 = (undefined4 *)piVar1[2];
  do {
    iVar3 = 0;
    piVar1 = *(int **)*puVar2;
    if (0 < *piVar1) {
      do {
        if ((*(int *)(piVar1[1] * iVar3 + piVar1[2]) == *(int *)(param_2 + 0x30)) &&
           (*(int *)(piVar1[1] * iVar3 + piVar1[2] + 4) == *(int *)(param_2 + 0x34))) {
          local_10 = local_10 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = local_10;
      } while (iVar3 < *piVar1);
    }
    puVar2 = puVar2 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return iVar4;
}


