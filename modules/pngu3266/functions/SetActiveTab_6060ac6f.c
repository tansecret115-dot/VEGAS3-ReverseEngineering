/* Module: pngu3266.dll
   Function: SetActiveTab
   Address: 6060ac6f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::SetActiveTab(unsigned long) */

void __thiscall XPNTabControl::SetActiveTab(XPNTabControl *this,ulong param_1)

{
  int iVar1;
  _TabInfo *p_Var2;
  _TabInfo *p_Var3;
  _TabInfo *p_Var4;
  int iVar5;
  int *piVar6;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  _TabInfo *local_c;
  _TabInfo *local_8;
  
                    /* 0x1ac6f  1814  ?SetActiveTab@XPNTabControl@@UAEXK@Z */
  if (((*(int *)(this + 0xd0) != 0) && (*(int *)(*(int *)(this + 0xd0) + 0x10) != 0)) &&
     (*(ulong *)(this + 0xc0) != param_1)) {
    p_Var2 = GetTabInfo(this,*(ulong *)(this + 0xc0));
    if (p_Var2 != (_TabInfo *)0x0) {
      local_8 = p_Var2;
      p_Var3 = GetTabInfo(this,param_1);
      if ((p_Var3 != (_TabInfo *)0x0) && (*(int *)(p_Var3 + 0x20) != 0)) {
        param_1 = 0;
        local_c = p_Var3;
        if (*(int *)(this + 200) != 0) {
          p_Var4 = GetTabInfo(this,*(ulong *)(this + 0xc4));
          param_1 = *(int *)(p_Var4 + 8) - 2;
        }
        iVar5 = MoveTabIntoSight(this,p_Var3,param_1);
        if (iVar5 == 0) {
          p_Var3 = p_Var2 + 8;
          iVar5 = *(int *)p_Var3;
          local_18 = *(int *)(p_Var2 + 0xc);
          iVar1 = *(int *)(p_Var2 + 0x10);
          local_10 = *(int *)(p_Var2 + 0x14);
          *(int *)p_Var3 = *(int *)p_Var3 + 2;
          *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -2;
          *(int *)(local_c + 8) = *(int *)(local_c + 8) + -2;
          *(int *)(local_c + 0x10) = *(int *)(local_c + 0x10) + 2;
          local_18 = local_18 + -1;
          local_10 = local_10 + 1;
          local_24 = -param_1;
          local_1c = iVar5 + -4 + local_24;
          local_14 = iVar1 + 4 + local_24;
          local_2c = *(int *)(local_c + 8) + -4 + local_24;
          local_24 = *(int *)(local_c + 0x10) + 4 + local_24;
          local_28 = *(int *)(local_c + 0xc) + -1;
          local_20 = *(int *)(local_c + 0x14) + 1;
          *(undefined4 *)(this + 0xc0) = *(undefined4 *)(local_c + 4);
          (**(code **)(*(int *)this + 0x78))(&local_1c,0);
          iVar5 = *(int *)this;
          piVar6 = &local_2c;
        }
        else {
          GetTabInfo(this,*(ulong *)(this + 0xc4));
          *(undefined4 *)(this + 0xc0) = *(undefined4 *)(p_Var3 + 4);
          SetDimensions(this);
          iVar5 = *(int *)this;
          piVar6 = (int *)0x0;
        }
        (**(code **)(iVar5 + 0x78))(piVar6,1);
      }
    }
  }
  return;
}


