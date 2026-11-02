/* Module: pngu3266.dll
   Function: OnPaint
   Address: 6061542d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNImageControl::OnPaint(class CPNDC *) */

void __thiscall CPNImageControl::OnPaint(CPNImageControl *this,CPNDC *param_1)

{
  bool bVar1;
  CPNMemoryDC *this_00;
  CPNDC *pCVar2;
  CPNBrush local_5c [56];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  CPNDC *local_8;
  
                    /* 0x2542d  1664  ?OnPaint@CPNImageControl@@QAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(&local_24);
  this_00 = operator_new(499);
  if (this_00 == (CPNMemoryDC *)0x0) {
    local_8 = (CPNDC *)0x0;
  }
  else {
    local_8 = (CPNDC *)CPNMemoryDC::CPNMemoryDC(this_00,param_1,(CPNxRect *)&local_24);
  }
  pCVar2 = local_8;
  if (local_8 == (CPNDC *)0x0) {
    pCVar2 = param_1;
  }
  CPNBrush::CPNBrush(local_5c,(CPNColor *)(this + 0xe3),8);
  (**(code **)(*(int *)pCVar2 + 0x48))(&local_24,local_5c);
  CPNBrush::~CPNBrush(local_5c);
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    local_14 = 0;
    local_10 = 0;
    (**(code **)(**(int **)(this + 0xc0) + 0x40))(&local_14);
    bVar1 = true;
    if ((((byte)this[0xb8] & 2) != 0) &&
       ((local_1c - local_24 < local_14 || (local_18 - local_20 < local_10)))) {
      bVar1 = false;
    }
    if (bVar1) {
      if (*(short *)(*(int *)(this + 0xc0) + 0x28) == 1) {
        (**(code **)(*(int *)pCVar2 + 0x30))(*(int *)(this + 0xc0),0,0);
      }
      else {
        local_c = local_18 - local_20;
        if (((byte)this[0xb8] & 1) == 0) {
          (**(code **)(*(int *)pCVar2 + 0x54))
                    (*(undefined4 *)(this + 0xc0),((local_1c - local_14) - local_24) / 2,
                     (local_c - local_10) / 2,local_14,local_10,0,0);
        }
        else {
          (**(code **)(*(int *)pCVar2 + 0x5c))
                    (*(undefined4 *)(this + 0xc0),0,0,local_1c - local_24,local_c,0,0,local_14,
                     local_10,10);
        }
      }
    }
  }
  pCVar2 = local_8;
  if (local_8 != (CPNDC *)0x0) {
    XPNWindow::PaintToScreen
              ((XPNWindow *)this,param_1,local_8,(CPNxRect *)&local_24,(CPNColor *)(this + 0xe3));
    (*(code *)**(undefined4 **)pCVar2)(1);
  }
  return;
}


