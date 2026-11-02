/* Module: vegas30k.dll
   Function: SfVersion_GetString
   Address: 0103b7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVersion_GetString(char const *,char const *,char *,unsigned int) */

long SfVersion_GetString(char *param_1,char *param_2,char *param_3,uint param_4)

{
  DWORD dwBytes;
  HGLOBAL pvVar1;
  LPVOID lpData;
  BOOL BVar2;
  long lVar3;
  uint local_90;
  LPCSTR local_8c;
  uint *local_88;
  DWORD local_84;
  CHAR local_80 [128];
  
                    /* 0x3b7e0  520  ?SfVersion_GetString@@YGJPBD0PADI@Z */
  dwBytes = GetFileVersionInfoSizeA(param_1,&local_84);
  if (dwBytes == 0) {
    return -0x7ffb1ff6;
  }
  lVar3 = -0x7ffb1ff6;
  pvVar1 = GlobalAlloc(0x42,dwBytes);
  lpData = GlobalLock(pvVar1);
  if (lpData != (LPVOID)0x0) {
    BVar2 = GetFileVersionInfoA(param_1,0,dwBytes,lpData);
    if (BVar2 != 0) {
      BVar2 = VerQueryValueA(lpData,"\\VarFileInfo\\Translation",&local_88,&local_90);
      if ((BVar2 != 0) && (local_90 != 0)) {
        SfPrintF(local_80,"\\StringFileInfo\\%04hX%04hX\\%s",(short)*local_88,*local_88 >> 0x10,
                 param_2);
        BVar2 = VerQueryValueA(lpData,local_80,&local_8c,&local_90);
        if (BVar2 != 0) {
          lVar3 = 0;
          lstrcpynA(param_3,local_8c,param_4);
          param_3[param_4 - 1] = '\0';
        }
      }
    }
    pvVar1 = GlobalHandle(lpData);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(lpData);
    GlobalFree(pvVar1);
  }
  return lVar3;
}


