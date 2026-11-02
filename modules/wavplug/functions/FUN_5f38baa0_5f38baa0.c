/* Module: wavplug.dll
   Function: FUN_5f38baa0
   Address: 5f38baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f38baa0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = &DAT_5f3c9aa0;
  piVar3 = param_2;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_5f3d2680;
    piVar3 = param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      iVar1 = 4;
      bVar4 = true;
      piVar2 = &DAT_5f3c9a70;
      piVar3 = param_2;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *piVar2 == *piVar3;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x0) {
          *param_2 = (int)(param_1 + 1);
          return 0;
        }
      }
      else {
        iVar1 = 4;
        bVar4 = true;
        piVar2 = &DAT_5f3c9c40;
        piVar3 = param_2;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *piVar2 == *piVar3;
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (bVar4);
        if (bVar4) {
          (**(code **)(*param_1 + 4))(param_1);
          if (param_1 != (int *)0x0) {
            *param_2 = (int)(param_1 + 2);
            return 0;
          }
        }
        else {
          iVar1 = 4;
          bVar4 = true;
          piVar2 = &DAT_5f3c9c50;
          piVar3 = param_2;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = *piVar2 == *piVar3;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (bVar4);
          if (bVar4) {
            (**(code **)(*param_1 + 4))(param_1);
            if (param_1 != (int *)0x0) {
              *param_2 = (int)(param_1 + 3);
              return 0;
            }
          }
          else {
            iVar1 = 4;
            bVar4 = true;
            piVar2 = &DAT_5f3c9bc0;
            piVar3 = param_2;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar4 = *piVar2 == *piVar3;
              piVar2 = piVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (bVar4);
            if (!bVar4) {
              return 0x80004002;
            }
            (**(code **)(*param_1 + 4))(param_1);
            if (param_1 != (int *)0x0) {
              *param_2 = (int)(param_1 + 4);
              return 0;
            }
          }
        }
      }
      *param_2 = 0;
      return 0;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = (int)param_1;
  return 0;
}


