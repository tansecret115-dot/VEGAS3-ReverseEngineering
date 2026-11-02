/* Module: sfcdi.dll
   Function: prn_GetDriverErrorString
   Address: 5bf0aa20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall prn_GetDriverErrorString(struct tPARAMETERS_PRNCFG *,struct tCDR_ERRORDATA *,char
   *,unsigned int) */

int prn_GetDriverErrorString
              (tPARAMETERS_PRNCFG *param_1,tCDR_ERRORDATA *param_2,char *param_3,uint param_4)

{
  undefined4 *puVar1;
  char *local_8;
  uint local_4;
  
                    /* 0xaa20  252
                       ?prn_GetDriverErrorString@@YGHPAUtPARAMETERS_PRNCFG@@PAUtCDR_ERRORDATA@@PADI@Z
                        */
  local_4 = param_4;
  local_8 = param_3;
  *(undefined4 *)(param_2 + 0x46) = 0xfffffff1;
  puVar1 = *(undefined4 **)(param_1 + 0x14c);
  (*(code *)puVar1[0x10])(*puVar1,6,puVar1[1],param_2,&local_8);
  return 0;
}


