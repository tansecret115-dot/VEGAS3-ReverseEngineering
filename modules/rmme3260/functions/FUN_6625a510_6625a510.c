/* Module: rmme3260.dll
   Function: FUN_6625a510
   Address: 6625a510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6625a510(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *this_00;
  
  *(undefined4 *)((int)this + 0x52) = param_1;
  iVar1 = DAT_6627f238;
  if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0x3d) == 0)) {
    assert(s_m_hLib_____rantohl_6627c50c,s___pub_win_sock_h_6627c3b0,0x8c);
  }
  uVar2 = (**(code **)(iVar1 + 0x3d))(param_3);
  *(undefined4 *)((int)this + 0x68) = uVar2;
  this_00 = FUN_6625ebf0(*(undefined4 *)((int)this + 0x52),1);
  *(undefined4 **)((int)this + 0x60) = this_00;
  FUN_6625ee40(this_00,this);
  *(undefined4 *)((int)this + 100) = 6;
  *(undefined2 *)((int)this + 0x10) = 1;
  return 0;
}


