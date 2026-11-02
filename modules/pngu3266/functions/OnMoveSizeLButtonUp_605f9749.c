/* Module: pngu3266.dll
   Function: OnMoveSizeLButtonUp
   Address: 605f9749
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall CPNWindow::OnMoveSizeLButtonUp(unsigned long,unsigned int,long) */

int __thiscall
CPNWindow::OnMoveSizeLButtonUp(CPNWindow *this,ulong param_1,uint param_2,long param_3)

{
  XPNDC *this_00;
  XPNDC *this_01;
  CPNGraphicResource *this_02;
  HGDIOBJ ho;
  int iVar1;
  CPNPen *local_10;
  undefined4 local_c;
  long local_8;
  
                    /* 0x9749  1653  ?OnMoveSizeLButtonUp@CPNWindow@@IAEHKIJ@Z */
  if (*(int *)(this + 0x84) == 0) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(this + 0xa0) != 0) {
      if (*(int *)(this + 0xb0) != 0) {
        this_00 = *(XPNDC **)(this + 0xa4);
        if (this_00 != (XPNDC *)0x0) {
          local_10 = XPNDC::SetPen(this_00,*(CPNPen **)(this + 0xa8));
        }
        this_01 = *(XPNDC **)(this + 0xa4);
        if (this_01 != (XPNDC *)0x0) {
          local_8 = XPNDC::SetFgMixMode(this_01,0xd);
        }
        (**(code **)(**(int **)(this + 0xa4) + 0x24))(this + 0x90);
        *(undefined4 *)(this + 0xb0) = 0;
        if (this_01 != (XPNDC *)0x0) {
          XPNDC::SetFgMixMode(this_01,local_8);
        }
        if (this_00 != (XPNDC *)0x0) {
          XPNDC::SetPen(this_00,local_10);
        }
      }
      if (*(undefined4 **)(this + 0xac) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0xac))(1);
        *(undefined4 *)(this + 0xac) = 0;
      }
      this_02 = *(CPNGraphicResource **)(this + 0xa8);
      if (this_02 != (CPNGraphicResource *)0x0) {
        if (*(int *)(this_02 + 8) == 0) {
          ho = *(HGDIOBJ *)(this_02 + 0x5f);
          CPNPen::Detach((CPNPen *)this_02);
          DeleteObject(ho);
        }
        else {
          CPNGraphicResource::UnLockResource(this_02);
        }
        if (*(undefined4 **)(this + 0xa8) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(this + 0xa8))(1);
        }
        *(undefined4 *)(this + 0xa8) = 0;
      }
      if (*(undefined4 **)(this + 0xa4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0xa4))(1);
        *(undefined4 *)(this + 0xa4) = 0;
      }
      local_c = *(undefined4 *)(this + 0x90);
      local_8 = *(long *)(this + 0x94);
      (**(code **)(*(int *)this + 0x44))(&local_c);
      ::SendMessageA(*(HWND *)(this + 0xc),0x232,0,0);
    }
    (**(code **)(*(int *)this + 0x88))();
    *(undefined4 *)(this + 0x84) = 0;
    iVar1 = 1;
  }
  return iVar1;
}


