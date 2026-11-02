/* Module: mcplugrw.dll
   Function: FUN_004159c0
   Address: 004159c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LSTATUS __thiscall FUN_004159c0(void *this,LPCSTR param_1,BYTE *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  LSTATUS LVar3;
  HKEY local_8;
  HKEY local_4;
  
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,(LPSTR)0x0,0,4,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_4,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_4,"License",0,(LPSTR)0x0,0,0x20006,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_8,(LPDWORD)0x0);
    if (LVar1 == 0) {
      iVar2 = lstrlenA((LPCSTR)param_2);
      LVar3 = RegSetValueExA(local_8,param_1,0,1,param_2,iVar2 + 1);
      if (LVar3 != 0) {
        LVar1 = -0x7ff8fffb;
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_4);
  }
  return LVar1;
}


