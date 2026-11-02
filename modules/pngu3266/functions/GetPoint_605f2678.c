/* Module: pngu3266.dll
   Function: GetPoint
   Address: 605f2678
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNEvent::GetPoint(class CPNxPoint &)const  */

void __thiscall CPNEvent::GetPoint(CPNEvent *this,CPNxPoint *param_1)

{
  undefined4 uVar1;
  
                    /* 0x2678  1298  ?GetPoint@CPNEvent@@QBEXAAVCPNxPoint@@@Z */
  uVar1 = *(undefined4 *)(this + 0x20);
  *(int *)param_1 = (int)*(short *)(this + 0x20);
  *(int *)(param_1 + 4) = (int)(short)((uint)uVar1 >> 0x10);
  return;
}


