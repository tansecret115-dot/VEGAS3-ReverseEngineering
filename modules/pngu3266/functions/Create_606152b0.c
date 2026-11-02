/* Module: pngu3266.dll
   Function: Create
   Address: 606152b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNImageControl::Create(unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,unsigned long) */

int __thiscall
CPNImageControl::Create
          (CPNImageControl *this,ulong param_1,CPNWindow *param_2,long param_3,long param_4,
          long param_5,long param_6,ulong param_7,ulong param_8,ulong param_9)

{
  CPNBitmapImage *this_00;
  int *piVar1;
  int iVar2;
  
                    /* 0x252b0  906  ?Create@CPNImageControl@@UAEHKPAVCPNWindow@@JJJJKKK@Z */
  if (*(undefined4 **)(this + 0xc0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xc0))(1);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  this_00 = operator_new(0x33);
  if (this_00 == (CPNBitmapImage *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNBitmapImage::CPNBitmapImage(this_00);
  }
  *(int **)(this + 0xc0) = piVar1;
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(param_9);
    UpdateBackgroundColor(this);
    iVar2 = CPNControl::Create((CPNControl *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                               param_7,(char *)0x0,param_8);
  }
  return iVar2;
}


