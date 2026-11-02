/* Module: rmme3260.dll
   Function: FUN_6625b3b0
   Address: 6625b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625b3b0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = (**(code **)(*(int *)this + 0x50))();
  iVar1 = DAT_6627f238;
  if (iVar2 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x29) == 0)) {
    assert(s_m_hLib_____rahtonl_6627c43c,s___pub_win_sock_h_6627c3b0,0x74);
  }
  local_c = (**(code **)(iVar1 + 0x29))(param_1);
  local_8 = 0;
  uVar3 = (**(code **)(*(int *)this + 0x50))();
  iVar1 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x59) == 0)) {
    assert(s_m_hLib_____rasetsockopt_6627c450,s___pub_win_sock_h_6627c3b0,0xb6);
  }
  iVar2 = (**(code **)(iVar1 + 0x59))(uVar3,0,5,&local_c,8);
  iVar1 = DAT_6627f238;
  if (iVar2 == -1) {
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
      assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
    }
    (**(code **)(iVar1 + 0x8d))();
    return 0x80040051;
  }
  return 0;
}


