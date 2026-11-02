/* Module: mp3plug.dll
   Function: FUN_5f7142c0
   Address: 5f7142c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f7142c0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_14 = 0;
  iVar7 = (int)(*(int *)(param_1 + 0x10) + ((uint)(*(int *)(param_1 + 0x10) >> 2) >> 0x1d)) >> 3;
  if (param_2 < iVar7) {
    iVar7 = param_2;
  }
  iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 0x10);
  iVar2 = (int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3;
  if (iVar7 <= iVar2) {
    iVar2 = iVar7;
  }
  for (; 0 < iVar2; iVar2 = iVar2 - iVar7) {
    iVar7 = *(int *)((int)this + 8) - *(int *)((int)this + 0x14);
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
    local_1c = 0;
    if (0 < iVar7) {
      do {
        uVar1 = *(uint *)(param_1 + 0x1c);
        iVar5 = *(int *)(param_1 + 0x24);
        iVar8 = (int)uVar1 >> 4;
        bVar6 = (byte)(((uint)CONCAT11(*(undefined1 *)(iVar5 + iVar8 * 2),
                                       *(undefined1 *)(iVar5 + 1 + iVar8 * 2)) <<
                       (sbyte)(uVar1 & 0xf)) >> 8);
        uVar3 = 0x10 - (uVar1 & 0xf);
        if (uVar3 < 8) {
          uVar4 = *(int *)(param_1 + 8) - 1U & iVar8 * 2 + 2U;
          bVar6 = bVar6 | (byte)((ushort)(CONCAT11(*(undefined1 *)(uVar4 + iVar5),
                                                   *(undefined1 *)(uVar4 + 1 + iVar5)) >>
                                         ((byte)uVar3 & 0x1f)) >> 8);
        }
        *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0xc) - 1U & uVar1 + 8;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -8;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
        iVar5 = local_1c + 1;
        *(byte *)(local_1c + *(int *)((int)this + 0x24) + *(int *)((int)this + 0x14)) = bVar6;
        local_1c = iVar5;
      } while (iVar5 < iVar7);
    }
    local_14 = local_14 + iVar7;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + iVar7 * 8;
    *(uint *)((int)this + 0x14) = iVar7 + *(int *)((int)this + 0x14) & *(int *)((int)this + 8) - 1U;
  }
  return local_14;
}


