/* Module: sdpp3260.dll
   Function: FUN_100071a0
   Address: 100071a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_100071a0(void *this,void *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  bVar7 = false;
  FUN_10006900(this,&DAT_10009744);
  FUN_100074d0((int)this);
  if (param_2 != (char *)0x0) {
    iVar2 = FUN_100070e0(*(void **)((int)this + 0x18),param_2);
    FUN_100064f0(this,iVar2);
    iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
joined_r0x100071e4:
    if ((iVar2 == -1) || ((pcVar3 = strchr(param_2,iVar2), pcVar3 != (char *)0x0 && (iVar2 != 10))))
    {
      FUN_10006770(param_1,*(char **)this);
      *(int *)((int)param_1 + 0xc) = (int)(char)iVar2;
      return param_1;
    }
    if (iVar2 != 0xd) {
      if (iVar2 == 10) {
        iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
        if (iVar2 == 0xd) {
          iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
          if ((iVar2 == 0x20) || (iVar2 == 9)) {
            pbVar4 = *(byte **)this;
            pbVar6 = &DAT_10009744;
            do {
              bVar1 = *pbVar4;
              bVar7 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) goto LAB_100072af;
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar7 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_100072af;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
LAB_100072ab:
            iVar5 = 0;
            goto LAB_100072b4;
          }
          goto LAB_1000730b;
        }
        goto LAB_100072c1;
      }
      FUN_10006b70(this);
      goto LAB_100072dc;
    }
    iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
    if (iVar2 == 10) {
      iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
      if ((iVar2 == 0x20) || (iVar2 == 9)) {
        pbVar4 = *(byte **)this;
        pbVar6 = &DAT_10009744;
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) goto LAB_100072af;
          if (bVar1 == 0) goto LAB_100072ab;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_100072af;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
        goto LAB_100072b4;
      }
LAB_1000730b:
      iVar5 = *(int *)((int)this + 0x18);
      if (iVar2 != -1) {
        *(undefined4 *)(iVar5 + 0xc) = 1;
        *(int *)(iVar5 + 0x10) = iVar2;
      }
      pcVar3 = *(char **)this;
    }
    else {
LAB_100072c1:
      if ((iVar2 == 0x20) || (iVar2 == 9)) {
        FUN_100074d0((int)this);
        goto LAB_100072dc;
      }
      iVar5 = *(int *)((int)this + 0x18);
      if (iVar2 != -1) {
        *(undefined4 *)(iVar5 + 0xc) = 1;
        *(int *)(iVar5 + 0x10) = iVar2;
      }
      pcVar3 = *(char **)this;
    }
    goto LAB_100073cb;
  }
  iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
  switch(iVar2) {
  case 10:
    iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
    bVar7 = iVar2 == 0xd;
    break;
  case 0xd:
    iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
    bVar7 = iVar2 == 10;
    break;
  case 0x22:
    bVar7 = true;
    iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
  default:
    do {
      if (iVar2 == -1) {
LAB_10007468:
        iVar5 = *(int *)((int)this + 0x18);
        if (iVar2 != -1) {
          *(undefined4 *)(iVar5 + 0xc) = 1;
          *(int *)(iVar5 + 0x10) = iVar2;
        }
        FUN_10006770(param_1,*(char **)this);
        *(int *)((int)param_1 + 0xc) = (int)(char)iVar2;
        return param_1;
      }
      if (bVar7) {
        if (iVar2 == 0x22) {
          iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
          goto LAB_10007468;
        }
      }
      else {
        pcVar3 = strchr(PTR_s_______100095d8,iVar2);
        if ((pcVar3 != (char *)0x0) || (iVar5 = iscntrl(iVar2), iVar5 != 0)) goto LAB_10007468;
      }
      if ((iVar2 == 0x5c) && (iVar2 = FUN_100070c0(*(int **)((int)this + 0x18)), iVar2 == 0x22)) {
        FUN_10007080(*(int **)((int)this + 0x18));
      }
      FUN_10006b70(this);
      iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
    } while( true );
  case -1:
    FUN_10006770(param_1,&DAT_10009744);
    *(undefined4 *)((int)param_1 + 0xc) = 0xffffffff;
    return param_1;
  }
  if ((!bVar7) && (iVar5 = *(int *)((int)this + 0x18), iVar2 != -1)) {
    *(undefined4 *)(iVar5 + 0xc) = 1;
    *(int *)(iVar5 + 0x10) = iVar2;
  }
  pcVar3 = &DAT_10009744;
LAB_100073cb:
  FUN_10006770(param_1,pcVar3);
  *(undefined4 *)((int)param_1 + 0xc) = 10;
  return param_1;
LAB_100072af:
  iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
LAB_100072b4:
  if (iVar5 == 0) {
    iVar5 = *(int *)((int)this + 0x18);
    if (iVar2 != -1) {
      *(undefined4 *)(iVar5 + 0xc) = 1;
      *(int *)(iVar5 + 0x10) = iVar2;
    }
    pcVar3 = *(char **)this;
    goto LAB_100073cb;
  }
  FUN_100074d0((int)this);
LAB_100072dc:
  iVar2 = FUN_10007080(*(int **)((int)this + 0x18));
  goto joined_r0x100071e4;
}


