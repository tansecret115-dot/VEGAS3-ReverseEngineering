/* Module: pngu3266.dll
   Function: FitMenuVerticallyOnScreen
   Address: 606129c6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static int __cdecl CPNSystemInfo::FitMenuVerticallyOnScreen(class CPNMenu &) */

int __cdecl CPNSystemInfo::FitMenuVerticallyOnScreen(CPNMenu *param_1)

{
  uint uVar1;
  CPNMenu *pCVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  UINT item;
  undefined4 local_2a4 [40];
  int local_204;
  CHAR local_150;
  undefined4 local_14f;
  undefined4 local_4c;
  int local_46;
  tagMENUITEMINFOA local_38;
  int local_8;
  
                    /* 0x229c6  1054  ?FitMenuVerticallyOnScreen@CPNSystemInfo@@SAHAAVCPNMenu@@@Z */
  pCVar2 = param_1;
  local_38.hbmpItem = (HBITMAP)FUN_60612600(1);
  memset(local_2a4,0,0x154);
  memset(&local_4c,0,0x12);
  FUN_6061a7a0(&local_4c);
  if (local_46 != 0x400) {
    local_2a4[0] = 0x154;
    SystemParametersInfoA(0x29,0,local_2a4,0);
    iVar3 = abs(local_204);
    iVar3 = iVar3 + 8;
    local_8 = (**(code **)(*(int *)param_1 + 0x24))();
    if (local_8 * iVar3 - (int)local_38.hbmpItem != 0 && (int)local_38.hbmpItem <= local_8 * iVar3)
    {
      local_150 = DAT_60649ac0;
      puVar5 = &local_14f;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0;
      param_1 = (CPNMenu *)0x0;
      *(undefined1 *)((int)puVar5 + 2) = 0;
      memset(&local_38,0,0x2c);
      local_38.cbSize = 0x2c;
      item = 0;
      local_38.fMask = 0x10;
      if (0 < local_8) {
        do {
          local_38.dwTypeData = &local_150;
          local_38.cch = 0x104;
          GetMenuItemInfoA(*(HMENU *)(pCVar2 + 0x14),item,1,&local_38);
          uVar1 = local_38.fType & 0xffffff9f;
          iVar4 = iVar3;
          if ((local_38.fType & 0x800) != 0) {
            iVar4 = iVar3 / 2;
          }
          param_1 = param_1 + iVar4;
          local_38.fType = uVar1;
          if ((int)local_38.hbmpItem <= (int)param_1) {
            local_38.fType = uVar1 | 0x20;
            param_1 = (CPNMenu *)0x0;
          }
          SetMenuItemInfoA(*(HMENU *)(pCVar2 + 0x14),item,1,&local_38);
          item = item + 1;
        } while ((int)item < local_8);
      }
      return 1;
    }
  }
  return 0;
}


