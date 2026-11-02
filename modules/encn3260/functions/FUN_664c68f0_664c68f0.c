/* Module: encn3260.dll
   Function: FUN_664c68f0
   Address: 664c68f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c68f0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x36) != 0) {
    uVar1 = (**(code **)(*(int *)this + 0x50))();
    iVar2 = DAT_664f2a28;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x15) == 0)) {
      assert(s_m_hLib_____raconnect_664efad4,s___pub_win_sock_h_664efa08,0x36);
    }
    iVar2 = (**(code **)(iVar2 + 0x15))(uVar1,param_1,4);
    if (iVar2 != 0) {
      *(undefined4 *)((int)this + 0xc) = 0x80040044;
      return 0x80040044;
    }
  }
  *(undefined2 *)((int)this + 0x10) = 1;
  return 0;
}


