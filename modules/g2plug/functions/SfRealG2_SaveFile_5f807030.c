/* Module: g2plug.dll
   Function: SfRealG2_SaveFile
   Address: 5f807030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_SaveFile(struct HWND__ *,char *,struct SFG2_PARAMS *,struct
   SFG2_STAT_PARAMS *) */

long SfRealG2_SaveFile(HWND__ *param_1,char *param_2,SFG2_PARAMS *param_3,SFG2_STAT_PARAMS *param_4)

{
  HGLOBAL pvVar1;
  LPVOID lpParameter;
  uint uVar2;
  HANDLE hHandle;
  DWORD DVar3;
  int iVar4;
  SFG2_PARAMS *pSVar5;
  undefined4 *puVar6;
  DWORD DStack_24;
  DWORD local_20;
  tagMSG tStack_1c;
  
                    /* 0x7030  41
                       ?SfRealG2_SaveFile@@YGJPAUHWND__@@PADPAUSFG2_PARAMS@@PAUSFG2_STAT_PARAMS@@@Z
                        */
  pvVar1 = GlobalAlloc(0x42,0x6d8);
  lpParameter = GlobalLock(pvVar1);
  if (lpParameter == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  pSVar5 = param_3;
  puVar6 = (undefined4 *)((int)lpParameter + 0x14);
  for (iVar4 = 0x19c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(undefined4 *)pSVar5;
    pSVar5 = pSVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pSVar5;
  *(SFG2_PARAMS *)((int)puVar6 + 2) = pSVar5[2];
  uVar2 = FUN_5f8071a0(param_2,(int)lpParameter,(int)param_3);
  if (-1 < (int)uVar2) {
    if (*(undefined4 **)(param_3 + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_3 + 0x18))(0,100);
    }
    hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5f807c60,
                           lpParameter,0,&local_20);
    if (hHandle == (HANDLE)0x0) {
      DVar3 = 0x80004005;
    }
    else {
      DVar3 = WaitForSingleObject(hHandle,0);
      while (DVar3 != 0) {
        GetMessageA(&tStack_1c,(HWND)0x0,0,0);
        TranslateMessage(&tStack_1c);
        DispatchMessageA(&tStack_1c);
        DVar3 = WaitForSingleObject(hHandle,0);
      }
      GetExitCodeThread(hHandle,&DStack_24);
      CloseHandle(hHandle);
      DVar3 = DStack_24;
      if (*(int *)(param_3 + 0x66f) != 0) {
        SfRealG2_GetStatistics(param_4);
      }
    }
    FUN_5f807b50(lpParameter);
    if (*(int **)(param_3 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_3 + 0x18) + 0x24))(0,0);
      (**(code **)(**(int **)(param_3 + 0x18) + 8))();
    }
    if (((-1 < (int)DVar3) && (*(int *)(param_3 + 0x433) != 0)) &&
       (DVar3 = SfRealG2_SaveMetaFile(param_2,(SFG2_RAM_PARAMS *)(param_3 + 0x437)), (int)DVar3 < 0)
       ) {
      DeleteFileA(param_2);
    }
    return DVar3;
  }
  pvVar1 = GlobalHandle(lpParameter);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(lpParameter);
  GlobalFree(pvVar1);
  return uVar2;
}


