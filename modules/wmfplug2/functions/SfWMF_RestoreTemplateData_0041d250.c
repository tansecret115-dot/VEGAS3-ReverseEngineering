/* Module: wmfplug2.dll
   Function: SfWMF_RestoreTemplateData
   Address: 0041d250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_RestoreTemplateData(unsigned char *,unsigned long) */

long SfWMF_RestoreTemplateData(uchar *param_1,ulong param_2)

{
  int iVar1;
  LSTATUS LVar2;
  int iVar3;
  uint uVar4;
  char *lpSubKey;
  DWORD local_4;
  
                    /* 0x1d250  36  ?SfWMF_RestoreTemplateData@@YGJPAEK@Z */
  if (param_2 < 0x25) {
    return -0x7ff8ffa9;
  }
  iVar1 = *(int *)param_1;
  if (*(int *)(param_1 + 0x14) == 0) {
    LVar2 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ac,0,0x2001f,
                          (PHKEY)&param_2);
    if (LVar2 == 0) goto LAB_0041d309;
    lpSubKey = s_Software_Sonic_Foundry_Streaming_004888ac;
  }
  else {
    LVar2 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ec,0,0x2001f,
                          (PHKEY)&param_2);
    if (LVar2 == 0) goto LAB_0041d309;
    lpSubKey = s_Software_Sonic_Foundry_Streaming_004888ec;
  }
  LVar2 = RegCreateKeyExA((HKEY)0x80000002,lpSubKey,0,"",0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,
                          (PHKEY)&param_2,&local_4);
  if (LVar2 != 0) {
    return -0x7fffbffb;
  }
LAB_0041d309:
  iVar3 = FUN_0041d140((HKEY)param_2);
  if (iVar3 != 0) {
    uVar4 = FUN_0041d3a0(param_2,(HKEY)param_1,(uint)param_1,(int *)(param_1 + iVar1));
    RegCloseKey((HKEY)param_1);
    RegCloseKey((HKEY)param_2);
    return uVar4;
  }
  uVar4 = FUN_0041d570((HKEY)param_2,1,(int *)(param_1 + iVar1),*(uint *)(param_1 + 0x20),
                       *(uint *)(param_1 + 0x1c));
  RegCloseKey((HKEY)param_2);
  return uVar4;
}


