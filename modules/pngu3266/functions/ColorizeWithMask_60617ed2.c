/* Module: pngu3266.dll
   Function: ColorizeWithMask
   Address: 60617ed2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNImageBorder::ColorizeWithMask(class CPNColor const &,class
   CPNColor *,unsigned long) */

int __thiscall
CPNImageBorder::ColorizeWithMask
          (CPNImageBorder *this,CPNColor *param_1,CPNColor *param_2,ulong param_3)

{
  int iVar1;
  
                    /* 0x27ed2  869  ?ColorizeWithMask@CPNImageBorder@@UAEHABVCPNColor@@PAV2@K@Z */
  iVar1 = 0;
  if (*(int **)(this + 0xc) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0xc) + 0x4c))(param_1,param_2,param_3);
  }
  return iVar1;
}


