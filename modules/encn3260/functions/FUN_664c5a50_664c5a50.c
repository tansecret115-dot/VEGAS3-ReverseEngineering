/* Module: encn3260.dll
   Function: FUN_664c5a50
   Address: 664c5a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c5a50(int *param_1)

{
  int iVar1;
  undefined4 *this;
  int iVar2;
  
  *param_1 = (int)&PTR_FUN_664dfa78;
  this = FUN_664ca810(*(undefined4 *)((int)param_1 + 0x52),0);
  param_1[0x18] = (int)this;
  if (this != (undefined4 *)0x0) {
    FUN_664cab00(this,param_1);
  }
  iVar1 = param_1[2];
  param_1[0x19] = 7;
  iVar2 = DAT_664f2a28;
  if ((iVar1 != -1) && (DAT_664f2a28 != 0)) {
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x11) == 0)) {
      assert(s_m_hLib_____raclosesocket_664ef9ec,s___pub_win_sock_h_664efa08,0x5c);
    }
    iVar2 = (**(code **)(iVar2 + 0x11))(iVar1);
    iVar1 = DAT_664f2a28;
    if (iVar2 != 0) {
      if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
        assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
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
  FUN_664c4c20(param_1);
  return;
}


