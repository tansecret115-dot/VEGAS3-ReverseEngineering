/* Module: vegas30.exe
   Function: FUN_00452ea0
   Address: 00452ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00452fa5) */

void FUN_00452ea0(int param_1)

{
  int *piVar1;
  POINT pt;
  ulonglong uVar2;
  HWND pHVar3;
  BOOL BVar4;
  uint X;
  longlong lVar5;
  LONG local_8;
  LONG LStack_4;
  
  pHVar3 = GetFocus();
  if ((pHVar3 == *(HWND *)(param_1 + 4)) &&
     (((*(int *)(param_1 + 0xb24) != 0 || ((*(uint *)(param_1 + 0x18) & 2) == 0)) ||
      ((*(uint *)(param_1 + 0x18) & 0x10) != 0)))) {
    FUN_00452e00(param_1);
    if (*(int *)(param_1 + 0xb24) == 0) {
      local_8 = *(int *)(param_1 + 0xb90);
      LStack_4 = *(int *)(param_1 + 0xb94);
      if (local_8 == 0 && LStack_4 == 0) {
        X = 0xffffffff;
      }
      else {
        lVar5 = ftol();
        uVar2 = lVar5 + *(int *)(param_1 + 0xac0);
        X = (uint)uVar2;
        if ((uVar2 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < X))))
        {
          if (0x3fff < (longlong)uVar2) {
            X = 0x3fff;
          }
        }
        else {
          X = 0xffffc000;
        }
      }
      if ((int)X < *(int *)(param_1 + 0xac0)) {
        return;
      }
      if (*(int *)(param_1 + 0xad0) + -1 + *(int *)(param_1 + 0xac0) < (int)X) {
        return;
      }
      SetCaretPos(X,*(int *)(param_1 + 0xac4));
      pHVar3 = *(HWND *)(param_1 + 4);
    }
    else {
      local_8 = -1;
      LStack_4 = -1;
      piVar1 = *(int **)(param_1 + 0x50 + *(int *)(param_1 + 0xb24) * 4);
      (**(code **)(*piVar1 + 0x1c))(param_1,piVar1,0x402,0,&local_8);
      pt.y = LStack_4;
      pt.x = local_8;
      BVar4 = PtInRect((RECT *)(piVar1 + 2),pt);
      if (BVar4 == 0) {
        return;
      }
      SetCaretPos(local_8,LStack_4);
      pHVar3 = *(HWND *)(param_1 + 4);
    }
    ShowCaret(pHVar3);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  }
  return;
}


