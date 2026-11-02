/* Module: rmto3260.dll
   Function: FUN_662d9ca0
   Address: 662d9ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d9ca0(void *this,uint param_1)

{
  ushort uVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_1c;
  undefined2 local_18;
  undefined2 local_16;
  short local_14;
  uint local_10;
  undefined4 uStack_c;
  uint local_8;
  
  iVar6 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (*(ushort *)((int)this + 0x6c) < param_1) {
    return -0x7ff8ffa9;
  }
  if (((*(int *)((int)this + 0xae) == 0) || (*(ushort *)((int)this + 0x6c) == 1)) ||
     (*(short *)((int)this + 0x72) != 0)) {
    return -0x7ffbfff7;
  }
  FUN_662e2a70(&local_1c);
  puVar2 = operator_new((uint)*(ushort *)((int)this + 0x46));
  local_8 = (uint)*(ushort *)((int)this + 0x46);
  if (puVar2 == (undefined4 *)0x0) {
    iVar6 = -0x7ff8fff2;
  }
  *(undefined4 *)((int)this + 0x7a) = 1;
  *(undefined4 *)((int)this + 0x86) = 0;
  *(uint *)((int)this + 0x82) = param_1;
  *(undefined4 *)((int)this + 0x7e) = 1;
  FUN_66301f30(2,s_Id___lu_Generating__lu_frames_of_6630b128);
  if (-1 < iVar6) {
    this_00 = *(void **)((int)this + 0xaa);
    if (this_00 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this_00 + 0x10);
    }
    if (iVar3 == 0) {
      local_1c = *(uint *)((int)this + 0x96);
      FUN_662ed8a0(this_00,local_1c + *(int *)((int)this + 0x9a));
      local_10 = *(uint *)((int)this + 0x9a);
      uStack_c = 0;
      floor((double)local_10 + *(double *)((int)this + 0x3a));
      uVar4 = ftol();
      *(undefined4 *)((int)this + 0x9a) = uVar4;
    }
    uVar1 = *(ushort *)((int)this + 0x46);
    puVar7 = puVar2;
    for (uVar5 = (uint)(uVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar5 = 0;
    if (*(short *)((int)this + 0x6a) != 0) {
      do {
        if (iVar6 < 0) break;
        local_14 = 0;
        if (*(void **)this != (void *)0x0) {
          FUN_662dc380(*(void **)this,&local_1c,puVar2,(uint)*(ushort *)((int)this + 0x46),&local_8)
          ;
        }
        local_18 = *(undefined2 *)((int)this + 0x76);
        local_14 = (-(ushort)(uVar5 != 0) & 0xfffe) + 2;
        local_1c = 0;
        local_16 = 0;
        iVar6 = FUN_662d95a0(this,&local_1c,puVar2,(uint)*(ushort *)((int)this + 0x46));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)((int)this + 0x6a));
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    operator_delete(puVar2);
  }
  *(undefined4 *)((int)this + 0x7e) = 0;
  return iVar6;
}


