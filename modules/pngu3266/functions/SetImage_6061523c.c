/* Module: pngu3266.dll
   Function: SetImage
   Address: 6061523c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNImageControl::SetImage(class CPNImage *) */

void __thiscall CPNImageControl::SetImage(CPNImageControl *this,CPNImage *param_1)

{
                    /* 0x2523c  1924  ?SetImage@CPNImageControl@@QAEXPAVCPNImage@@@Z */
  if (*(undefined4 **)(this + 0xc0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc0))(1);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  *(CPNImage **)(this + 0xc0) = param_1;
  UpdateBackgroundColor(this);
  (**(code **)(*(int *)this + 0x78))(0,1);
  return;
}


