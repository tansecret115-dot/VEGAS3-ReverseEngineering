/* Module: wmfplug2.dll
   Function: SfWMF_GetTemplateWfx
   Address: 0041d900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_GetTemplateWfx(struct _GUID,struct tWAVEFORMATEX * *) */

long SfWMF_GetTemplateWfx(_GUID param_1,tWAVEFORMATEX **param_2)

{
  int iVar1;
  LSTATUS LVar2;
  HGLOBAL pvVar3;
  tWAVEFORMATEX *lpData;
  DWORD local_8;
  int local_4;
  
                    /* 0x1d900  27  ?SfWMF_GetTemplateWfx@@YGJU_GUID@@PAPAUtWAVEFORMATEX@@@Z */
  *param_2 = (tWAVEFORMATEX *)0x0;
  iVar1 = FUN_0041d810();
  if ((-1 < iVar1) && (iVar1 = FUN_0041d760((HKEY)param_2,"UseAudio",(LPBYTE)&local_4), iVar1 < 0))
  {
    if (local_4 == 0) {
      iVar1 = -0x7fffbffb;
    }
    else {
      param_1.Data1 = 0;
      LVar2 = RegQueryValueExA((HKEY)param_2,"AudioFormat",(LPDWORD)0x0,&local_8,(LPBYTE)0x0,
                               &param_1.Data1);
      if ((LVar2 != 0) || (local_8 != 3)) {
        return -0x7fffbffb;
      }
      pvVar3 = GlobalAlloc(0x42,param_1.Data1);
      lpData = GlobalLock(pvVar3);
      *param_2 = lpData;
      if (lpData == (tWAVEFORMATEX *)0x0) {
        return -0x7ff8fff2;
      }
      LVar2 = RegQueryValueExA((HKEY)param_2,"AudioFormat",(LPDWORD)0x0,&local_8,(LPBYTE)lpData,
                               &param_1.Data1);
      if (LVar2 != 0) {
        pvVar3 = GlobalHandle(*param_2);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(*param_2);
        GlobalFree(pvVar3);
        *param_2 = (tWAVEFORMATEX *)0x0;
        return -0x7fffbffb;
      }
    }
    RegCloseKey((HKEY)param_2);
  }
  return iVar1;
}


