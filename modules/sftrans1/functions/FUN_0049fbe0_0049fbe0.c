/* Module: sftrans1.dll
   Function: FUN_0049fbe0
   Address: 0049fbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0049fbe0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  
  iVar1 = FUN_004c4710(0x114,param_3,param_4,6,0x1999);
  pHVar2 = GetDlgItem((HWND)param_1[0xc],0xee);
  if (param_4 == pHVar2) {
    iVar3 = ftol();
    if (iVar3 != iVar1) {
      *(double *)(param_1 + 0x1a) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    pHVar2 = GetDlgItem((HWND)param_1[0xc],0x102);
    if (param_4 == pHVar2) {
      iVar3 = ftol();
      if (iVar3 != iVar1) {
        *(double *)(param_1 + 0x2a) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else {
      pHVar2 = GetDlgItem((HWND)param_1[0xc],0x104);
      if (param_4 == pHVar2) {
        iVar3 = ftol();
        if (iVar3 != iVar1) {
          *(double *)(param_1 + 0x2c) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      else {
        pHVar2 = GetDlgItem((HWND)param_1[0xc],0xf2);
        if (param_4 == pHVar2) {
          iVar3 = ftol();
          if (iVar3 != iVar1) {
            *(double *)(param_1 + 0x26) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
        else {
          pHVar2 = GetDlgItem((HWND)param_1[0xc],0xf4);
          if (param_4 == pHVar2) {
            iVar3 = ftol();
            if (iVar3 != iVar1) {
              *(double *)(param_1 + 0x28) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
          else {
            pHVar2 = GetDlgItem((HWND)param_1[0xc],0xfa);
            if (param_4 == pHVar2) {
              iVar3 = ftol();
              if (iVar3 != iVar1) {
                *(double *)(param_1 + 0x32) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
                (**(code **)(*param_1 + 0x2c))(param_1);
                return 0;
              }
            }
            else {
              pHVar2 = GetDlgItem((HWND)param_1[0xc],0xfc);
              if (param_4 == pHVar2) {
                iVar3 = ftol();
                if (iVar3 != iVar1) {
                  *(double *)(param_1 + 0x34) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
                  (**(code **)(*param_1 + 0x2c))(param_1);
                  return 0;
                }
              }
              else {
                pHVar2 = GetDlgItem((HWND)param_1[0xc],0xfe);
                if (param_4 == pHVar2) {
                  iVar3 = ftol();
                  if (iVar3 != iVar1) {
                    *(double *)(param_1 + 0x2e) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
                    (**(code **)(*param_1 + 0x2c))(param_1);
                    return 0;
                  }
                }
                else {
                  pHVar2 = GetDlgItem((HWND)param_1[0xc],0x100);
                  if (param_4 == pHVar2) {
                    iVar3 = ftol();
                    if (iVar3 != iVar1) {
                      *(double *)(param_1 + 0x30) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
                      (**(code **)(*param_1 + 0x2c))(param_1);
                      return 0;
                    }
                  }
                  else {
                    pHVar2 = GetDlgItem((HWND)param_1[0xc],0xf6);
                    if (param_4 == pHVar2) {
                      iVar3 = ftol();
                      if (iVar3 != iVar1) {
                        *(double *)(param_1 + 0x22) = (double)iVar1 * _DAT_00561558 - _DAT_00555908;
                        (**(code **)(*param_1 + 0x2c))(param_1);
                        return 0;
                      }
                    }
                    else {
                      pHVar2 = GetDlgItem((HWND)param_1[0xc],0xf8);
                      if (param_4 == pHVar2) {
                        iVar3 = ftol();
                        if (iVar3 != iVar1) {
                          *(double *)(param_1 + 0x24) =
                               (double)iVar1 * _DAT_00561558 - _DAT_00555908;
                          (**(code **)(*param_1 + 0x2c))(param_1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


