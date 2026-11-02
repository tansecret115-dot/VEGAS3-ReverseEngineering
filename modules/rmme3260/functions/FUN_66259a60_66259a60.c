/* Module: rmme3260.dll
   Function: FUN_66259a60
   Address: 66259a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66259a60(void *this,byte *param_1,byte *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte **local_8;
  
  pbVar10 = param_1;
  *(undefined4 *)((int)this + 0x3e) = 0;
  if (param_1 == (byte *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0x80040047;
    return 0x80040047;
  }
  local_8 = this;
  iVar3 = (**(code **)(*(int *)this + 0x50))();
  if (iVar3 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  pcVar4 = strrchr((char *)pbVar10,0x2e);
  if (pcVar4 != (char *)0x0) {
    iVar5 = atoi(pcVar4 + 1);
    iVar3 = DAT_6627f238;
    if (iVar5 != 0) {
      if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x31) == 0)) {
        assert(s_m_hLib_____rainet_addr_6627c494,s___pub_win_sock_h_6627c3b0,0x80);
      }
      param_1 = (byte *)(**(code **)(iVar3 + 0x31))(pbVar10);
      if (param_1 == (byte *)0xffffffff) {
        *(undefined4 *)((int)this + 0xc) = 0x80040047;
        return 0x80040047;
      }
      if (*(int *)((int)this + 0x5c) == 0) {
        pvVar6 = operator_new(0x400);
        *(void **)((int)this + 0x5c) = pvVar6;
      }
      if (*(int *)((int)this + 0x5c) == 0) {
        *(undefined4 *)((int)this + 0xc) = 0x8007000e;
        return 0x8007000e;
      }
      *(byte **)((int)this + 0x68) = param_1;
      *(undefined2 *)((int)this + 0x56) = param_2._0_2_;
      local_8 = &param_1;
      *(byte ****)(*(int *)((int)this + 0x5c) + 0xc) = &local_8;
      FUN_66259da0(this,1);
      return 0;
    }
  }
  sVar2 = FUN_66258430(pbVar10,&param_1);
  if (sVar2 != 0) {
    if (*(int *)((int)this + 0x5c) == 0) {
      pvVar6 = operator_new(0x400);
      *(void **)((int)this + 0x5c) = pvVar6;
    }
    if (*(int *)((int)this + 0x5c) == 0) {
      *(undefined4 *)((int)this + 0xc) = 0x8007000e;
      return 0x8007000e;
    }
    *(byte **)((int)this + 0x68) = param_1;
    local_8 = &param_1;
    *(undefined2 *)((int)this + 0x56) = param_2._0_2_;
    *(byte ****)(*(int *)((int)this + 0x5c) + 0xc) = &local_8;
    FUN_66259da0(this,1);
    return 0;
  }
  *(undefined2 *)((int)this + 0x56) = param_2._0_2_;
  pbVar11 = *(byte **)((int)this + 0x58);
  if (pbVar11 != pbVar10) {
    if (pbVar11 != (byte *)0x0) {
      operator_delete(pbVar11);
      *(undefined4 *)((int)this + 0x58) = 0;
    }
    uVar8 = 0xffffffff;
    pbVar11 = pbVar10;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar1 != 0);
    param_2 = operator_new(~uVar8);
    uVar8 = 0xffffffff;
    do {
      pbVar11 = pbVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar11 = pbVar10 + 1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar11;
    } while (bVar1 != 0);
    uVar8 = ~uVar8;
    pbVar10 = pbVar11 + -uVar8;
    pbVar11 = param_2;
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
    *(byte **)((int)this + 0x58) = param_2;
  }
  *(undefined4 *)((int)this + 100) = 1;
  uVar7 = FUN_662599f0((int)this);
  return uVar7;
}


