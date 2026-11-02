/* Module: rmme3260.dll
   Function: FUN_6625b4a0
   Address: 6625b4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_6625b4a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)(*(int *)this + 0x50))();
  iVar3 = DAT_6627f238;
  if (iVar1 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x29) == 0)) {
    assert(s_m_hLib_____rahtonl_6627c43c,s___pub_win_sock_h_6627c3b0,0x74);
  }
  local_c = (**(code **)(iVar3 + 0x29))(param_1);
  local_8 = 0;
  uVar2 = (**(code **)(*(int *)this + 0x50))();
  iVar3 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x59) == 0)) {
    assert(s_m_hLib_____rasetsockopt_6627c450,s___pub_win_sock_h_6627c3b0,0xb6);
  }
  iVar3 = (**(code **)(iVar3 + 0x59))(uVar2,0,6,&local_c,8);
  return (iVar3 != -1) - 1 & 0x80040052;
}


