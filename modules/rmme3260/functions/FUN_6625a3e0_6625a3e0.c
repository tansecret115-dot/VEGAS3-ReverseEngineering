/* Module: rmme3260.dll
   Function: FUN_6625a3e0
   Address: 6625a3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6625a3e0(void *this,undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *this_00;
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x52) = param_5;
  this_00 = FUN_6625ebf0(param_5,1);
  *(undefined4 **)((int)this + 0x60) = this_00;
  FUN_6625ee40(this_00,this);
  uVar1 = (**(code **)(*(int *)this + 0x50))();
  iVar2 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x39) == 0)) {
    assert(s_m_hLib_____ralisten_6627c4f8,s___pub_win_sock_h_6627c3b0,0x46);
  }
  iVar2 = (**(code **)(iVar2 + 0x39))(uVar1,param_3);
  if (-1 < iVar2) {
    *(undefined4 *)((int)this + 100) = 8;
    return 0;
  }
  return 0x80040043;
}


