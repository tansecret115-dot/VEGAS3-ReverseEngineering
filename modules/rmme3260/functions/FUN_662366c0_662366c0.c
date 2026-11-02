/* Module: rmme3260.dll
   Function: FUN_662366c0
   Address: 662366c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66236748) */

int FUN_662366c0(int param_1,int param_2,int param_3)

{
  void *this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  HWND hWndTo;
  HWND hWnd;
  float10 fVar4;
  float10 extraout_ST0;
  LPPOINT lpPoints;
  UINT cPoints;
  undefined1 local_24 [12];
  LONG LStack_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  this = (void *)(param_1 + -4);
  FUN_66237ea0(this);
  piVar1 = *(int **)(param_1 + 0x54);
  param_1 = 0;
  if (piVar1 != (int *)0x0) {
    param_1 = (**(code **)(*piVar1 + 0x18))
                        (piVar1,*(undefined4 *)(iVar2 + 0xd1),*(undefined4 *)(iVar2 + 0xd5),&param_2
                        );
    *(int *)(iVar2 + 0xd1) = param_2;
    *(int *)(iVar2 + 0xd5) = param_3;
  }
  if (param_1 == 0) {
    local_8 = iVar2 + 0x66;
    *(int *)(iVar2 + 0xd1) = param_2;
    *(int *)(iVar2 + 0xd5) = param_3;
    *(byte *)(iVar2 + 0x5d) = *(byte *)(iVar2 + 0x5d) | 0x10;
    local_c = *(int *)(iVar2 + 0x6a);
    while (local_c != 0) {
      puVar3 = (undefined4 *)FUN_66250c10(local_c);
      (**(code **)(*(int *)*puVar3 + 0x10))((int *)*puVar3,(int *)(iVar2 + 0xd1));
      FUN_66250bf0(&local_c);
    }
    if ((*(byte *)(iVar2 + 0x5c) & 0x20) != 0) {
      if (*(int *)(iVar2 + 0x48) == 0) {
        fVar4 = FUN_662369d0(this,&param_2);
        unique0x0000aa00 = (double)fVar4;
        local_14 = param_2;
        local_10 = param_3;
        param_2 = ftol();
        param_3 = ftol();
        if (extraout_ST0 != (float10)*(double *)(iVar2 + 0x111)) {
          *(double *)(iVar2 + 0x111) = (double)extraout_ST0;
          FUN_66236b80(this,local_24._8_4_,LStack_18,&local_14);
          FUN_66236b10(this);
        }
      }
      else {
        param_2 = ftol();
        param_3 = ftol();
      }
    }
    if ((*(byte *)(iVar2 + 0x5c) & 0x20) == 0) {
      hWnd = *(HWND *)(iVar2 + 0x10d);
    }
    else {
      hWnd = *(HWND *)(iVar2 + 0xed);
    }
    if (hWnd == (HWND)0x0) {
      *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) | 0x80;
    }
    else {
      GetWindowRect(hWnd,(LPRECT)local_24);
      lpPoints = (LPPOINT)local_24;
      cPoints = 2;
      hWndTo = GetParent(hWnd);
      MapWindowPoints((HWND)0x0,hWndTo,lpPoints,cPoints);
      MoveWindow(hWnd,local_24._0_4_,local_24._4_4_,param_2,param_3,1);
    }
    if (*(int **)(iVar2 + 0x7a) != (int *)0x0) {
      FUN_66245c10(*(int **)(iVar2 + 0x7a));
    }
    if (*(int **)(iVar2 + 0x7e) != (int *)0x0) {
      FUN_66245c10(*(int **)(iVar2 + 0x7e));
    }
  }
  return param_1;
}


