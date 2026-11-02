/* Module: encn3260.dll
   Function: FUN_664c5cf0
   Address: 664c5cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_664c5cf0(void *this,uint param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x61) == 0)) {
    assert(s_m_hLib_____rasocket_664efac0,s___pub_win_sock_h_664efa08,0xc2);
  }
  iVar2 = (**(code **)(iVar2 + 0x61))(2,param_1 & 0xffff,0);
  if (iVar2 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  *(undefined4 *)((int)this + 0x3a) = 1;
  iVar4 = DAT_664f2a28;
  param_1 = 0;
  if (*(int *)((int)this + 0x36) != 0) {
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x59) == 0)) {
      assert(s_m_hLib_____rasetsockopt_664efaa8,s___pub_win_sock_h_664efa08,0xb6);
    }
    iVar3 = (**(code **)(iVar4 + 0x59))(iVar2,0xffff,0x80,&param_1,4);
    iVar4 = DAT_664f2a28;
    if (iVar3 != 0) {
      if (*(int *)((int)this + 0x3a) != 0) {
        if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
          assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
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
  iVar4 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x59) == 0)) {
    assert(s_m_hLib_____rasetsockopt_664efaa8,s___pub_win_sock_h_664efa08,0xb6);
  }
  iVar3 = (**(code **)(iVar4 + 0x59))(iVar2,0xffff,4,(int)this + 0x74,4);
  iVar4 = DAT_664f2a28;
  if (iVar3 != 0) {
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
      assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
    }
    (**(code **)(iVar4 + 0x8d))();
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  local_14 = 2;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x29) == 0)) {
    assert(s_m_hLib_____rahtonl_664efa94,s___pub_win_sock_h_664efa08,0x74);
  }
  local_10 = (**(code **)(iVar4 + 0x29))(param_2);
  iVar4 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x2d) == 0)) {
    assert(s_m_hLib_____rahtons_664efa80,s___pub_win_sock_h_664efa08,0x7a);
  }
  uVar1 = (**(code **)(iVar4 + 0x2d))(param_3);
  iVar4 = DAT_664f2a28;
  local_14 = CONCAT22(uVar1,(undefined2)local_14);
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0xd) == 0)) {
    assert(s_m_hLib_____rabind_664efa6c,s___pub_win_sock_h_664efa08,0x3e);
  }
  iVar3 = (**(code **)(iVar4 + 0xd))(iVar2,&local_14,0x10);
  iVar4 = DAT_664f2a28;
  if (iVar3 < 0) {
LAB_664c5fa2:
    iVar4 = DAT_664f2a28;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x11) == 0)) {
      assert(s_m_hLib_____raclosesocket_664ef9ec,s___pub_win_sock_h_664efa08,0x5c);
    }
    (**(code **)(iVar4 + 0x11))(iVar2);
    *(undefined4 *)((int)this + 0xc) = 0x80040044;
    return 0x80040044;
  }
  param_1 = 1;
  if (param_4 == 0) {
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x19) == 0)) {
      assert(s_m_hLib_____raioctlsocket_664efa50,s___pub_win_sock_h_664efa08,0x62);
    }
    iVar4 = (**(code **)(iVar4 + 0x19))(iVar2,0x8004667e,&param_1);
    if (iVar4 < 0) goto LAB_664c5fa2;
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


