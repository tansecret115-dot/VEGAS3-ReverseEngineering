/* Module: rmme3260.dll
   Function: FUN_662593c0
   Address: 662593c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_662593c0(void *this,uint param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x61) == 0)) {
    assert(s_m_hLib_____rasocket_6627c468,s___pub_win_sock_h_6627c3b0,0xc2);
  }
  iVar2 = (**(code **)(iVar2 + 0x61))(2,param_1 & 0xffff,0);
  if (iVar2 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  *(undefined4 *)((int)this + 0x3a) = 1;
  iVar4 = DAT_6627f238;
  param_1 = 0;
  if (*(int *)((int)this + 0x36) != 0) {
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x59) == 0)) {
      assert(s_m_hLib_____rasetsockopt_6627c450,s___pub_win_sock_h_6627c3b0,0xb6);
    }
    iVar3 = (**(code **)(iVar4 + 0x59))(iVar2,0xffff,0x80,&param_1,4);
    iVar4 = DAT_6627f238;
    if (iVar3 != 0) {
      if (*(int *)((int)this + 0x3a) != 0) {
        if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
          assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
        }
        (**(code **)(iVar4 + 0x8d))();
        *(undefined4 *)((int)this + 0x3a) = 0;
        *(undefined4 *)((int)this + 0xc) = 0x80040043;
        return 0x80040043;
      }
      return 0x80040050;
    }
  }
  if (*(int *)((int)this + 0x3a) == 0) {
    return 0x80040050;
  }
  *(undefined4 *)((int)this + 0x3a) = 0;
  iVar4 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x59) == 0)) {
    assert(s_m_hLib_____rasetsockopt_6627c450,s___pub_win_sock_h_6627c3b0,0xb6);
  }
  iVar3 = (**(code **)(iVar4 + 0x59))(iVar2,0xffff,4,(int)this + 0x74,4);
  iVar4 = DAT_6627f238;
  if (iVar3 != 0) {
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
      assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
    }
    (**(code **)(iVar4 + 0x8d))();
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  local_14 = 2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x29) == 0)) {
    assert(s_m_hLib_____rahtonl_6627c43c,s___pub_win_sock_h_6627c3b0,0x74);
  }
  local_10 = (**(code **)(iVar4 + 0x29))(param_2);
  iVar4 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x2d) == 0)) {
    assert(s_m_hLib_____rahtons_6627c428,s___pub_win_sock_h_6627c3b0,0x7a);
  }
  uVar1 = (**(code **)(iVar4 + 0x2d))(param_3);
  iVar4 = DAT_6627f238;
  local_14 = CONCAT22(uVar1,(undefined2)local_14);
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0xd) == 0)) {
    assert(s_m_hLib_____rabind_6627c414,s___pub_win_sock_h_6627c3b0,0x3e);
  }
  iVar3 = (**(code **)(iVar4 + 0xd))(iVar2,&local_14,0x10);
  iVar4 = DAT_6627f238;
  if (iVar3 < 0) {
LAB_66259672:
    iVar4 = DAT_6627f238;
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x11) == 0)) {
      assert(s_m_hLib_____raclosesocket_6627c394,s___pub_win_sock_h_6627c3b0,0x5c);
    }
    (**(code **)(iVar4 + 0x11))(iVar2);
    *(undefined4 *)((int)this + 0xc) = 0x80040044;
    return 0x80040044;
  }
  param_1 = 1;
  if (param_4 == 0) {
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x19) == 0)) {
      assert(s_m_hLib_____raioctlsocket_6627c3f8,s___pub_win_sock_h_6627c3b0,0x62);
    }
    iVar4 = (**(code **)(iVar4 + 0x19))(iVar2,0x8004667e,&param_1);
    if (iVar4 < 0) goto LAB_66259672;
  }
  if (*(int *)((int)this + 0x36) != 0) {
    *(undefined4 *)((int)this + 100) = 1;
    (**(code **)(*(int *)this + 0x54))(iVar2);
    return 0;
  }
  *(undefined4 *)((int)this + 100) = 6;
  (**(code **)(*(int *)this + 0x54))(iVar2);
  return 0;
}


