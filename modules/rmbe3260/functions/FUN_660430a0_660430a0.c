/* Module: rmbe3260.dll
   Function: FUN_660430a0
   Address: 660430a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660430a0(void *this,uint *param_1,int param_2)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_24 [32];
  
  FUN_660434c0(local_24);
  if ((*(int *)((int)this + 0x10) == 0) || (param_2 != 0)) {
    cVar2 = *(char *)((int)this + 0x26);
    *(char *)((int)this + 0x26) = cVar2 + '\x01';
    FUN_660435a0(local_24,cVar2);
  }
  else {
    if (*(int *)((int)this + 0x27) == 0) {
      uVar5 = param_1[2];
    }
    else {
      uVar5 = param_1[2] - *(int *)(*(int *)((int)this + 0xc) + 8);
    }
    cVar2 = *(char *)((int)this + 0x26);
    *(char *)((int)this + 0x26) = cVar2 + '\x01';
    FUN_660435d0(local_24,*param_1,uVar5,cVar2);
  }
  iVar3 = FUN_66043610(local_24,*(char **)((int)this + 0x1c));
  puVar7 = (undefined4 *)(*(int *)((int)this + 0x1c) + iVar3);
  *(undefined4 **)((int)this + 0x1c) = puVar7;
  uVar5 = *param_1;
  puVar6 = (undefined4 *)param_1[1];
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + *param_1;
  *(uint *)((int)this + 0x18) = *(int *)((int)this + 0x18) - (*param_1 + iVar3);
  **(int **)((int)this + 0xc) = **(int **)((int)this + 0xc) + *param_1 + iVar3;
  puVar1 = (ushort *)(*(int *)((int)this + 0xc) + 0xe);
  *puVar1 = *puVar1 | *(ushort *)((int)param_1 + 0xe);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  return;
}


