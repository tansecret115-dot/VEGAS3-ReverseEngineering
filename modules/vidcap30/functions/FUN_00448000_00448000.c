/* Module: vidcap30.exe
   Function: FUN_00448000
   Address: 00448000
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00448000(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar1 = *param_3;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  local_8 = 0;
  if (0 < iVar1) {
    do {
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar2 = *(int *)(param_3[2] + local_8 * 4);
      iVar4 = *(int *)(iVar2 + 0x20c);
      if (iVar4 == -1) {
        iVar5 = FUN_0044cae0(param_2);
        if (((((iVar5 == 4) || (iVar5 = FUN_0044cae0(param_2), iVar5 == 2)) ||
             (iVar5 = FUN_0044cae0(param_2), iVar5 == 1)) &&
            ((*(int *)(iVar2 + 0x208) == 5 || (*(int *)(iVar2 + 0x208) == 4)))) &&
           (iVar5 = FUN_0045b2c0(iVar2,DAT_005bba28), iVar5 != 0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = 0;
        }
      }
      else {
        iVar2 = FUN_0044c5f0(iVar4);
        iVar3 = FUN_0044cae0(iVar4);
        if (((((iVar3 == 3) && (iVar3 = FUN_0044cae0(param_2), iVar3 == 3)) && (iVar4 != param_2))
            && ((iVar2 != param_2 && (iVar3 = FUN_0044c640(param_2,iVar4), iVar3 == 0)))) &&
           (param_4 == 0)) {
          iVar5 = 1;
          *(undefined4 *)(param_1 + 0x2f4) = 1;
        }
        else {
          iVar3 = FUN_0044cae0(iVar4);
          if (((iVar3 == 3) && (iVar3 = FUN_0044cae0(param_2), iVar3 == 3)) &&
             ((iVar3 = FUN_0044c640(param_2,iVar4), iVar3 == 0 && (param_4 != 0)))) {
            iVar5 = 1;
          }
          else {
            iVar3 = FUN_0044cae0(iVar4);
            if ((iVar3 == 4) && (iVar3 = FUN_0044cae0(param_2), iVar3 == 3)) {
              iVar5 = 1;
            }
            else {
              iVar3 = FUN_0044cae0(iVar4);
              if ((iVar3 == 7) && (iVar3 = FUN_0044cae0(param_2), iVar3 == 3)) {
                iVar5 = 1;
              }
              else if ((iVar4 == param_2) || (iVar3 = FUN_0044cae0(param_2), iVar3 != 6)) {
                iVar3 = FUN_0044cae0(iVar4);
                if ((iVar3 == 5) &&
                   ((iVar3 = FUN_0044cae0(iVar2), iVar3 == 4 &&
                    (iVar3 = FUN_0044cae0(param_2), iVar3 == 3)))) {
                  iVar5 = 1;
                }
                else {
                  iVar3 = FUN_0044cae0(iVar4);
                  if ((iVar3 == 5) &&
                     ((iVar3 = FUN_0044cae0(iVar2), iVar3 == 2 &&
                      (iVar3 = FUN_0044cae0(param_2), iVar3 == 3)))) {
                    iVar5 = 1;
                  }
                  else {
                    iVar3 = FUN_0044cae0(iVar4);
                    if ((iVar3 == 5) &&
                       ((iVar3 = FUN_0044cae0(iVar2), iVar3 == 7 &&
                        (iVar3 = FUN_0044cae0(param_2), iVar3 == 3)))) {
                      iVar5 = 1;
                    }
                    else {
                      iVar4 = FUN_0044cae0(iVar4);
                      if ((iVar4 == 5) &&
                         (((iVar4 = FUN_0044cae0(iVar2), iVar4 == 3 &&
                           (iVar4 = FUN_0044cae0(param_2), iVar4 == 3)) && (param_2 != iVar2)))) {
                        iVar5 = 1;
                        *(undefined4 *)(param_1 + 0x2f4) = 1;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
              }
            }
          }
        }
      }
      local_8 = local_8 + 1;
      *(int *)(param_1 + 0x2f0) = iVar5;
    } while (local_8 < iVar1);
  }
  return iVar5;
}


