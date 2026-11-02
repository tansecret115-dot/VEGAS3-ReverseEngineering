/* Module: pngu3266.dll
   Function: SetToSystemColor
   Address: 605f40d7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNColor::SetToSystemColor(int) */

void __thiscall CPNColor::SetToSystemColor(CPNColor *this,int param_1)

{
  DWORD DVar1;
  int nIndex;
  
                    /* 0x40d7  2033  ?SetToSystemColor@CPNColor@@QAEXH@Z */
  switch(param_1) {
  case 2:
    nIndex = 2;
    break;
  case 3:
    nIndex = 3;
    break;
  case 4:
    nIndex = 4;
    break;
  default:
    nIndex = 5;
    break;
  case 6:
    nIndex = 6;
    break;
  case 7:
    nIndex = 7;
    break;
  case 8:
    nIndex = 8;
    break;
  case 9:
    nIndex = 9;
    break;
  case 0xd:
    nIndex = 0xd;
    break;
  case 0xe:
    nIndex = 0xe;
    break;
  case 0xf:
    nIndex = 0xf;
    break;
  case 0x10:
    nIndex = 0x10;
    break;
  case 0x11:
    nIndex = 0x11;
    break;
  case 0x12:
    nIndex = 0x12;
    break;
  case 0x13:
    nIndex = 0x13;
    break;
  case 0x14:
    nIndex = 0x14;
    break;
  case 0x17:
    nIndex = 0x17;
    break;
  case 0x18:
    nIndex = 0x18;
    break;
  case 0x19:
    nIndex = 0x1b;
    break;
  case 0x1a:
    nIndex = 0x1c;
  }
  DVar1 = GetSysColor(nIndex);
  *(DWORD *)(this + 8) = DVar1;
  this[0x1c] = this[8];
  *(undefined4 *)(this + 0xc) = 1;
  this[0x1e] = this[9];
  this[0x1d] = SUB41(DVar1 >> 0x10,0);
  return;
}


