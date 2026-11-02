/* Module: pngu3266.dll
   Function: GetSingleInstanceId
   Address: 60610b6a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNPropertySheet::GetSingleInstanceId(void) */

ulong __thiscall XPNPropertySheet::GetSingleInstanceId(XPNPropertySheet *this)

{
  ulong uVar1;
  
                    /* 0x20b6a  1351  ?GetSingleInstanceId@XPNPropertySheet@@UAEKXZ */
  uVar1 = 0;
  if (0 < *(int *)(this + 0xd4)) {
    uVar1 = (**(code **)(*(int *)**(undefined4 **)(this + 0xd0) + 0x13c))();
  }
  return uVar1;
}


