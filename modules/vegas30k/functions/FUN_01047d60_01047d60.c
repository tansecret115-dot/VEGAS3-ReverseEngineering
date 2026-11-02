/* Module: vegas30k.dll
   Function: FUN_01047d60
   Address: 01047d60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_01047d60(LPWSTR param_1,int *param_2,int *param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPSTR lpValueName;
  LSTATUS LVar3;
  int *unaff_ESI;
  SIZE_T unaff_retaddr;
  int *piVar4;
  int *piVar5;
  int *piStack_10;
  
  piStack_10 = param_3;
  piVar5 = param_2;
  iVar1 = (**(code **)(*param_2 + 0x34))(param_2,&param_2);
  if (-1 < iVar1) {
    piVar4 = unaff_ESI;
    (**(code **)(*unaff_ESI + 0x38))(unaff_ESI,&piStack_10);
    if ((int)unaff_ESI < (int)piVar5) {
      iVar1 = (**(code **)(*piStack_10 + 0x3c))(piStack_10,unaff_ESI,param_1,unaff_retaddr);
      (**(code **)(*piVar4 + 8))(piVar4);
      return iVar1;
    }
    iVar1 = FUN_01046ec0(piStack_10,&stack0xfffffff4,0);
    if (iVar1 < 0) {
      (**(code **)(*piStack_10 + 8))(piStack_10);
      return iVar1;
    }
    pvVar2 = GlobalAlloc(0x40,unaff_retaddr);
    lpValueName = GlobalLock(pvVar2);
    LVar3 = RegEnumValueA((HKEY)0x0,(int)unaff_ESI - (int)piVar5,lpValueName,
                          (LPDWORD)&stack0x00000000,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                          (LPDWORD)0x0);
    if (LVar3 == 0) {
      MultiByteToWideChar(0,1,lpValueName,-1,param_1,unaff_retaddr + 1);
      param_1[unaff_retaddr] = L'\0';
      iVar1 = 0;
    }
    else {
      iVar1 = -0x7ffb1ff6;
    }
    pvVar2 = GlobalHandle(lpValueName);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(lpValueName);
    GlobalFree(pvVar2);
    RegCloseKey((HKEY)0x0);
    (**(code **)(*piStack_10 + 8))(piStack_10);
  }
  return iVar1;
}


