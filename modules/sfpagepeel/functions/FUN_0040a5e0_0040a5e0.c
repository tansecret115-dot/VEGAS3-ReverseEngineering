/* Module: sfpagepeel.dll
   Function: FUN_0040a5e0
   Address: 0040a5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040a5e0(void *this,undefined4 param_1,int *param_2,int param_3)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_90 [3];
  undefined4 *puStack_84;
  void *pvStack_80;
  undefined4 uStack_7c;
  int aiStack_64 [7];
  undefined4 *puStack_48;
  int *piStack_38;
  int *piStack_2c;
  int *piStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  int *piStack_14;
  undefined1 auStack_10 [16];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uStack_7c = 0;
  puVar3 = (undefined4 *)((int)this + 0x10);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puStack_84 = &DAT_0046f680;
  aiStack_90[2] = 1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  aiStack_90[1] = 0;
  aiStack_90[0] = param_3;
  pvStack_80 = this;
  iVar2 = (**(code **)(*param_2 + 0x28))();
  *piStack_18 = iVar2;
  if (iVar2 < 0) {
    return this;
  }
  if (param_3 == 0) {
    (**(code **)(*param_2 + 0x1c))(param_2,aiStack_64);
    FUN_0040ade0((undefined4 *)((int)this + 8),aiStack_64);
    piVar4 = param_2;
  }
  else {
    puVar3 = (undefined4 *)(param_3 + 8);
    puVar5 = (undefined4 *)((int)this + 0x10);
    for (iVar2 = 8; piVar4 = piStack_14, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  iVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,&stack0xffffff8c,auStack_10);
  *piStack_24 = iVar2;
  if (iVar2 < 0) {
    return this;
  }
  if (iStack_1c == 0x70002) {
    if (piStack_18 == (int *)0x0) {
LAB_0040a6f5:
      (**(code **)(**(int **)this + 0x10))(*(int **)this,aiStack_90);
      *(int *)((int)this + 0x58) = aiStack_90[0];
      *(int **)((int)this + 0x50) = param_2;
      goto LAB_0040a784;
    }
  }
  else if ((iStack_1c == 0x60001) && (piStack_18 != (int *)0x0)) goto LAB_0040a6f5;
  *(int *)((int)this + 0x58) = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) * 4;
  iVar2 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) *
          (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18));
  hMem = GlobalAlloc(0x40,iVar2 * 4);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)0x0;
  }
  else {
    iStack_20 = iVar2 + -1;
  }
  *(LPVOID *)((int)this + 0x50) = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    *piStack_24 = -0x7ff8fff2;
    return this;
  }
  *(undefined4 *)((int)this + 0x54) = 1;
  *(undefined4 *)((int)this + 0x5c) = pvVar1;
  *(int **)((int)this + 0x60) = piStack_18;
  ((LPRECT)((int)this + 100))->left = *(LONG *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x1c);
  OffsetRect((LPRECT)((int)this + 100),-*(int *)((int)this + 0x10),-*(int *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x74) = 0;
  (**(code **)(**(int **)this + 0x2c))(*(int **)this,(undefined4 *)((int)this + 0x5c));
LAB_0040a784:
  puVar3 = (undefined4 *)((int)this + 0x78);
  iVar2 = (**(code **)*piVar4)(piVar4,&DAT_00475528,&iStack_20);
  if (iVar2 < 0) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      *(undefined4 *)((int)this + 0x80) = 0;
      *(undefined4 *)((int)this + 0x88) = 0;
      *(undefined4 *)((int)this + 0x7c) = 0x3ff00000;
      *(undefined4 *)((int)this + 0x84) = 0;
      *(undefined4 *)((int)this + 0x8c) = 0;
    }
    *piStack_38 = 0;
    return this;
  }
  (**(code **)(*piStack_2c + 0xc))(piStack_2c,puVar3,0x18);
  (**(code **)(*piStack_38 + 8))(piStack_38);
  *puStack_48 = 0;
  return this;
}


