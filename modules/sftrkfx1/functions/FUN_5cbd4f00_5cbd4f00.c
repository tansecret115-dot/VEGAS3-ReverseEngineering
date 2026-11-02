/* Module: sftrkfx1.dll
   Function: FUN_5cbd4f00
   Address: 5cbd4f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbd4f00(LPSTR param_1,SIZE_T param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPSTR lpString1;
  
  iVar1 = lstrlenA(param_3);
  FUN_5cc020f0();
  FUN_5cc020f0();
  lstrcpynA(&stack0xffffffec,param_3,iVar1 + 1);
  (&stack0xffffffec)[iVar1] = 0;
  (&stack0xffffffec)[iVar1] = 0;
  lstrcpynA(&stack0xffffffec,param_1,iVar1 + 1);
  (&stack0xffffffec)[iVar1] = 0;
  (&stack0xffffffec)[iVar1] = 0;
  iVar1 = lstrcmpA(&stack0xffffffec,&stack0xffffffec);
  if (iVar1 == 0) {
    pvVar2 = GlobalAlloc(0x42,param_2);
    lpString1 = GlobalLock(pvVar2);
    if (lpString1 != (LPSTR)0x0) {
      lstrcpynA(lpString1,param_1,param_2);
      lpString1[param_2 - 1] = '\0';
      lstrcpynA(param_1,lpString1 + param_4 + -1,param_2);
      param_1[param_2 - 1] = '\0';
      iVar1 = lstrlenA(param_3);
      pvVar2 = GlobalHandle(lpString1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(lpString1);
      GlobalFree(pvVar2);
      return iVar1;
    }
  }
  return 0;
}


