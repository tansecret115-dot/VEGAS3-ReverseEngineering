/* Module: encn3260.dll
   Function: FUN_664c4790
   Address: 664c4790
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_664c4790(void *this,void *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  bVar7 = false;
  FUN_664bb5e0(this,&DAT_664f05c4);
  FUN_664c4ac0((int)this);
  if (param_2 != (char *)0x0) {
    iVar2 = FUN_664c46d0(*(void **)((int)this + 0x18),param_2);
    FUN_664bb1d0(this,iVar2);
    iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
joined_r0x664c47d4:
    if ((iVar2 == -1) || ((pcVar3 = strchr(param_2,iVar2), pcVar3 != (char *)0x0 && (iVar2 != 10))))
    {
      FUN_664bb450(param_1,*(char **)this);
      *(int *)((int)param_1 + 0xc) = (int)(char)iVar2;
      return param_1;
    }
    if (iVar2 != 0xd) {
      if (iVar2 == 10) {
        iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
        if (iVar2 == 0xd) {
          iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
          if ((iVar2 == 0x20) || (iVar2 == 9)) {
            pbVar4 = *(byte **)this;
            pbVar6 = &DAT_664f05c4;
            do {
              bVar1 = *pbVar4;
              bVar7 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) goto LAB_664c489f;
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar7 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_664c489f;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
LAB_664c489b:
            iVar5 = 0;
            goto LAB_664c48a4;
          }
          goto LAB_664c48fb;
        }
        goto LAB_664c48b1;
      }
      FUN_664bb850(this);
      goto LAB_664c48cc;
    }
    iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
    if (iVar2 == 10) {
      iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
      if ((iVar2 == 0x20) || (iVar2 == 9)) {
        pbVar4 = *(byte **)this;
        pbVar6 = &DAT_664f05c4;
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) goto LAB_664c489f;
          if (bVar1 == 0) goto LAB_664c489b;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_664c489f;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
        goto LAB_664c48a4;
      }
LAB_664c48fb:
      iVar5 = *(int *)((int)this + 0x18);
      if (iVar2 != -1) {
        *(undefined4 *)(iVar5 + 0xc) = 1;
        *(int *)(iVar5 + 0x10) = iVar2;
      }
      pcVar3 = *(char **)this;
    }
    else {
LAB_664c48b1:
      if ((iVar2 == 0x20) || (iVar2 == 9)) {
        FUN_664c4ac0((int)this);
        goto LAB_664c48cc;
      }
      iVar5 = *(int *)((int)this + 0x18);
      if (iVar2 != -1) {
        *(undefined4 *)(iVar5 + 0xc) = 1;
        *(int *)(iVar5 + 0x10) = iVar2;
      }
      pcVar3 = *(char **)this;
    }
    goto LAB_664c49bb;
  }
  iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
  switch(iVar2) {
  case 10:
    iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
    bVar7 = iVar2 == 0xd;
    break;
  case 0xd:
    iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
    bVar7 = iVar2 == 10;
    break;
  case 0x22:
    bVar7 = true;
    iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
  default:
    do {
      if (iVar2 == -1) {
LAB_664c4a58:
        iVar5 = *(int *)((int)this + 0x18);
        if (iVar2 != -1) {
          *(undefined4 *)(iVar5 + 0xc) = 1;
          *(int *)(iVar5 + 0x10) = iVar2;
        }
        FUN_664bb450(param_1,*(char **)this);
        *(int *)((int)param_1 + 0xc) = (int)(char)iVar2;
        return param_1;
      }
      if (bVar7) {
        if (iVar2 == 0x22) {
          iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
          goto LAB_664c4a58;
        }
      }
      else {
        pcVar3 = strchr(PTR_s_______664ef9bc,iVar2);
        if ((pcVar3 != (char *)0x0) || (iVar5 = iscntrl(iVar2), iVar5 != 0)) goto LAB_664c4a58;
      }
      if ((iVar2 == 0x5c) && (iVar2 = FUN_664c46b0(*(int **)((int)this + 0x18)), iVar2 == 0x22)) {
        FUN_664c4670(*(int **)((int)this + 0x18));
      }
      FUN_664bb850(this);
      iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
    } while( true );
  case -1:
    FUN_664bb450(param_1,&DAT_664f05c4);
    *(undefined4 *)((int)param_1 + 0xc) = 0xffffffff;
    return param_1;
  }
  if ((!bVar7) && (iVar5 = *(int *)((int)this + 0x18), iVar2 != -1)) {
    *(undefined4 *)(iVar5 + 0xc) = 1;
    *(int *)(iVar5 + 0x10) = iVar2;
  }
  pcVar3 = &DAT_664f05c4;
LAB_664c49bb:
  FUN_664bb450(param_1,pcVar3);
  *(undefined4 *)((int)param_1 + 0xc) = 10;
  return param_1;
LAB_664c489f:
  iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
LAB_664c48a4:
  if (iVar5 == 0) {
    iVar5 = *(int *)((int)this + 0x18);
    if (iVar2 != -1) {
      *(undefined4 *)(iVar5 + 0xc) = 1;
      *(int *)(iVar5 + 0x10) = iVar2;
    }
    pcVar3 = *(char **)this;
    goto LAB_664c49bb;
  }
  FUN_664c4ac0((int)this);
LAB_664c48cc:
  iVar2 = FUN_664c4670(*(int **)((int)this + 0x18));
  goto joined_r0x664c47d4;
}


