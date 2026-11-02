/* Module: sfxpfx2.dll
   Function: FUN_5c8d4290
   Address: 5c8d4290
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5c8d4290(undefined4 param_1,undefined4 *param_2)

{
  LSTATUS LVar1;
  LSTATUS LVar2;
  HKEY local_120;
  DWORD local_11c;
  undefined4 local_118;
  DWORD local_114;
  CHAR local_110 [12];
  CHAR local_104 [260];
  
  local_114 = 4;
  local_11c = 4;
  wsprintfA(local_110,"%lu",param_1);
  wsprintfA(local_104,"%s%s","Software\\Sonic Foundry\\","Shared Information\\Plug-Ins PrefParentID"
           );
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,local_104,0,0x20019,&local_120);
  if (LVar1 == 0) {
    LVar2 = RegQueryValueExA(local_120,local_110,(LPDWORD)0x0,&local_11c,(LPBYTE)&local_118,
                             &local_114);
    if (LVar2 == 0) {
      *param_2 = local_118;
    }
    RegCloseKey(local_120);
  }
  return LVar1 == 0;
}


