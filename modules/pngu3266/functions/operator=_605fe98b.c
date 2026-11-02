/* Module: pngu3266.dll
   Function: operator=
   Address: 605fe98b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPropertySheet & __thiscall CPNPropertySheet::operator=(class CPNPropertySheet
   const &) */

CPNPropertySheet * __thiscall
CPNPropertySheet::operator=(CPNPropertySheet *this,CPNPropertySheet *param_1)

{
                    /* 0xe98b  482  ??4CPNPropertySheet@@QAEAAV0@ABV0@@Z */
  XPNPropertySheet::operator=((XPNPropertySheet *)this,(XPNPropertySheet *)param_1);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  return this;
}


