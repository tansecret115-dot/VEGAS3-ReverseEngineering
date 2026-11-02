/* Module: pngu3266.dll
   Function: DrawThumb
   Address: 60606e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall CPNImageSlider::DrawThumb(class CPNDC *,class CPNRegion &,int)
    */

void __thiscall
CPNImageSlider::DrawThumb(CPNImageSlider *this,CPNDC *param_1,CPNRegion *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0x16e70  1020  ?DrawThumb@CPNImageSlider@@MAEXPAVCPNDC@@AAVCPNRegion@@H@Z */
  if (*(int *)(this + 399) != 0) {
    (**(code **)(*(int *)param_2 + 0x18))(&local_14);
    iVar1 = (**(code **)(*(int *)this + 0xb0))();
    iVar2 = 0;
    if ((iVar1 == 0) && (*(int *)(this + 0x1ab) != -1)) {
      iVar2 = *(int *)(this + 0x1ab);
    }
    (**(code **)(*(int *)param_1 + 0x58))
              (*(undefined4 *)(this + 399),local_14,local_10,*(undefined4 *)(this + 0x193),
               *(undefined4 *)(this + 0x197),0,iVar2,0);
  }
  return;
}


