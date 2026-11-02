/* Module: encn3260.dll
   Function: FUN_664aac40
   Address: 664aac40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664aac40(int param_1)

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
    FUN_664aac40(*(int *)(param_1 + 0x68));
    return;
  }
  FUN_664b0a30(DAT_664f07dc,local_10,local_14,local_18,local_1c);
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
        if (iVar2 == iVar1) goto LAB_664aad35;
      }
    }
  }
  FUN_664b0a00(DAT_664f07dc,local_c,*(undefined4 *)(param_1 + 0x1e8),
               *(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e0));
LAB_664aad35:
  FUN_664b0ae0(DAT_664f07dc,&local_20,local_6);
  local_c = *(float *)(param_1 + 0x1dc);
  if (local_20 != local_c) {
    FUN_664b0ac0(DAT_664f07dc,local_c,0);
  }
  return;
}


