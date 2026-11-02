/* Module: rmbe3260.dll
   Function: FUN_6603e3b0
   Address: 6603e3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6603e3b0(void *this,int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *lParam;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 100) + (uint)*(ushort *)(param_3 + 1) * 4);
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x2c));
    if ((int *)(iVar1 + 0x14) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x24);
    }
    if (iVar2 == 0) {
      lParam = operator_new(0x22);
      if (lParam == (int *)0x0) {
        lParam = (int *)0x0;
      }
      else {
        *lParam = iVar1;
        iVar2 = *(int *)(iVar1 + 0x28);
        lParam[2] = iVar1;
        lParam[1] = iVar2;
        FUN_6602f240(lParam + 5);
        *(undefined4 *)((int)lParam + 0x1e) = 0;
      }
    }
    else {
      lParam = (int *)FUN_6605c4d0((int *)(iVar1 + 0x14));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x2c));
    lParam[3] = param_1;
    lParam[4] = param_2;
    *(undefined4 *)((int)lParam + 0x1e) = param_4;
    lParam[5] = *param_3;
    param_1 = 0;
    lParam[6] = param_3[1];
    *(short *)(lParam + 7) = (short)param_3[2];
    iVar2 = PostThreadMessageA(*(DWORD *)((int)this + 0xa4),0x400,0,(LPARAM)lParam);
    iVar1 = param_1;
    while ((param_1 = iVar1, iVar2 == 0 && (param_1 = iVar1 + 1, iVar1 < 10))) {
      Sleep(100);
      iVar2 = PostThreadMessageA(*(DWORD *)((int)this + 0xa4),0x400,0,(LPARAM)lParam);
      iVar1 = param_1;
    }
    if (param_1 == 10) {
      local_8 = 0xfffc;
    }
    if (*(int *)((int)this + 0x84) != 0) {
      local_8 = *(int *)((int)this + 0x84);
    }
    return local_8;
  }
  return 0;
}


