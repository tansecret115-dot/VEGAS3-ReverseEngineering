/* Module: mp3plug.dll
   Function: FUN_5f7141d0
   Address: 5f7141d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f7141d0(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = 0;
  iVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 0x10);
  uVar4 = (int)(iVar3 + ((uint)(iVar3 >> 2) >> 0x1d)) >> 3;
  if ((int)uVar4 < (int)param_2) {
    param_2 = uVar4;
  }
  for (; 0 < (int)param_2; param_2 = param_2 - uVar4) {
    uVar1 = *(int *)((int)this + 8) - *(int *)((int)this + 0x14);
    uVar4 = param_2;
    if ((int)uVar1 < (int)param_2) {
      uVar4 = uVar1;
    }
    iVar3 = 0;
    if (0 < (int)uVar4) {
      if (0 < (int)(uVar4 & 0xfffffffe)) {
        do {
          *(undefined1 *)(iVar3 + *(int *)((int)this + 0x24) + *(int *)((int)this + 0x14)) =
               *(undefined1 *)(iVar3 + param_1);
          *(undefined1 *)(iVar3 + 1 + *(int *)((int)this + 0x24) + *(int *)((int)this + 0x14)) =
               *(undefined1 *)(iVar3 + 1 + param_1);
          iVar3 = iVar3 + 2;
        } while (iVar3 < (int)(uVar4 & 0xfffffffe));
      }
      for (; iVar3 < (int)uVar4; iVar3 = iVar3 + 1) {
        *(undefined1 *)(iVar3 + *(int *)((int)this + 0x24) + *(int *)((int)this + 0x14)) =
             *(undefined1 *)(iVar3 + param_1);
      }
    }
    param_1 = param_1 + uVar4;
    iVar2 = iVar2 + uVar4;
    *(uint *)((int)this + 0x10) = *(int *)((int)this + 0x10) + uVar4 * 8;
    *(uint *)((int)this + 0x14) = *(int *)((int)this + 8) - 1U & uVar4 + *(int *)((int)this + 0x14);
  }
  return iVar2;
}


