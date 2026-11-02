/* Module: pngu3266.dll
   Function: operator=
   Address: 6060071c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNImageControl & __thiscall CPNImageControl::operator=(class CPNImageControl const
   &) */

CPNImageControl * __thiscall
CPNImageControl::operator=(CPNImageControl *this,CPNImageControl *param_1)

{
                    /* 0x1071c  465  ??4CPNImageControl@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  CPNColor::operator=((CPNColor *)(this + 0xc4),(CPNColor *)(param_1 + 0xc4));
  CPNColor::operator=((CPNColor *)(this + 0xe3),(CPNColor *)(param_1 + 0xe3));
  *(undefined4 *)(this + 0x102) = *(undefined4 *)(param_1 + 0x102);
  *(undefined4 *)(this + 0x106) = *(undefined4 *)(param_1 + 0x106);
  return this;
}


