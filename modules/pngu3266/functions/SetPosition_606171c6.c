/* Module: pngu3266.dll
   Function: SetPosition
   Address: 606171c6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNScrollHelper::SetPosition(long) */

void __thiscall CPNScrollHelper::SetPosition(CPNScrollHelper *this,long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  
                    /* 0x271c6  1966  ?SetPosition@CPNScrollHelper@@QAEXJ@Z */
  iVar1 = *(int *)(this + 0xc);
  bVar3 = true;
  lVar4 = iVar1;
  if ((iVar1 < param_1) && (lVar4 = param_1, *(int *)(this + 0x10) <= param_1)) {
    lVar4 = *(int *)(this + 0x10);
  }
  iVar2 = *(int *)(this + 0x14);
  if ((iVar2 == lVar4) ||
     ((((iVar2 != iVar1 && (iVar2 != *(int *)(this + 0x10))) && (lVar4 != iVar1)) &&
      (lVar4 != *(int *)(this + 0x10))))) {
    bVar3 = false;
  }
  *(long *)(this + 0x14) = lVar4;
  if (bVar3) {
    (**(code **)(**(int **)(this + 8) + 0x78))(0,0);
  }
  return;
}


