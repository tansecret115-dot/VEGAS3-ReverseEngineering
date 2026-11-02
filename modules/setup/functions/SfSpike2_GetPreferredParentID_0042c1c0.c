/* Module: Setup.exe
   Function: SfSpike2_GetPreferredParentID
   Address: 0042c1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfSpike2_GetPreferredParentID(unsigned long,unsigned long *) */

int SfSpike2_GetPreferredParentID(ulong param_1,ulong *param_2)

{
  LSTATUS LVar1;
  LSTATUS LVar2;
  HKEY local_120;
  DWORD local_11c;
  ulong local_118;
  DWORD local_114;
  CHAR local_110 [12];
  CHAR local_104 [260];
  
                    /* 0x2c1c0  58  ?SfSpike2_GetPreferredParentID@@YGHKPAK@Z */
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
  return (uint)(LVar1 == 0);
}


