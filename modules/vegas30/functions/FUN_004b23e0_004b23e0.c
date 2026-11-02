/* Module: vegas30.exe
   Function: FUN_004b23e0
   Address: 004b23e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b23e0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_2;
  piVar3 = &DAT_00633558;
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
    piVar2 = param_2;
    piVar3 = &DAT_00633718;
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
      piVar2 = param_2;
      piVar3 = &DAT_0060ef78;
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
        piVar2 = param_2;
        piVar3 = &DAT_0060ef48;
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
          piVar2 = param_2;
          piVar3 = &DAT_0060ef88;
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
        }
      }
      (**(code **)(*param_1 + 4))(param_1);
      if (param_1 == (int *)0x0) {
        *param_2 = 0;
        return 0;
      }
      *param_2 = (int)(param_1 + 1);
      return 0;
    }
  }
  *param_3 = param_1;
  return 0;
}


