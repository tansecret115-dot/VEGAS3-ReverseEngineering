/* Module: encn3260.dll
   Function: FUN_664c6b10
   Address: 664c6b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_664c6b10(void *this,undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4
            )

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  iVar3 = DAT_664f2a28;
  local_10 = 0;
  local_c = 0;
  local_18 = 2;
  local_14 = param_3;
  local_8 = this;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x2d) == 0)) {
    assert(s_m_hLib_____rahtons_664efa80,s___pub_win_sock_h_664efa08,0x7a);
  }
  uVar1 = (**(code **)(iVar3 + 0x2d))(param_4);
  local_18 = CONCAT22(uVar1,(undefined2)local_18);
  uVar1 = *param_2;
  uVar2 = (**(code **)(*(int *)this + 0x50))();
  iVar3 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x55) == 0)) {
    assert(s_m_hLib_____rasendto_664efb3c,s___pub_win_sock_h_664efa08,0xb0);
  }
  iVar3 = (**(code **)(iVar3 + 0x55))(uVar2,param_1,uVar1,0,&local_18,0x10);
  if (iVar3 == -1) {
    *param_2 = 0;
    iVar3 = DAT_664f2a28;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x8d) == 0)) {
      assert(s_m_hLib_____raWSAGetLastError_664ef9cc,s___pub_win_sock_h_664efa08,0x115);
    }
    iVar3 = (**(code **)(iVar3 + 0x8d))();
    if ((iVar3 != 0x2733) && (iVar3 != 0x2734)) {
      *(undefined4 *)((int)local_8 + 0xc) = 0x80040049;
      return 0x80040049;
    }
    return 0x8004004e;
  }
  *param_2 = (short)iVar3;
  return 0;
}


