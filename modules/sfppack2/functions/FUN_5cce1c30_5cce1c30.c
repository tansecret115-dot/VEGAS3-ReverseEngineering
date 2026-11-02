/* Module: sfppack2.dll
   Function: FUN_5cce1c30
   Address: 5cce1c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cce1c30(void *this,int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_c;
  
  local_c = *(uint *)((int)this + 0x98);
  uVar1 = *(ushort *)(*(int *)((int)this + 0x54) + 2);
  iVar2 = *(int *)((int)this + 0x70);
  iVar5 = *(int *)((int)this + 0x74);
  iVar3 = uVar1 * local_c;
  if (uVar1 == 1) {
    if (local_c < *param_2) {
      puVar4 = (undefined4 *)(param_1 + iVar3 * 8);
      while( true ) {
        iVar5 = *(int *)((int)this + 0xa0);
        *puVar4 = *(undefined4 *)(iVar2 + iVar5 * 8);
        puVar4[1] = *(undefined4 *)(iVar2 + 4 + iVar5 * 8);
        *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
        iVar5 = *(int *)((int)this + 0xa0) + 1;
        *(int *)((int)this + 0xa0) = iVar5;
        if (*(int *)((int)this + 0x94) <= iVar5) break;
        local_c = local_c + 1;
        puVar4 = puVar4 + 2;
        if (*param_2 <= local_c) {
          return;
        }
      }
    }
  }
  else if (local_c < *param_2) {
    puVar4 = (undefined4 *)(param_1 + iVar3 * 8);
    do {
      iVar3 = *(int *)((int)this + 0xa0);
      *puVar4 = *(undefined4 *)(iVar2 + iVar3 * 8);
      puVar4[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      iVar3 = *(int *)((int)this + 0xa0);
      puVar4[2] = *(undefined4 *)(iVar5 + iVar3 * 8);
      puVar4[3] = *(undefined4 *)(iVar5 + 4 + iVar3 * 8);
      *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
      iVar3 = *(int *)((int)this + 0xa0) + 1;
      *(int *)((int)this + 0xa0) = iVar3;
      if (*(int *)((int)this + 0x94) <= iVar3) {
        return;
      }
      local_c = local_c + 1;
      puVar4 = puVar4 + 4;
    } while (local_c < *param_2);
  }
  return;
}


