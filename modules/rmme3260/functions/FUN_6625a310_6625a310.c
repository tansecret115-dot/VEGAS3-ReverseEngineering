/* Module: rmme3260.dll
   Function: FUN_6625a310
   Address: 6625a310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625a310(int *param_1)

{
  undefined4 *this;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  this = FUN_6625ebf0(*(undefined4 *)((int)param_1 + 0x52),0);
  param_1[0x18] = (int)this;
  if (this != (undefined4 *)0x0) {
    FUN_6625eee0(this,param_1);
  }
  param_1[0x19] = 7;
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if ((iVar1 != -1) && (DAT_6627f238 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x50))();
    iVar1 = DAT_6627f238;
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x11) == 0)) {
      assert(s_m_hLib_____raclosesocket_6627c394,s___pub_win_sock_h_6627c3b0,0x5c);
    }
    iVar3 = (**(code **)(iVar1 + 0x11))(uVar2);
    iVar1 = DAT_6627f238;
    if (iVar3 != 0) {
      if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
        assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
      }
      (**(code **)(iVar1 + 0x8d))();
    }
  }
  (**(code **)(*param_1 + 0x54))(0xffffffff);
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}


