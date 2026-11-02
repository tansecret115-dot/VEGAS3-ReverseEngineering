/* Module: encn3260.dll
   Function: FUN_664c6e40
   Address: 664c6e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_664c6e40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *this_00;
  
  *(undefined4 *)((int)this + 0x52) = param_1;
  iVar1 = DAT_664f2a28;
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0x3d) == 0)) {
    assert(s_m_hLib_____rantohl_664efb64,s___pub_win_sock_h_664efa08,0x8c);
  }
  uVar2 = (**(code **)(iVar1 + 0x3d))(param_3);
  *(undefined4 *)((int)this + 0x68) = uVar2;
  this_00 = FUN_664ca810(*(undefined4 *)((int)this + 0x52),1);
  *(undefined4 **)((int)this + 0x60) = this_00;
  FUN_664caa60(this_00,this);
  *(undefined4 *)((int)this + 100) = 6;
  *(undefined2 *)((int)this + 0x10) = 1;
  return 0;
}


