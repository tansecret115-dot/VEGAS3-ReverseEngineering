/* Module: erv23260.dll
   Function: FUN_63811340
   Address: 63811340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63811340(void *this,int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_638128a0((int)this);
  iVar5 = *param_1 * *(int *)((int)this + 0x14) + param_1[1];
  uVar3 = *(uint *)((int)this + 0x508);
  if (*(int *)(param_2 + 0x18) == 4) {
    uVar3 = uVar3 & 0xffffbfff | 0x8000;
  }
  if (*(int *)(param_2 + 8) == 0) {
    uVar3 = uVar3 & 0xfffffffb;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar3 = uVar3 | 0x100000;
  }
  *(uint *)((int)this + iVar1 * 0x30 + 0x3a8) = uVar3;
  *(undefined4 *)((int)this + iVar1 * 0x30 + 0x3b4) = 0;
  *(undefined4 *)((int)this + iVar1 * 0x30 + 0x3ac) = *(undefined4 *)((int)this + 0x52c);
  *(undefined4 *)((int)this + iVar1 * 0x30 + 0x3b0) = *(undefined4 *)((int)this + 0x520);
  if ((param_3 != 0) && (*(int *)((int)this + 0x560) != 0)) {
    *(undefined4 *)((int)this + 0x560) = 0;
    iVar4 = *(int *)((int)this + 0x14);
    if (iVar4 != 0) {
      pbVar2 = (byte *)(*(int *)(*(int *)((int)this + 0x110) + iVar5 * 4) +
                        (iVar1 + 8) * *(int *)((int)this + 0x118) + *(int *)((int)this + 0x120) + 2)
      ;
      do {
        iVar4 = iVar4 + -1;
        *pbVar2 = *pbVar2 & 0xfb;
        pbVar2 = pbVar2 + 0x10;
      } while (iVar4 != 0);
    }
  }
  iVar4 = iVar1 * *(int *)((int)this + 0x118);
  iVar5 = iVar5 * 4;
  FUN_63824000(param_3,(int)this + 0x348,
               (uint *)(*(int *)(*(int *)((int)this + 0x110) + iVar5) + *(int *)((int)this + 0x120)
                       + iVar4),
               *(int *)(*(int *)((int)this + 0x114) + iVar5) + iVar4 + *(int *)((int)this + 0x124),
               *(int *)((int)this + 0x128) - *(int *)((int)this + 0x124),*(int *)((int)this + 0x118)
               ,(-(uint)(param_3 != 0) & 0xffffff8c) + 500,0,*(byte **)((int)this + 0x588),
               *(int *)(param_2 + 0x24));
  *param_4 = *(undefined4 *)((int)this + iVar1 * 0x30 + 0x3b4);
  return iVar1;
}


