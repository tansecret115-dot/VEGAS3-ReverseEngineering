/* Module: encn3260.dll
   Function: FUN_664caa60
   Address: 664caa60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664caa60(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((this != (void *)0x0) && (param_1 != (int *)0x0)) {
    uVar3 = (**(code **)(*param_1 + 0x50))();
    iVar2 = DAT_664f2a28;
    uVar1 = *(undefined4 *)((int)this + 4);
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0xbd) == 0)) {
      assert(s_m_hLib_____raWSAAsyncSelect_664efed0,s___pub_win_sock_h_664efa08,0x15d);
    }
    (**(code **)(iVar2 + 0xbd))(uVar3,uVar1,0x465,0x3b);
    FUN_664c3e40(*(void **)((int)this + 0x1c),uVar3,(int)param_1);
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
    return 1;
  }
  return 0;
}


