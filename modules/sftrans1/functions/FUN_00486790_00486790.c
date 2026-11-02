/* Module: sftrans1.dll
   Function: FUN_00486790
   Address: 00486790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00486790(int *param_1,undefined4 *param_2,int param_3)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPSTR lpString1;
  
  pMem = (LPCVOID)*param_1;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  pvVar1 = GlobalAlloc(0x40,param_3 + 1U);
  lpString1 = GlobalLock(pvVar1);
  *param_1 = (int)lpString1;
  lstrcpynA(lpString1,(LPCSTR)*param_2,param_3 + 1U);
  lpString1[param_3] = '\0';
  *(undefined1 *)(*param_1 + param_3) = 0;
  return;
}


