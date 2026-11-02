/* Module: sfppack2.dll
   Function: FUN_5ccf3dd0
   Address: 5ccf3dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5ccf3dd0(void *this,int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_c;
  
  uVar1 = *(ushort *)(*(int *)((int)this + 0x118) + 2);
  local_c = *(uint *)((int)this + 0x218);
  iVar5 = uVar1 * local_c;
  iVar2 = *(int *)(*(int *)((int)this + 0x208) + 0x18);
  if (uVar1 == 1) {
    if (local_c < *param_2) {
      puVar4 = (undefined4 *)(param_1 + iVar5 * 8);
      while( true ) {
        iVar5 = *(int *)((int)this + 0x214);
        *(undefined4 *)(iVar2 + iVar5 * 8) = *puVar4;
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = puVar4[1];
        *(int *)((int)this + 0x218) = *(int *)((int)this + 0x218) + 1;
        iVar5 = *(int *)((int)this + 0x214) + 1;
        *(int *)((int)this + 0x214) = iVar5;
        if (*(int *)(*(int *)((int)this + 0x208) + 0x14) <= iVar5) break;
        local_c = local_c + 1;
        puVar4 = puVar4 + 2;
        if (*param_2 <= local_c) {
          return;
        }
      }
    }
  }
  else {
    iVar3 = *(int *)(*(int *)((int)this + 0x20c) + 0x18);
    if (local_c < *param_2) {
      puVar4 = (undefined4 *)(param_1 + iVar5 * 8);
      do {
        iVar5 = *(int *)((int)this + 0x214);
        *(undefined4 *)(iVar2 + iVar5 * 8) = *puVar4;
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = puVar4[1];
        iVar5 = *(int *)((int)this + 0x214);
        *(undefined4 *)(iVar3 + iVar5 * 8) = puVar4[2];
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = puVar4[3];
        *(int *)((int)this + 0x218) = *(int *)((int)this + 0x218) + 1;
        iVar5 = *(int *)((int)this + 0x214) + 1;
        *(int *)((int)this + 0x214) = iVar5;
        if (*(int *)(*(int *)((int)this + 0x208) + 0x14) <= iVar5) {
          return;
        }
        local_c = local_c + 1;
        puVar4 = puVar4 + 4;
      } while (local_c < *param_2);
    }
  }
  return;
}


