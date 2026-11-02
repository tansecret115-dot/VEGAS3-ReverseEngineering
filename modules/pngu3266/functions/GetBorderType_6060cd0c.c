/* Module: pngu3266.dll
   Function: GetBorderType
   Address: 6060cd0c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall XPNButton::GetBorderType(int) */

ulong __thiscall XPNButton::GetBorderType(XPNButton *this,int param_1)

{
  ulong uStack_4;
  
                    /* 0x1cd0c  1101  ?GetBorderType@XPNButton@@QAEKH@Z */
  uStack_4 = 0;
  if (*(int *)(this + 0xc4) == 0) {
    if ((param_1 == 0) && (*(int *)(this + 200) == 0)) {
      uStack_4 = 1;
    }
    else {
      uStack_4 = 2;
    }
  }
  else if ((*(int *)(this + 0xc0) != 0) || (*(int *)(this + 200) != 0)) {
    if ((param_1 == 0) && (*(int *)(this + 200) == 0)) {
      uStack_4 = 3;
    }
    else {
      uStack_4 = 4;
    }
  }
  return uStack_4;
}


