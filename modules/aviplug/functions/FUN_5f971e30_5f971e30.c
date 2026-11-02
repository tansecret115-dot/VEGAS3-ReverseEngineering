/* Module: aviplug.dll
   Function: FUN_5f971e30
   Address: 5f971e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f971e30(int *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *local_8;
  int local_4;
  
  param_1[1] = 0xf;
  local_8 = param_1 + 9;
  local_4 = 0;
  param_1 = param_2;
  do {
    puVar2 = (uint *)local_8[-7];
    puVar8 = puVar2 + 2;
    iVar4 = (int)*puVar2 >> 2;
    iVar1 = iVar4 * 0x218;
    uVar3 = *(undefined4 *)(&DAT_5f9f52d4 + iVar1);
    uVar5 = (&DAT_5f9f53e0)[iVar4 * 0x86] * *param_1 + *(int *)(&DAT_5f9f52d0 + iVar4 * 0x218) >>
            ((byte)uVar3 & 0x1f);
    if ((int)uVar5 < -0xff) {
      uVar5 = 0xffffff01;
    }
    else if (0xff < (int)uVar5) {
      uVar5 = 0xff;
    }
    *puVar8 = 0;
    puVar2[1] = uVar5 & 0x1ff;
    iVar7 = 0;
    param_2 = (int *)0x4;
    do {
      if (param_1[*(int *)(*(int *)(&DAT_5f9f52c8 + iVar1) + (int)param_2)] == 0) {
        *puVar8 = *puVar8 + 1;
      }
      else {
        uVar5 = (&DAT_5f9f53e0)
                [iVar4 * 0x86 + *(int *)(*(int *)(&DAT_5f9f52c8 + iVar1) + (int)param_2)] *
                param_1[*(int *)(*(int *)(&DAT_5f9f52c8 + iVar1) + (int)param_2)] +
                *(int *)(&DAT_5f9f52d0 + iVar1) >> ((byte)uVar3 & 0x1f);
        if (uVar5 == 0) {
          *puVar8 = *puVar8 + 1;
        }
        else {
          puVar8[1] = uVar5;
          iVar6 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
          if (iVar7 <= iVar6) {
            iVar7 = iVar6;
          }
          puVar8 = puVar8 + 2;
          *puVar8 = 0;
        }
      }
      param_2 = param_2 + 1;
    } while ((int)param_2 < 0x100);
    uVar5 = iVar7 / 0xc;
    *puVar8 = 0x1556;
    puVar8[1] = 0;
    if (3 < local_4) {
      uVar5 = (uVar5 - 3) + local_4;
    }
    if (2 < (int)uVar5) {
      uVar5 = 3;
    }
    param_1 = param_1 + 0x40;
    local_4 = local_4 + 1;
    *puVar2 = (*puVar2 ^ uVar5) & 3 ^ *puVar2;
    *local_8 = iVar7;
    local_8 = local_8 + 1;
  } while (local_4 < 6);
  return;
}


