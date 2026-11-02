/* Module: pngu3266.dll
   Function: CreateDefaultThumb
   Address: 6060dda7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNSlider::CreateDefaultThumb(void) */

void __thiscall XPNSlider::CreateDefaultThumb(XPNSlider *this)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x1dda7  934  ?CreateDefaultThumb@XPNSlider@@IAEXXZ */
  if (*(int *)(this + 0xf4) == 0) {
    local_c = 9;
    iVar1 = *(int *)(this + 0x117);
    local_8 = 0x11;
  }
  else {
    local_c = 0x11;
    iVar1 = *(int *)(this + 0x117);
    local_8 = 9;
  }
  local_10 = 0;
  local_14 = 0;
  (**(code **)(iVar1 + 0x10))(&local_14);
  (**(code **)(*(int *)(this + 0x117) + 0x18))(this + 299);
  return;
}


