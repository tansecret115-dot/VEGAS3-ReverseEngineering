/* Module: pngu3266.dll
   Function: GetUpdateRect
   Address: 605fcc60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPaintDC::GetUpdateRect(class CPNxRect &) */

void __thiscall CPNPaintDC::GetUpdateRect(CPNPaintDC *this,CPNxRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0xcc60  1406  ?GetUpdateRect@CPNPaintDC@@UAEXAAVCPNxRect@@@Z */
  uVar1 = *(undefined4 *)(this + 499);
  uVar2 = *(undefined4 *)(this + 0x1ef);
  uVar3 = *(undefined4 *)(this + 0x1e7);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x1eb);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)param_1 = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


