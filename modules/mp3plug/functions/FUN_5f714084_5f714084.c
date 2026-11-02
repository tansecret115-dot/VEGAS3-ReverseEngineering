/* Module: mp3plug.dll
   Function: FUN_5f714084
   Address: 5f714084
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5f714084(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((int)this + 0x1c);
  iVar2 = *(int *)((int)this + 0x24);
  iVar5 = (int)uVar1 >> 4;
  uVar6 = 0x10 - (uVar1 & 0xf);
  uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar2 + iVar5 * 2),*(undefined1 *)(iVar2 + 1 + iVar5 * 2))
          << (sbyte)(uVar1 & 0xf) & 0xffff;
  if (uVar6 < param_1) {
    uVar3 = *(int *)((int)this + 8) - 1U & iVar5 * 2 + 2U;
    uVar4 = uVar4 | (ushort)(CONCAT11(*(undefined1 *)(uVar3 + iVar2),
                                      *(undefined1 *)(uVar3 + 1 + iVar2)) >> ((byte)uVar6 & 0x1f));
  }
  *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0xc) - 1U & param_1 + uVar1;
  *(uint *)((int)this + 0x18) = *(int *)((int)this + 0x18) + param_1;
  *(uint *)((int)this + 0x10) = *(int *)((int)this + 0x10) - param_1;
  return uVar4 >> (0x10U - (char)param_1 & 0x1f) & 0xffff;
}


