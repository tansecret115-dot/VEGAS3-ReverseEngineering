/* Module: vidcap30.exe
   Function: SfLoadJpegDib
   Address: 004af590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfLoadJpegDib(struct HSFLANG__ *,char const *,unsigned long,struct
   tagBITMAPINFOHEADER * *) */

long SfLoadJpegDib(HSFLANG__ *param_1,char *param_2,ulong param_3,tagBITMAPINFOHEADER **param_4)

{
  HANDLE hObject;
  HGLOBAL hResData;
  LPVOID pvVar1;
  long lVar2;
  tagBITMAPINFOHEADER *local_26c;
  int local_268;
  undefined1 local_264 [472];
  int local_8c;
  
                    /* 0xaf590  87
                       ?SfLoadJpegDib@@YGJPAUHSFLANG__@@PBDKPAPAUtagBITMAPINFOHEADER@@@Z */
  local_26c = (tagBITMAPINFOHEADER *)0x0;
  if ((param_3 & 1) != 0) {
    lVar2 = -0x7ffb1ff9;
    hObject = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      local_8c = FUN_0052ccd0(hObject);
      if (local_8c != 0) {
        lVar2 = FUN_004af4d0(local_264,&local_26c);
      }
      CloseHandle(hObject);
    }
    goto LAB_004af681;
  }
  lVar2 = -0x7ffb1ff2;
  hResData = (HGLOBAL)_SfLoadResourceCustom_16(param_1,param_2,0x1f,&local_268);
  if (hResData == (HGLOBAL)0x0) {
    hResData = (HGLOBAL)_SfLoadResourceCustom_16(param_1,param_2,"BINARY",&local_268);
    if (hResData != (HGLOBAL)0x0) goto LAB_004af63e;
  }
  else {
LAB_004af63e:
    pvVar1 = LockResource(hResData);
    if (pvVar1 != (LPVOID)0x0) {
      if (local_268 != 0) {
        lVar2 = -0x7ff8fff2;
        local_8c = FUN_0052cbe0(pvVar1,local_268);
        if (local_8c != 0) {
          lVar2 = FUN_004af4d0(local_264,&local_26c);
        }
      }
      goto LAB_004af681;
    }
  }
  GetLastError();
LAB_004af681:
  *param_4 = local_26c;
  return lVar2;
}


