/* Module: wmfplug2.dll
   Function: SfWMF_GetTemplateData
   Address: 0041cb70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_GetTemplateData(struct _GUID,unsigned char * *,unsigned long *) */

long SfWMF_GetTemplateData(_GUID param_1,uchar **param_2,ulong *param_3)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_8;
  HKEY local_4;
  
                    /* 0x1cb70  23  ?SfWMF_GetTemplateData@@YGJU_GUID@@PAPAEPAK@Z */
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ec,0,0x20019,
                        &local_4);
  if (LVar1 == 0) {
    iVar2 = FUN_0041d140(local_4);
    if (iVar2 != 0) {
      iVar2 = FUN_0041cca0(local_8,1,param_2,param_3,0);
      RegCloseKey(local_8);
      return iVar2;
    }
    RegCloseKey(local_4);
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Sonic_Foundry_Streaming_004888ac,0,0x20019,
                        &local_4);
  if (LVar1 == 0) {
    iVar2 = FUN_0041d140(local_4);
    if (iVar2 != 0) {
      iVar2 = FUN_0041cca0(local_8,0,param_2,param_3,0);
      RegCloseKey(local_8);
      return iVar2;
    }
    RegCloseKey(local_4);
  }
  return -0x7fffbffb;
}


