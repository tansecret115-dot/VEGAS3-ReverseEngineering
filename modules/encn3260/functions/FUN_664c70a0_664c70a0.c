/* Module: encn3260.dll
   Function: FUN_664c70a0
   Address: 664c70a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c70a0(void *this,int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    assert(&DAT_664efb90,s_win_win_net_cpp_664efb2c,0x445);
  }
  if (param_2 == (short *)0x0) {
    assert(&DAT_664efb8c,s_win_win_net_cpp_664efb2c,0x446);
  }
  iVar2 = (**(code **)(*(int *)this + 0x50))();
  if ((iVar2 != -1) && (*(int *)((int)this + 0x36) != 0)) {
    if ((*(int *)((int)this + 100) != 6) && (*(int *)((int)this + 100) != 0)) {
      *param_2 = 0;
      switch(*(undefined4 *)((int)this + 100)) {
      case 1:
        uVar3 = FUN_664c6320((int)this);
        return uVar3;
      case 2:
      case 4:
      case 7:
switchD_664c711f_caseD_2:
        *(undefined4 *)((int)this + 0xc) = 0x8004004e;
        return 0x8004004e;
      case 3:
        *(undefined4 *)((int)this + 0xc) = 0x80040fc4;
        return 0x80040fc4;
      case 5:
        *(undefined4 *)((int)this + 0xc) = 0x80040044;
        return 0x80040044;
      }
switchD_664c711f_caseD_6:
      *(undefined4 *)((int)this + 0xc) = 0x80040048;
      return 0x80040048;
    }
    sVar1 = *param_2;
    uVar3 = (**(code **)(*(int *)this + 0x50))();
    iVar2 = DAT_664f2a28;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x45) == 0)) {
      assert(s_m_hLib_____rarecv_664efb78,s___pub_win_sock_h_664efa08,0x98);
    }
    iVar2 = (**(code **)(iVar2 + 0x45))(uVar3,param_1,sVar1,0);
    if (iVar2 == -1) {
      *param_2 = 0;
      iVar2 = DAT_664f2a28;
      if (*(int *)((int)this + 100) != 0) {
        if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
          assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
        }
        uVar3 = (**(code **)(iVar2 + 0x8d))();
        switch(uVar3) {
        case 0x2714:
          *(undefined4 *)((int)this + 0xc) = 0x80040050;
          return 0x80040050;
        default:
          goto switchD_664c711f_caseD_6;
        case 0x271e:
        case 0x2736:
        case 0x2749:
          break;
        case 0x2733:
        case 0x2734:
          goto switchD_664c711f_caseD_2;
        case 0x2738:
          *(undefined4 *)((int)this + 0xc) = 0x80040055;
          return 0x80040055;
        case 0x2742:
          *(undefined4 *)((int)this + 0xc) = 0x8004004f;
          return 0x8004004f;
        case 0x2745:
        case 0x2746:
        case 0x274a:
        case 0x274c:
          goto switchD_664c7204_caseD_2745;
        }
      }
    }
    else {
      if ((iVar2 != 0) || (*param_2 == 0)) {
        *param_2 = (short)iVar2;
        return 0;
      }
      *param_2 = 0;
      if (*(int *)((int)this + 100) != 0) {
switchD_664c7204_caseD_2745:
        *(undefined4 *)((int)this + 0xc) = 0x8004004d;
        return 0x8004004d;
      }
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0x80040043;
  return 0x80040043;
}


