/* Module: sfcdi.dll
   Function: SfCDBurn_WriteDisc
   Address: 5bf04ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDBurn_WriteDisc(struct HSFBURN__ *) */

long SfCDBurn_WriteDisc(HSFBURN__ *param_1)

{
  HANDLE pvVar1;
  BOOL BVar2;
  int iVar3;
  long local_20;
  tagMSG local_1c;
  
                    /* 0x4ca0  29  ?SfCDBurn_WriteDisc@@YGJPAUHSFBURN__@@@Z */
  local_20 = 0;
  if (param_1 == (HSFBURN__ *)0x0) {
    return -0x7ff8ffa9;
  }
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf047b0,param_1,0
                        ,(LPDWORD)(param_1 + 0x60));
  *(HANDLE *)(param_1 + 0x5c) = pvVar1;
  if (pvVar1 != (HANDLE)0x0) {
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf04640,param_1
                          ,0,(LPDWORD)(param_1 + 0x68));
    *(HANDLE *)(param_1 + 100) = pvVar1;
    if (pvVar1 != (HANDLE)0x0) {
      do {
        while (BVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1), BVar2 != 0) {
          if (local_1c.message == 0x12) {
            PostQuitMessage(local_1c.wParam);
            return local_20;
          }
          TranslateMessage(&local_1c);
          DispatchMessageA(&local_1c);
        }
        iVar3 = (**(code **)(**(int **)(param_1 + 0x10c) + 0x28))
                          (*(int **)(param_1 + 0x10c),&local_20);
      } while (iVar3 != 0);
      return local_20;
    }
  }
  return -0x7ff8fff2;
}


