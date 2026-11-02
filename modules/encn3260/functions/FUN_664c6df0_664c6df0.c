/* Module: encn3260.dll
   Function: FUN_664c6df0
   Address: 664c6df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c6df0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 1;
  uVar2 = (**(code **)(*param_1 + 0x50))();
  iVar1 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x19) == 0)) {
    assert(s_m_hLib_____raioctlsocket_664efa50,s___pub_win_sock_h_664efa08,0x62);
  }
  (**(code **)(iVar1 + 0x19))(uVar2,0x8004667e,&local_8);
  return;
}


