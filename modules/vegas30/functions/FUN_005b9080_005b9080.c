/* Module: vegas30.exe
   Function: FUN_005b9080
   Address: 005b9080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b9080(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_4;
  
  FUN_005b83b0(param_1,1);
  piVar1 = *(int **)(param_1 + 0x1dc);
  iVar6 = 0;
  if (piVar1 == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *piVar1;
  }
  iVar8 = 0;
  iVar7 = 0;
  bVar4 = true;
  if (0 < local_4) {
    do {
      iVar2 = *(int *)(piVar1[2] + iVar6 * 4);
      if (*(int *)(iVar2 + 4) == 3) {
        uVar3 = *(uint *)(iVar2 + 0x44);
        *(uint *)(iVar2 + 0x44) = uVar3 & 0xffffff3f;
        if (((uVar3 & 0x20) == 0) || (bVar4)) {
          iVar5 = 0;
        }
        else {
          iVar5 = 1;
        }
        *(uint *)(iVar2 + 0x44) = iVar5 << 5 | uVar3 & 0xffffff1f;
        if (iVar5 == 0) {
          iVar8 = iVar2;
          if (iVar7 != 0) {
            *(uint *)(iVar7 + 0x44) = *(uint *)(iVar7 + 0x44) | 0x80;
            iVar7 = 0;
          }
        }
        else {
          iVar7 = iVar2;
          if (iVar8 != 0) {
            *(uint *)(iVar8 + 0x44) = *(uint *)(iVar8 + 0x44) | 0x40;
            iVar8 = 0;
          }
        }
        bVar4 = false;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_4);
    if (iVar7 != 0) {
      *(uint *)(iVar7 + 0x44) = *(uint *)(iVar7 + 0x44) | 0x80;
    }
  }
  FUN_005b84d0(param_1,1);
  return;
}


