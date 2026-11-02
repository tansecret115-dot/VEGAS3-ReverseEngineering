/* Module: vegas30k.dll
   Function: Mixer_GetName
   Address: 0117cc60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetName(char *,unsigned long) */

long Mixer_GetName(char *param_1,ulong param_2)

{
  long lVar1;
  
                    /* 0x17cc60  185  ?Mixer_GetName@@YGJPADK@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1c))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


