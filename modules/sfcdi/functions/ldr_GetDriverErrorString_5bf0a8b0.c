/* Module: sfcdi.dll
   Function: ldr_GetDriverErrorString
   Address: 5bf0a8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ldr_GetDriverErrorString(struct tPARAMETERS_LDRCFG *,struct tCDR_ERRORDATA *,char
   *,unsigned int) */

int ldr_GetDriverErrorString
              (tPARAMETERS_LDRCFG *param_1,tCDR_ERRORDATA *param_2,char *param_3,uint param_4)

{
  undefined4 *puVar1;
  char *local_8;
  uint local_4;
  
                    /* 0xa8b0  239
                       ?ldr_GetDriverErrorString@@YGHPAUtPARAMETERS_LDRCFG@@PAUtCDR_ERRORDATA@@PADI@Z
                        */
  local_4 = param_4;
  local_8 = param_3;
  *(undefined4 *)(param_2 + 0x46) = 0xfffffff1;
  puVar1 = *(undefined4 **)(param_1 + 0x14c);
  (*(code *)puVar1[0x12])(*puVar1,4,puVar1[1],param_2,&local_8);
  return 0;
}


