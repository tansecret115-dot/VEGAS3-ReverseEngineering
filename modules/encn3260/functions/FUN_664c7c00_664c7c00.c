/* Module: encn3260.dll
   Function: FUN_664c7c00
   Address: 664c7c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_664c7c00(void *this,int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = -0x7ffbffbd;
  iVar1 = (**(code **)(*(int *)this + 0x50))();
  if (iVar1 < 0) {
    if (param_1 == 0) {
      param_1 = 0;
    }
    iVar3 = (**(code **)(*(int *)this + 0x10))(param_1,param_2,param_4);
  }
  if (-1 < iVar3) {
    *(undefined4 *)((int)this + 0x52) = param_5;
    this_00 = FUN_664ca810(param_5,1);
    *(undefined4 **)((int)this + 0x60) = this_00;
    FUN_664caa60(this_00,this);
    uVar2 = (**(code **)(*(int *)this + 0x50))();
    iVar1 = DAT_664f2a28;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x39) == 0)) {
      assert(s_m_hLib_____ralisten_664efb50,s___pub_win_sock_h_664efa08,0x46);
    }
    iVar1 = (**(code **)(iVar1 + 0x39))(uVar2,param_3);
    if (iVar1 < 0) {
      return 0x80040043;
    }
    *(undefined4 *)((int)this + 100) = 8;
    return 0;
  }
  if (iVar3 != -0x7ffbffb0) {
    *(undefined4 *)((int)this + 0xc) = 0x80040043;
    return 0x80040043;
  }
  return 0x80040050;
}


