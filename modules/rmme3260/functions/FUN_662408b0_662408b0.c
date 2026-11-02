/* Module: rmme3260.dll
   Function: FUN_662408b0
   Address: 662408b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662408b0(int param_1)

{
  int iVar1;
  int iVar2;
  float local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  float local_c;
  undefined1 local_6 [2];
  
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_662408b0(*(int *)(param_1 + 0x68));
    return;
  }
  FUN_66245e90(DAT_6627cfe4,local_10,local_14,local_18,local_1c);
  local_c = *(float *)(param_1 + 0x1ec);
  iVar1 = ftol();
  iVar2 = ftol();
  if (iVar1 == iVar2) {
    iVar1 = ftol();
    iVar2 = ftol();
    if (iVar2 == iVar1) {
      iVar1 = ftol();
      iVar2 = ftol();
      if (iVar2 == iVar1) {
        iVar1 = ftol();
        iVar2 = ftol();
        if (iVar2 == iVar1) goto LAB_662409a5;
      }
    }
  }
  FUN_66245e60(DAT_6627cfe4,local_c,*(undefined4 *)(param_1 + 0x1e8),
               *(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e0));
LAB_662409a5:
  FUN_66245f40(DAT_6627cfe4,&local_20,local_6);
  local_c = *(float *)(param_1 + 0x1dc);
  if (local_20 != local_c) {
    FUN_66245f20(DAT_6627cfe4,local_c,0);
  }
  return;
}


