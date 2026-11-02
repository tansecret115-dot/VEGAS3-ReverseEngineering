/* Module: sfmarket2.dll
   Function: FUN_00407a80
   Address: 00407a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00407a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  BOOL BVar3;
  HGLOBAL pvVar4;
  LPVOID this;
  undefined4 *pMem;
  undefined4 uVar5;
  int *unaff_ESI;
  int iVar6;
  int *local_3c;
  int *local_38;
  int *local_34;
  tagWNDCLASSEXA local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004a9c3c);
  DAT_004a99b4 = RegisterWindowMessageA("WM_ATLGETHOST");
  DAT_004a99b0 = RegisterWindowMessageA("WM_ATLGETCONTROL");
  local_30.cbSize = 0x30;
  BVar3 = GetClassInfoExA(DAT_004a9c0c,"AtlAxWin",&local_30);
  if (BVar3 == 0) {
    local_30.cbSize = 0x30;
    local_30.style = 0;
    local_30.lpfnWndProc = FUN_00405d20;
    local_30.cbClsExtra = 0;
    local_30.cbWndExtra = 0;
    local_30.hInstance = DAT_004a9c0c;
    local_30.hIcon = (HICON)0x0;
    local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_30.hbrBackground = (HBRUSH)0x6;
    local_30.lpszMenuName = (LPCSTR)0x0;
    local_30.lpszClassName = "AtlAxWin";
    local_30.hIconSm = (HICON)0x0;
    RegisterClassExA(&local_30);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004a9c3c);
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  iVar6 = -0x7ff8fff2;
  pvVar4 = GlobalAlloc(0x40,0xe0);
  this = GlobalLock(pvVar4);
  if (this == (LPVOID)0x0) {
LAB_00407bb0:
    if (-1 < iVar6) goto LAB_00407bb4;
  }
  else {
    pMem = FUN_00407c70(this,(undefined4 *)0x0);
    if (pMem == (undefined4 *)0x0) goto LAB_00407bb0;
    iVar6 = FUN_004083a0((int)pMem);
    if (iVar6 != 0) {
LAB_00407b8d:
      FUN_004083b0(pMem);
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      goto LAB_00407bb0;
    }
    iVar6 = (**(code **)*pMem)(pMem,&DAT_004a4080,&local_3c);
    if (iVar6 != 0) goto LAB_00407b8d;
LAB_00407bb4:
    local_34 = (int *)0x0;
    (**(code **)*local_3c)(local_3c,&DAT_004956a8,&local_34);
    uVar5 = Ordinal_2(local_30.lpszClassName);
    iVar6 = (**(code **)(*unaff_ESI + 0x10))
                      (unaff_ESI,uVar5,local_30.lpszClassName,local_30.hIconSm,&stack0xffffffb8,
                       param_2,param_3);
    Ordinal_6(uVar5);
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 8))(local_34);
    }
  }
  piVar2 = local_38;
  piVar1 = local_3c;
  if (param_4 != (undefined4 *)0x0) {
    if (iVar6 < 0) {
      *param_4 = 0;
    }
    else {
      local_3c = (int *)0x0;
      *param_4 = piVar1;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    if (-1 < iVar6) {
      local_38 = (int *)0x0;
      *param_5 = piVar2;
      goto LAB_00407c55;
    }
    *param_5 = 0;
  }
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))(local_38);
  }
LAB_00407c55:
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 8))(local_3c);
  }
  return iVar6;
}


