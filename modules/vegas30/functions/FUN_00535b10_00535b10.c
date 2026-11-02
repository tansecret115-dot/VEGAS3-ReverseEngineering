/* Module: vegas30.exe
   Function: FUN_00535b10
   Address: 00535b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00535b10(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int **lpsz;
  LPCSTR lpsz_00;
  LPSTR pCVar2;
  LPCSTR pCVar3;
  CHAR *pCVar4;
  int *piStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 *puStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined1 uStack_225;
  WCHAR aWStack_224 [14];
  undefined1 local_208 [496];
  CHAR *pCStack_18;
  
  puStack_31c = local_208;
  piStack_328 = *(int **)(param_3 + 8);
  uStack_310 = 0;
  uStack_314 = 0;
  uStack_318 = 0x104;
  uStack_320 = 0;
  uStack_324 = 0;
  (**(code **)(*piStack_328 + 0x2c))();
  if ((&stack0x00000000 == (undefined1 *)0x224) || (aWStack_224[0] != L'\0')) {
    WideCharToMultiByte(0,0,aWStack_224,-1,(LPSTR)&piStack_328,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x328) {
    piStack_328 = (int *)((uint)piStack_328 & 0xffffff00);
  }
  lpsz = &piStack_328;
  uStack_225 = 0;
  cVar1 = (char)piStack_328;
  while ((cVar1 != '\0' && (cVar1 != '.'))) {
    lpsz = (int **)CharNextA((LPCSTR)lpsz);
    cVar1 = *(char *)lpsz;
  }
  lpsz_00 = CharNextA((LPCSTR)lpsz);
  cVar1 = *lpsz_00;
  pCVar4 = pCStack_18;
  while ((cVar1 != ';' && (cVar1 != '\0'))) {
    pCVar2 = CharNextA(lpsz_00);
    for (pCVar3 = lpsz_00; pCVar3 != pCVar2; pCVar3 = pCVar3 + 1) {
      *pCVar4 = *pCVar3;
      pCVar4 = pCVar4 + 1;
    }
    lpsz_00 = CharNextA(lpsz_00);
    cVar1 = *lpsz_00;
  }
  *pCVar4 = '\0';
  return;
}


