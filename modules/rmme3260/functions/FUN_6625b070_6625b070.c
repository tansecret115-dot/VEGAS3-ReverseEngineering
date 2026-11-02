/* Module: rmme3260.dll
   Function: FUN_6625b070
   Address: 6625b070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625b070(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  int local_8;
  
  iVar2 = (**(code **)(*(int *)this + 0x50))();
  iVar1 = DAT_6627f238;
  if (iVar2 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0;
  }
  local_8 = 0;
  local_c = 4;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x25) == 0)) {
    assert(s_m_hLib_____ragetsockopt_6627c570,s___pub_win_sock_h_6627c3b0,0x6e);
  }
  iVar3 = (**(code **)(iVar1 + 0x25))(iVar2,0xffff,0x1002,&local_8,&local_c);
  iVar1 = DAT_6627f238;
  if (iVar3 != 0) {
    local_8 = 0;
  }
  if (local_8 < param_1) {
    local_8 = param_1;
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x59) == 0)) {
      assert(s_m_hLib_____rasetsockopt_6627c450,s___pub_win_sock_h_6627c3b0,0xb6);
    }
    iVar2 = (**(code **)(iVar1 + 0x59))(iVar2,0xffff,0x1002,&local_8,4);
    iVar1 = DAT_6627f238;
    if (iVar2 != 0) {
      if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
        assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
      }
      (**(code **)(iVar1 + 0x8d))();
      return 0;
    }
  }
  return 1;
}


