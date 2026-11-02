/* Module: vidcap30.exe
   Function: FUN_00490bd0
   Address: 00490bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00490bd0(int *param_1,int *param_2,undefined4 param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  iVar4 = 4;
  bVar7 = true;
  piVar5 = &DAT_005860d0;
  piVar6 = param_2;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *piVar5 == *piVar6;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar4 = 4;
    bVar7 = true;
    piVar5 = &DAT_005a5aa8;
    piVar6 = param_2;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar4 = 4;
      bVar7 = true;
      piVar5 = &DAT_005860f0;
      piVar6 = param_2;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        (**(code **)(*param_1 + 4))(param_1);
        if (param_1 != (int *)0x0) {
          *param_2 = (int)(param_1 + 1);
          return 0;
        }
      }
      else {
        iVar4 = 4;
        bVar7 = true;
        piVar5 = &DAT_00586190;
        piVar6 = param_2;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *piVar5 == *piVar6;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          (**(code **)(*param_1 + 4))(param_1);
          if (param_1 != (int *)0x0) {
            *param_2 = (int)(param_1 + 2);
            return 0;
          }
        }
        else {
          iVar4 = 4;
          bVar7 = true;
          piVar5 = &DAT_005861d0;
          piVar6 = param_2;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar7 = *piVar5 == *piVar6;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            (**(code **)(*param_1 + 4))(param_1);
            if (param_1 != (int *)0x0) {
              *param_2 = (int)(param_1 + 3);
              return 0;
            }
          }
          else {
            iVar4 = 4;
            bVar7 = true;
            piVar5 = &DAT_00586230;
            piVar6 = param_2;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar7 = *piVar5 == *piVar6;
              piVar5 = piVar5 + 1;
              piVar6 = piVar6 + 1;
            } while (bVar7);
            if (bVar7) {
              (**(code **)(*param_1 + 4))(param_1);
              if (param_1 != (int *)0x0) {
                *param_2 = (int)(param_1 + 4);
                return 0;
              }
            }
            else {
              iVar4 = 4;
              bVar7 = true;
              piVar5 = &DAT_00586080;
              piVar6 = param_2;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar7 = *piVar5 == *piVar6;
                piVar5 = piVar5 + 1;
                piVar6 = piVar6 + 1;
              } while (bVar7);
              if (bVar7) {
                (**(code **)(*param_1 + 4))(param_1);
                if (param_1 != (int *)0x0) {
                  *param_2 = (int)(param_1 + 5);
                  return 0;
                }
              }
              else {
                iVar4 = 4;
                bVar7 = true;
                piVar5 = &DAT_00586110;
                piVar6 = param_2;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar7 = *piVar5 == *piVar6;
                  piVar5 = piVar5 + 1;
                  piVar6 = piVar6 + 1;
                } while (bVar7);
                if (bVar7) {
                  (**(code **)(*param_1 + 4))(param_1);
                  if (param_1 != (int *)0x0) {
                    *param_2 = (int)(param_1 + 6);
                    return 0;
                  }
                }
                else {
                  iVar4 = 4;
                  bVar7 = true;
                  piVar5 = &DAT_005861f0;
                  piVar6 = param_2;
                  do {
                    if (iVar4 == 0) break;
                    iVar4 = iVar4 + -1;
                    bVar7 = *piVar5 == *piVar6;
                    piVar5 = piVar5 + 1;
                    piVar6 = piVar6 + 1;
                  } while (bVar7);
                  if (bVar7) {
                    (**(code **)(*param_1 + 4))(param_1);
                    if (param_1 != (int *)0x0) {
                      *param_2 = (int)(param_1 + 7);
                      return 0;
                    }
                  }
                  else {
                    iVar4 = 4;
                    bVar7 = true;
                    piVar5 = &DAT_00586150;
                    piVar6 = param_2;
                    do {
                      if (iVar4 == 0) break;
                      iVar4 = iVar4 + -1;
                      bVar7 = *piVar5 == *piVar6;
                      piVar5 = piVar5 + 1;
                      piVar6 = piVar6 + 1;
                    } while (bVar7);
                    if (!bVar7) {
                      iVar4 = 4;
                      bVar7 = true;
                      piVar5 = &DAT_00586140;
                      do {
                        if (iVar4 == 0) break;
                        iVar4 = iVar4 + -1;
                        bVar7 = *piVar5 == *param_2;
                        piVar5 = piVar5 + 1;
                        param_2 = param_2 + 1;
                      } while (bVar7);
                      if (bVar7) {
                        hMem = GlobalAlloc(0x40,0x38);
                        pvVar1 = GlobalLock(hMem);
                        if (pvVar1 != (LPVOID)0x0) {
                          puVar2 = (undefined4 *)FUN_004cfb50(param_1,param_1[0x97]);
                          if (puVar2 != (undefined4 *)0x0) {
                            uVar3 = (**(code **)*puVar2)(puVar2,&DAT_00586140,param_3);
                            return uVar3;
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


