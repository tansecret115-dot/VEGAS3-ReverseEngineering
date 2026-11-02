/* Module: encn3260.dll
   Function: FUN_664c6590
   Address: 664c6590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c6590(int *param_1)

{
  undefined2 uVar1;
  undefined4 *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1[0x17] != 0) {
    uVar2 = *(undefined4 *)**(undefined4 **)(param_1[0x17] + 0xc);
    this = FUN_664ca810(*(undefined4 *)((int)param_1 + 0x52),1);
    param_1[0x18] = (int)this;
    FUN_664caa60(this,param_1);
    iVar4 = DAT_664f2a28;
    uVar1 = *(undefined2 *)((int)param_1 + 0x56);
    local_14 = 2;
    local_c = 0;
    local_8 = 0;
    local_10 = uVar2;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x2d) == 0)) {
      assert(s_m_hLib_____rahtons_664efa80,s___pub_win_sock_h_664efa08,0x7a);
    }
    uVar1 = (**(code **)(iVar4 + 0x2d))(uVar1);
    local_14 = CONCAT22(uVar1,(undefined2)local_14);
    if (*(int *)((int)param_1 + 0x36) != 0) {
      uVar2 = (**(code **)(*param_1 + 0x50))();
      iVar4 = DAT_664f2a28;
      if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x15) == 0)) {
        assert(s_m_hLib_____raconnect_664efad4,s___pub_win_sock_h_664efa08,0x36);
      }
      iVar3 = (**(code **)(iVar4 + 0x15))(uVar2,&local_14,0x10);
      iVar4 = DAT_664f2a28;
      if (iVar3 != 0) {
        if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
          assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
        }
        iVar4 = (**(code **)(iVar4 + 0x8d))();
        if ((iVar4 != 0x2733) && (iVar4 != 0x2734)) {
          param_1[3] = -0x7ffbffbc;
          param_1[0x19] = 5;
          return;
        }
      }
    }
    param_1[0x19] = 4;
    *(undefined2 *)(param_1 + 4) = 1;
  }
  return;
}


