/* Module: pngu3266.dll
   Function: NotifyWindowlessChildren
   Address: 605f8c89
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::NotifyWindowlessChildren(class CPNEvent &) */

void __thiscall CPNWindow::NotifyWindowlessChildren(CPNWindow *this,CPNEvent *param_1)

{
  CPNWindow *this_00;
  bool bVar1;
  undefined4 *puVar2;
  HWND__ *pHVar3;
  int iVar4;
  CPNEvent local_50 [12];
  int local_44;
  uint local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  CPNWindow *local_c;
  int local_8;
  
                    /* 0x8c89  1581  ?NotifyWindowlessChildren@CPNWindow@@QAEXAAVCPNEvent@@@Z */
  bVar1 = false;
  local_c = this;
  CPNEvent::CPNEvent(local_50,param_1);
  if (*(int *)(this + 0x44) != 0) {
    local_8 = *(int *)(*(int *)(this + 0x44) + 4);
    while (local_8 != 0) {
      puVar2 = (undefined4 *)FUN_6061a2c0(&local_8);
      this_00 = (CPNWindow *)*puVar2;
      pHVar3 = GetHWND(this_00);
      if ((pHVar3 == (HWND__ *)0x0) && (((byte)this_00[0xb] & 0x80) != 0)) {
        if (*(int *)(param_1 + 8) == 1) {
          if ((local_44 != 0x68) && (local_44 != 0x69)) {
            (**(code **)(*(int *)this_00 + 0x50))(&local_1c);
            (**(code **)(*(int *)this_00 + 0x38))(&local_24);
            local_14 = (uint)(short)local_30;
            local_10 = (int)(short)(local_30 >> 0x10);
            if ((((int)local_14 < local_1c) ||
                (((local_1c + local_24 < (int)local_14 || (local_10 < local_18)) ||
                 (local_18 + local_20 < local_10)))) &&
               (iVar4 = (**(code **)(*(int *)this_00 + 0x8c))(), iVar4 == 0)) goto LAB_605f8da6;
            local_10 = local_10 - local_18;
            local_14 = local_14 - local_1c;
            local_30 = local_10 * 0x10000 | local_14;
            if (local_44 == 100) {
              HandleMouseMove(this_00,(CPNxPoint *)&local_14);
            }
          }
LAB_605f8da3:
          bVar1 = true;
        }
        else if ((*(int *)(param_1 + 8) == 2) && (*(int *)(param_1 + 0xc) == 0xb0))
        goto LAB_605f8da3;
LAB_605f8da6:
        if (bVar1) {
          (**(code **)(*(int *)this_00 + 0xdc))(local_50);
        }
      }
    }
  }
  CPNEvent::~CPNEvent(local_50);
  return;
}


