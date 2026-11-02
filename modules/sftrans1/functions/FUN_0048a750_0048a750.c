/* Module: sftrans1.dll
   Function: FUN_0048a750
   Address: 0048a750
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_0048a750(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_4;
  
  uVar6 = 1;
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  iVar1 = **(int **)(param_1 + 0xb0);
  if ((iVar1 != 0) &&
     (local_4 = FUN_004dc7f0(*(undefined4 *)(param_1 + 0xa4),0,0xffffffff,
                             *(undefined4 *)(*(int **)(param_1 + 0xb0))[2]), iVar5 = iVar1,
     0 < iVar1)) {
    do {
      uVar2 = FUN_004dc7f0(*(undefined4 *)(param_1 + 0xa4),0,0xffffffff,
                           **(undefined4 **)(*(int *)(param_1 + 0xb0) + 8));
      uVar3 = FUN_00486ec0(uVar2,0);
      uVar6 = uVar6 | uVar3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0048c4a0();
  iVar5 = *(int *)(param_1 + 0x100);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    iVar4 = **(int **)(param_1 + 0xa4) + -1;
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
  }
  *(int *)(param_1 + 0x100) = iVar5;
  FUN_0048c640((int *)(param_1 + 0x100),0);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  FUN_0048c310(5,local_4,iVar1);
  return uVar6;
}


