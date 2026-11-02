/* Module: pngu3266.dll
   Function: Scroll
   Address: 606172e1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNScrollHelper::Scroll(void) */

void __thiscall CPNScrollHelper::Scroll(CPNScrollHelper *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  CPNEvent local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0x272e1  1798  ?Scroll@CPNScrollHelper@@QAEXXZ */
  bVar2 = false;
  CPNEvent::CPNEvent(local_30,0,0,(CPNRouter *)0x0,0,0,0,0);
  local_20 = *(int **)(this + 8);
  local_28 = 0x80000000;
  local_18 = (**(code **)(*local_20 + 0x124))();
  local_10 = (**(code **)(**(int **)(this + 8) + 0x124))();
  local_24 = 0x20;
  if (*(int *)(this + 0x20) == 0) {
    if (*(int *)(this + 0x24) != 0) {
      iVar1 = *(int *)(this + 0x10);
      if (*(int *)(this + 0x14) < iVar1) {
        iVar3 = *(int *)(this + 0x14) + *(int *)(this + 0x18);
        if (iVar3 < iVar1) {
          *(int *)(this + 0x14) = iVar3;
        }
        else {
          *(int *)(this + 0x14) = iVar1;
        }
        *(undefined4 *)(this + 0x34) = 0x20;
        bVar2 = true;
      }
    }
  }
  else {
    iVar1 = *(int *)(this + 0xc);
    if (iVar1 < *(int *)(this + 0x14)) {
      iVar3 = *(int *)(this + 0x14) - *(int *)(this + 0x18);
      if (iVar1 < iVar3) {
        *(int *)(this + 0x14) = iVar3;
      }
      else {
        *(int *)(this + 0x14) = iVar1;
      }
      *(undefined4 *)(this + 0x34) = 0x40;
      bVar2 = true;
    }
  }
  local_14 = *(undefined4 *)(this + 0x14);
  if (bVar2) {
    (**(code **)(**(int **)(this + 8) + 4))(local_30);
  }
  CPNEvent::~CPNEvent(local_30);
  return;
}


