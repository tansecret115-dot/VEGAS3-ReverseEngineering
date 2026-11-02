/* Module: encn3260.dll
   Function: FUN_664cab00
   Address: 664cab00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cab00(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  HWND hWnd;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined3 extraout_var;
  undefined4 *puVar6;
  BOOL BVar7;
  undefined3 extraout_var_00;
  tagMSG local_24;
  int *local_8;
  
  piVar4 = param_1;
  if ((this == (void *)0x0) || (param_1 == (int *)0x0)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x24) = 1;
  piVar1 = *(int **)((int)param_1 + 0x32);
  if (piVar1 != (int *)0x0) {
    local_8 = (int *)DAT_664f2a28;
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0xb9) == 0)) {
      assert(s_m_hLib_____raWSACancelAsyncReque_664efeec,s___pub_win_sock_h_664efa08,0x157);
    }
    (**(code **)((int)local_8 + 0xb9))(piVar1);
    *(undefined4 *)((int)piVar4 + 0x32) = 0;
    bVar5 = FUN_664c3fe0(*(void **)((int)this + 0x14),piVar1);
    if (CONCAT31(extraout_var,bVar5) != 0) {
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    }
  }
  piVar1 = DAT_664f2a38;
  if (DAT_664f2a30 != 0) {
    while (param_1 = piVar1, param_1 != (int *)0x0) {
      puVar6 = (undefined4 *)FUN_664bab80((int)param_1);
      piVar1 = (int *)*puVar6;
      if ((int *)*piVar1 == piVar4) {
        FUN_664bab90(&DAT_664f2a34,param_1);
        if (piVar1 != (int *)0x0) {
          FUN_664cb1a0((int)piVar1);
          operator_delete(piVar1);
        }
        break;
      }
      FUN_664bab40((int *)&param_1);
      piVar1 = param_1;
    }
  }
  local_8 = (int *)(**(code **)(*piVar4 + 0x50))();
  iVar3 = DAT_664f2a28;
  if (local_8 == (int *)0xffffffff) {
    *(undefined4 *)((int)this + 0x24) = 0;
    return 0;
  }
  uVar2 = *(undefined4 *)((int)this + 4);
  if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0xbd) == 0)) {
    assert(s_m_hLib_____raWSAAsyncSelect_664efed0,s___pub_win_sock_h_664efa08,0x15d);
  }
  (**(code **)(iVar3 + 0xbd))(local_8,uVar2,0,0);
  hWnd = *(HWND *)((int)this + 4);
  while( true ) {
    if ((hWnd == (HWND)0x0) || (BVar7 = PeekMessageA(&local_24,hWnd,0,0,1), BVar7 == 0))
    goto LAB_664cac80;
    if (local_24.message == 0x12) break;
    DispatchMessageA(&local_24);
    hWnd = *(HWND *)((int)this + 4);
  }
  PostQuitMessage(0);
LAB_664cac80:
  if ((*(void **)((int)this + 0x1c) != (void *)0x0) &&
     (bVar5 = FUN_664c3fe0(*(void **)((int)this + 0x1c),local_8),
     CONCAT31(extraout_var_00,bVar5) != 0)) {
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  FUN_664caf20(this);
  return 1;
}


