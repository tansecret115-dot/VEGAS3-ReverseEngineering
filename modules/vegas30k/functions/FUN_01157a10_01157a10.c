/* Module: vegas30k.dll
   Function: FUN_01157a10
   Address: 01157a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01157a10(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  uint local_48;
  int local_40;
  char local_34 [52];
  
  local_40 = -1;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    FUN_01155f80(param_1,"Missing IHDR before zTXt");
  }
  if ((*(uint *)(param_1 + 0x60) & 4) != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  }
  pcVar3 = (char *)FUN_01155eb0(param_1,param_3 + 1);
  FUN_011561c0(param_1,pcVar3,param_3);
  iVar4 = FUN_011561f0(param_1,0);
  if (iVar4 != 0) {
    FUN_01155ef0(param_1,pcVar3);
    return;
  }
  pcVar3[param_3] = '\0';
  cVar1 = *pcVar3;
  pcVar9 = pcVar3;
  while (cVar1 != '\0') {
    pcVar10 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar10;
  }
  if (pcVar9 == pcVar3 + param_3) {
    FUN_01155fb0(param_1,"Zero length zTXt chunk");
    pcVar10 = pcVar9;
  }
  else {
    local_40 = (int)pcVar9[1];
    pcVar10 = pcVar9 + 1;
    if (local_40 == 0) {
      pcVar9 = pcVar9 + 2;
      *(char **)(param_1 + 0x6c) = pcVar9;
      pcVar10 = pcVar3 + (param_3 - (int)pcVar9);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
      uVar11 = (int)pcVar9 - (int)pcVar3;
      *(char **)(param_1 + 0x70) = pcVar10;
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
      local_48 = 0;
      pcVar9 = (char *)0x0;
      while( true ) {
        if (pcVar10 == (char *)0x0) goto LAB_01157cb9;
        iVar4 = FUN_0112cba0(param_1 + 0x6c,1);
        if ((iVar4 != 0) && (iVar4 != 1)) break;
        iVar2 = *(int *)(param_1 + 0x7c);
        if ((iVar2 == 0) || (pcVar5 = pcVar9, iVar4 == 1)) {
          if (pcVar9 == (char *)0x0) {
            pcVar5 = (char *)FUN_01155eb0(param_1,(*(int *)(param_1 + 0xa8) - iVar2) + 1 + uVar11);
            uVar7 = *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0x7c);
            pcVar9 = *(char **)(param_1 + 0xa4);
            pcVar10 = pcVar5 + uVar11;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar10 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            }
            pcVar9 = pcVar3;
            pcVar10 = pcVar5;
            for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar8 = uVar11 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar10 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            }
            local_48 = (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0x7c)) + uVar11;
          }
          else {
            pcVar5 = (char *)FUN_01155eb0(param_1,(*(int *)(param_1 + 0xa8) - iVar2) + 1 + local_48)
            ;
            pcVar10 = pcVar9;
            pcVar12 = pcVar5;
            for (uVar8 = local_48 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar8 = local_48 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar12 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar12 = pcVar12 + 1;
            }
            FUN_01155ef0(param_1,pcVar9);
            uVar7 = *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0x7c);
            pcVar9 = *(char **)(param_1 + 0xa4);
            pcVar10 = pcVar5 + local_48;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar10 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            }
            local_48 = local_48 + (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0x7c));
          }
          pcVar5[local_48] = '\0';
          pcVar9 = pcVar5;
          if (iVar4 == 1) goto LAB_01157cb9;
          *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
          *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
        }
        pcVar10 = *(char **)(param_1 + 0x70);
        pcVar9 = pcVar5;
      }
      pcVar10 = *(char **)(param_1 + 0x84);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = s_Error_decoding_zTXt_chunk_01207788;
      }
      FUN_01155fb0(param_1,pcVar10);
      FUN_0112c9d0(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (pcVar9 == (char *)0x0) {
        local_48 = uVar11 + 0x1b;
        pcVar9 = (char *)FUN_01155eb0(param_1,local_48);
        pcVar10 = pcVar3;
        pcVar5 = pcVar9;
        for (uVar8 = uVar11 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar8 = uVar11 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar5 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar5 = pcVar5 + 1;
        }
      }
      pcVar9[local_48 - 1] = '\0';
      pcVar10 = pcVar3 + param_3 + (-1 - (int)pcVar9);
      if ((char *)0x19 < pcVar10) {
        pcVar10 = (char *)0x1a;
      }
      pcVar5 = s_Error_decoding_zTXt_chunk_01207788;
      pcVar12 = pcVar9 + uVar11;
      for (uVar8 = (uint)(pcVar10 + 1) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = (uint)(pcVar10 + 1) & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar12 = pcVar12 + 1;
      }
LAB_01157cb9:
      FUN_0112c9d0(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x70) = 0;
      FUN_01155ef0(param_1,pcVar3);
      pcVar10 = pcVar9 + uVar11;
      pcVar3 = pcVar9;
      goto LAB_01157d23;
    }
    sprintf(local_34,"Unknown zTXt compression type %d",local_40);
    FUN_01155fb0(param_1,local_34);
    pcVar9 = pcVar3 + param_3 + (-1 - (int)pcVar10);
    if ((char *)0x19 < pcVar9) {
      pcVar9 = (char *)0x1a;
    }
    pcVar5 = s_Error_decoding_zTXt_chunk_01207788;
    pcVar12 = pcVar10;
    for (uVar11 = (uint)(pcVar9 + 1) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar11 = (uint)(pcVar9 + 1) & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
LAB_01157d23:
  piVar6 = (int *)FUN_01155eb0(param_1,0x10);
  *piVar6 = local_40;
  piVar6[1] = (int)pcVar3;
  piVar6[2] = (int)pcVar10;
  FUN_011283e0(param_1,param_2,piVar6,1);
  FUN_01155ef0(param_1,piVar6);
  return;
}


