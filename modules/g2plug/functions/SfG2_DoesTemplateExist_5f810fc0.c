/* Module: g2plug.dll
   Function: SfG2_DoesTemplateExist
   Address: 5f810fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_DoesTemplateExist(unsigned char *,unsigned long) */

long SfG2_DoesTemplateExist(uchar *param_1,ulong param_2)

{
  uchar *puVar1;
  LSTATUS LVar2;
  long lVar3;
  char *lpSubKey;
  CHAR local_28 [40];
  
                    /* 0x10fc0  22  ?SfG2_DoesTemplateExist@@YGJPAEK@Z */
  puVar1 = param_1;
  lVar3 = -0x7ffb1ff6;
  if (param_2 < 0x25) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    lpSubKey = "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\Custom";
  }
  else {
    lpSubKey = "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\System";
  }
  LVar2 = RegCreateKeyA((HKEY)0x80000002,lpSubKey,(PHKEY)&param_2);
  if (LVar2 != 0) {
    return -0x7fffbffb;
  }
  FUN_5f80e9d0((GUID *)(puVar1 + 4),local_28,0x28,1);
  LVar2 = RegOpenKeyA((HKEY)param_2,local_28,(PHKEY)&param_1);
  if (LVar2 == 0) {
    lVar3 = 0;
    RegCloseKey((HKEY)param_1);
  }
  RegCloseKey((HKEY)param_2);
  return lVar3;
}


