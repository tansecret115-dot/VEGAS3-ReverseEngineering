/* Module: sfcdi.dll
   Function: ldr_Move
   Address: 5bf0a740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ldr_Move(struct tPARAMETERS_LDRCFG *,struct tLDRPARAMS_MOVE *) */

int ldr_Move(tPARAMETERS_LDRCFG *param_1,tLDRPARAMS_MOVE *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  tPARAMETERS_LDRCFG *local_158 [84];
  undefined4 local_8;
  
                    /* 0xa740  245  ?ldr_Move@@YGHPAUtPARAMETERS_LDRCFG@@PAUtLDRPARAMS_MOVE@@@Z */
  if (param_1 == (tPARAMETERS_LDRCFG *)0x0) {
    return -3;
  }
  iVar2 = FUN_5bf0a6b0((int *)param_1);
  if (iVar2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x14c);
    local_158[0] = param_1;
    local_8 = 0;
    iVar2 = (*(code *)puVar1[0x12])(*puVar1,7,puVar1[1],local_158,param_2);
  }
  return iVar2;
}


