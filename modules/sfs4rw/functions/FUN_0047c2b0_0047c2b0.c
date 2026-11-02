/* Module: sfs4rw.dll
   Function: FUN_0047c2b0
   Address: 0047c2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047c2b0(int *param_1)

{
  int iVar1;
  
  FUN_0047c320((int)param_1,(int)param_1 + 0x8a,*(int *)((int)param_1 + 0xb12));
  FUN_0047c320((int)param_1,(int)param_1 + 0x97e,*(int *)((int)param_1 + 0xb1e));
  FUN_0047bcf0(param_1,(int *)((int)param_1 + 0xb26));
  iVar1 = 0x12;
  do {
    if ((short)param_1[(byte)(&DAT_004a0f80)[iVar1] + 0x29d] != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)((int)param_1 + 0x169b) = *(int *)((int)param_1 + 0x169b) + iVar1 * 3 + 0x11;
  return;
}


