/* Module: rmme3260.dll
   Function: FUN_6625ad10
   Address: 6625ad10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_6625ad10(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  void *this;
  undefined2 local_18;
  ushort uStack_16;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = 0;
  uStack_16 = 0;
  local_14 = 0;
  uStack_12 = 0;
  local_10 = 0;
  local_8 = 0x10;
  local_c = 0;
  uVar1 = (**(code **)(*param_1 + 0x50))();
  iVar2 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x21) == 0)) {
    assert(s_m_hLib_____ragetsockname_6627c554,s___pub_win_sock_h_6627c3b0,0x4e);
  }
  iVar2 = (**(code **)(iVar2 + 0x21))(uVar1,&local_18,&local_8);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_66264760(this,uStack_16);
  return uVar3 & 0xffff;
}


