/* Module: rmme3260.dll
   Function: FUN_662596f0
   Address: 662596f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662596f0(void *this,byte *param_1,byte *param_2,short param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)((int)this + 0x52) = param_4;
  if (param_3 == 0) {
    uVar4 = FUN_66259a60(this,param_1,param_2);
    return uVar4;
  }
  *(undefined4 *)((int)this + 0x3e) = 0;
  if (param_1 != (byte *)0x0) {
    iVar5 = (**(code **)(*(int *)this + 0x50))();
    if (iVar5 < 0) {
      *(undefined4 *)((int)this + 0xc) = 0x80040043;
      return 0x80040043;
    }
    pcVar6 = strrchr((char *)param_1,0x2e);
    if ((pcVar6 == (char *)0x0) || (iVar5 = atoi(pcVar6 + 1), iVar5 == 0)) {
      *(undefined4 *)((int)this + 0x3a) = 1;
      iVar5 = DAT_6627f238;
      if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x69) == 0)) {
        assert(s_m_hLib_____ragethostbyname_6627c3dc,s___pub_win_sock_h_6627c3b0,0xd1);
      }
      iVar5 = (**(code **)(iVar5 + 0x69))(param_1);
      if (*(int *)((int)this + 0x3a) == 0) {
        return 0x80040050;
      }
      *(undefined4 *)((int)this + 0x3a) = 0;
      if ((iVar5 != 0) && ((int *)**(int **)(iVar5 + 0xc) != (int *)0x0)) {
        iVar5 = *(int *)**(int **)(iVar5 + 0xc);
        *(undefined2 *)((int)this + 0x56) = param_2._0_2_;
        pbVar7 = *(byte **)((int)this + 0x58);
        if (pbVar7 != param_1) {
          if (pbVar7 != (byte *)0x0) {
            operator_delete(pbVar7);
            *(undefined4 *)((int)this + 0x58) = 0;
          }
          uVar8 = 0xffffffff;
          pbVar7 = param_1;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar1 != 0);
          pbVar7 = operator_new(~uVar8);
          uVar8 = 0xffffffff;
          do {
            pbVar10 = param_1;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pbVar10 = param_1 + 1;
            bVar1 = *param_1;
            param_1 = pbVar10;
          } while (bVar1 != 0);
          uVar8 = ~uVar8;
          pbVar10 = pbVar10 + -uVar8;
          pbVar11 = pbVar7;
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
          *(byte **)((int)this + 0x58) = pbVar7;
        }
LAB_662598a2:
        iVar2 = DAT_6627f238;
        local_14 = 2;
        local_c = 0;
        local_8 = 0;
        local_10 = iVar5;
        if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x2d) == 0)) {
          assert(s_m_hLib_____rahtons_6627c428,s___pub_win_sock_h_6627c3b0,0x7a);
        }
        uVar3 = (**(code **)(iVar2 + 0x2d))(param_2);
        local_14 = CONCAT22(uVar3,(undefined2)local_14);
        *(int *)((int)this + 0x68) = iVar5;
        *(undefined4 *)((int)this + 0x3a) = 1;
        if (*(int *)((int)this + 0x36) != 0) {
          uVar4 = (**(code **)(*(int *)this + 0x50))();
          iVar5 = DAT_6627f238;
          if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x15) == 0)) {
            assert(s_m_hLib_____raconnect_6627c47c,s___pub_win_sock_h_6627c3b0,0x36);
          }
          iVar5 = (**(code **)(iVar5 + 0x15))(uVar4,&local_14,0x10);
          if (iVar5 != 0) {
            if (*(int *)((int)this + 0x3a) != 0) {
              *(undefined4 *)((int)this + 0x3a) = 0;
              iVar5 = DAT_6627f238;
              if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
                assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
              }
              (**(code **)(iVar5 + 0x8d))();
              *(undefined4 *)((int)this + 0xc) = 0x80040044;
              return 0x80040044;
            }
            return 0x80040050;
          }
        }
        if (*(int *)((int)this + 0x3a) != 0) {
          *(undefined2 *)((int)this + 0x10) = 1;
          *(undefined4 *)((int)this + 0x3e) = 1;
          *(undefined4 *)((int)this + 0x3a) = 0;
          *(undefined4 *)((int)this + 100) = 6;
          return 0;
        }
        return 0x80040050;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x3a) = 1;
      iVar5 = DAT_6627f238;
      if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x31) == 0)) {
        assert(s_m_hLib_____rainet_addr_6627c494,s___pub_win_sock_h_6627c3b0,0x80);
      }
      iVar5 = (**(code **)(iVar5 + 0x31))(param_1);
      if (*(int *)((int)this + 0x3a) == 0) {
        return 0x80040050;
      }
      *(undefined4 *)((int)this + 0x3a) = 0;
      if (iVar5 != -1) {
        *(undefined4 *)((int)this + 100) = 4;
        goto LAB_662598a2;
      }
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0x80040047;
  return 0x80040047;
}


