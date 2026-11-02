/* Module: wmfplug2.dll
   Function: SfWMF_DoesTemplateExist
   Address: 0041d6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_DoesTemplateExist(unsigned char *,unsigned long) */

long SfWMF_DoesTemplateExist(uchar *param_1,ulong param_2)

{
  LSTATUS LVar1;
  int iVar2;
  long lVar3;
  char *lpSubKey;
  
                    /* 0x1d6b0  14  ?SfWMF_DoesTemplateExist@@YGJPAEK@Z */
  lVar3 = -0x7ffb1ff6;
  if (param_2 < 0x25) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    lpSubKey = s_Software_Sonic_Foundry_Streaming_004888ac;
  }
  else {
    lpSubKey = s_Software_Sonic_Foundry_Streaming_004888ec;
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,lpSubKey,0,0x2001f,(PHKEY)&param_2);
  if (LVar1 != 0) {
    return -0x7ffb1ff6;
  }
  iVar2 = FUN_0041d140((HKEY)param_2);
  if (iVar2 != 0) {
    lVar3 = 0;
    RegCloseKey((HKEY)param_1);
  }
  RegCloseKey((HKEY)param_2);
  return lVar3;
}


