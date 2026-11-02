/* Module: vegas30.exe
   Function: FUN_00404df0
   Address: 00404df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404df0(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *pMem;
  HANDLE hHandle;
  BOOL BVar3;
  int iVar4;
  HGLOBAL pvVar5;
  uint uVar6;
  int *piVar7;
  tagWNDCLASSEXA local_64;
  undefined4 local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0060f8c8;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff74;
  uVar6 = 0;
  ExceptionList = &local_14;
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"Vegas.Mutex");
  WaitForSingleObject(hHandle,10000);
  _DAT_006471d8 = &DAT_0063c300;
  _DAT_0064b5a8 = &DAT_00647168;
  DAT_00647168 = 0x84;
  _DAT_006471cc = 0x300;
  DAT_00647178 = (int *)0x0;
  DAT_00647170 = param_1;
  _DAT_00647174 = param_1;
  DAT_0064716c = param_1;
  _DAT_0064717c = 0;
  DAT_00647180 = (HANDLE)0x0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00647184);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_006471b4);
  DAT_006471d0 = 0;
  DAT_006471d4 = '\x01';
  DAT_006471dc = 0;
  _DAT_006471e4 = 0;
  DAT_006471e0 = 0;
  DAT_006471e8 = (undefined4 *)0x0;
  if (DAT_00647178 != (int *)0x0) {
    iVar4 = *DAT_00647178;
    piVar7 = DAT_00647178;
    while (iVar4 != 0) {
      (*(code *)piVar7[8])(1);
      if (DAT_00647168 == 100) {
        piVar7 = piVar7 + 7;
      }
      else {
        piVar7 = piVar7 + 9;
      }
      iVar4 = *piVar7;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
  DAT_0064b590 = RegisterWindowMessageA("WM_ATLGETHOST");
  DAT_0064b58c = RegisterWindowMessageA("WM_ATLGETCONTROL");
  local_64.cbSize = 0x30;
  BVar3 = GetClassInfoExA(DAT_0064716c,"AtlAxWin",&local_64);
  if (BVar3 == 0) {
    local_64.cbSize = 0x30;
    local_64.style = 0;
    local_64.lpfnWndProc = FUN_00405610;
    local_64.cbClsExtra = 0;
    local_64.cbWndExtra = 0;
    local_64.hInstance = DAT_0064716c;
    local_64.hIcon = (HICON)0x0;
    local_64.hCursor = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
    local_64.hbrBackground = (HBRUSH)0x6;
    local_64.lpszMenuName = (LPCSTR)0x0;
    local_64.lpszClassName = "AtlAxWin";
    local_64.hIconSm = (HICON)0x0;
    RegisterClassExA(&local_64);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
  iVar4 = FUN_00402ea0(param_1,param_4);
  ReleaseMutex(hHandle);
  CloseHandle(hHandle);
  local_24 = 0;
  local_8 = 0;
  if (iVar4 != 0) {
    local_24 = FUN_004039b0();
  }
  local_8 = 0xffffffff;
  if (DAT_00647178 != (int *)0x0) {
    iVar4 = *DAT_00647178;
    piVar7 = DAT_00647178;
    while (iVar4 != 0) {
      piVar1 = (int *)piVar7[4];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar7[4] = 0;
      (*(code *)piVar7[8])(0);
      if (DAT_00647168 == 100) {
        piVar7 = piVar7 + 7;
      }
      else {
        piVar7 = piVar7 + 9;
      }
      iVar4 = *piVar7;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00647184);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_006471b4);
  pMem = DAT_006471e8;
  while (pMem != (undefined4 *)0x0) {
    (*(code *)*pMem)(pMem[1]);
    puVar2 = (undefined4 *)pMem[2];
    pvVar5 = GlobalHandle(pMem);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(pMem);
    GlobalFree(pvVar5);
    pMem = puVar2;
  }
  if ((DAT_00647180 != (HANDLE)0x0) && (DAT_006471d4 != '\0')) {
    if (DAT_006471e0 != 0) {
      do {
        HeapDestroy(*(HANDLE *)(DAT_006471e0 + uVar6 * 4));
        uVar6 = uVar6 + 1;
      } while (uVar6 <= DAT_006471dc);
    }
    HeapDestroy(DAT_00647180);
  }
  FUN_00403730(param_1,local_24);
  ExceptionList = local_14;
  return;
}


