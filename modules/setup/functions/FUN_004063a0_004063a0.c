/* Module: Setup.exe
   Function: FUN_004063a0
   Address: 004063a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004063a0(undefined4 param_1,uint param_2,LPCSTR param_3,DWORD param_4,BYTE *param_5,
                 DWORD param_6)

{
  LSTATUS LVar1;
  HKEY local_108;
  CHAR local_104 [260];
  
  wsprintfA(local_104,"Software\\Sonic Foundry\\%s\\%d.%d\\Lang",param_1,param_2 >> 0x18,
            param_2 >> 0x10 & 0xff);
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,local_104,0,(LPSTR)0x0,0,0x20006,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_108,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegSetValueExA(local_108,param_3,0,param_4,param_5,param_6);
    RegCloseKey(local_108);
  }
  return LVar1 == 0;
}


