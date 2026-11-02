/* Module: rmme3260.dll
   Function: FUN_6623fd90
   Address: 6623fd90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6623fd90(void *this,HRGN param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HRGN pHVar4;
  int local_20;
  int local_1c;
  void *local_18;
  int local_14 [3];
  void *local_8;
  
  local_8 = this;
  (**(code **)(*(int *)(param_2 + 4) + 0x1c))((int *)(param_2 + 4),local_14 + 2);
  local_18 = (void *)((int)this + 0x30);
  local_20 = -(uint)(*(int *)((int)this + 0x3c) != 0);
  local_14[0] = 0;
  local_14[1] = 0;
  local_1c = local_20;
  if (local_20 != 0) {
    FUN_66251190(local_18,&local_1c,local_14 + 1,local_14);
  }
  while (iVar2 = local_14[0], local_20 != 0) {
    piVar1 = (int *)(local_14[0] + 4);
    (**(code **)(*(int *)(local_14[0] + 4) + 0x1c))(piVar1,&param_2);
    iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if ((iVar3 != 0) && (local_14[2] < param_2)) {
      pHVar4 = (HRGN)(**(code **)(iVar2 + 0x1cc))
                               (*(int *)(iVar2 + 0xd4),*(int *)(iVar2 + 0xd8),
                                *(int *)(iVar2 + 0xac) + *(int *)(iVar2 + 0xd4),
                                *(int *)(iVar2 + 0xb0) + *(int *)(iVar2 + 0xd8),
                                *(undefined4 *)(iVar2 + 0x1c8));
      CombineRgn(param_1,param_1,pHVar4,4);
      DeleteObject(pHVar4);
    }
    local_20 = local_1c;
    if (local_1c != 0) {
      FUN_66251190(local_18,&local_1c,local_14 + 1,local_14);
    }
    this = local_8;
  }
  if (*(int *)((int)this + 0x13c) == 0) {
    pHVar4 = (HRGN)(**(code **)((int)this + 0x1cc))
                             (*(int *)((int)this + 0xd4),*(int *)((int)this + 0xd8),
                              *(int *)((int)this + 0xac) + *(int *)((int)this + 0xd4),
                              *(int *)((int)this + 0xb0) + *(int *)((int)this + 0xd8),
                              *(undefined4 *)((int)this + 0x1c8));
    CombineRgn(param_1,param_1,pHVar4,1);
    DeleteObject(pHVar4);
    if (*(void **)((int)this + 0x68) != (void *)0x0) {
      FUN_6623fd90(*(void **)((int)this + 0x68),param_1,(int)this);
    }
    return;
  }
  CombineRgn(param_1,param_1,*(HRGN *)((int)this + 0x138),1);
  return;
}


