/* Module: vegas30k.dll
   Function: MIDIMixer_SetActiveMIDIPorts
   Address: 01180be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall MIDIMixer_SetActiveMIDIPorts(enum EMIDIDRVMODEL,int,int * const,long) */

long MIDIMixer_SetActiveMIDIPorts(EMIDIDRVMODEL param_1,int param_2,int *param_3,long param_4)

{
  long lVar1;
  
                    /* 0x180be0  139  ?MIDIMixer_SetActiveMIDIPorts@@YGJW4EMIDIDRVMODEL@@HQAHJ@Z */
  lVar1 = (**(code **)(*DAT_012b09c4 + 0x60))(DAT_012b09c4,param_1,param_2,param_3,param_4);
  return lVar1;
}


