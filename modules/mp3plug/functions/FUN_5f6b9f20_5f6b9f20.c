/* Module: mp3plug.dll
   Function: FUN_5f6b9f20
   Address: 5f6b9f20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6b9f20(undefined4 param_1,int *param_2)

{
  uint dwBytes;
  BOOL BVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  LPCWSTR lpWideCharStr;
  LPSTR lpMultiByteStr;
  int unaff_EBX;
  int *piStack_58;
  int iStack_54;
  int aiStack_50 [3];
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  uint uStack_28;
  HANDLE pvStack_20;
  int iStack_1c;
  HANDLE pvStack_10;
  
  if (param_2 != (int *)0x0) {
    aiStack_50[2] = 0;
    aiStack_50[1] = 0;
    aiStack_50[0] = 0;
    iStack_54 = 0;
    piStack_58 = param_2;
    (**(code **)(*param_2 + 0x14))();
    SetFilePointer(pvStack_10,4,(PLONG)0x0,0);
    BVar1 = ReadFile(pvStack_10,&iStack_38,4,(LPDWORD)&stack0xffffffc4,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      return -0x7ffb1ff8;
    }
    if (unaff_EBX != 4) {
      return -0x7ffb1ff8;
    }
    SetFilePointer(pvStack_10,iStack_38 + 8,(PLONG)0x0,0);
    iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&uStack_2c,0xc,aiStack_50 + 2);
    if ((iVar2 == 0) && (iStack_34 != 0)) {
      iStack_1c = iVar2;
      pvVar3 = GlobalAlloc(0x42,iStack_34 * 8);
      puVar4 = GlobalLock(pvVar3);
      if (puVar4 != (undefined4 *)0x0) {
        iStack_54 = 0;
        if (0 < iStack_34) {
          lpWideCharStr = (LPCWSTR)0x0;
          do {
            iStack_1c = (**(code **)(*param_2 + 0xc))(param_2,auStack_30,0xc,&piStack_58);
            dwBytes = uStack_28;
            if (iStack_1c == 0) {
              if (0 < (int)uStack_28) {
                if (lpWideCharStr != (LPCWSTR)0x0) {
                  pvVar3 = GlobalHandle(lpWideCharStr);
                  GlobalUnlock(pvVar3);
                  pvVar3 = GlobalHandle(lpWideCharStr);
                  GlobalFree(pvVar3);
                }
                pvVar3 = GlobalAlloc(0x42,dwBytes);
                lpWideCharStr = GlobalLock(pvVar3);
                pvStack_10 = pvStack_20;
                if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_5f6ba11b;
              }
              iStack_1c = (**(code **)(*param_2 + 0xc))(param_2,lpWideCharStr,dwBytes,&piStack_58);
              if (iStack_1c == 0) {
                pvVar3 = GlobalAlloc(0x42,dwBytes);
                lpMultiByteStr = GlobalLock(pvVar3);
                if (lpMultiByteStr == (LPSTR)0x0) break;
                *puVar4 = uStack_2c;
                puVar4[1] = lpMultiByteStr;
                if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
                  WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,dwBytes >> 1,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                }
                else {
                  *lpMultiByteStr = '\0';
                }
                lpMultiByteStr[(dwBytes >> 1) - 1] = '\0';
              }
            }
            iStack_54 = iStack_54 + 1;
            puVar4 = puVar4 + 2;
          } while (iStack_54 < iStack_34);
          pvStack_10 = pvStack_20;
          if (lpWideCharStr != (LPCWSTR)0x0) {
            pvVar3 = GlobalHandle(lpWideCharStr);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(lpWideCharStr);
            GlobalFree(pvVar3);
            pvStack_10 = pvStack_20;
          }
        }
LAB_5f6ba11b:
        aiStack_50[0] = 0;
        if ((-1 < iStack_1c) &&
           (iStack_1c = FUN_5f6c6b30(pvStack_10,(uint *)&stack0xffffffbc,aiStack_50), -1 < iStack_1c
           )) {
          FUN_5f6c5750(pvStack_10,aiStack_50[0]);
        }
        FUN_5f6c6170((uint *)&stack0xffffffbc);
        iVar2 = iStack_1c;
      }
      return iVar2;
    }
  }
  return 0;
}


