/* Module: pngu3266.dll
   Function: operator=
   Address: 60606af1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class XPNImageSlider & __thiscall XPNImageSlider::operator=(class XPNImageSlider &) */

XPNImageSlider * __thiscall XPNImageSlider::operator=(XPNImageSlider *this,XPNImageSlider *param_1)

{
  XPNImageSlider *pXVar1;
  int iVar2;
  
                    /* 0x16af1  531  ??4XPNImageSlider@@QAEAAV0@AAV0@@Z */
  XPNSlider::operator=((XPNSlider *)this,(XPNSlider *)param_1);
  *(undefined4 *)(this + 0x183) = *(undefined4 *)(param_1 + 0x183);
  *(undefined4 *)(this + 0x187) = *(undefined4 *)(param_1 + 0x187);
  *(undefined4 *)(this + 0x18b) = *(undefined4 *)(param_1 + 0x18b);
  *(undefined4 *)(this + 399) = *(undefined4 *)(param_1 + 399);
  *(undefined4 *)(this + 0x193) = *(undefined4 *)(param_1 + 0x193);
  *(undefined4 *)(this + 0x197) = *(undefined4 *)(param_1 + 0x197);
  pXVar1 = this + 0x19b;
  iVar2 = 3;
  do {
    *(undefined4 *)pXVar1 = *(undefined4 *)(pXVar1 + ((int)param_1 - (int)this));
    pXVar1 = pXVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pXVar1 = this + 0x1a7;
  iVar2 = 2;
  do {
    *(undefined4 *)pXVar1 = *(undefined4 *)(pXVar1 + ((int)param_1 - (int)this));
    pXVar1 = pXVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return this;
}


