/* Module: g2plug.dll
   Function: FUN_5f838fa0
   Address: 5f838fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f838fa0(void *this,int *param_1,LPCWSTR param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPSTR lpValueName;
  LSTATUS LVar3;
  int *unaff_ESI;
  SIZE_T unaff_retaddr;
  int *piVar4;
  int *piVar5;
  LPCWSTR pWStack_10;
  
  pWStack_10 = param_2;
  piVar5 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1,&param_1);
  if (-1 < iVar1) {
    piVar4 = unaff_ESI;
    (**(code **)(*unaff_ESI + 0x38))(unaff_ESI,&pWStack_10);
    if ((int)unaff_ESI < (int)piVar5) {
      iVar1 = (**(code **)(*(int *)pWStack_10 + 0x3c))(pWStack_10,unaff_ESI,this,unaff_retaddr);
      (**(code **)(*piVar4 + 8))(piVar4);
      return iVar1;
    }
    iVar1 = FUN_5f838100(pWStack_10);
    if (iVar1 < 0) {
      (**(code **)(*(int *)pWStack_10 + 8))(pWStack_10);
      return iVar1;
    }
    pvVar2 = GlobalAlloc(0x40,unaff_retaddr);
    lpValueName = GlobalLock(pvVar2);
    LVar3 = RegEnumValueA((HKEY)0x0,(int)unaff_ESI - (int)piVar5,lpValueName,
                          (LPDWORD)&stack0x00000000,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                          (LPDWORD)0x0);
    if (LVar3 == 0) {
      MultiByteToWideChar(0,1,lpValueName,-1,this,unaff_retaddr + 1);
      *(undefined2 *)((int)this + (unaff_retaddr + 1) * 2 + -2) = 0;
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
    (**(code **)(*(int *)pWStack_10 + 8))(pWStack_10);
  }
  return iVar1;
}


