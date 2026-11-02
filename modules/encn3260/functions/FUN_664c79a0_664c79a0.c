/* Module: encn3260.dll
   Function: FUN_664c79a0
   Address: 664c79a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c79a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  int local_8;
  
  iVar2 = (**(code **)(*(int *)this + 0x50))();
  iVar1 = DAT_664f2a28;
  if (iVar2 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0;
  }
  local_8 = 0;
  local_c = 4;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x25) == 0)) {
    assert(s_m_hLib_____ragetsockopt_664efbc8,s___pub_win_sock_h_664efa08,0x6e);
  }
  iVar3 = (**(code **)(iVar1 + 0x25))(iVar2,0xffff,0x1002,&local_8,&local_c);
  iVar1 = DAT_664f2a28;
  if (iVar3 != 0) {
    local_8 = 0;
  }
  if (local_8 < param_1) {
    local_8 = param_1;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x59) == 0)) {
      assert(s_m_hLib_____rasetsockopt_664efaa8,s___pub_win_sock_h_664efa08,0xb6);
    }
    iVar2 = (**(code **)(iVar1 + 0x59))(iVar2,0xffff,0x1002,&local_8,4);
    iVar1 = DAT_664f2a28;
    if (iVar2 != 0) {
      if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
        assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
      }
      (**(code **)(iVar1 + 0x8d))();
      return 0;
    }
  }
  return 1;
}


