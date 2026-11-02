/* Module: g2plug.dll
   Function: SfG2_GetTemplateData
   Address: 5f810740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_GetTemplateData(struct _GUID,unsigned char * *,unsigned long *) */

long SfG2_GetTemplateData(_GUID param_1,uchar **param_2,ulong *param_3)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_30;
  HKEY local_2c;
  CHAR local_28 [40];
  
                    /* 0x10740  27  ?SfG2_GetTemplateData@@YGJU_GUID@@PAPAEPAK@Z */
  iVar2 = -0x7fffbffb;
  LVar1 = RegOpenKeyA((HKEY)0x80000002,
                      "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\Custom",&local_2c
                     );
  if (LVar1 == 0) {
    FUN_5f80e9d0(&param_1,local_28,0x28,1);
    LVar1 = RegOpenKeyA(local_2c,local_28,&local_30);
    if (LVar1 == 0) {
      iVar2 = FUN_5f8107d0(local_30,0,param_2,param_3,0,&param_1.Data1);
      RegCloseKey(local_30);
    }
    RegCloseKey(local_2c);
  }
  return iVar2;
}


