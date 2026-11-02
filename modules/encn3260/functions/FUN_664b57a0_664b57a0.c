/* Module: encn3260.dll
   Function: FUN_664b57a0
   Address: 664b57a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664b57a0(LPCSTR param_1)

{
  int iVar1;
  
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = lstrcmpiA(param_1,s_DISPLAY_664e3a48);
    if (iVar1 != 0) {
      CreateDCA((LPCSTR)0x0,param_1,(LPCSTR)0x0,(DEVMODEA *)0x0);
      return;
    }
  }
  CreateDCA(s_DISPLAY_664e3a48,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  return;
}


