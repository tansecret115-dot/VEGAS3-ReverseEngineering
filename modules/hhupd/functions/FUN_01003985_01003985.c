/* Module: hhupd.exe
   Function: FUN_01003985
   Address: 01003985
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01003985(void)

{
  DWORD DVar1;
  LPCSTR lpString1;
  int iVar2;
  UINT UVar3;
  LPCSTR pCVar4;
  UINT UVar5;
  
  DVar1 = FUN_01003d7d("FINISHMSG",(undefined4 *)0x0,0);
  lpString1 = LocalAlloc(0x40,DVar1 + 1);
  if (lpString1 == (LPCSTR)0x0) {
    FUN_01003c23((HWND)0x0,0x4b5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
    return;
  }
  DVar1 = FUN_01003d7d("FINISHMSG",(undefined4 *)lpString1,DVar1);
  if (DVar1 == 0) {
    UVar5 = 0x10;
    UVar3 = 0x4b1;
    pCVar4 = (LPCSTR)0x0;
  }
  else {
    iVar2 = lstrcmpA(lpString1,"<None>");
    if (iVar2 == 0) goto LAB_010039f6;
    UVar5 = 0x40;
    UVar3 = 0x3e9;
    pCVar4 = lpString1;
  }
  FUN_01003c23((HWND)0x0,UVar3,pCVar4,(LPCSTR)0x0,UVar5,0);
LAB_010039f6:
  LocalFree(lpString1);
  return;
}


