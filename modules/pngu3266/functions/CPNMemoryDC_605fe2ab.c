/* Module: pngu3266.dll
   Function: CPNMemoryDC
   Address: 605fe2ab
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMemoryDC::CPNMemoryDC(class CPNDC *,class CPNxRect &) */

CPNMemoryDC * __thiscall
CPNMemoryDC::CPNMemoryDC(CPNMemoryDC *this,CPNDC *param_1,CPNxRect *param_2)

{
  int iVar1;
  int iVar2;
  HDC pHVar3;
  CPNScreenDC *this_00;
  HBITMAP h;
  HGDIOBJ pvVar4;
  undefined4 *puVar5;
  
                    /* 0xe2ab  92  ??0CPNMemoryDC@@QAE@PAVCPNDC@@AAVCPNxRect@@@Z */
  CPNDC::CPNDC((CPNDC *)this);
  puVar5 = (undefined4 *)0x0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1cb) = 1;
  if (param_1 == (CPNDC *)0x0) {
    this_00 = operator_new(0x1df);
    if (this_00 == (CPNScreenDC *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)CPNScreenDC::CPNScreenDC(this_00);
    }
    pHVar3 = CreateCompatibleDC(*(HDC *)((int)puVar5 + 0x1cf));
    *(undefined4 *)(this + 0x1e3) = 0;
    *(HDC *)(this + 0x1cf) = pHVar3;
    pHVar3 = *(HDC *)((int)puVar5 + 0x1cf);
  }
  else {
    pHVar3 = CreateCompatibleDC(*(HDC *)(param_1 + 0x1cf));
    *(HDC *)(this + 0x1cf) = pHVar3;
    pHVar3 = *(HDC *)(param_1 + 0x1cf);
    *(HDC *)(this + 0x1e3) = pHVar3;
  }
  *(int *)(this + 0x1eb) = *(int *)(param_2 + 8) - *(int *)param_2;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 4);
  *(int *)(this + 0x1ef) = iVar1 - iVar2;
  h = CreateCompatibleBitmap(pHVar3,*(int *)(this + 0x1eb),iVar1 - iVar2);
  *(HBITMAP *)(this + 0x1df) = h;
  pvVar4 = SelectObject(*(HDC *)(this + 0x1cf),h);
  *(HGDIOBJ *)(this + 0x1e7) = pvVar4;
  XPNDC::SetupDefaultTools((XPNDC *)this);
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1);
  }
  return this;
}


