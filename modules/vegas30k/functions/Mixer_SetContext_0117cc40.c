/* Module: vegas30k.dll
   Function: Mixer_SetContext
   Address: 0117cc40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetContext(void *) */

long Mixer_SetContext(void *param_1)

{
  long lVar1;
  
                    /* 0x17cc40  225  ?Mixer_SetContext@@YGJPAX@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x10c))(DAT_012b09c8,param_1);
  return lVar1;
}


