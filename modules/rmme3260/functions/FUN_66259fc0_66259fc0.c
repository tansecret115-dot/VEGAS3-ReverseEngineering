/* Module: rmme3260.dll
   Function: FUN_66259fc0
   Address: 66259fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66259fc0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x36) != 0) {
    uVar1 = (**(code **)(*(int *)this + 0x50))();
    iVar2 = DAT_6627f238;
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x15) == 0)) {
      assert(s_m_hLib_____raconnect_6627c47c,s___pub_win_sock_h_6627c3b0,0x36);
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


