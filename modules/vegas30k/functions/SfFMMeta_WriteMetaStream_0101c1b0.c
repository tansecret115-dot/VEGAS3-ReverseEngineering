/* Module: vegas30k.dll
   Function: SfFMMeta_WriteMetaStream
   Address: 0101c1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfFMMeta_WriteMetaStream(char *,int,unsigned long,struct ISfReadMeta *) */

long SfFMMeta_WriteMetaStream(char *param_1,int param_2,ulong param_3,ISfReadMeta *param_4)

{
  long lVar1;
  
                    /* 0x1c1b0  389  ?SfFMMeta_WriteMetaStream@@YGJPADHKPAUISfReadMeta@@@Z */
  lVar1 = SfFMMeta_WriteMetaStreamEx(param_1,param_2,param_3,param_4,5);
  return lVar1;
}


