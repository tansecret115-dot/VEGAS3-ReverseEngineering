/* Module: rmme3260.dll
   Function: FUN_6624ac40
   Address: 6624ac40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6624ac40(LPCSTR param_1)

{
  int iVar1;
  
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = lstrcmpiA(param_1,s_DISPLAY_66270530);
    if (iVar1 != 0) {
      CreateDCA((LPCSTR)0x0,param_1,(LPCSTR)0x0,(DEVMODEA *)0x0);
      return;
    }
  }
  CreateDCA(s_DISPLAY_66270530,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  return;
}


