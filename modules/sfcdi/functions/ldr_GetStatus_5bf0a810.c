/* Module: sfcdi.dll
   Function: ldr_GetStatus
   Address: 5bf0a810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ldr_GetStatus(struct tPARAMETERS_LDRCFG *,struct tLDRPARAMS_STATUS *) */

int ldr_GetStatus(tPARAMETERS_LDRCFG *param_1,tLDRPARAMS_STATUS *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  tPARAMETERS_LDRCFG *local_158 [84];
  undefined4 local_8;
  
                    /* 0xa810  243
                       ?ldr_GetStatus@@YGHPAUtPARAMETERS_LDRCFG@@PAUtLDRPARAMS_STATUS@@@Z */
  if (param_1 == (tPARAMETERS_LDRCFG *)0x0) {
    return -3;
  }
  iVar2 = FUN_5bf0a6b0((int *)param_1);
  if (iVar2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x14c);
    local_158[0] = param_1;
    local_8 = 0;
    iVar2 = (*(code *)puVar1[0x12])(*puVar1,3,puVar1[1],local_158,param_2);
  }
  return iVar2;
}


