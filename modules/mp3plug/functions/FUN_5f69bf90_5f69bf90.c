/* Module: mp3plug.dll
   Function: FUN_5f69bf90
   Address: 5f69bf90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f69bf90(void *this,int param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  LPCSTR lpString2;
  
  iVar1 = FUN_5f69bf30(this,param_1,0);
  if (iVar1 != 0) {
    lpString2 = (LPCSTR)FUN_5f69a9c0(iVar1);
    lstrcpynA(param_2,lpString2,param_3);
    param_2[param_3 + -1] = '\0';
    return 0;
  }
  return 0x8004e00a;
}


