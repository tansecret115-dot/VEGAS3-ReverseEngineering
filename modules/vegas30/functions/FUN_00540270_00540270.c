/* Module: vegas30.exe
   Function: FUN_00540270
   Address: 00540270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00540270(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    return 0x80070057;
  }
  piVar1 = *(int **)(param_1 + 0x22c);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  iVar2 = 0;
  if (0 < *piVar1) {
    piVar3 = (int *)piVar1[2];
    do {
      if (*(uint *)(*piVar3 + 0x2c) < *(uint *)(param_2 + 0x2c)) break;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *piVar1);
  }
  *param_3 = iVar2;
  return 0;
}


