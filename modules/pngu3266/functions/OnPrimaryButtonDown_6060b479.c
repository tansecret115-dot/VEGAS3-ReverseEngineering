/* Module: pngu3266.dll
   Function: OnPrimaryButtonDown
   Address: 6060b479
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNTabControl::OnPrimaryButtonDown(class CPNxPoint &,unsigned short) */

void __thiscall
XPNTabControl::OnPrimaryButtonDown(XPNTabControl *this,CPNxPoint *param_1,ushort param_2)

{
  _TabInfo *p_Var1;
  int *piVar2;
  CPNEvent local_50 [32];
  undefined4 local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1b479  1691  ?OnPrimaryButtonDown@XPNTabControl@@AAEXAAVCPNxPoint@@G@Z */
  if ((*(int *)(this + 0xd0) != 0) && (*(int *)(*(int *)(this + 0xd0) + 0x10) != 0)) {
    local_10 = 0;
    if (*(int *)(this + 200) != 0) {
      p_Var1 = GetTabInfo(this,*(ulong *)(this + 0xc4));
      local_10 = *(int *)(p_Var1 + 8) + -2;
    }
    local_c = 0;
    local_8 = *(int *)(*(int *)(this + 0xd0) + 4);
    if (local_8 != 0) {
      local_10 = -local_10;
      do {
        piVar2 = (int *)FUN_6061a2c0(&local_8);
        local_14 = *piVar2;
        if (*(int *)(local_14 + 4) == *(int *)(this + 0xc0)) {
          local_c = local_14;
        }
        local_20 = *(int *)(local_14 + 0xc);
        local_18 = *(int *)(local_14 + 0x14);
        local_24 = *(int *)(local_14 + 8) + local_10;
        local_1c = *(int *)(local_14 + 0x10) + local_10;
        if ((((local_24 <= *(int *)param_1) && (*(int *)param_1 <= local_1c)) &&
            (local_20 <= *(int *)(param_1 + 4))) && (*(int *)(param_1 + 4) <= local_18)) {
          if (*(ulong *)(local_14 + 4) == *(ulong *)(this + 0xc0)) {
            return;
          }
          if (*(int *)(local_14 + 0x20) == 0) {
            return;
          }
          if (local_c == 0) {
            GetTabInfo(this,*(ulong *)(this + 0xc0));
          }
          CPNEvent::CPNEvent(local_50,0x80000000,4,(CPNRouter *)this,0,0,0,0);
          local_30 = *(undefined4 *)(local_14 + 4);
          (**(code **)(*(int *)this + 4))(local_50);
          CPNEvent::~CPNEvent(local_50);
          return;
        }
      } while (local_8 != 0);
    }
  }
  return;
}


