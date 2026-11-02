/* Module: mp3plug.dll
   Function: FUN_5f6d3690
   Address: 5f6d3690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f6d3690(void *this,undefined4 *param_1,byte param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *local_10;
  
  uVar8 = *(uint *)((int)this + 4);
  puVar10 = param_1;
  for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *param_1 = DAT_5f75c684;
  *(byte *)((int)param_1 + 3) =
       *(byte *)((int)param_1 + 3) & 0xf3 | param_3 * '\b' | param_4 * '\x04';
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xe7;
  *(byte *)((int)param_1 + 2) = param_2 | *(byte *)((int)param_1 + 2) & 0xfe;
  if (*(int *)((int)this + 8) == 0) {
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) | 0x18;
  }
  else if (*(int *)((int)this + 8) == 1) {
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) | 0x10;
  }
  bVar2 = *(byte *)((int)param_1 + 2);
  *(byte *)((int)param_1 + 2) = bVar2 & 0xf;
  bVar2 = bVar2 & 9 | (byte)((*(uint *)((int)this + 0x10) & 0xf) << 4);
  *(byte *)((int)param_1 + 2) = bVar2;
  uVar1 = *(undefined4 *)((int)this + 0x14);
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 0x3f;
  *(byte *)((int)param_1 + 2) = bVar2 | (char)uVar1 * '\x04';
  if (*(int *)((int)this + 0xc) == 1) {
    cVar3 = '\x03';
  }
  else {
    cVar3 = '\0';
  }
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) | cVar3 << 6;
  if (*(int *)(*(int *)this + 0x4c0) != 0) {
    iVar4 = FUN_5f6d39a0();
    *(undefined4 *)((int)param_1 + iVar4) = DAT_5f75c690;
    FUN_5f6e51d0(*(int **)this);
    FUN_5f6d3980((undefined1 *)((int)param_1 + iVar4 + 4),1);
    FUN_5f6d3980((undefined1 *)((int)param_1 + iVar4 + 6),*(undefined4 *)((int)this + 0x1c));
    FUN_5f6d3980((undefined1 *)((int)param_1 + iVar4 + 8),*(undefined4 *)((int)this + 0x20));
    FUN_5f6d3950((undefined1 *)((int)param_1 + iVar4 + 10),
                 *(int *)((int)this + 0x24) + *(int *)(*(int *)this + 0x4bc));
    FUN_5f6d3950((undefined1 *)((int)param_1 + iVar4 + 0xe),*(undefined4 *)(*(int *)this + 0x4c0));
    iVar5 = FUN_5f6e52a0(*(int **)this);
    FUN_5f6d3980((undefined1 *)((int)param_1 + iVar4 + 0x12),iVar5 + -1);
    FUN_5f6d3980((undefined1 *)((int)param_1 + iVar4 + 0x14),1);
    FUN_5f6d3980((undefined1 *)((int)param_1 + iVar4 + 0x16),2);
    FUN_5f6d3980((undefined1 *)((int)param_1 + iVar4 + 0x18),*(undefined4 *)(*(int *)this + 4));
    iVar9 = 1;
    iVar5 = FUN_5f6e52a0(*(int **)this);
    if (1 < iVar5) {
      local_10 = (undefined1 *)((int)param_1 + iVar4 + 0x1a);
      iVar4 = 0;
      do {
        iVar5 = FUN_5f6e52c0(*(void **)this,iVar9);
        FUN_5f6d3980(local_10,iVar5 - iVar4);
        local_10 = local_10 + 2;
        iVar9 = iVar9 + 1;
        iVar6 = FUN_5f6e52a0(*(int **)this);
        iVar4 = iVar5;
      } while (iVar9 < iVar6);
    }
    return;
  }
  return;
}


