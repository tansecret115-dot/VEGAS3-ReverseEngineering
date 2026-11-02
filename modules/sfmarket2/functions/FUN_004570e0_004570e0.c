/* Module: sfmarket2.dll
   Function: FUN_004570e0
   Address: 004570e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004570e0(int *param_1)

{
  int iVar1;
  
  FUN_00457150((int)param_1,(int)param_1 + 0x8a,*(int *)((int)param_1 + 0xb12));
  FUN_00457150((int)param_1,(int)param_1 + 0x97e,*(int *)((int)param_1 + 0xb1e));
  FUN_00456b20(param_1,(int *)((int)param_1 + 0xb26));
  iVar1 = 0x12;
  do {
    if ((short)param_1[(byte)(&DAT_004a083c)[iVar1] + 0x29d] != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)((int)param_1 + 0x169b) = *(int *)((int)param_1 + 0x169b) + iVar1 * 3 + 0x11;
  return;
}


