/* Module: ednt3260.dll
   Function: FUN_630f8b30
   Address: 630f8b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f8b30(void *this,short *param_1)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  
  psVar2 = param_1;
  *(undefined2 *)((int)this + 0x3fb8a) = 0;
  *(undefined2 *)((int)this + 0x3fb8c) = 0;
  *(undefined2 *)((int)this + 0x3fb8e) = 0;
  local_8 = 0;
  if (0 < *(short *)((int)this + 0x6344)) {
    iVar3 = (int)param_1 * 0x9e2;
    iVar5 = (int)this + iVar3 + 0xb0d8;
    iVar6 = (int)param_1 * 0x2800 + 0x1e8ba + (int)this;
    param_1 = (short *)((int)this + (int)param_1 * 10 + 0xb06c);
    do {
      FUN_630f8d80(this,iVar6,iVar5,iVar3 + *(int *)((int)this + 0x1b836),iVar6,0,*param_1);
      if ((*(short *)((int)this + (int)psVar2 * 2 + 0x63fc) != 0) &&
         (local_8 == *(short *)((int)this + (int)psVar2 * 2 + 0x6444))) {
        uVar1 = *(undefined4 *)((int)this + (int)psVar2 * 4 + 0x1b932);
        FUN_630f8d80(this,uVar1,*(undefined4 *)((int)this + (int)psVar2 * 4 + 0xb0c0),
                     *(int *)(*(int *)((int)this + 0x1b86a) + (int)psVar2 * 4),uVar1,
                     *(short *)((int)this + (int)psVar2 * 2 + 0x6468),
                     *(short *)((int)this + (int)psVar2 * 2 + 0x6474));
      }
      param_1 = param_1 + 1;
      iVar3 = iVar3 + 0x1fa;
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x1fa;
      iVar6 = iVar6 + 0x800;
    } while (local_8 < *(short *)((int)this + 0x6344));
  }
  if (*(short *)((int)this + 0x6312) != 0) {
    iVar5 = (int)this + (int)psVar2 * 0x38 + 0x2d8ba;
    FUN_630f8d80(this,iVar5,(void *)((int)this + (int)(psVar2 + 0x86f) * 0xe),
                 (int)this + (int)psVar2 * 0xe + 0x14088,iVar5,0,
                 *(short *)((int)this + (int)psVar2 * 2 + 0xb0a8));
  }
  if (*(short *)((int)this + 0x3fb8a) != 0) {
    iVar5 = (int)*(short *)((int)this + 0x3fb8a);
    if (iVar5 < 3) {
      puVar7 = (undefined4 *)((int)this + iVar5 * 2 + 0x3fb90);
      for (uVar4 = 3U - iVar5 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0x10001;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = (uint)((3U - iVar5 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2 *)puVar7 = 1;
        puVar7 = (undefined4 *)((int)puVar7 + 2);
      }
    }
    **(short **)((int)this + 0x3fba0) =
         ((*(short *)((int)this + 0x3fb90) * 3 + *(short *)((int)this + 0x3fb92)) * 3 +
         *(short *)((int)this + 0x3fb94)) * 0x800;
  }
  if (*(short *)((int)this + 0x3fb8c) != 0) {
    iVar5 = (int)*(short *)((int)this + 0x3fb8c);
    if (iVar5 < 3) {
      puVar7 = (undefined4 *)((int)this + iVar5 * 2 + 0x3fb96);
      for (uVar4 = 3U - iVar5 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0x20002;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = (uint)((3U - iVar5 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2 *)puVar7 = 2;
        puVar7 = (undefined4 *)((int)puVar7 + 2);
      }
    }
    **(short **)((int)this + 0x3fba4) =
         ((*(short *)((int)this + 0x3fb96) * 5 + *(short *)((int)this + 0x3fb98)) * 5 +
         *(short *)((int)this + 0x3fb9a)) * 0x200;
  }
  if (*(short *)((int)this + 0x3fb8e) != 0) {
    *(undefined2 *)((int)this + 0x3fb9e) = 5;
    **(short **)((int)this + 0x3fba8) = *(short *)((int)this + 0x3fb9c) * 0x1600 + 0xa00;
  }
  return;
}


