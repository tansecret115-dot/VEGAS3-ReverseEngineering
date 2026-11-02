/* Module: mp3plug.dll
   Function: FUN_5f6d33e0
   Address: 5f6d33e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f6d33e0(void *this,undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f6d3620;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_1;
  puVar2 = (undefined4 *)FUN_5f681b80(0x4c4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = 0;
    puVar2[0x130] = 0;
  }
  *(undefined4 **)this = puVar2;
  local_8 = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 2;
  for (uVar6 = param_2; 15999 < (int)uVar6; uVar6 = (int)(uVar6 + (0x7fffffff < uVar6)) >> 1) {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  if (uVar6 == 8000) {
    *(undefined4 *)((int)this + 0x14) = 2;
  }
  else if (uVar6 == 0x2b11) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else if (uVar6 == 12000) {
    *(undefined4 *)((int)this + 0x14) = 1;
  }
  if (*(int *)((int)this + 8) == 0) {
    iVar3 = 2;
  }
  else {
    iVar3 = 1;
  }
  *(int *)((int)this + 0x18) = iVar3 * 0x240;
  if (*(int *)((int)this + 0x10) == 0xf) {
    iVar3 = FUN_5f6d39a0();
    iVar4 = FUN_5f6e52f0();
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)((int)this + 8) * 0x3c + 0x5f75c5d0 + iVar5 * 4);
      uVar6 = (uint)(((int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3) * *(int *)((int)this + 0x18)
                    ) / param_2;
      *(uint *)((int)this + 4) = uVar6;
      if ((uint)(iVar4 * 2 + 0x16 + iVar3) < uVar6) {
        *(int *)((int)this + 0x10) = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xf);
  }
  iVar3 = *(int *)(*(int *)((int)this + 8) * 0x3c + 0x5f75c5d0 + *(int *)((int)this + 0x10) * 4);
  *(undefined4 *)((int)this + 0x20) = 100;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x18);
  *(uint *)((int)this + 4) =
       (uint)(((int)(iVar3 + ((uint)(iVar3 >> 2) >> 0x1d)) >> 3) * *(int *)((int)this + 0x18)) /
       param_2;
  ExceptionList = local_10;
  return this;
}


