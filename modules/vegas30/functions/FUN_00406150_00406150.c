/* Module: vegas30.exe
   Function: FUN_00406150
   Address: 00406150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  BOOL BVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  undefined4 *pMem;
  undefined4 uVar6;
  int *unaff_ESI;
  int iVar7;
  int *local_3c;
  int *local_38;
  int *local_34;
  tagWNDCLASSEXA local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
  DAT_0064b590 = RegisterWindowMessageA("WM_ATLGETHOST");
  DAT_0064b58c = RegisterWindowMessageA("WM_ATLGETCONTROL");
  local_30.cbSize = 0x30;
  BVar3 = GetClassInfoExA(DAT_0064716c,"AtlAxWin",&local_30);
  if (BVar3 == 0) {
    local_30.cbSize = 0x30;
    local_30.style = 0;
    local_30.lpfnWndProc = FUN_00405610;
    local_30.cbClsExtra = 0;
    local_30.cbWndExtra = 0;
    local_30.hInstance = DAT_0064716c;
    local_30.hIcon = (HICON)0x0;
    local_30.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
    local_30.hbrBackground = (HBRUSH)0x6;
    local_30.lpszMenuName = (LPCSTR)0x0;
    local_30.lpszClassName = "AtlAxWin";
    local_30.hIconSm = (HICON)0x0;
    RegisterClassExA(&local_30);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  iVar7 = -0x7ff8fff2;
  pvVar4 = GlobalAlloc(0x40,0xe0);
  pvVar5 = GlobalLock(pvVar4);
  if (pvVar5 == (LPVOID)0x0) {
LAB_00406280:
    if (-1 < iVar7) goto LAB_00406284;
  }
  else {
    pMem = (undefined4 *)FUN_00406340(0);
    if (pMem == (undefined4 *)0x0) goto LAB_00406280;
    iVar7 = FUN_00406b20();
    if (iVar7 != 0) {
LAB_0040625d:
      FUN_00406b30();
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      goto LAB_00406280;
    }
    iVar7 = (**(code **)*pMem)(pMem,&DAT_00633558,&local_3c);
    if (iVar7 != 0) goto LAB_0040625d;
LAB_00406284:
    local_34 = (int *)0x0;
    (**(code **)*local_3c)(local_3c,&DAT_0060f950,&local_34);
    uVar6 = Ordinal_2(local_30.lpszClassName);
    iVar7 = (**(code **)(*unaff_ESI + 0x10))
                      (unaff_ESI,uVar6,local_30.lpszClassName,local_30.hIconSm,&stack0xffffffb8,
                       param_2,param_3);
    Ordinal_6(uVar6);
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 8))(local_34);
    }
  }
  piVar2 = local_38;
  piVar1 = local_3c;
  if (param_4 != (undefined4 *)0x0) {
    if (iVar7 < 0) {
      *param_4 = 0;
    }
    else {
      local_3c = (int *)0x0;
      *param_4 = piVar1;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    if (-1 < iVar7) {
      local_38 = (int *)0x0;
      *param_5 = piVar2;
      goto LAB_00406325;
    }
    *param_5 = 0;
  }
  if (local_38 != (int *)0x0) {
    (**(code **)(*local_38 + 8))(local_38);
  }
LAB_00406325:
  if (local_3c != (int *)0x0) {
    (**(code **)(*local_3c + 8))(local_3c);
  }
  return iVar7;
}


