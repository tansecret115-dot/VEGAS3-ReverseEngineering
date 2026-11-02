/* Module: sfcdi.dll
   Function: SfCD_WaitForThreadDeath
   Address: 5bf050e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCD_WaitForThreadDeath(struct HWND__ *,void *,unsigned long) */

long SfCD_WaitForThreadDeath(HWND__ *param_1,void *param_2,ulong param_3)

{
  ulong dwMilliseconds;
  DWORD DVar1;
  DWORD DVar2;
  BOOL BVar3;
  DWORD DVar4;
  ulong dwMilliseconds_00;
  DWORD local_20;
  tagMSG local_1c;
  
                    /* 0x50e0  64  ?SfCD_WaitForThreadDeath@@YGJPAUHWND__@@PAXK@Z */
  dwMilliseconds_00 = param_3;
  local_20 = 0xffffffff;
  dwMilliseconds = param_3;
  if (0x31 < param_3) {
    dwMilliseconds = 0x32;
  }
  DVar1 = WaitForSingleObject(param_2,dwMilliseconds);
  if (DVar1 == 0x102) {
    if (param_1 != (HWND__ *)0x0) {
      param_3 = IsWindowEnabled(param_1);
      EnableWindow(param_1,0);
    }
    DVar2 = GetTickCount();
    DVar1 = DVar2;
    if (dwMilliseconds_00 != 0) {
      do {
        if ((param_1 == (HWND__ *)0x0) ||
           (BVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1), BVar3 == 0)) {
          DVar4 = MsgWaitForMultipleObjects(1,&param_2,0,(DVar2 - DVar1) + dwMilliseconds_00,0xff);
          if (DVar4 != 1) {
            if ((((DVar4 != 0) && (DVar4 != 0x102)) &&
                (DVar1 = WaitForSingleObject(param_2,0), DVar1 != 0xffffffff)) && (DVar1 != 0))
            goto LAB_5bf051c5;
            break;
          }
        }
        else {
          if (local_1c.message == 0x12) {
            PostQuitMessage(local_1c.wParam);
            break;
          }
          TranslateMessage(&local_1c);
          DispatchMessageA(&local_1c);
LAB_5bf051c5:
          DVar1 = GetTickCount();
        }
      } while (DVar1 - DVar2 < dwMilliseconds_00);
    }
    dwMilliseconds_00 = 0;
    if (param_1 != (HWND__ *)0x0) {
      EnableWindow(param_1,param_3);
    }
  }
  DVar1 = WaitForSingleObject(param_2,dwMilliseconds_00);
  if (DVar1 == 0) {
    GetExitCodeThread(param_2,&local_20);
  }
  CloseHandle(param_2);
  return local_20;
}


