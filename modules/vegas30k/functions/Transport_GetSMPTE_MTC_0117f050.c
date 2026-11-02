/* Module: vegas30k.dll
   Function: Transport_GetSMPTE_MTC
   Address: 0117f050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_GetSMPTE_MTC(unsigned long,unsigned long *,int *,__int64 *) */

long Transport_GetSMPTE_MTC(ulong param_1,ulong *param_2,int *param_3,__int64 *param_4)

{
  long lVar1;
  
                    /* 0x17f050  547  ?Transport_GetSMPTE_MTC@@YGJKPAKPAHPA_J@Z */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0x20))(DAT_012b0b2c,param_1,param_2,param_3,param_4);
  return lVar1;
}


