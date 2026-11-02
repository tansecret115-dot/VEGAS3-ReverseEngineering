/* Module: encn3260.dll
   Function: FUN_664c6d10
   Address: 664c6d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_664c6d10(void *this,undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *this_00;
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x52) = param_5;
  this_00 = FUN_664ca810(param_5,1);
  *(undefined4 **)((int)this + 0x60) = this_00;
  FUN_664caa60(this_00,this);
  uVar1 = (**(code **)(*(int *)this + 0x50))();
  iVar2 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x39) == 0)) {
    assert(s_m_hLib_____ralisten_664efb50,s___pub_win_sock_h_664efa08,0x46);
  }
  iVar2 = (**(code **)(iVar2 + 0x39))(uVar1,param_3);
  if (-1 < iVar2) {
    *(undefined4 *)((int)this + 100) = 8;
    return 0;
  }
  return 0x80040043;
}


