/* Module: rmme3260.dll
   Function: FUN_6623d030
   Address: 6623d030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623d030(int param_1,undefined4 *param_2)

{
  int *this;
  HWND hWnd;
  LONG LVar1;
  void *this_00;
  int *piVar2;
  HDC hdc;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x13c) != 0) || (*(int *)(param_1 + 0x220) != 0)) {
    return 0x80040009;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 100) + 0xb4));
  if (*(int *)(param_1 + 0x60) == 0) {
    puVar5 = param_2;
    puVar6 = (undefined4 *)(param_1 + 0x108);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  hWnd = (HWND)*param_2;
  *(HWND *)(param_1 + 0x13c) = hWnd;
  LVar1 = GetWindowLongA(hWnd,-4);
  *(LONG *)(param_1 + 0x220) = LVar1;
  SetWindowLongA(*(HWND *)(param_1 + 0x13c),-4,0x66241db0);
  this = (int *)(param_1 + -8);
  FUN_66250fc0(&DAT_6627cf80,*(uint *)(param_1 + 0x13c),(int)this);
  if (*(int *)(param_1 + 0x138) == 0) {
    if (*(int *)(param_1 + 0x60) != 0) goto LAB_6623d17e;
    this_00 = operator_new(0x1696);
    if (this_00 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_66248050(this_00,*(int **)(param_1 + 0x8c),this);
    }
    *(int **)(param_1 + 0x138) = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    (**(code **)(**(int **)(param_1 + 0x138) + 4))(*(int **)(param_1 + 0x138));
    FUN_66240620(this,*(int **)(param_1 + 0x138));
    (**(code **)(**(int **)(param_1 + 0x138) + 8))(*(int **)(param_1 + 0x138));
    FUN_66240560(this,(undefined4 *)(param_1 + 0x108));
    FUN_662406f0(this);
    hdc = GetDC((HWND)0x0);
    iVar4 = GetDeviceCaps(hdc,0xc);
    *(int *)(param_1 + 0x1ac) = iVar4;
    iVar4 = GetDeviceCaps(hdc,8);
    *(int *)(param_1 + 0x1b0) = iVar4;
    iVar4 = GetDeviceCaps(hdc,10);
    *(int *)(param_1 + 0x1b4) = iVar4;
    ReleaseDC((HWND)0x0,hdc);
  }
LAB_6623d17e:
  DAT_6627cfd8 = DAT_6627cfd8 + 1;
  if (DAT_6627cfdc == (HHOOK)0x0) {
    DVar3 = GetCurrentThreadId();
    DAT_6627cfdc = SetWindowsHookExA(2,RNxHookChar,(HINSTANCE)0x0,DVar3);
    DVar3 = GetCurrentThreadId();
    DAT_6627cfe0 = SetWindowsHookExA(4,RNxHookAllMessages,(HINSTANCE)0x0,DVar3);
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x1cc) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 1;
    local_18 = *(undefined4 *)(param_1 + 0x13c);
    local_1c = 0x4001;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    (**(code **)(**(int **)(param_1 + 0x58) + 0x14))(*(int **)(param_1 + 0x58),&local_1c);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 100) + 0xb4));
  if (*(int *)(param_1 + 0x60) == 0) {
    SetFocus(*(HWND *)(param_1 + 0x13c));
  }
  return 0;
}


