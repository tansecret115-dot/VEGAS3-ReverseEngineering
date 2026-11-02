/* Module: sfppack2.dll
   Function: FUN_5cd47ec0
   Address: 5cd47ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cd47ec0(undefined4 param_1,undefined4 param_2,int param_3)

{
  LSTATUS LVar1;
  HKEY local_120;
  DWORD local_11c [2];
  CHAR local_114 [12];
  BYTE local_108 [4];
  CHAR local_104 [260];
  
  local_11c[0] = 4;
  local_11c[1] = 4;
  wsprintfA(local_114,"%lu",param_1);
  wsprintfA(local_104,"%s%s","Software\\Sonic Foundry\\","Shared Information\\Plug-Ins PrefParentID"
           );
  if ((param_3 != 0) &&
     (LVar1 = RegOpenKeyExA((HKEY)0x80000002,local_104,0,0x20019,&local_120), LVar1 == 0)) {
    LVar1 = RegQueryValueExA(local_120,local_114,(LPDWORD)0x0,local_11c + 1,local_108,local_11c);
    RegCloseKey(local_120);
    if (LVar1 == 0) {
      return true;
    }
  }
  local_11c[0] = 4;
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,local_104,0,(LPSTR)0x0,0,0x20006,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_120,(LPDWORD)0x0);
  if (LVar1 == 0) {
    RegSetValueExA(local_120,local_114,0,4,(BYTE *)&param_2,local_11c[0]);
    RegCloseKey(local_120);
  }
  return LVar1 == 0;
}


