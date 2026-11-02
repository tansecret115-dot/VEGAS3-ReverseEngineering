/* Module: sfcdi.dll
   Function: ldr_Reset
   Address: 5bf0a7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ldr_Reset(struct tPARAMETERS_LDRCFG *) */

int ldr_Reset(tPARAMETERS_LDRCFG *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  tPARAMETERS_LDRCFG *local_158 [84];
  undefined4 local_8;
  
                    /* 0xa7b0  246  ?ldr_Reset@@YGHPAUtPARAMETERS_LDRCFG@@@Z */
  if (param_1 == (tPARAMETERS_LDRCFG *)0x0) {
    return -3;
  }
  iVar2 = FUN_5bf0a6b0((int *)param_1);
  if (iVar2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x14c);
    local_158[0] = param_1;
    local_8 = 0;
    iVar2 = (*(code *)puVar1[0x12])(*puVar1,8,puVar1[1],local_158,0);
  }
  return iVar2;
}


