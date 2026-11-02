/* Module: vfplugs.dll
   Function: FUN_0047a0b0
   Address: 0047a0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0047a0b0(void *this,LPBYTE param_1)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_8;
  HKEY local_4;
  
  uVar2 = 0x80004005;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20019,&local_4);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_4,"License",0,0x20019,&local_8);
    if (LVar1 == 0) {
      LVar1 = RegQueryValueExA(local_8,"keyRegFile",(LPDWORD)0x0,(LPDWORD)0x0,param_1,
                               (LPDWORD)&stack0x00000008);
      if (LVar1 == 0) {
        uVar2 = 0;
      }
      RegCloseKey(local_8);
    }
    RegCloseKey(local_4);
  }
  return uVar2;
}


