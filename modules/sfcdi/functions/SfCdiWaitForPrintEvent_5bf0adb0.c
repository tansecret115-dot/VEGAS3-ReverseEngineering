/* Module: sfcdi.dll
   Function: SfCdiWaitForPrintEvent
   Address: 5bf0adb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCdiWaitForPrintEvent(void *) */

int SfCdiWaitForPrintEvent(void *param_1)

{
  void *pvVar1;
  DWORD DVar2;
  HANDLE local_8 [2];
  
                    /* 0xadb0  72  ?SfCdiWaitForPrintEvent@@YGHPAX@Z */
  pvVar1 = param_1;
  if (param_1 == (void *)0x0) {
    return 0;
  }
  DVar2 = WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x5c),100);
  if (DVar2 == 0) {
    return 0;
  }
  local_8[0] = *(HANDLE *)((int)pvVar1 + 0x5c);
  DVar2 = MsgWaitForMultipleObjects(1,local_8,0,1000,0xff);
  if (DVar2 == 0) {
    return 0;
  }
  if ((DVar2 != 1) && (DVar2 != 0x102)) {
    DVar2 = WaitForSingleObject(*(HANDLE *)((int)pvVar1 + 0x5c),0);
    if (DVar2 == 0xffffffff) {
      GetExitCodeThread(*(HANDLE *)((int)pvVar1 + 0x5c),(LPDWORD)&param_1);
      *(undefined4 *)((int)pvVar1 + 0x48) = 1;
      return 0;
    }
    param_1 = (void *)(uint)(DVar2 != 0);
    return (int)param_1;
  }
  return 1;
}


