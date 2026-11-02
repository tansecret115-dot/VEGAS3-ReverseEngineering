/* Module: vegas30k.dll
   Function: Transport_ResumeListenForSync
   Address: 0117f080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_ResumeListenForSync(void) */

long Transport_ResumeListenForSync(void)

{
  long lVar1;
  
                    /* 0x17f080  560  ?Transport_ResumeListenForSync@@YGJXZ */
  lVar1 = (**(code **)(*DAT_012b0b2c + 0x38))(DAT_012b0b2c);
  return lVar1;
}


