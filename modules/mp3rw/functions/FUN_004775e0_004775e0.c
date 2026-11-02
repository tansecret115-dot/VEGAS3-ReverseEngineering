/* Module: mp3rw.dll
   Function: FUN_004775e0
   Address: 004775e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004775e0(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  uint local_48;
  int local_40;
  char local_34 [52];
  
  local_40 = -1;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_00475b50(param_1,"Missing IHDR before zTXt");
  }
  if ((param_1[0x18] & 4U) != 0) {
    param_1[0x18] = param_1[0x18] | 8;
  }
  pbVar3 = FUN_00475a80(param_1,param_3 + 1);
  FUN_00475d90(param_1,pbVar3,param_3);
  iVar4 = FUN_00475dc0(param_1,0);
  if (iVar4 != 0) {
    FUN_00475ac0((int)param_1,pbVar3);
    return;
  }
  pbVar3[param_3] = 0;
  bVar1 = *pbVar3;
  pbVar9 = pbVar3;
  while (bVar1 != 0) {
    pbVar10 = pbVar9 + 1;
    pbVar9 = pbVar9 + 1;
    bVar1 = *pbVar10;
  }
  if (pbVar9 == pbVar3 + param_3) {
    FUN_00475b80((int)param_1,"Zero length zTXt chunk");
    pbVar10 = pbVar9;
  }
  else {
    local_40 = (int)(char)pbVar9[1];
    pbVar10 = pbVar9 + 1;
    if (local_40 == 0) {
      pbVar9 = pbVar9 + 2;
      param_1[0x1b] = (int)pbVar9;
      pbVar10 = pbVar3 + (param_3 - (int)pbVar9);
      param_1[0x1f] = param_1[0x2a];
      uVar11 = (int)pbVar9 - (int)pbVar3;
      param_1[0x1c] = (int)pbVar10;
      param_1[0x1e] = param_1[0x29];
      local_48 = 0;
      pbVar9 = (byte *)0x0;
      while( true ) {
        if (pbVar10 == (byte *)0x0) goto LAB_00477889;
        uVar5 = FUN_00431800(param_1 + 0x1b,1);
        if ((uVar5 != 0) && (uVar5 != 1)) break;
        iVar4 = param_1[0x1f];
        if ((iVar4 == 0) || (pbVar6 = pbVar9, uVar5 == 1)) {
          if (pbVar9 == (byte *)0x0) {
            pbVar6 = FUN_00475a80(param_1,(param_1[0x2a] - iVar4) + 1 + uVar11);
            iVar4 = param_1[0x2a];
            iVar2 = param_1[0x1f];
            pbVar9 = (byte *)param_1[0x29];
            pbVar10 = pbVar6 + uVar11;
            for (uVar8 = (uint)(iVar4 - iVar2) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              pbVar10 = pbVar10 + 4;
            }
            for (uVar8 = iVar4 - iVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar10 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              pbVar10 = pbVar10 + 1;
            }
            pbVar9 = pbVar3;
            pbVar10 = pbVar6;
            for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              pbVar10 = pbVar10 + 4;
            }
            for (uVar8 = uVar11 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar10 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              pbVar10 = pbVar10 + 1;
            }
            local_48 = (param_1[0x2a] - param_1[0x1f]) + uVar11;
          }
          else {
            pbVar6 = FUN_00475a80(param_1,(param_1[0x2a] - iVar4) + 1 + local_48);
            pbVar10 = pbVar9;
            pbVar12 = pbVar6;
            for (uVar8 = local_48 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
              pbVar10 = pbVar10 + 4;
              pbVar12 = pbVar12 + 4;
            }
            for (uVar8 = local_48 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar12 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              pbVar12 = pbVar12 + 1;
            }
            FUN_00475ac0((int)param_1,pbVar9);
            iVar4 = param_1[0x2a];
            iVar2 = param_1[0x1f];
            pbVar9 = (byte *)param_1[0x29];
            pbVar10 = pbVar6 + local_48;
            for (uVar8 = (uint)(iVar4 - iVar2) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
              pbVar9 = pbVar9 + 4;
              pbVar10 = pbVar10 + 4;
            }
            for (uVar8 = iVar4 - iVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar10 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              pbVar10 = pbVar10 + 1;
            }
            local_48 = local_48 + (param_1[0x2a] - param_1[0x1f]);
          }
          pbVar6[local_48] = 0;
          pbVar9 = pbVar6;
          if (uVar5 == 1) goto LAB_00477889;
          param_1[0x1e] = param_1[0x29];
          param_1[0x1f] = param_1[0x2a];
        }
        pbVar10 = (byte *)param_1[0x1c];
        pbVar9 = pbVar6;
      }
      pcVar13 = (char *)param_1[0x21];
      if (pcVar13 == (char *)0x0) {
        pcVar13 = s_Error_decoding_zTXt_chunk_004a80a0;
      }
      FUN_00475b80((int)param_1,pcVar13);
      FUN_00431630((int)(param_1 + 0x1b));
      param_1[0x1c] = 0;
      if (pbVar9 == (byte *)0x0) {
        local_48 = uVar11 + 0x1b;
        pbVar9 = FUN_00475a80(param_1,local_48);
        pbVar10 = pbVar3;
        pbVar6 = pbVar9;
        for (uVar5 = uVar11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pbVar6 = *(undefined4 *)pbVar10;
          pbVar10 = pbVar10 + 4;
          pbVar6 = pbVar6 + 4;
        }
        for (uVar5 = uVar11 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pbVar6 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar6 = pbVar6 + 1;
        }
      }
      pbVar9[local_48 - 1] = 0;
      pbVar10 = pbVar3 + param_3 + (-1 - (int)pbVar9);
      if ((byte *)0x19 < pbVar10) {
        pbVar10 = (byte *)0x1a;
      }
      pbVar6 = (byte *)s_Error_decoding_zTXt_chunk_004a80a0;
      pbVar12 = pbVar9 + uVar11;
      for (uVar5 = (uint)(pbVar10 + 1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar5 = (uint)(pbVar10 + 1) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar12 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar12 = pbVar12 + 1;
      }
LAB_00477889:
      FUN_00431630((int)(param_1 + 0x1b));
      param_1[0x1c] = 0;
      FUN_00475ac0((int)param_1,pbVar3);
      pbVar10 = pbVar9 + uVar11;
      pbVar3 = pbVar9;
      goto LAB_004778f3;
    }
    sprintf(local_34,"Unknown zTXt compression type %d",local_40);
    FUN_00475b80((int)param_1,local_34);
    pbVar9 = pbVar3 + param_3 + (-1 - (int)pbVar10);
    if ((byte *)0x19 < pbVar9) {
      pbVar9 = (byte *)0x1a;
    }
    pbVar6 = (byte *)s_Error_decoding_zTXt_chunk_004a80a0;
    pbVar12 = pbVar10;
    for (uVar11 = (uint)(pbVar9 + 1) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar11 = (uint)(pbVar9 + 1) & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pbVar12 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar12 = pbVar12 + 1;
    }
  }
LAB_004778f3:
  piVar7 = FUN_00475a80(param_1,0x10);
  *piVar7 = local_40;
  piVar7[1] = (int)pbVar3;
  piVar7[2] = (int)pbVar10;
  FUN_0044db80(param_1,param_2,(int)piVar7,1);
  FUN_00475ac0((int)param_1,piVar7);
  return;
}


