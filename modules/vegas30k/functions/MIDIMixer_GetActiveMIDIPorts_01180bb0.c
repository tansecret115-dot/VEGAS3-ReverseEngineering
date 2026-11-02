/* Module: vegas30k.dll
   Function: MIDIMixer_GetActiveMIDIPorts
   Address: 01180bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall MIDIMixer_GetActiveMIDIPorts(enum EMIDIDRVMODEL,int,int *,long *) */

long MIDIMixer_GetActiveMIDIPorts(EMIDIDRVMODEL param_1,int param_2,int *param_3,long *param_4)

{
  long lVar1;
  
                    /* 0x180bb0  134  ?MIDIMixer_GetActiveMIDIPorts@@YGJW4EMIDIDRVMODEL@@HPAHPAJ@Z
                        */
  lVar1 = (**(code **)(*DAT_012b09c4 + 0x5c))(DAT_012b09c4,param_1,param_2,param_3,param_4);
  return lVar1;
}


