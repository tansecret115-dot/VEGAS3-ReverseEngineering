/* Module: sfmarket2.dll
   Function: FUN_0045d5d0
   Address: 0045d5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045d5d0(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 extraout_ST0;
  
  iVar2 = ftol();
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  if ((float10)_DAT_0049c7a8 < extraout_ST0) {
    uVar3 = ftol();
    *(char *)((int)param_1 + 3) = (char)iVar2;
    switch(uVar3) {
    case 0:
    case 6:
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 2) = uVar1;
      break;
    case 1:
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 2) = uVar1;
      break;
    case 2:
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 2) = uVar1;
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 1) = uVar1;
      uVar1 = ftol();
      *(undefined1 *)param_1 = uVar1;
      return;
    case 3:
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 2) = uVar1;
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 1) = uVar1;
      uVar1 = ftol();
      *(undefined1 *)param_1 = uVar1;
      return;
    case 4:
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 2) = uVar1;
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 1) = uVar1;
      uVar1 = ftol();
      *(undefined1 *)param_1 = uVar1;
      return;
    case 5:
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 2) = uVar1;
      uVar1 = ftol();
      *(undefined1 *)((int)param_1 + 1) = uVar1;
      uVar1 = ftol();
      *(undefined1 *)param_1 = uVar1;
      return;
    default:
      return;
    }
    uVar1 = ftol();
    *(undefined1 *)((int)param_1 + 1) = uVar1;
    uVar1 = ftol();
    *(undefined1 *)param_1 = uVar1;
    return;
  }
  *param_1 = 0;
  *(char *)((int)param_1 + 3) = (char)iVar2;
  return;
}


