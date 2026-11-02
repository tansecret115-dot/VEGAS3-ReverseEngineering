/* Module: pngu3266.dll
   Function: EndScroll
   Address: 6061727d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNScrollHelper::EndScroll(void) */

void __thiscall CPNScrollHelper::EndScroll(CPNScrollHelper *this)

{
  CPNEvent local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0x2727d  1042  ?EndScroll@CPNScrollHelper@@QAEXXZ */
  CPNEvent::CPNEvent(local_30,0,0,(CPNRouter *)0x0,0,0,0,0);
  local_20 = *(int **)(this + 8);
  local_28 = 0x80000000;
  local_18 = (**(code **)(*local_20 + 0x124))();
  local_10 = (**(code **)(**(int **)(this + 8) + 0x124))();
  local_14 = *(undefined4 *)(this + 0x14);
  local_24 = 4;
  (**(code **)(**(int **)(this + 8) + 4))(local_30);
  CPNEvent::~CPNEvent(local_30);
  return;
}


