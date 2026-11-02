/* Module: sfpaplug.dll
   Function: FUN_0043d0b0
   Address: 0043d0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043d0b0(int *param_1,int *param_2,undefined4 param_3)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = 4;
  bVar6 = true;
  piVar4 = &DAT_0044dc60;
  piVar5 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar3 = 4;
    bVar6 = true;
    piVar4 = &DAT_00455500;
    piVar5 = param_2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar3 = 4;
      bVar6 = true;
      piVar4 = &DAT_0044dc80;
      piVar5 = param_2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x0) {
          *param_2 = (int)(param_1 + 1);
          return 0;
        }
      }
      else {
        iVar3 = 4;
        bVar6 = true;
        piVar4 = &DAT_0044dd20;
        piVar5 = param_2;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) {
          (**(code **)(*param_1 + 4))(param_1);
          if (param_1 != (int *)0x0) {
            *param_2 = (int)(param_1 + 2);
            return 0;
          }
        }
        else {
          iVar3 = 4;
          bVar6 = true;
          piVar4 = &DAT_0044dd60;
          piVar5 = param_2;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar6 = *piVar4 == *piVar5;
            piVar4 = piVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar6);
          if (bVar6) {
            (**(code **)(*param_1 + 4))(param_1);
            if (param_1 != (int *)0x0) {
              *param_2 = (int)(param_1 + 3);
              return 0;
            }
          }
          else {
            iVar3 = 4;
            bVar6 = true;
            piVar4 = &DAT_0044ddc0;
            piVar5 = param_2;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar6 = *piVar4 == *piVar5;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (bVar6);
            if (bVar6) {
              (**(code **)(*param_1 + 4))(param_1);
              if (param_1 != (int *)0x0) {
                *param_2 = (int)(param_1 + 4);
                return 0;
              }
            }
            else {
              iVar3 = 4;
              bVar6 = true;
              piVar4 = &DAT_0044dc10;
              piVar5 = param_2;
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar6 = *piVar4 == *piVar5;
                piVar4 = piVar4 + 1;
                piVar5 = piVar5 + 1;
              } while (bVar6);
              if (bVar6) {
                (**(code **)(*param_1 + 4))(param_1);
                if (param_1 != (int *)0x0) {
                  *param_2 = (int)(param_1 + 5);
                  return 0;
                }
              }
              else {
                iVar3 = 4;
                bVar6 = true;
                piVar4 = &DAT_0044dca0;
                piVar5 = param_2;
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar6 = *piVar4 == *piVar5;
                  piVar4 = piVar4 + 1;
                  piVar5 = piVar5 + 1;
                } while (bVar6);
                if (bVar6) {
                  (**(code **)(*param_1 + 4))(param_1);
                  if (param_1 != (int *)0x0) {
                    *param_2 = (int)(param_1 + 6);
                    return 0;
                  }
                }
                else {
                  iVar3 = 4;
                  bVar6 = true;
                  piVar4 = &DAT_0044dd80;
                  piVar5 = param_2;
                  do {
                    if (iVar3 == 0) break;
                    iVar3 = iVar3 + -1;
                    bVar6 = *piVar4 == *piVar5;
                    piVar4 = piVar4 + 1;
                    piVar5 = piVar5 + 1;
                  } while (bVar6);
                  if (bVar6) {
                    (**(code **)(*param_1 + 4))(param_1);
                    if (param_1 != (int *)0x0) {
                      *param_2 = (int)(param_1 + 7);
                      return 0;
                    }
                  }
                  else {
                    iVar3 = 4;
                    bVar6 = true;
                    piVar4 = &DAT_0044dce0;
                    piVar5 = param_2;
                    do {
                      if (iVar3 == 0) break;
                      iVar3 = iVar3 + -1;
                      bVar6 = *piVar4 == *piVar5;
                      piVar4 = piVar4 + 1;
                      piVar5 = piVar5 + 1;
                    } while (bVar6);
                    if (!bVar6) {
                      iVar3 = 4;
                      bVar6 = true;
                      piVar4 = &DAT_0044dcd0;
                      do {
                        if (iVar3 == 0) break;
                        iVar3 = iVar3 + -1;
                        bVar6 = *piVar4 == *param_2;
                        piVar4 = piVar4 + 1;
                        param_2 = param_2 + 1;
                      } while (bVar6);
                      if (bVar6) {
                        hMem = GlobalAlloc(0x40,0x38);
                        this = GlobalLock(hMem);
                        if (this != (LPVOID)0x0) {
                          puVar1 = FUN_00446ce0(this,param_1,param_1[0x97]);
                          if (puVar1 != (undefined4 *)0x0) {
                            uVar2 = (**(code **)*puVar1)(puVar1,&DAT_0044dcd0,param_3);
                            return uVar2;
                          }
                        }
                      }
                      return 0x80004002;
                    }
                    (**(code **)(*param_1 + 4))(param_1);
                    if (param_1 != (int *)0x0) {
                      *param_2 = (int)(param_1 + 8);
                      return 0;
                    }
                  }
                }
              }
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


