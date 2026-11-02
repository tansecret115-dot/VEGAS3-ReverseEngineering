/* Module: vegas30k.dll
   Function: SfFMMeta_UpdateMetaStream
   Address: 0101c520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_UpdateMetaStream(char *,int,unsigned long,struct ISfReadMeta *) */

long SfFMMeta_UpdateMetaStream(char *param_1,int param_2,ulong param_3,ISfReadMeta *param_4)

{
  long lVar1;
  
                    /* 0x1c520  387  ?SfFMMeta_UpdateMetaStream@@YGJPADHKPAUISfReadMeta@@@Z */
  lVar1 = SfFMMeta_UpdateMetaStreamEx(param_1,param_2,param_3,param_4,4);
  return lVar1;
}


