/* Module: Setup.exe
   Function: SfSpike2_SetPreferredParentID
   Address: 0042c280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfSpike2_SetPreferredParentID(unsigned long,unsigned long,int) */

int SfSpike2_SetPreferredParentID(ulong param_1,ulong param_2,int param_3)

{
  LSTATUS LVar1;
  HKEY local_120;
  DWORD local_11c [2];
  CHAR local_114 [12];
  BYTE local_108 [4];
  CHAR local_104 [260];
  
                    /* 0x2c280  61  ?SfSpike2_SetPreferredParentID@@YGHKKH@Z */
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
      return 1;
    }
  }
  local_11c[0] = 4;
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,local_104,0,(LPSTR)0x0,0,0x20006,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_120,(LPDWORD)0x0);
  if (LVar1 == 0) {
    RegSetValueExA(local_120,local_114,0,4,(BYTE *)&param_2,local_11c[0]);
    RegCloseKey(local_120);
  }
  return (uint)(LVar1 == 0);
}


