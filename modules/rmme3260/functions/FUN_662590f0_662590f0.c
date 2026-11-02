/* Module: rmme3260.dll
   Function: FUN_662590f0
   Address: 662590f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662590f0(int *param_1)

{
  int iVar1;
  undefined4 *this;
  int iVar2;
  
  *param_1 = (int)&PTR_FUN_6626d018;
  this = FUN_6625ebf0(*(undefined4 *)((int)param_1 + 0x52),0);
  param_1[0x18] = (int)this;
  if (this != (undefined4 *)0x0) {
    FUN_6625eee0(this,param_1);
  }
  iVar1 = param_1[2];
  param_1[0x19] = 7;
  iVar2 = DAT_6627f238;
  if ((iVar1 != -1) && (DAT_6627f238 != 0)) {
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x11) == 0)) {
      assert(s_m_hLib_____raclosesocket_6627c394,s___pub_win_sock_h_6627c3b0,0x5c);
    }
    iVar2 = (**(code **)(iVar2 + 0x11))(iVar1);
    iVar1 = DAT_6627f238;
    if (iVar2 != 0) {
      if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
        assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
      }
      (**(code **)(iVar1 + 0x8d))();
    }
  }
  param_1[2] = -1;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete((void *)param_1[0x17]);
    param_1[0x17] = 0;
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete((void *)param_1[0x16]);
    param_1[0x16] = 0;
  }
  operator_delete(*(void **)((int)param_1 + 0x2e));
  FUN_66258310(param_1);
  return;
}


