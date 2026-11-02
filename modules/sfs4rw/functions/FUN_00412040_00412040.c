/* Module: sfs4rw.dll
   Function: FUN_00412040
   Address: 00412040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00412040(void *this,LPCSTR param_1)

{
  LPCSTR lpData;
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_8;
  HKEY local_4;
  
  lpData = param_1;
  uVar2 = 0x80070005;
  lstrcpynA((LPSTR)&param_1,param_1,3);
  param_1._0_3_ = (uint3)(ushort)param_1;
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x478),0,(LPSTR)0x0,0,4,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_4,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_4,(LPCSTR)&param_1,0,(LPSTR)0x0,0,0x20006,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,(LPDWORD)0x0);
    if (LVar1 == 0) {
      LVar1 = RegSetValueExA(local_8,lpData,0,1,(BYTE *)lpData,0x18);
      if (LVar1 == 0) {
        uVar2 = 0;
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_4);
  }
  return uVar2;
}


