/* Module: aviplug.dll
   Function: FUN_5f960030
   Address: 5f960030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f960030(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c [2];
  
  iVar1 = *(int *)((int)this + 0x34);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x428) != 0)) {
    return 1;
  }
  if ((param_1 != 0) && (iVar1 != 0)) {
    local_c[0] = this;
    if (*(int *)((int)this + 0x38) != 0) {
      local_c[0] = (void *)0x0;
      iVar1 = (**(code **)(**(int **)((int)this + 0x30) + 0xc))(*(int **)((int)this + 0x30),local_c)
      ;
      if (((-1 < iVar1) && (local_c[0] != (void *)0x0)) &&
         (iVar1 = (**(code **)(**(int **)((int)this + 0x30) + 0x14))
                            (*(int **)((int)this + 0x30),local_c[0],
                             *(undefined4 *)((int)this + 0x38)), -1 < iVar1)) {
        *(undefined4 *)(*(int *)((int)this + 0x34) + 0x428) =
             *(undefined4 *)((int)local_c[0] + 0x428);
        *(undefined4 *)((int)local_c[0] + 0x428) = 0;
        (**(code **)(**(int **)((int)this + 0x30) + 0x10))(*(int **)((int)this + 0x30),local_c[0]);
      }
    }
    if (*(int *)(*(int *)((int)this + 0x34) + 0x428) == 0) {
      uVar2 = (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                        (*(int **)((int)this + 0x30),0x42,0x98);
      *(undefined4 *)(*(int *)((int)this + 0x34) + 0x428) = uVar2;
      iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 4) = 1;
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x4c) = 1;
        uVar2 = (**(code **)(**(int **)((int)this + 0x30) + 0x20))
                          (*(int **)((int)this + 0x30),0x42,0x28);
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x48) = uVar2;
        if ((*(undefined4 **)((int)this + 0x40) != (undefined4 *)0x0) &&
           (puVar5 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x34) + 0x428) + 0x48),
           puVar5 != (undefined4 *)0x0)) {
          puVar4 = *(undefined4 **)((int)this + 0x40);
          for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
        puVar5 = (undefined4 *)(iVar1 + 0x50);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(iVar1 + 0x60) = 0;
        *(undefined4 *)(iVar1 + 0x68) = 0;
        *(undefined4 *)(iVar1 + 0x70) = 0;
        *(undefined4 *)(iVar1 + 0x50) = 0x40;
        *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x58) = 0;
        *(undefined4 *)(iVar1 + 0x5c) = 0;
        *(undefined4 *)(iVar1 + 100) = 0x402e0000;
        *(undefined4 *)(iVar1 + 0x6c) = 0x3ff00000;
        *(undefined4 *)(iVar1 + 0x74) = 0;
        *(undefined4 *)(iVar1 + 0x78) = 0;
        *(undefined4 *)(iVar1 + 0x7c) = 0;
        *(undefined4 *)(iVar1 + 0x80) = 0;
        *(undefined4 *)(iVar1 + 0x84) = 0;
        *(undefined4 *)(iVar1 + 0x88) = 0;
        *(undefined4 *)(iVar1 + 0x8c) = 0;
        iVar1 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
        puVar5 = (undefined4 *)(iVar1 + 8);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar1 + 8) = 0x40;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = 0x402e0000;
        *(undefined4 *)(iVar1 + 0x24) = 0x3ff00000;
        *(undefined4 *)(iVar1 + 0x2c) = 0;
        *(undefined4 *)(iVar1 + 0x30) = 0;
        *(undefined4 *)(iVar1 + 0x34) = 0;
        *(undefined4 *)(iVar1 + 0x38) = 0;
        *(undefined4 *)(iVar1 + 0x3c) = 0;
        *(undefined4 *)(iVar1 + 0x40) = 0;
        *(undefined4 *)(iVar1 + 0x44) = 0;
      }
    }
    if ((*(int *)((int)this + 0x34) != 0) && (*(int *)(*(int *)((int)this + 0x34) + 0x428) != 0)) {
      return 1;
    }
  }
  return 0;
}


