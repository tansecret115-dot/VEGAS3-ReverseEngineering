/* Module: oggplug.dll
   Function: FUN_00402bb0
   Address: 00402bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402bb0(int *param_1,int param_2,LPCSTR param_3)

{
  SIZE_T dwBytes;
  char cVar1;
  HGLOBAL pvVar2;
  int *pMem;
  int iVar3;
  uint uVar4;
  LPCSTR pCVar5;
  
  uVar4 = 0xffffffff;
  pCVar5 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar5;
    pCVar5 = pCVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  dwBytes = uVar4 * 2 + 0xc;
  pvVar2 = GlobalAlloc(0x42,dwBytes);
  pMem = GlobalLock(pvVar2);
  if (pMem == (int *)0x0) {
    return -0x7ff8fff2;
  }
  MultiByteToWideChar(0,1,param_3,-1,(LPWSTR)(pMem + 3),uVar4 & 0x7fffffff);
  *(undefined2 *)((int)pMem + uVar4 * 2 + 10) = 0;
  *pMem = 0xc;
  pMem[1] = param_2;
  pMem[2] = uVar4 * 2;
  iVar3 = FUN_00413db0(param_1,pMem,dwBytes,-1,(int *)0x0);
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return iVar3;
}


