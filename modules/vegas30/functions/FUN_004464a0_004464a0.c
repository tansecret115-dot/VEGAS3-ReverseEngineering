/* Module: vegas30.exe
   Function: FUN_004464a0
   Address: 004464a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004464a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = FUN_004452b0(param_1);
  uVar4 = 0;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_004452b0(param_1);
    uVar4 = *puVar3;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x674) = uVar4;
  iVar5 = FUN_00445160(param_1);
  iVar2 = *(int *)(param_1 + 0x80);
  if (*(int *)(iVar2 + 0xba8) <= iVar5) {
    if (iVar5 < *(int *)(iVar2 + 0xba8) + *(int *)(iVar2 + 0xbac)) goto LAB_004464ef;
    iVar5 = (iVar5 - *(int *)(iVar2 + 0xbac)) + 1;
  }
  *(int *)(iVar2 + 0xba8) = iVar5;
LAB_004464ef:
  iVar2 = *(int *)(param_1 + 0x80);
  iVar5 = *(int *)(iVar2 + 0x674) - *(int *)(iVar2 + 0xbac);
  if (*(int *)(iVar2 + 0xba8) < iVar5) {
    iVar5 = *(int *)(iVar2 + 0xba8);
  }
  *(int *)(iVar2 + 0xba8) = iVar5;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x80) + 0xba8);
  *(uint *)(*(int *)(param_1 + 0x80) + 0xba8) = uVar1 & ((int)uVar1 < 1) - 1;
  return;
}


