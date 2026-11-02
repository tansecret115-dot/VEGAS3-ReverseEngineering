/* Module: vegas30.exe
   Function: FUN_0056a330
   Address: 0056a330
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0056a330(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int local_8;
  
  uVar4 = 0x80070057;
  iVar5 = 0;
  if (*(int **)(param_1 + 0x2b0) != (int *)0x0) {
    iVar5 = **(int **)(param_1 + 0x2b0);
  }
  if (param_2 < iVar5) {
    iVar5 = 0;
    local_8 = 0;
    if (-1 < param_2) {
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + local_8 * 4);
        if (local_8 == param_2) {
          iVar2 = *(int *)(param_1 + 0x224);
          iVar1 = *(int *)(iVar1 + 0x338);
          uVar4 = 1;
          if (iVar2 < iVar5) {
            bVar3 = iVar1 + iVar5 <= *(int *)(param_1 + 0x228) + iVar2;
            if (!bVar3) {
              FUN_004d5960(((iVar1 - *(int *)(param_1 + 0x228)) - iVar2) + iVar5,0);
              InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,0);
              UpdateWindow(*(HWND *)(param_1 + 0x24));
            }
            uVar4 = (uint)bVar3;
          }
          else if (iVar5 < iVar2) {
            FUN_004d5960(iVar5 - iVar2,0);
            InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,0);
            UpdateWindow(*(HWND *)(param_1 + 0x24));
            uVar4 = 0;
          }
        }
        else {
          iVar5 = iVar5 + *(int *)(iVar1 + 0x338);
        }
        local_8 = local_8 + 1;
      } while (local_8 <= param_2);
    }
  }
  return uVar4;
}


