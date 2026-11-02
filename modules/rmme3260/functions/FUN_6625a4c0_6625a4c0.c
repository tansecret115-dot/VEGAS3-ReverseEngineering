/* Module: rmme3260.dll
   Function: FUN_6625a4c0
   Address: 6625a4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625a4c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 1;
  uVar2 = (**(code **)(*param_1 + 0x50))();
  iVar1 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x19) == 0)) {
    assert(s_m_hLib_____raioctlsocket_6627c3f8,s___pub_win_sock_h_6627c3b0,0x62);
  }
  (**(code **)(iVar1 + 0x19))(uVar2,0x8004667e,&local_8);
  return;
}


