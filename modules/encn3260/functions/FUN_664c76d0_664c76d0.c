/* Module: encn3260.dll
   Function: FUN_664c76d0
   Address: 664c76d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664c76d0(void *this,byte *param_1,short param_2)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  void *pvVar7;
  undefined4 *this_00;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  if (param_1 == (byte *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0x80040047;
    return -0x7ffbffb9;
  }
  iVar4 = (**(code **)(*(int *)this + 0x50))();
  if (iVar4 < 0) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return -0x7ffbffbd;
  }
  piVar1 = (int *)((int)this + 0x16);
  sVar3 = FUN_664c4d60(param_1,piVar1);
  if (sVar3 != 0) {
    *(undefined4 *)((int)this + 0x1a) = 1;
    *(undefined4 *)((int)this + 0x1e) = 1;
    *(undefined4 *)((int)this + 0xc) = 0;
    if (*(undefined4 **)((int)this + 0x12) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x12))(3,1,0);
    }
    return *(int *)((int)this + 0xc);
  }
  pcVar5 = strrchr((char *)param_1,0x2e);
  if ((pcVar5 != (char *)0x0) && (iVar4 = atoi(pcVar5 + 1), iVar4 != 0)) {
    *(undefined4 *)((int)this + 0x1a) = 0;
    *piVar1 = 0;
    *(undefined4 *)((int)this + 0x1e) = 1;
    iVar4 = DAT_664f2a28;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x31) == 0)) {
      assert(s_m_hLib_____rainet_addr_664efaec,s___pub_win_sock_h_664efa08,0x80);
    }
    iVar4 = (**(code **)(iVar4 + 0x31))(param_1);
    if (iVar4 != -1) {
      *(undefined4 *)((int)this + 0x1a) = 1;
      *piVar1 = iVar4;
      FUN_664c4df0(param_1,iVar4);
      if (*(undefined4 **)((int)this + 0x12) == (undefined4 *)0x0) {
        return 0;
      }
      (**(code **)**(undefined4 **)((int)this + 0x12))(3,1,0);
      return 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0x80040047;
    return -0x7ffbffb9;
  }
  if (param_2 != 0) {
    *(undefined4 *)((int)this + 0x1a) = 0;
    *piVar1 = 0;
    *(undefined4 *)((int)this + 0x1e) = 1;
    iVar4 = DAT_664f2a28;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x69) == 0)) {
      assert(s_m_hLib_____ragethostbyname_664efa34,s___pub_win_sock_h_664efa08,0xd1);
    }
    iVar4 = (**(code **)(iVar4 + 0x69))(param_1);
    if ((iVar4 != 0) && ((int *)**(int **)(iVar4 + 0xc) != (int *)0x0)) {
      iVar4 = *(int *)**(int **)(iVar4 + 0xc);
      *(undefined4 *)((int)this + 0x1a) = 1;
      *piVar1 = iVar4;
      FUN_664c4df0(param_1,iVar4);
      if (*(undefined4 **)((int)this + 0x12) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x12))(3,1,0);
      }
      *(undefined4 *)((int)this + 0xc) = 0;
      return 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0x80040047;
    return -0x7ffbffb9;
  }
  pbVar6 = *(byte **)((int)this + 0x58);
  if (pbVar6 != param_1) {
    if (pbVar6 != (byte *)0x0) {
      operator_delete(pbVar6);
      *(undefined4 *)((int)this + 0x58) = 0;
    }
    uVar8 = 0xffffffff;
    pbVar6 = param_1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
    pbVar6 = operator_new(~uVar8);
    uVar8 = 0xffffffff;
    do {
      pbVar10 = param_1;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar10 = param_1 + 1;
      bVar2 = *param_1;
      param_1 = pbVar10;
    } while (bVar2 != 0);
    uVar8 = ~uVar8;
    pbVar10 = pbVar10 + -uVar8;
    pbVar11 = pbVar6;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
    }
    *(byte **)((int)this + 0x58) = pbVar6;
  }
  if (*(int *)((int)this + 0x5c) == 0) {
    pvVar7 = operator_new(0x400);
    *(void **)((int)this + 0x5c) = pvVar7;
    if (pvVar7 == (void *)0x0) {
      *(undefined4 *)((int)this + 0xc) = 0x8007000e;
      return -0x7ff8fff2;
    }
  }
  *(undefined4 *)((int)this + 0x6c) = 1;
  this_00 = FUN_664ca810(*(undefined4 *)((int)this + 0x52),1);
  *(undefined4 **)((int)this + 0x60) = this_00;
  FUN_664ca880(this_00,(int)this,*(char **)((int)this + 0x58),*(int *)((int)this + 0x5c),0x400);
  *(undefined4 *)((int)this + 100) = 2;
  *(undefined4 *)((int)this + 0xc) = 0x8004004e;
  return -0x7ffbffb2;
}


