/* Module: pngu3266.dll
   Function: SelectNewFgMixMode
   Address: 605fb2f2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::SelectNewFgMixMode(long) */

void __thiscall CPNDC::SelectNewFgMixMode(CPNDC *this,long param_1)

{
  int rop2;
  
                    /* 0xb2f2  1803  ?SelectNewFgMixMode@CPNDC@@UAEXJ@Z */
  switch(param_1) {
  case 0:
    rop2 = 1;
    break;
  case 1:
    rop2 = 0xd;
    break;
  case 2:
    rop2 = 3;
    break;
  case 3:
    rop2 = 9;
    break;
  case 4:
    rop2 = 5;
    break;
  case 5:
    rop2 = 0xc;
    break;
  case 6:
    rop2 = 0xf;
    break;
  case 7:
    rop2 = 0xe;
    break;
  default:
    rop2 = 0xb;
    break;
  case 9:
    rop2 = 6;
    break;
  case 10:
    rop2 = 4;
    break;
  case 0xb:
    rop2 = 8;
    break;
  case 0xc:
    rop2 = 2;
    break;
  case 0xd:
    rop2 = 10;
    break;
  case 0xe:
    rop2 = 0x10;
    break;
  case 0xf:
    rop2 = 7;
  }
  SetROP2(*(HDC *)(this + 0x1cf),rop2);
  return;
}


