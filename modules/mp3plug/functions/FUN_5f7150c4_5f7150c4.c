/* Module: mp3plug.dll
   Function: FUN_5f7150c4
   Address: 5f7150c4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f7150c4(void *this,float *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float *local_14;
  int local_10;
  
  local_14 = param_1;
  if (*(int *)((int)this + 0xc160) == 0) {
    local_30 = *(int *)(*(int *)((int)this + 0x8640) + 0x70);
  }
  else {
    local_30 = 1;
  }
  local_2c = 0;
  while( true ) {
    if (*(char *)((int)this + 0x863c) == '\0') {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
    if (iVar2 <= local_2c) break;
    local_20 = 0;
    if (0 < *(int *)((int)this + 0x861c)) {
      local_24 = (int)this + 0x8b58;
      local_28 = (int)this + 0x9d58;
      local_34 = local_2c * 0x6c + 0x8688;
      local_38 = (int)this + 0x8678;
      puVar9 = (uint *)((int)this + 0x8848);
      do {
        piVar7 = (int *)(local_34 + (int)this);
        FUN_5f71a6d0((void *)((int)this + 0x8644),(int)piVar7,puVar9,(int)this + 0x861c,local_38,
                     local_2c,local_20);
        FUN_5f71b050(this,(void *)((int)this + 0x8644),local_24,piVar7,(int *)((int)this + 0x861c));
        FUN_5f71b7d0(local_24,local_28,(int)piVar7,(int)puVar9,(int)this + 0x861c);
        local_24 = local_24 + 0x900;
        local_28 = local_28 + 0x900;
        local_34 = local_34 + 0xe8;
        local_38 = local_38 + 0xe8;
        local_20 = local_20 + 1;
        puVar9 = puVar9 + 0x62;
      } while (local_20 < *(int *)((int)this + 0x861c));
    }
    local_10 = local_2c * 0x6c;
    FUN_5f71d8f0((int)this + 0x9d58,(int)this + 0xa658,(int)this + local_10 + 0x8688,
                 (int)this + local_10 + 0x8770,(int)this + 0x89d0,(int *)((int)this + 0x861c),
                 *(int *)((int)this + 0xc160));
    if (0 < local_30) {
      local_38 = local_10 + 0x8688;
      puVar8 = (undefined4 *)((int)this + 0x9d58);
      iVar2 = 0;
      do {
        iVar5 = local_38 + (int)this;
        FUN_5f71dad0((int)puVar8,iVar5,(int)this + 0x861c);
        FUN_5f71dce0(this_00,(int)puVar8,iVar5,(int)this + 0x861c,
                     (byte)*(undefined4 *)((int)this + 0xc158));
        FUN_5f719b00((void *)((int)this + 0x2324),param_3 == '\0',(int)this + 0x861c,
                     (int)this + 0x8670,puVar8,local_2c,iVar2);
        FUN_5f716660((void *)((int)this + 0x30),iVar2,iVar5,(int)this + 0x9d58);
        iVar2 = iVar2 + 1;
        local_38 = local_38 + 0xe8;
        puVar8 = puVar8 + 0x240;
      } while (iVar2 < local_30);
    }
    if (*(int *)((int)this + 0xc160) == 0) {
      iVar2 = *(int *)(*(int *)((int)this + 0x8640) + 0x70);
    }
    else {
      iVar2 = 1;
    }
    if (0 < iVar2) {
      iVar5 = 0;
      do {
        iVar10 = 0;
        iVar4 = 0;
        do {
          iVar3 = 0;
          iVar6 = iVar4;
          do {
            iVar1 = iVar3 + iVar10 * 4;
            iVar3 = iVar3 + 0x48;
            iVar11 = iVar6 + iVar5;
            iVar6 = iVar6 + 4;
            *(undefined4 *)((int)this + iVar11 + 0xaf58) =
                 *(undefined4 *)((int)this + iVar1 + iVar5 + 0x9d58);
          } while (iVar3 < 0x900);
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + 0x80;
        } while (iVar10 < 0x12);
        iVar5 = iVar5 + 0x900;
      } while (iVar5 < iVar2 * 0x900);
    }
    if (param_2 == 0) {
      local_14 = (float *)FUN_5f717380((void *)((int)this + 0x1310),(int)this + 0xaf58,(int)local_14
                                      );
    }
    else {
      local_14 = FUN_5f7183f0((void *)((int)this + 0x1310),(int)this + 0xaf58,local_14);
    }
    local_2c = local_2c + 1;
  }
  return 0;
}


