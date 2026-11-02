/* Module: vegas30.exe
   Function: FUN_005d9aa0
   Address: 005d9aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d9aa0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_2 == 0) {
    piVar2 = *(int **)(param_1 + 0x1dc);
    if (piVar2 == (int *)0x0) {
      param_2 = 0;
    }
    else {
      param_2 = *piVar2;
    }
    param_1 = 0;
    if (0 < param_2) {
      piVar2 = (int *)piVar2[2];
      do {
        if ((param_4 >> 0x1c & 0xfU) == *(uint *)(*piVar2 + 4)) {
          piVar3 = *(int **)(*piVar2 + 0x24);
          iVar5 = 0;
          iVar4 = *piVar3;
          if (0 < iVar4) {
            piVar3 = (int *)piVar3[2];
            do {
              iVar1 = *piVar3;
              if ((param_3 == *(int *)(iVar1 + 0x30)) && (param_4 == *(int *)(iVar1 + 0x34))) {
                return iVar1;
              }
              iVar5 = iVar5 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar5 < iVar4);
          }
        }
        param_1 = param_1 + 1;
        piVar2 = piVar2 + 1;
      } while (param_1 < param_2);
    }
  }
  else {
    piVar2 = *(int **)(param_2 + 0x24);
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (0 < iVar5) {
      piVar2 = (int *)piVar2[2];
      while ((iVar1 = *piVar2, param_3 != *(int *)(iVar1 + 0x30) ||
             (param_4 != *(int *)(iVar1 + 0x34)))) {
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
        if (iVar5 <= iVar4) {
          return 0;
        }
      }
      return iVar1;
    }
  }
  return 0;
}


