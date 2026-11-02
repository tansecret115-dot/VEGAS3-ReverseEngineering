/* Module: rmme3260.dll
   Function: FUN_6625ee40
   Address: 6625ee40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625ee40(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if ((this != (void *)0x0) && (param_1 != (int *)0x0)) {
    uVar3 = (**(code **)(*param_1 + 0x50))();
    iVar2 = DAT_6627f238;
    uVar1 = *(undefined4 *)((int)this + 4);
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 0xbd) == 0)) {
      assert(s_m_hLib_____raWSAAsyncSelect_6627c878,s___pub_win_sock_h_6627c3b0,0x15d);
    }
    (**(code **)(iVar2 + 0xbd))(uVar3,uVar1,0x465,0x3b);
    FUN_66250fc0(*(void **)((int)this + 0x1c),uVar3,(int)param_1);
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
    return 1;
  }
  return 0;
}


