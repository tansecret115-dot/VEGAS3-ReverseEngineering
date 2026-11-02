/* Module: vegas30k.dll
   Function: FUN_01087280
   Address: 01087280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01087280(uint param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  byte bVar12;
  byte local_c;
  byte bStack_b;
  ushort uStack_a;
  undefined2 local_8;
  byte bStack_6;
  byte bStack_5;
  undefined4 local_4;
  
  piVar2 = *(int **)(param_1 + 0x24);
  uVar4 = 0;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *piVar2;
    }
    uVar8 = (uint)uVar4;
    if (iVar11 <= (int)uVar8) goto LAB_0108730d;
    if (piVar2 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *piVar2;
    }
    if (iVar11 + -1 < (int)uVar8) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(piVar2[2] + uVar8 * 4);
    }
    if ((*param_2 <= *(byte *)(iVar11 + 6)) && (*param_3 <= *(byte *)(iVar11 + 7))) break;
    uVar4 = uVar4 + 1;
  }
  if ((*param_2 == *(byte *)(iVar11 + 6)) && (*param_3 == *(byte *)(iVar11 + 7))) {
    return 0;
  }
LAB_0108730d:
  bStack_6 = *param_2;
  bStack_5 = *param_3;
  uVar8 = 0;
  puVar3 = *(uint **)(param_3 + 0x1c);
  bStack_b = 0;
  if (puVar3 != (uint *)0x0) {
    uVar8 = *puVar3;
  }
  uStack_a = (ushort)uVar8 & 0xff;
  if (((*(int *)(param_3 + 0x10) == 0) || (*(int *)(param_3 + 8) != 0)) &&
     (*(int *)(param_3 + 8) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  local_8 = 0;
  if ((uVar8 & 0xff) != 0) {
    param_1 = (uint)uStack_a;
    iVar11 = 0;
    bVar12 = bStack_b;
    do {
      if (puVar3 == (uint *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar3;
      }
      if ((iVar11 < 0) || ((int)(uVar8 - 1) < iVar11)) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(puVar3[2] + iVar11 * 4);
      }
      if (iVar9 != 0) {
        iVar9 = *(int *)(*(int *)(iVar9 + 4) + 0x10);
        if ((*(int *)(iVar9 + 0x104) == 0) && (*(int *)(iVar9 + 0x108) == 0)) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        if (((*(int *)(iVar9 + 0xfc) == 0) && (*(int *)(iVar9 + 0x100) == 0)) &&
           (*(int *)(iVar9 + 0x104) == 0)) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        if ((*(int *)(param_3 + 4) == 0) || (*(int *)(iVar9 + 0x10c) != 0)) {
          cVar7 = '\x01';
        }
        else {
          cVar7 = '\0';
        }
        local_c = cVar7 << 6 | local_c & 0xbf | cVar5 << 5 | cVar6 << 4;
        bVar1 = *(byte *)(iVar9 + 8);
        if (bVar12 < bVar1) {
          bVar12 = bVar1;
          bStack_b = bVar1;
        }
      }
      iVar11 = iVar11 + 1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  local_4 = 0;
  local_c = ((local_c >> 1 & 0x10) != 0 || (local_c & 0x10) != 0) << 2 | local_c;
  uVar10 = _SfList_AllocAndInsertItem_20(piVar2,&local_c,0xc,uVar4,0);
  return uVar10;
}


