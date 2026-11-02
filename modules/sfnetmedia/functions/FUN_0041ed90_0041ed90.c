/* Module: sfnetmedia.dll
   Function: FUN_0041ed90
   Address: 0041ed90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0041ed90(undefined4 param_1,int *param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPCWSTR lpWideCharStr;
  LPSTR lpMultiByteStr;
  BYTE *pBVar3;
  int *cbMultiByte;
  undefined1 *puStack_3c;
  int iVar4;
  int local_24;
  int iStack_20;
  HWND pHStack_18;
  int iStack_14;
  
  if (param_2 != (int *)0x0) {
    local_24 = 0;
    iVar1 = (**(code **)(*param_2 + 0x1c))();
    if ((-1 < iVar1) && (&stack0x00000000 != (undefined1 *)0x24)) {
      puStack_3c = (undefined1 *)0x0;
      iVar1 = (**(code **)(local_24 + 0x14))(&local_24,0,0);
      if (-1 < iVar1) {
        puStack_3c = (undefined1 *)0x0;
        iStack_14 = (**(code **)(iRam00000000 + 0xc))(0,&stack0xffffffd8,0xc,&puStack_3c);
        if ((-1 < iStack_14) && (0 < iStack_20)) {
          cbMultiByte = (int *)0x104;
          pvVar2 = GlobalAlloc(0x42,0x104);
          lpWideCharStr = GlobalLock(pvVar2);
          pvVar2 = GlobalAlloc(0x42,0x104);
          lpMultiByteStr = GlobalLock(pvVar2);
          if ((lpWideCharStr == (LPCWSTR)0x0) || (iVar1 = iStack_14, lpMultiByteStr == (LPSTR)0x0))
          {
            iVar1 = -0x7ff8fff2;
          }
          for (iVar4 = 0; (-1 < iVar1 && (iVar4 < iStack_20)); iVar4 = iVar4 + 1) {
            iStack_14 = (**(code **)(iRam00000000 + 0xc))(0,&stack0xffffffcc,0xc,&puStack_3c);
            if (-1 < iStack_14) {
              if (cbMultiByte < &local_24) {
                pvVar2 = GlobalHandle(lpWideCharStr);
                GlobalUnlock(pvVar2);
                pvVar2 = GlobalHandle(lpWideCharStr);
                GlobalFree(pvVar2);
                pvVar2 = GlobalHandle(lpMultiByteStr);
                GlobalUnlock(pvVar2);
                pvVar2 = GlobalHandle(lpMultiByteStr);
                GlobalFree(pvVar2);
                pvVar2 = GlobalAlloc(0x42,(SIZE_T)&local_24);
                lpWideCharStr = GlobalLock(pvVar2);
                if (lpWideCharStr == (LPCWSTR)0x0) {
                  iStack_14 = -0x7ff8fff2;
                }
                pvVar2 = GlobalAlloc(0x42,(SIZE_T)&local_24);
                lpMultiByteStr = GlobalLock(pvVar2);
                cbMultiByte = &local_24;
                if (lpMultiByteStr == (LPSTR)0x0) {
                  iStack_14 = -0x7ff8fff2;
                  cbMultiByte = &local_24;
                  goto LAB_0041ef91;
                }
              }
              if (((-1 < iStack_14) &&
                  (iStack_14 = (**(code **)(iRam00000000 + 0xc))
                                         (0,lpWideCharStr,&local_24,&puStack_3c), -1 < iStack_14))
                 && (puStack_3c <= &local_24)) {
                if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
                  WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,(int)cbMultiByte,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
                }
                else if (lpMultiByteStr != (LPSTR)0x0) {
                  *lpMultiByteStr = '\0';
                }
                (lpMultiByteStr + -1)[(int)cbMultiByte] = '\0';
                if (iVar4 == 0) {
                  pBVar3 = FUN_00419120(DAT_00441d60,0x1127);
                }
                else {
                  pBVar3 = "\t\t%s";
                }
                FUN_00417320(pHStack_18,pBVar3);
              }
            }
LAB_0041ef91:
            iVar1 = iStack_14;
          }
          if (lpWideCharStr != (LPCWSTR)0x0) {
            pvVar2 = GlobalHandle(lpWideCharStr);
            GlobalUnlock(pvVar2);
            pvVar2 = GlobalHandle(lpWideCharStr);
            GlobalFree(pvVar2);
          }
          if (lpMultiByteStr != (LPSTR)0x0) {
            pvVar2 = GlobalHandle(lpMultiByteStr);
            GlobalUnlock(pvVar2);
            pvVar2 = GlobalHandle(lpMultiByteStr);
            GlobalFree(pvVar2);
          }
        }
      }
      (**(code **)(iRam00000000 + 8))(0);
    }
  }
  return;
}


