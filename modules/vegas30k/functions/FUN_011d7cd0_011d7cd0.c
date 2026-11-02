/* Module: vegas30k.dll
   Function: FUN_011d7cd0
   Address: 011d7cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011d7cd0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x14);
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      uVar1 = *(uint *)(iVar3 + 8);
      if ((uVar1 & 0x80000000) == 0) {
        uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x48))
                          (*(int **)(param_1 + 0xc),uVar1 & 0xffffff);
      }
      else {
        uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x44))
                          (*(int **)(param_1 + 0xc),iVar3 + 0xc,uVar1 & 0xffffff);
      }
      iVar3 = FUN_011d7de0(iVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  return uVar2;
}


