/* Module: pngu3266.dll
   Function: SetBackground
   Address: 605fb3cc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SetBackground(class CPNBrush *) */

void __thiscall CPNDC::SetBackground(CPNDC *this,CPNBrush *param_1)

{
  CPNColor local_24 [8];
  COLORREF local_1c;
  
                    /* 0xb3cc  1823  ?SetBackground@CPNDC@@UAEXPAVCPNBrush@@@Z */
  if (*(CPNGraphicResource **)(this + 399) != (CPNGraphicResource *)0x0) {
    CPNGraphicResource::UnLockResource(*(CPNGraphicResource **)(this + 399));
  }
  CPNGraphicResource::LockResource((CPNGraphicResource *)param_1);
  *(CPNBrush **)(this + 399) = param_1;
  CPNColor::CPNColor(local_24,(CPNColor *)(param_1 + 0x10));
  if ((local_1c != *(COLORREF *)(this + 0x1db)) ||
     (*(int *)(this + 0x1cf) != *(int *)(this + 0x1d7))) {
    SetBkColor(*(HDC *)(this + 0x1cf),local_1c);
    *(COLORREF *)(this + 0x1db) = local_1c;
    *(undefined4 *)(this + 0x1d7) = *(undefined4 *)(this + 0x1cf);
  }
  CPNColor::~CPNColor(local_24);
  return;
}


