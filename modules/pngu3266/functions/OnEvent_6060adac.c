/* Module: pngu3266.dll
   Function: OnEvent
   Address: 6060adac
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNTabControl::OnEvent(class CPNEvent &) */

int __thiscall XPNTabControl::OnEvent(XPNTabControl *this,CPNEvent *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  CPNPaintDC local_240 [548];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1adac  1624  ?OnEvent@XPNTabControl@@UAEHAAVCPNEvent@@@Z */
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) == 1) {
    local_c = (int)*(short *)(param_1 + 0x20);
    local_8 = (int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
    (**(code **)(**(int **)(this + 0xd4) + 0x40))(&local_1c);
    if (((((*(int *)(this + 200) == 0) ||
          (iVar2 = (**(code **)(**(int **)(this + 0xd4) + 0x9c))(), iVar2 == 0)) ||
         (local_c < local_1c)) || ((local_14 < local_c || (local_8 < local_18)))) ||
       (local_10 < local_8)) {
      if (iVar1 != 0x65) {
        return 0;
      }
      if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) != 0) {
        return 0;
      }
      OnPrimaryButtonDown(this,(CPNxPoint *)&local_c,(ushort)*(undefined4 *)(param_1 + 0x1c));
      return 0;
    }
    piVar3 = *(int **)(this + 0xd4);
  }
  else {
    if (*(int *)(param_1 + 8) == 2) {
      if (iVar1 == 0xaa) {
        return 0;
      }
      if ((iVar1 != 0xab) && (iVar1 != 0xac)) {
        if (iVar1 == 0xb0) {
          CPNPaintDC::CPNPaintDC(local_240,(CPNWindow *)this);
          (**(code **)(*(int *)this + 0x15c))(local_240);
          CPNPaintDC::~CPNPaintDC(local_240);
          return 0;
        }
        return 0;
      }
      SetDimensions(this);
      return 0;
    }
    if (*(int *)(this + 200) == 0) {
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(this + 0xd4) + 0x9c))();
    if (iVar1 == 0) {
      return 0;
    }
    piVar3 = *(int **)(this + 0xd4);
  }
  (**(code **)(*piVar3 + 0xdc))(param_1);
  return 0;
}


