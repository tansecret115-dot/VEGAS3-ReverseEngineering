/* Module: vidcap30.exe
   Function: FUN_0042fda0
   Address: 0042fda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042fda0(int param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_10;
  uint local_c;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28) &&
      -1 < *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) {
    piVar3 = (int *)_SfGetUIFontSize_4(100);
    uVar1 = *(uint *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x90) + 10;
    iVar5 = *(int *)(param_1 + 0x94) + 8;
    bVar2 = false;
    if ((uVar1 & 2) == 0) {
      local_10 = *(int *)(param_1 + 0x2c);
      iVar8 = *(int *)(param_1 + 0x24);
      if ((uVar1 & 1) == 0) {
        local_10 = local_10 - *piVar3 / 2;
        iVar8 = iVar8 + *piVar3 / 2;
      }
      local_c = 0;
      iVar7 = ((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) - iVar5) / 2 +
              *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0xac) != 0) {
        piVar3 = (int *)(param_1 + 0xc0);
        do {
          piVar3[-2] = iVar7;
          *piVar3 = iVar7 + iVar5;
          if ((*(byte *)((int)piVar3 + 10) & 8) == 0) {
            if ((*(byte *)((int)piVar3 + 0xb) & 1) == 0) {
              if ((local_10 - iVar8 < piVar3[4] * iVar6) || (bVar2)) {
                piVar3[-3] = iVar8;
                piVar3[-1] = iVar8;
                bVar2 = true;
              }
              else {
                iVar4 = piVar3[4] * iVar6 + iVar8;
                piVar3[-3] = iVar8;
                piVar3[-1] = iVar4;
                iVar8 = iVar4 + 2;
              }
            }
            else {
              piVar3[-3] = iVar8 + 2;
              piVar3[-1] = iVar8 + 4;
              iVar8 = iVar8 + 8;
            }
          }
          else {
            piVar3[-3] = iVar8;
            piVar3[-1] = iVar8;
          }
          local_c = local_c + 1;
          piVar3 = piVar3 + 8;
        } while (local_c < *(uint *)(param_1 + 0xac));
      }
    }
    else {
      local_10 = *(int *)(param_1 + 0x30);
      iVar8 = *(int *)(param_1 + 0x28);
      if ((uVar1 & 1) == 0) {
        local_10 = local_10 - *piVar3 / 2;
        iVar8 = iVar8 + *piVar3 / 2;
      }
      local_c = 0;
      iVar7 = ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) - iVar6) / 2 +
              *(int *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0xac) != 0) {
        iVar4 = -iVar8;
        piVar3 = (int *)(param_1 + 0xb8);
        do {
          piVar3[-1] = iVar7;
          piVar3[1] = iVar6 + iVar7;
          if ((*(byte *)((int)piVar3 + 0x12) & 8) == 0) {
            if ((*(byte *)((int)piVar3 + 0x13) & 1) == 0) {
              if ((local_10 + iVar4 < iVar5) || (bVar2)) {
                *piVar3 = iVar8;
                piVar3[2] = iVar8;
                bVar2 = true;
              }
              else {
                *piVar3 = iVar8;
                piVar3[2] = iVar8 + iVar5;
                iVar8 = iVar8 + iVar5 + 2;
                iVar4 = (-2 - iVar5) + iVar4;
              }
            }
            else {
              *piVar3 = iVar8 + 2;
              piVar3[2] = iVar8 + 4;
              iVar4 = iVar4 + -8;
              iVar8 = iVar8 + 8;
            }
          }
          else {
            *piVar3 = iVar8;
            piVar3[2] = iVar8;
          }
          piVar3 = piVar3 + 8;
          local_c = local_c + 1;
        } while (local_c < *(uint *)(param_1 + 0xac));
        return;
      }
    }
  }
  return;
}


