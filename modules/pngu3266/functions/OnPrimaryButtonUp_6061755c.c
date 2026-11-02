/* Module: pngu3266.dll
   Function: OnPrimaryButtonUp
   Address: 6061755c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall CPNScrollHelper::OnPrimaryButtonUp(class CPNxPoint &,unsigned short)
    */

void __thiscall
CPNScrollHelper::OnPrimaryButtonUp(CPNScrollHelper *this,CPNxPoint *param_1,ushort param_2)

{
  ulong uVar1;
  CPNxRect local_38 [16];
  CPNxRect local_28 [16];
  CPNxRect local_18 [16];
  undefined4 local_8;
  
                    /* 0x2755c  1692  ?OnPrimaryButtonUp@CPNScrollHelper@@IAEXAAVCPNxPoint@@G@Z */
  if (*(XPNTimer **)(this + 0x3c) != (XPNTimer *)0x0) {
    XPNTimer::SetPending(*(XPNTimer **)(this + 0x3c),0);
  }
  (**(code **)(**(int **)(this + 8) + 0x3c))(local_18);
  uVar1 = *(ulong *)(this + 0x38);
  GetArrowRect(this,local_18,uVar1,4,local_28);
  GetArrowRect(this,local_18,uVar1,8,local_38);
  if ((*(int *)(this + 0x20) != 0) || (*(int *)(this + 0x24) != 0)) {
    (**(code **)(**(int **)(this + 8) + 0x88))();
    if (*(int *)(this + 0x28) != 0) {
      local_8 = *(undefined4 *)(this + 0x30);
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    (**(code **)(**(int **)(this + 8) + 0x78))(0,1);
    EndScroll(this);
  }
  return;
}


