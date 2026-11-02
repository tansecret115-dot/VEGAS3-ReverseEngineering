/* Module: wmfplug2.dll
   Function: SfWMF_GetTemplateList
   Address: 0041de10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_GetTemplateList(struct tSFLIST *,unsigned long) */

long SfWMF_GetTemplateList(tSFLIST *param_1,ulong param_2)

{
  uint uVar1;
  
                    /* 0x1de10  25  ?SfWMF_GetTemplateList@@YGJPAUtSFLIST@@K@Z */
  uVar1 = FUN_0041de40(s_Software_Sonic_Foundry_Streaming_004888ec,(int *)param_1,(byte)param_2);
  FUN_0041de40(s_Software_Sonic_Foundry_Streaming_004888ac,(int *)param_1,(byte)param_2);
  return uVar1;
}


