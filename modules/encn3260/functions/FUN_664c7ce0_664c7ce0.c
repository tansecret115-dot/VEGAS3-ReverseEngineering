/* Module: encn3260.dll
   Function: FUN_664c7ce0
   Address: 664c7ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c7ce0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = (**(code **)(*(int *)this + 0x50))();
  iVar1 = DAT_664f2a28;
  if (iVar2 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x29) == 0)) {
    assert(s_m_hLib_____rahtonl_664efa94,s___pub_win_sock_h_664efa08,0x74);
  }
  local_c = (**(code **)(iVar1 + 0x29))(param_1);
  local_8 = 0;
  uVar3 = (**(code **)(*(int *)this + 0x50))();
  iVar1 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x59) == 0)) {
    assert(s_m_hLib_____rasetsockopt_664efaa8,s___pub_win_sock_h_664efa08,0xb6);
  }
  iVar2 = (**(code **)(iVar1 + 0x59))(uVar3,0,5,&local_c,8);
  iVar1 = DAT_664f2a28;
  if (iVar2 == -1) {
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
      assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
    }
    (**(code **)(iVar1 + 0x8d))();
    return 0x80040051;
  }
  return 0;
}


