/* Module: wmfplug2.dll
   Function: SfWMF_GetMatchingTemplate
   Address: 0041da40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_GetMatchingTemplate(struct SFFIND_TEMPLATE *,struct _GUID *) */

long SfWMF_GetMatchingTemplate(SFFIND_TEMPLATE *param_1,_GUID *param_2)

{
  int iVar1;
  
                    /* 0x1da40  20  ?SfWMF_GetMatchingTemplate@@YGJPAUSFFIND_TEMPLATE@@PAU_GUID@@@Z
                        */
  iVar1 = FUN_0041da60((int *)param_1,&param_2->Data1);
  return -(uint)(iVar1 != 0) & 0x80004005;
}


