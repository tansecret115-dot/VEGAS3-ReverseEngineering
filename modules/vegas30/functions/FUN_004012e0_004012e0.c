/* Module: vegas30.exe
   Function: FUN_004012e0
   Address: 004012e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004012e0(HWND param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HRSRC hResInfo_00;
  HGLOBAL hResData;
  LPCDLGTEMPLATEA pDVar2;
  LPCDLGTEMPLATEA lpTemplate;
  HGLOBAL hMem;
  LPVOID pvVar3;
  HGLOBAL local_278;
  CHAR local_26c [260];
  undefined1 local_168 [360];
  
  pvVar3 = (LPVOID)0x0;
  if ((DAT_0064a7a4 != 0) || (param_2 != 0)) {
    local_26c[0] = '\0';
    GetModuleFileNameA(DAT_006471fc,local_26c,0x104);
    SfPrintF(local_168,"res://%s/%d",local_26c,0x3b5);
    if (param_1 == (HWND)0x0) {
      param_1 = DAT_00647624;
    }
    iVar1 = FUN_00563160(local_168);
    if (-1 < iVar1) {
      DAT_0064761c = DAT_0064761c | 0x4000;
      _DAT_00659550 = &DAT_00659548;
      _DAT_00659554 = GetCurrentThreadId();
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
      _DAT_00659558 = DAT_006471d0;
      DAT_006471d0 = &DAT_00659550;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064719c);
      hModule = DAT_00647170;
      FUN_0040bed0();
      hResInfo = FindResourceA(hModule,&DAT_000003b2,&DAT_00000005);
      hResInfo_00 = FindResourceA(hModule,&DAT_000003b2,&DAT_000000f0);
      local_278 = (HGLOBAL)0x0;
      if (hResInfo_00 != (HRSRC)0x0) {
        local_278 = LoadResource(hModule,hResInfo_00);
        pvVar3 = LockResource(local_278);
      }
      if (hResInfo != (HRSRC)0x0) {
        hResData = LoadResource(hModule,hResInfo);
        pDVar2 = LockResource(hResData);
        lpTemplate = (LPCDLGTEMPLATEA)FUN_00405ca0(pDVar2,pvVar3);
        CreateDialogIndirectParamA(hModule,lpTemplate,param_1,FUN_00405af0,0);
        if (lpTemplate != pDVar2) {
          hMem = GlobalHandle(lpTemplate);
          GlobalFree(hMem);
        }
        FreeResource(hResData);
      }
      if ((pvVar3 != (LPVOID)0x0) && (hResInfo_00 != (HRSRC)0x0)) {
        FreeResource(local_278);
      }
      EnableWindow(DAT_0065954c,1);
      ShowWindow(DAT_0065954c,5);
    }
  }
  return;
}


