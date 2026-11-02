/* Module: vegas30k.dll
   Function: SfPlugIn_SetFlags
   Address: 0102b610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfPlugIn_SetFlags(struct _GUID const &,unsigned long,int) */

long SfPlugIn_SetFlags(_GUID *param_1,ulong param_2,int param_3)

{
  LSTATUS LVar1;
  HKEY local_30;
  HKEY local_2c;
  CHAR local_28 [40];
  
                    /* 0x2b610  489  ?SfPlugIn_SetFlags@@YGJABU_GUID@@KH@Z */
  LVar1 = RegOpenKeyA((HKEY)&DAT_80000002,"Software\\Sonic Foundry\\Vegas\\3.0\\DXCache",&local_2c);
  if (LVar1 != 0) {
    return -0x7fffbffb;
  }
  FUN_0102aeb0(param_1,local_28,0x28,1);
  LVar1 = RegCreateKeyA(local_2c,local_28,&local_30);
  if (LVar1 == 0) {
    LVar1 = RegSetValueExA(local_30,"Flags",0,4,(BYTE *)&param_2,4);
    if (param_3 != 0) {
      RegFlushKey(local_30);
    }
    RegCloseKey(local_30);
  }
  RegCloseKey(local_2c);
  return -(uint)(LVar1 != 0) & 0x80004005;
}


