/* Module: encn3260.dll
   Function: FUN_664c7af0
   Address: 664c7af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664c7af0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  iVar2 = DAT_664f2a28;
  if (iVar1 == -1) {
    param_1[3] = -0x7ffbffbd;
    return -0x7ffbffbd;
  }
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x59) == 0)) {
    assert(s_m_hLib_____rasetsockopt_664efaa8,s___pub_win_sock_h_664efa08,0xb6);
  }
  iVar2 = (**(code **)(iVar2 + 0x59))(iVar1,0xffff,0x20,&stack0x00000004,4);
  if (iVar2 == -1) {
    iVar2 = -0x7ffbffbb;
  }
  return iVar2;
}


