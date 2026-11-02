/* Module: pngu3266.dll
   Function: SetImage
   Address: 60617e47
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNImageBorder::SetImage(class CPNImage *) */

int __thiscall CPNImageBorder::SetImage(CPNImageBorder *this,CPNImage *param_1)

{
                    /* 0x27e47  1923  ?SetImage@CPNImageBorder@@UAEHPAVCPNImage@@@Z */
  if (*(undefined4 **)(this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc))(1);
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(CPNImage **)(this + 0xc) = param_1;
  ImageChanged(this);
  return 1;
}


