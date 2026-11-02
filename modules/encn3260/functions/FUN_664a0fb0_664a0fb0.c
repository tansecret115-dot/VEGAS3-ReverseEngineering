/* Module: encn3260.dll
   Function: FUN_664a0fb0
   Address: 664a0fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664a101b) */

int FUN_664a0fb0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND hWnd;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  FUN_664a21d0((void *)(param_1 + -4));
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x14))
                      (piVar1,*(undefined4 *)(param_1 + 0xd9),*(undefined4 *)(param_1 + 0xdd),
                       &param_2);
  }
  if (iVar3 == 0) {
    *(int *)(param_1 + 0xd9) = param_2;
    *(int *)(param_1 + 0xdd) = param_3;
    local_8 = param_1 + 0x66;
    *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) | 8;
    local_c = *(int *)(param_1 + 0x6a);
    while (local_c != 0) {
      puVar2 = (undefined4 *)FUN_664bab80(local_c);
      (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,(int *)(param_1 + 0xd9));
      FUN_664bab40(&local_c);
    }
    if ((*(byte *)(param_1 + 0x5c) & 0x20) == 0) {
      hWnd = *(HWND *)(param_1 + 0x10d);
    }
    else {
      hWnd = *(HWND *)(param_1 + 0xed);
    }
    param_2 = ftol();
    param_3 = ftol();
    if (hWnd != (HWND)0x0) {
      GetWindowRect(hWnd,&local_1c);
      MoveWindow(hWnd,param_2,param_3,local_1c.right - local_1c.left,local_1c.bottom - local_1c.top,
                 1);
      return 0;
    }
    *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) | 1;
  }
  return iVar3;
}


