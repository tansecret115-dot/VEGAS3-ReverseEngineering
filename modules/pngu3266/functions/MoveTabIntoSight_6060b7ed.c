/* Module: pngu3266.dll
   Function: MoveTabIntoSight
   Address: 6060b7ed
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: int __thiscall XPNTabControl::MoveTabIntoSight(struct _TabInfo *,long) */

int __thiscall XPNTabControl::MoveTabIntoSight(XPNTabControl *this,_TabInfo *param_1,long param_2)

{
  int iVar1;
  _TabInfo *p_Var2;
  int *piVar3;
  int iVar4;
  int local_18;
  int local_10 [2];
  int local_8;
  
                    /* 0x1b7ed  1575  ?MoveTabIntoSight@XPNTabControl@@AAEHPAU_TabInfo@@J@Z */
  if ((*(int *)(this + 200) != 0) &&
     (iVar1 = (**(code **)(**(int **)(this + 0xd4) + 0x9c))(), iVar1 != 0)) {
    local_18 = *(int *)(param_1 + 0x10) + -param_2;
    iVar4 = *(int *)(param_1 + 8) + -param_2;
    (**(code **)(*(int *)this + 0x38))(local_10);
    iVar1 = local_10[0] + -0x2c;
    if ((iVar1 <= iVar4) || (iVar1 <= local_18)) {
      p_Var2 = GetTabInfo(this,*(ulong *)(this + 0xc4));
      param_1 = (_TabInfo *)(**(code **)(**(int **)(this + 0xd0) + 0x18))(p_Var2,0);
      FUN_6061a2c0((int *)&param_1);
      local_8 = 0;
      while (param_1 != (_TabInfo *)0x0) {
        piVar3 = (int *)FUN_6061a2c0((int *)&param_1);
        local_18 = local_18 + param_2;
        iVar4 = iVar4 + param_2;
        param_2 = *(int *)(*piVar3 + 8) + -2;
        local_18 = local_18 + -param_2;
        iVar4 = iVar4 + -param_2;
        local_8 = local_8 + 1;
        if ((iVar4 < iVar1) && (local_18 < iVar1)) {
          *(undefined4 *)(this + 0xc4) = *(undefined4 *)(*piVar3 + 4);
          CPNScrollHelper::SetPosition
                    (*(CPNScrollHelper **)(*(int *)(this + 0xd4) + 0xfb),
                     *(int *)(*(int *)(*(int *)(this + 0xd4) + 0xfb) + 0x14) + local_8);
          return 1;
        }
      }
    }
  }
  return 0;
}


