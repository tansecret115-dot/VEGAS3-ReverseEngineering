/* Module: encn3260.dll
   Function: FUN_664c6960
   Address: 664c6960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c6960(void *this,undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(*(int *)this + 0x50))();
  if (iVar2 == -1) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  if (*(int *)((int)this + 100) != 6) {
    *param_2 = 0;
    switch(*(undefined4 *)((int)this + 100)) {
    case 0:
      *(undefined4 *)((int)this + 0xc) = 0x80040043;
      return 0x80040043;
    case 1:
      uVar3 = FUN_664c6320((int)this);
      return uVar3;
    case 2:
    case 4:
    case 7:
      *(undefined4 *)((int)this + 0xc) = 0x8004004e;
      return 0x8004004e;
    case 3:
      *(undefined4 *)((int)this + 0xc) = 0x80040fc4;
      return 0x80040fc4;
    case 5:
      *(undefined4 *)((int)this + 0xc) = 0x80040044;
      return 0x80040044;
    default:
      assert(&DAT_664e3338,s_win_win_net_cpp_664efb2c,0x31d);
      *(undefined4 *)((int)this + 0xc) = 0x80040048;
      return 0x80040048;
    }
  }
  uVar1 = *param_2;
  uVar3 = (**(code **)(*(int *)this + 0x50))();
  iVar2 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x51) == 0)) {
    assert(s_m_hLib_____rasend_664efb18,s___pub_win_sock_h_664efa08,0xaa);
  }
  iVar2 = (**(code **)(iVar2 + 0x51))(uVar3,param_1,uVar1,0);
  if (iVar2 != -1) {
    *param_2 = (short)iVar2;
    return 0;
  }
  *param_2 = 0;
  iVar2 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
    assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
  }
  iVar2 = (**(code **)(iVar2 + 0x8d))();
  if ((iVar2 != 0x2733) && (iVar2 != 0x2734)) {
    *(undefined4 *)((int)this + 0xc) = 0x80040049;
    return 0x80040049;
  }
  return 0x8004004e;
}


