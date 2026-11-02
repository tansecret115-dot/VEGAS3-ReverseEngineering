/* Module: vegas30.exe
   Function: FUN_004df210
   Address: 004df210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004df210(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0xd94)) {
      uVar3 = 0;
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xd94)) {
        piVar4 = (int *)(param_1 + 0xd88);
        do {
          iVar1 = *piVar4;
          if (*(int *)(iVar1 + 4) == 2) {
            uVar2 = FUN_004df1f0(iVar1);
            uVar3 = (uVar2 & 1) << 1 | uVar3 & 0xfffffffd;
          }
          else if (*(int *)(iVar1 + 4) == 3) {
            uVar2 = FUN_004df1f0(iVar1);
            uVar3 = uVar3 ^ (uVar2 ^ uVar3) & 1;
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar5 < *(int *)(param_1 + 0xd94));
      }
      if ((uVar3 & 1) != 0) {
        *(uint *)(param_1 + 0xd98) = ~uVar3 >> 1 & 1;
        return;
      }
      if ((uVar3 & 2) != 0) {
        *(undefined4 *)(param_1 + 0xd98) = 2;
        return;
      }
    }
    *(undefined4 *)(param_1 + 0xd98) = 0xffffffff;
  }
  return;
}


