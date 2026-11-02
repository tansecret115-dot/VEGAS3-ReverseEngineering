/* Module: sfcdi.dll
   Function: SfScsi_GetMetrics
   Address: 5bf0cf60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfScsi_GetMetrics(struct tSFSCSI_METRICS *,unsigned long) */

long SfScsi_GetMetrics(tSFSCSI_METRICS *param_1,ulong param_2)

{
  uint uVar1;
  tSFSCSI_METRICS *ptVar2;
  
                    /* 0xcf60  111  ?SfScsi_GetMetrics@@YGJPAUtSFSCSI_METRICS@@K@Z */
  if (0x13 < param_2) {
    param_2 = 0x14;
  }
  ptVar2 = (tSFSCSI_METRICS *)&DAT_5bf630e8;
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)ptVar2;
    ptVar2 = ptVar2 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *ptVar2;
    ptVar2 = ptVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


