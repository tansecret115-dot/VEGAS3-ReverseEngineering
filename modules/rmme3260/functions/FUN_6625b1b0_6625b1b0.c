/* Module: rmme3260.dll
   Function: FUN_6625b1b0
   Address: 6625b1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6625b1b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  iVar2 = DAT_6627f238;
  if (iVar1 == -1) {
    param_1[3] = -0x7ffbffbd;
    return -0x7ffbffbd;
  }
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x59) == 0)) {
    assert(s_m_hLib_____rasetsockopt_6627c450,s___pub_win_sock_h_6627c3b0,0xb6);
  }
  iVar2 = (**(code **)(iVar2 + 0x59))(iVar1,0xffff,0x20,&stack0x00000004,4);
  if (iVar2 == -1) {
    iVar2 = -0x7ffbffbb;
  }
  return iVar2;
}


