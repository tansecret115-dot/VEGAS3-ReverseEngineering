/* Module: mp3plug.dll
   Function: FUN_5f69bfe0
   Address: 5f69bfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5f69bfe0(void *this,int param_1,undefined4 *param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  LPCSTR lpString2;
  
  iVar1 = FUN_5f69bec0(this,2,param_1,param_2);
  if (iVar1 != 0) {
    lpString2 = (LPCSTR)FUN_5f69a9c0(iVar1);
    lstrcpynA(param_3,lpString2,param_4);
    param_3[param_4 + -1] = '\0';
    return 0;
  }
  return 0x8004e00a;
}


