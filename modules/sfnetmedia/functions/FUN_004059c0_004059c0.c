/* Module: sfnetmedia.dll
   Function: FUN_004059c0
   Address: 004059c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004059c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
  DAT_004414d4 = RegisterWindowMessageA("WM_ATLGETHOST");
  DAT_004414d0 = RegisterWindowMessageA("WM_ATLGETCONTROL");
  local_30.cbSize = 0x30;
  BVar3 = GetClassInfoExA(DAT_0044183c,"AtlAxWin",&local_30);
  if (BVar3 == 0) {
    local_30.cbSize = 0x30;
    local_30.style = 0;
    local_30.lpfnWndProc = FUN_00403550;
    local_30.cbClsExtra = 0;
    local_30.cbWndExtra = 0;
    local_30.hInstance = DAT_0044183c;
    local_30.hIcon = (HICON)0x0;
    local_30.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_30.hbrBackground = (HBRUSH)0x6;
    local_30.lpszMenuName = (LPCSTR)0x0;
    local_30.lpszClassName = "AtlAxWin";
    local_30.hIconSm = (HICON)0x0;
    RegisterClassExA(&local_30);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  iVar6 = -0x7ff8fff2;
  pvVar4 = GlobalAlloc(0x40,0xe0);
  this = GlobalLock(pvVar4);
  if (this == (LPVOID)0x0) {
LAB_00405af0:
    if (-1 < iVar6) goto LAB_00405af4;
  }
  else {
    pMem = FUN_00405bb0(this,(undefined4 *)0x0);
    if (pMem == (undefined4 *)0x0) goto LAB_00405af0;
    iVar6 = FUN_004062e0((int)pMem);
    if (iVar6 != 0) {
LAB_00405acd:
      FUN_004062f0(pMem);
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      goto LAB_00405af0;
    }
    iVar6 = (**(code **)*pMem)(pMem,&DAT_0043c760,&local_3c);
    if (iVar6 != 0) goto LAB_00405acd;
LAB_00405af4:
    local_34 = (int *)0x0;
    (**(code **)*local_3c)(local_3c,&DAT_00435608,&local_34);
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
      goto LAB_00405b95;
    }
    *param_5 = 0;
  }
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))(local_38);
  }
LAB_00405b95:
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 8))(local_3c);
  }
  return iVar6;
}


