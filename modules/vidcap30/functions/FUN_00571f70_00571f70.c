/* Module: vidcap30.exe
   Function: FUN_00571f70
   Address: 00571f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00571f70(int param_1,LPBYTE param_2)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_8;
  HKEY local_4;
  
  uVar2 = 0x80004005;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)(param_1 + 0x70),0,0x20019,&local_4);
  if (LVar1 == 0) {
    LVar1 = RegOpenKeyExA(local_4,"License",0,0x20019,&local_8);
    if (LVar1 == 0) {
      LVar1 = RegQueryValueExA(local_8,"keyRegFile",(LPDWORD)0x0,(LPDWORD)0x0,param_2,
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


