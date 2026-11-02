/* Module: wmfplug2.dll
   Function: SfWMF_GetTemplateListEx
   Address: 0041e130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_GetTemplateListEx(struct tSFLIST * *,unsigned long) */

long SfWMF_GetTemplateListEx(tSFLIST **param_1,ulong param_2)

{
  uint uVar1;
  
                    /* 0x1e130  26  ?SfWMF_GetTemplateListEx@@YGJPAPAUtSFLIST@@K@Z */
  uVar1 = FUN_0042c080((int *)param_1,4,-1,-1,0x80000000);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_0041de40(s_Software_Sonic_Foundry_Streaming_004888ec,(int *)*param_1,(byte)param_2);
    FUN_0041de40(s_Software_Sonic_Foundry_Streaming_004888ac,(int *)*param_1,(byte)param_2);
  }
  return uVar1;
}


