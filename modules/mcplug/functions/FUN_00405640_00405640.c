/* Module: mcplug.dll
   Function: FUN_00405640
   Address: 00405640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405640(int *param_1,int *param_2,undefined4 *param_3)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 4;
  bVar5 = true;
  piVar3 = &DAT_00475b60;
  piVar4 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = &DAT_004839b8;
    piVar4 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = &DAT_00475b30;
      piVar4 = param_2;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x0) {
          *param_2 = (int)(param_1 + 1);
          return 0;
        }
      }
      else {
        iVar2 = 4;
        bVar5 = true;
        piVar3 = &DAT_00475b40;
        piVar4 = param_2;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *piVar3 == *piVar4;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          (**(code **)(*param_1 + 4))(param_1);
          if (param_1 != (int *)0x0) {
            *param_2 = (int)(param_1 + 2);
            return 0;
          }
        }
        else {
          iVar2 = 4;
          bVar5 = true;
          piVar3 = &DAT_00475d90;
          piVar4 = param_2;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            hMem = GlobalAlloc(0x40,0x14);
            this = GlobalLock(hMem);
            if (this != (LPVOID)0x0) {
              puVar1 = FUN_00408e80(this,param_1,param_1[8],param_1[0x11]);
              if (puVar1 != (undefined4 *)0x0) {
                *param_3 = puVar1;
                return 0;
              }
            }
            return 0x8007000e;
          }
          iVar2 = 4;
          bVar5 = true;
          piVar3 = &DAT_00475d10;
          piVar4 = param_2;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = *piVar3 == *piVar4;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            (**(code **)(*param_1 + 4))(param_1);
            if (param_1 != (int *)0x0) {
              *param_2 = (int)(param_1 + 3);
              return 0;
            }
          }
          else {
            iVar2 = 4;
            bVar5 = true;
            piVar3 = &DAT_00475d00;
            piVar4 = param_2;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar5 = *piVar3 == *piVar4;
              piVar3 = piVar3 + 1;
              piVar4 = piVar4 + 1;
            } while (bVar5);
            if (!bVar5) {
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
  iVar2 = 4;
  bVar5 = true;
  piVar3 = &DAT_004839b8;
  piVar4 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if ((bVar5) && (DAT_00487a78 == 0)) {
    return 0x80004005;
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = (int)param_1;
  return 0;
}


