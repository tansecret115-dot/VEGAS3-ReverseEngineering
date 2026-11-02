/* Module: pngu3266.dll
   Function: TranslateBlitRopCodes
   Address: 605fb8ff
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: long __thiscall CPNDC::TranslateBlitRopCodes(long) */

long __thiscall CPNDC::TranslateBlitRopCodes(CPNDC *this,long param_1)

{
  long lVar1;
  
                    /* 0xb8ff  2090  ?TranslateBlitRopCodes@CPNDC@@IAEJJ@Z */
  switch(param_1) {
  case 0:
    lVar1 = 0x42;
    break;
  case 1:
    lVar1 = 0x550009;
    break;
  case 2:
    lVar1 = 0xc000ca;
    break;
  case 3:
    lVar1 = 0xbb0226;
    break;
  case 4:
    lVar1 = 0x330008;
    break;
  case 5:
    lVar1 = 0x1100a6;
    break;
  case 6:
    lVar1 = 0xf00021;
    break;
  case 7:
    lVar1 = 0x5a0049;
    break;
  case 8:
    lVar1 = 0xfb0a09;
    break;
  case 9:
    lVar1 = 0x8800c6;
    break;
  default:
    lVar1 = 0xcc0020;
    break;
  case 0xb:
    lVar1 = 0x440328;
    break;
  case 0xc:
    lVar1 = 0x660046;
    break;
  case 0xd:
    lVar1 = 0xee0086;
    break;
  case 0xe:
    lVar1 = 0xff0062;
  }
  return lVar1;
}


