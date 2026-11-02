/* Module: pngu3266.dll
   Function: SetButtonImage
   Address: 605fd94f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNImageButton::SetButtonImage(class CPNImage *) */

int __thiscall CPNImageButton::SetButtonImage(CPNImageButton *this,CPNImage *param_1)

{
                    /* 0xd94f  1849  ?SetButtonImage@CPNImageButton@@UAEHPAVCPNImage@@@Z */
  if (*(undefined4 **)(this + 0x107) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x107))(1);
    *(undefined4 *)(this + 0x107) = 0;
  }
  *(CPNImage **)(this + 0x107) = param_1;
  UpdateImages(this);
  return 1;
}


