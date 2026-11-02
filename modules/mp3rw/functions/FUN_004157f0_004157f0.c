/* Module: mp3rw.dll
   Function: FUN_004157f0
   Address: 004157f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004157f0(LPCSTR param_1,LPCSTR param_2,LPSTR param_3,int param_4)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_110;
  HKEY local_10c;
  DWORD local_108;
  DWORD local_104;
  BYTE local_100 [256];
  
  local_108 = 0x100;
  uVar2 = 0x80070005;
  *param_3 = '\0';
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,param_1,0,(LPSTR)0x0,0,0x20019,(LPSECURITY_ATTRIBUTES)0x0
                          ,&local_10c,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_10c,"License",0,(LPSTR)0x0,0,0x20019,(LPSECURITY_ATTRIBUTES)0x0,
                            &local_110,(LPDWORD)0x0);
    if (LVar1 == 0) {
      LVar1 = RegQueryValueExA(local_110,param_2,(LPDWORD)0x0,&local_104,local_100,&local_108);
      if (LVar1 == 0) {
        uVar2 = 0;
        lstrcpynA(param_3,(LPCSTR)local_100,param_4);
        param_3[param_4 + -1] = '\0';
      }
      RegCloseKey(local_110);
    }
    RegCloseKey(local_10c);
    return uVar2;
  }
  return 0x80070005;
}


