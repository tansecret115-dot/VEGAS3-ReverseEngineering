/* Module: mp3plug.dll
   Function: FUN_5f6bd0a0
   Address: 5f6bd0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6bd0a0(HMODULE param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  HMODULE pHVar3;
  HMODULE *ppHVar4;
  
  iVar2 = -0x7fffbffb;
  pFVar1 = GetProcAddress(param_1,"DllGetClassObject");
  if (pFVar1 != (FARPROC)0x0) {
    ppHVar4 = &param_1;
    param_1 = (HMODULE)0x0;
    iVar2 = (*pFVar1)(param_2,&DAT_5f7397a0);
    if (-1 < iVar2) {
      pHVar3 = param_1;
      iVar2 = (*(code *)(*ppHVar4)[3].unused)(ppHVar4,unaff_retaddr,param_1,param_2);
      (**(code **)(pHVar3->unused + 8))(pHVar3);
    }
  }
  return iVar2;
}


