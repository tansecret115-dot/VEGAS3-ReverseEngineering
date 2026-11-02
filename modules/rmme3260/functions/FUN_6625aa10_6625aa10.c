/* Module: rmme3260.dll
   Function: FUN_6625aa10
   Address: 6625aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625aa10(void *this,undefined4 *param_1,int *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  DWORD DVar4;
  void *this_00;
  int *piVar5;
  undefined1 local_1c [2];
  ushort uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  int local_c;
  undefined4 local_8;
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x50))();
  if ((iVar1 != -1) && (*(int *)((int)this + 0x36) == 0)) {
    iVar1 = *(int *)((int)this + 100);
    if ((iVar1 != 6) && (iVar1 != 0)) {
      switch(iVar1) {
      case 1:
        uVar2 = FUN_662599f0((int)this);
        return uVar2;
      case 2:
      case 4:
      case 7:
switchD_6625aa65_caseD_2:
        *(undefined4 *)((int)this + 0xc) = 0x8004004e;
        return 0x8004004e;
      case 3:
        *(undefined4 *)((int)this + 0xc) = 0x80040fc4;
        return 0x80040fc4;
      case 5:
        *(undefined4 *)((int)this + 0xc) = 0x80040044;
        return 0x80040044;
      }
switchD_6625aa65_caseD_6:
      *(undefined4 *)((int)this + 0xc) = 0x80040048;
      return 0x80040048;
    }
    uVar2 = *(undefined4 *)((int)this + 0x2e);
    local_8 = 0x10;
    local_c = (**(code **)(*(int *)this + 0x50))();
    iVar1 = DAT_6627f238;
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x49) == 0)) {
      assert(s_m_hLib_____rarecvfrom_6627c53c,s___pub_win_sock_h_6627c3b0,0x9e);
    }
    local_c = (**(code **)(iVar1 + 0x49))(local_c,uVar2,0x7fa6,0,local_1c,&local_8);
    iVar1 = DAT_6627f238;
    if (local_c == -1) {
      if (*(int *)((int)this + 100) != 0) {
        if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x8d) == 0)) {
          assert(s_m_hLib_____raWSAGetLastError_6627c374,s___pub_win_sock_h_6627c3b0,0x115);
        }
        uVar2 = (**(code **)(iVar1 + 0x8d))();
        switch(uVar2) {
        case 0x2714:
          *(undefined4 *)((int)this + 0xc) = 0x80040050;
          return 0x80040050;
        default:
          goto switchD_6625aa65_caseD_6;
        case 0x271e:
        case 0x2736:
        case 0x2749:
          break;
        case 0x2733:
        case 0x2734:
          goto switchD_6625aa65_caseD_2;
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
          goto switchD_6625ab53_caseD_2745;
        }
      }
    }
    else {
      if (local_c != 0) {
        piVar3 = operator_new(0x18);
        piVar5 = (int *)0x0;
        if (piVar3 != (int *)0x0) {
          piVar3[1] = (int)&PTR_LAB_6626d1e8;
          piVar3[2] = 0;
          piVar3[3] = 0;
          piVar3[4] = 0;
          piVar3[5] = 0;
          *piVar3 = (int)&PTR_FUN_6626d1c8;
          piVar3[1] = (int)&PTR_LAB_6626d1b0;
          piVar5 = piVar3;
        }
        (**(code **)(*piVar5 + 4))(piVar5);
        iVar1 = piVar5[1];
        DVar4 = GetTickCount();
        (**(code **)(iVar1 + 0x10))(piVar5 + 1,DVar4);
        (**(code **)(*piVar5 + 0x10))(piVar5,*(undefined4 *)((int)this + 0x2e),local_c);
        *param_1 = piVar5;
        iVar1 = FUN_662647b0(CONCAT22(uStack_16,local_18));
        *param_2 = iVar1;
        iVar1 = FUN_66264760(this_00,uStack_1a);
        *param_3 = (short)iVar1;
        return 0;
      }
      if (*(int *)((int)this + 100) != 0) {
switchD_6625ab53_caseD_2745:
        *(undefined4 *)((int)this + 0xc) = 0x8004004d;
        return 0x8004004d;
      }
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0x80040043;
  return 0x80040043;
}


