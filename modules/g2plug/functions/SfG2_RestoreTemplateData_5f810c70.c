/* Module: g2plug.dll
   Function: SfG2_RestoreTemplateData
   Address: 5f810c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_RestoreTemplateData(unsigned char *,unsigned long) */

long SfG2_RestoreTemplateData(uchar *param_1,ulong param_2)

{
  uchar *puVar1;
  LSTATUS LVar2;
  uint uVar3;
  int *piVar4;
  char *lpSubKey;
  HKEY__ local_28 [10];
  
                    /* 0x10c70  33  ?SfG2_RestoreTemplateData@@YGJPAEK@Z */
  puVar1 = param_1;
  if (param_2 < 0x25) {
    return -0x7ff8ffa9;
  }
  piVar4 = (int *)(param_1 + *(int *)param_1);
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
  FUN_5f80e9d0((GUID *)(puVar1 + 4),(LPSTR)local_28,0x28,1);
  LVar2 = RegOpenKeyA((HKEY)param_2,(LPCSTR)local_28,(PHKEY)&param_1);
  if (LVar2 == 0) {
    uVar3 = FUN_5f810d60(param_2,(HKEY)param_1,(uint)puVar1,piVar4);
    RegCloseKey((HKEY)param_1);
    RegCloseKey((HKEY)param_2);
    return uVar3;
  }
  uVar3 = FUN_5f810f10((HKEY)param_2,piVar4,(uint)puVar1,local_28);
  RegCloseKey((HKEY)param_2);
  return uVar3;
}


