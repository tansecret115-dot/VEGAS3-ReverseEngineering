/* Module: vidcap30.exe
   Function: FUN_0047c0d0
   Address: 0047c0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0047c0d0(undefined4 param_1,uint param_2,LPCSTR param_3,LPDWORD param_4,LPBYTE param_5,
                 LPDWORD param_6)

{
  LSTATUS LVar1;
  HKEY local_108;
  CHAR local_104 [260];
  
  wsprintfA(local_104,"Software\\Sonic Foundry\\%s\\%d.%d\\Lang",param_1,param_2 >> 0x18,
            param_2 >> 0x10 & 0xff);
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,local_104,0,(LPSTR)0x0,0,0x20019,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_108,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_108,param_3,(LPDWORD)0x0,param_4,param_5,param_6);
    RegCloseKey(local_108);
  }
  return LVar1 == 0;
}


