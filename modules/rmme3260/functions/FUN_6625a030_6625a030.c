/* Module: rmme3260.dll
   Function: FUN_6625a030
   Address: 6625a030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625a030(void *this,undefined4 param_1,undefined2 *param_2)

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
      uVar3 = FUN_662599f0((int)this);
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
      assert(&DAT_6626fe18,s_win_win_net_cpp_6627c4d4,0x31d);
      *(undefined4 *)((int)this + 0xc) = 0x80040048;
      return 0x80040048;
    }
  }
  uVar1 = *param_2;
  uVar3 = (**(code **)(*(int *)this + 0x50))();
  iVar2 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x51) == 0)) {
    assert(s_m_hLib_____rasend_6627c4c0,s___pub_win_sock_h_6627c3b0,0xaa);
  }
  iVar2 = (**(code **)(iVar2 + 0x51))(uVar3,param_1,uVar1,0);
  if (iVar2 != -1) {
    *param_2 = (short)iVar2;
    return 0;
  }
  *param_2 = 0;
  iVar2 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
    assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
  }
  iVar2 = (**(code **)(iVar2 + 0x8d))();
  if ((iVar2 != 0x2733) && (iVar2 != 0x2734)) {
    *(undefined4 *)((int)this + 0xc) = 0x80040049;
    return 0x80040049;
  }
  return 0x8004004e;
}


