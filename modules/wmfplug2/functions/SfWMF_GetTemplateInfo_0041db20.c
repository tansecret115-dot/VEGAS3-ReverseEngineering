/* Module: wmfplug2.dll
   Function: SfWMF_GetTemplateInfo
   Address: 0041db20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_GetTemplateInfo(struct _GUID,struct SFASF3_TEMPLATE_INFO *,unsigned long) */

long SfWMF_GetTemplateInfo(_GUID param_1,SFASF3_TEMPLATE_INFO *param_2,ulong param_3)

{
  long lVar1;
  
                    /* 0x1db20  24  ?SfWMF_GetTemplateInfo@@YGJU_GUID@@PAUSFASF3_TEMPLATE_INFO@@K@Z
                        */
  lVar1 = FUN_0041d810();
  if (-1 < lVar1) {
    lVar1 = FUN_0041db80((HKEY)param_1.Data1,(LPSTR)param_2,(byte)param_3);
    RegCloseKey((HKEY)param_1.Data1);
  }
  return lVar1;
}


