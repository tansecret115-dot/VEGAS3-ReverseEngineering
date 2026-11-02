/* Module: pngu3266.dll
   Function: Blit
   Address: 605fb493
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNDC::Blit(long,long,long,long,class CPNDC *,long,long,long) */

int __thiscall
CPNDC::Blit(CPNDC *this,long param_1,long param_2,long param_3,long param_4,CPNDC *param_5,
           long param_6,long param_7,long param_8)

{
  DWORD rop;
  BOOL BVar1;
  
                    /* 0xb493  829  ?Blit@CPNDC@@UAEHJJJJPAV1@JJJ@Z */
  if (param_8 == 10) {
    rop = 0xcc0020;
  }
  else if (param_8 == 0xe) {
    rop = 0xff0062;
  }
  else if (param_8 == 0) {
    rop = 0x42;
  }
  else if (param_8 == 1) {
    rop = 0x550009;
  }
  else if (param_8 == 2) {
    rop = 0xc000ca;
  }
  else if (param_8 == 3) {
    rop = 0xbb0226;
  }
  else if (param_8 == 4) {
    rop = 0x330008;
  }
  else if (param_8 == 0xc) {
    rop = 0x660046;
  }
  else if (param_8 == 0xb) {
    rop = 0x440328;
  }
  else if (param_8 == 0xd) {
    rop = 0xee0086;
  }
  else {
    rop = ((param_8 != 9) - 1 & 0xffbc00a6) + 0xcc0020;
  }
  BVar1 = BitBlt(*(HDC *)(this + 0x1cf),param_1,param_2,param_3,param_4,*(HDC *)(param_5 + 0x1cf),
                 param_6,param_7,rop);
  return BVar1;
}


