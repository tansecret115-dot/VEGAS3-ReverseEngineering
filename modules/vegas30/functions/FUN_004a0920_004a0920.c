/* Module: vegas30.exe
   Function: FUN_004a0920
   Address: 004a0920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a0920(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  RECT local_10;
  
  uVar3 = param_3 & 0xffff9ffd;
  switch(*(undefined4 *)(param_1 + 0xa4)) {
  case 0:
    if ((((param_2 & 0x80) != 0) && ((param_3 & 0xffff9ebd) == 0)) && ((param_2 & 0xfffbf37d) == 0))
    {
      iVar5 = 0;
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar2 = (int *)0x0;
        param_3 = 0;
      }
      else {
        piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        if (piVar2 == (int *)0x0) {
          param_3 = 0;
        }
        else {
          param_3 = *piVar2;
        }
      }
      if ((int)param_3 < 1) {
        return;
      }
      do {
        iVar4 = *(int *)(piVar2[2] + iVar5 * 4);
        if (((*(int *)(param_1 + 0xbc0) <= *(int *)(iVar4 + 0x18)) &&
            ((*(byte *)(iVar4 + 0x10) & 0x80) != 0)) &&
           (*(int *)(*(int *)(iVar4 + 0x69c) + 0x1c) < *(int *)(param_1 + 0xacc))) {
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(*(int *)(iVar4 + 0x69c) + 0x18),0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_3);
      return;
    }
    break;
  case 5:
  case 6:
  case 7:
  case 0x15:
  case 0x16:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    uVar3 = param_3 & 0xffff9efd;
  case 4:
    if ((*(uint *)(param_1 + 0x174) & 0xf00) == 0x300) {
      if ((((uVar3 & 0xfffffeff) == 0) && ((param_2 & 0xfffbf3fd) == 0)) &&
         (*(int *)(param_1 + 0xce4) != 0)) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xce4) + 0x69c);
        local_10.left = *(LONG *)(iVar5 + 0x18);
        local_10.top = *(LONG *)(iVar5 + 0x1c);
        local_10.right = *(LONG *)(iVar5 + 0x20);
        local_10.bottom = *(LONG *)(iVar5 + 0x24);
        InvalidateRect(*(HWND *)(param_1 + 4),&local_10,0);
        return;
      }
    }
    else if (((uVar3 & 0xfff7ffbf) == 0) && ((param_2 & 0xfffbf3fd) == 0)) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar5 = *piVar2;
      iVar4 = 0;
      if (iVar5 < 1) {
        return;
      }
      do {
        iVar1 = *(int *)(piVar2[2] + iVar4 * 4);
        if ((((*(uint *)(iVar1 + 0x10) & 0x100000) != 0) &&
            (*(int *)(param_1 + 0xbc0) <= *(int *)(iVar1 + 0x18))) &&
           (*(int *)(*(int *)(iVar1 + 0x69c) + 0x1c) < *(int *)(param_1 + 0xacc))) {
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(*(int *)(iVar1 + 0x69c) + 0x18),0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
      return;
    }
  }
  FUN_004530a0(param_1,0);
  return;
}


