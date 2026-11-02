/* Module: pngu3266.dll
   Function: OnPaintScrollUp
   Address: 60611c39
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNScrollingText::OnPaintScrollUp(class CPNDC &) */

void __thiscall XPNScrollingText::OnPaintScrollUp(XPNScrollingText *this,CPNDC *param_1)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
                    /* 0x21c39  1679  ?OnPaintScrollUp@XPNScrollingText@@IAEXAAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_30);
  local_20 = *(int *)(this + 0x136);
  local_8 = 0;
  local_14 = local_24 + -*(int *)(this + 0x122);
  iVar1 = *(int *)(this + 0x102);
  local_1c = *(int *)(this + 0x13a) + -*(int *)(this + 0x122);
  iVar2 = 0;
  local_10 = local_28;
  if (0 < iVar1) {
    do {
      local_18 = local_10;
      if (((((local_20 < local_30) || (local_28 < local_20)) || (local_1c < local_2c)) ||
          (local_24 < local_1c)) &&
         (((local_10 < local_30 || (local_28 < local_10)) ||
          ((local_14 < local_2c || (local_24 < local_14)))))) {
        if (local_8 == 1) {
          return;
        }
      }
      else {
        (**(code **)(*(int *)param_1 + 0x38))
                  (**(undefined4 **)(*(int *)(this + 0xfe) + iVar2 * 4),&local_20,0);
        local_8 = 1;
      }
      local_10 = local_18;
      local_1c = local_1c + *(int *)(this + 0x11a);
      local_14 = local_14 + *(int *)(this + 0x11a);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


