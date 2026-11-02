/* Module: vidcap30.exe
   Function: FUN_0052b9b0
   Address: 0052b9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052b9b0(int param_1,int param_2,int param_3,double *param_4,double *param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  
  if (2 < param_2) {
    FUN_00549570(param_1,"Unknown filter heuristic method");
    return;
  }
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (((param_3 < 0) || (param_4 == (double *)0x0)) || (param_2 == 1)) {
    param_3 = 0;
  }
  *(char *)(param_1 + 0x1e6) = (char)param_3;
  *(char *)(param_1 + 0x1e5) = (char)param_2;
  if (0 < param_3) {
    if (*(int *)(param_1 + 0x1e7) == 0) {
      uVar2 = FUN_00549470(param_1,param_3);
      *(undefined4 *)(param_1 + 0x1e7) = uVar2;
      iVar3 = 0;
      if (0 < param_3) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined1 *)(*(int *)(param_1 + 0x1e7) + -1 + iVar3) = 0xff;
        } while (iVar3 < param_3);
      }
    }
    if (*(int *)(param_1 + 0x1eb) == 0) {
      uVar2 = FUN_00549470(param_1,param_3 * 2);
      *(undefined4 *)(param_1 + 0x1eb) = uVar2;
      uVar2 = FUN_00549470(param_1,param_3 * 2);
      *(undefined4 *)(param_1 + 0x1ef) = uVar2;
      iVar3 = 0;
      if (0 < param_3) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined2 *)(*(int *)(param_1 + 0x1eb) + -2 + iVar3 * 2) = 0x100;
          *(undefined2 *)(*(int *)(param_1 + 0x1ef) + -2 + iVar3 * 2) = 0x100;
        } while (iVar3 < param_3);
      }
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if (_DAT_00589f10 <= *param_4) {
          uVar1 = ftol();
          *(undefined2 *)(*(int *)(param_1 + 0x1ef) + iVar3 * 2) = uVar1;
          uVar1 = ftol();
          *(undefined2 *)(*(int *)(param_1 + 0x1eb) + iVar3 * 2) = uVar1;
        }
        else {
          *(undefined2 *)(*(int *)(param_1 + 0x1eb) + iVar3 * 2) = 0x100;
          *(undefined2 *)(*(int *)(param_1 + 0x1ef) + iVar3 * 2) = 0x100;
        }
        iVar3 = iVar3 + 1;
        param_4 = param_4 + 1;
      } while (iVar3 < param_3);
    }
  }
  if (*(int *)(param_1 + 499) == 0) {
    uVar2 = FUN_00549470(param_1,10);
    *(undefined4 *)(param_1 + 499) = uVar2;
    uVar2 = FUN_00549470(param_1,10);
    *(undefined4 *)(param_1 + 0x1f7) = uVar2;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 2;
      *(undefined2 *)(*(int *)(param_1 + 499) + -2 + iVar3) = 8;
      *(undefined2 *)(*(int *)(param_1 + 0x1f7) + -2 + iVar3) = 8;
    } while (iVar3 < 10);
  }
  iVar3 = 0;
  pdVar4 = param_5;
  do {
    if ((param_5 == (double *)0x0) || (*pdVar4 < _DAT_00589f10)) {
      *(undefined2 *)(*(int *)(param_1 + 499) + iVar3) = 8;
      *(undefined2 *)(*(int *)(param_1 + 0x1f7) + iVar3) = 8;
    }
    else if (_DAT_00587ad0 <= *pdVar4) {
      uVar1 = ftol();
      *(undefined2 *)(*(int *)(param_1 + 0x1f7) + iVar3) = uVar1;
      uVar1 = ftol();
      *(undefined2 *)(*(int *)(param_1 + 499) + iVar3) = uVar1;
    }
    iVar3 = iVar3 + 2;
    pdVar4 = pdVar4 + 1;
  } while (iVar3 < 10);
  return;
}


