/* Module: vegas30.exe
   Function: FUN_00566340
   Address: 00566340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00566340(undefined4 param_1,uchar *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_24;
  int local_20;
  int *local_18;
  char *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  local_c = 0;
  *param_3 = 0;
  pcVar2 = (char *)FUN_005bad20(param_1);
  local_14 = pcVar2;
  piVar3 = (int *)FUN_00436fa0(&local_18);
  iVar5 = *piVar3;
  while( true ) {
    if (*pcVar2 == '\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(pcVar2 + 0xc);
    }
    if (iVar5 == iVar6) break;
    local_18 = *(int **)(*(int *)(iVar5 + 4) + 0x130);
    if (local_18 == (int *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = *local_18;
    }
    local_20 = 0;
    if (0 < local_24) {
      do {
        iVar6 = *(int *)(local_18[2] + local_20 * 4);
        piVar3 = *(int **)(iVar6 + 0x94);
        if (piVar3 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar3;
        }
        iVar8 = 0;
        if (0 < iVar7) {
          do {
            iVar4 = piVar3[1] * iVar8 + piVar3[2];
            iVar1 = *(int *)(iVar6 + 4);
            if (iVar1 == 2) {
              bVar9 = CARRY4(local_8,*(uint *)(iVar4 + 8));
              local_8 = local_8 + *(uint *)(iVar4 + 8);
              local_4 = local_4 + *(int *)(iVar4 + 0xc) + (uint)bVar9;
            }
            else if (iVar1 == 3) {
              bVar9 = CARRY4(local_10,*(uint *)(iVar4 + 8));
              local_10 = local_10 + *(uint *)(iVar4 + 8);
              local_c = local_c + *(int *)(iVar4 + 0xc) + (uint)bVar9;
            }
            iVar8 = iVar8 + 1;
            *param_3 = *param_3 + 1;
          } while (iVar8 < iVar7);
        }
        local_20 = local_20 + 1;
        pcVar2 = local_14;
      } while (local_20 < local_24);
    }
    FUN_00436e20();
  }
  iVar5 = FUN_004e6c90(0x150);
  if (iVar5 == 0) {
    return -0x7ff8fff2;
  }
  *(undefined4 *)(iVar5 + 0x30) = param_1;
  *(uint *)(iVar5 + 0x140) = local_10;
  *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xffffffdf | 0x12;
  *(uint *)(iVar5 + 0x138) = local_8;
  *(int *)(iVar5 + 0x13c) = local_4;
  *(undefined1 **)(iVar5 + 0x20) = &LAB_00565e10;
  *(undefined4 *)(iVar5 + 0x2c) = 0x6e9b;
  *(undefined1 **)(iVar5 + 0x28) = &LAB_00566530;
  *(undefined1 **)(iVar5 + 0x24) = &LAB_00564060;
  *(undefined4 *)(iVar5 + 0x18) = 7;
  *(int *)(iVar5 + 0x144) = local_c;
  *(int *)(iVar5 + 0x148) = *param_3;
  _mbscpy((uchar *)(iVar5 + 0x34),param_2);
  iVar6 = FUN_004e7190(iVar5);
  if (iVar6 < 0) {
    FUN_004e6ce0(iVar5);
  }
  return iVar6;
}


