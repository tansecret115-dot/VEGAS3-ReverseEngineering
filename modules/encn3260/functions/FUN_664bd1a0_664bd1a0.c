/* Module: encn3260.dll
   Function: FUN_664bd1a0
   Address: 664bd1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664bd1a0(void *this,uint param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_a4 [80];
  undefined4 local_54 [5];
  int local_40;
  int local_3c;
  int local_38 [3];
  undefined4 local_2c [5];
  int local_18;
  int local_14;
  int local_10 [3];
  
  FUN_664be170(this);
  *(int *)((int)this + 0x1c) = param_3;
  *(uint *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined ***)this = &PTR_FUN_664df580;
  if (param_3 != 0) {
    if (param_3 != 2) {
      return this;
    }
    FUN_664d5ba0(&local_18,param_1);
    FUN_664d5ba0(&local_40,*(int *)((int)this + 0x24));
    iVar4 = *(int *)((int)this + 0x20);
    if (iVar4 == -1) {
LAB_664bd380:
      if (*(int *)((int)this + 0x24) != -1) {
        iVar4 = thunk_FUN_664d5c90(&local_40);
        sprintf(local_a4,&DAT_664ef748,iVar4);
        goto LAB_664bd3ee;
      }
      if ((iVar4 == -1) && (*(int *)((int)this + 0x24) == -1)) {
        sprintf(local_a4,&DAT_664ef744);
        goto LAB_664bd3ee;
      }
    }
    else {
      if (*(int *)((int)this + 0x24) == -1) {
        iVar4 = thunk_FUN_664d5c90(&local_18);
        sprintf(local_a4,&DAT_664ef754,iVar4);
        goto LAB_664bd3ee;
      }
      if (iVar4 == -1) goto LAB_664bd380;
      if (*(int *)((int)this + 0x24) != -1) {
        iVar4 = thunk_FUN_664d5c90(&local_40);
        iVar5 = thunk_FUN_664d5c90(&local_18);
        sprintf(local_a4,s__s__s_664ef74c,iVar5,iVar4);
        goto LAB_664bd3ee;
      }
      if (iVar4 == -1) goto LAB_664bd380;
    }
    if ((iVar4 == 0) && (*(int *)((int)this + 0x24) == 0)) {
      sprintf(local_a4,&DAT_664ef740);
    }
    else {
      local_a4[0] = '\0';
    }
LAB_664bd3ee:
    FUN_664be260(this,local_a4);
    FUN_664bb3e0(local_38);
    FUN_664bb3e0(local_10);
    return this;
  }
  FUN_664d5ef0(local_54,param_1);
  FUN_664d5ef0(local_2c,*(uint *)((int)this + 0x24));
  iVar4 = *(int *)((int)this + 0x20);
  uVar6 = 0xffffffff;
  if (iVar4 == -1) {
LAB_664bd253:
    if (*(int *)((int)this + 0x24) != -1) {
      uVar2 = FUN_664d6200(local_2c);
      sprintf(local_a4,&DAT_664ef748,uVar2);
      goto LAB_664bd2d1;
    }
    if ((iVar4 == -1) && (*(int *)((int)this + 0x24) == -1)) {
      pcVar8 = &DAT_664ef744;
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = local_a4;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      goto LAB_664bd2d1;
    }
  }
  else {
    if (*(int *)((int)this + 0x24) == -1) {
      uVar2 = FUN_664d6200(local_54);
      sprintf(local_a4,&DAT_664ef754,uVar2);
      goto LAB_664bd2d1;
    }
    if (iVar4 == -1) goto LAB_664bd253;
    if (*(int *)((int)this + 0x24) != -1) {
      uVar2 = FUN_664d6200(local_2c);
      uVar3 = FUN_664d6200(local_54);
      sprintf(local_a4,s__s__s_664ef74c,uVar3,uVar2);
      goto LAB_664bd2d1;
    }
    if (iVar4 == -1) goto LAB_664bd253;
  }
  if ((iVar4 == 0) && (*(int *)((int)this + 0x24) == 0)) {
    sprintf(local_a4,&DAT_664ef740);
  }
  else {
    local_a4[0] = '\0';
  }
LAB_664bd2d1:
  FUN_664be260(this,local_a4);
  FUN_664bb3e0(&local_14);
  FUN_664bb3e0(&local_3c);
  return this;
}


