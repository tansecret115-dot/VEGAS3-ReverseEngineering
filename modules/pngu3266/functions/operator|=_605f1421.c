/* Module: pngu3266.dll
   Function: operator|=
   Address: 605f1421
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxRect::operator|=(class CPNxRect const &) */

void __thiscall CPNxRect::operator|=(CPNxRect *this,CPNxRect *param_1)

{
  int iVar1;
  
                    /* 0x1421  618  ??_5CPNxRect@@QAEXABV0@@Z */
  iVar1 = *(int *)this;
  if (*(int *)param_1 <= *(int *)this) {
    iVar1 = *(int *)param_1;
  }
  *(int *)this = iVar1;
  iVar1 = *(int *)(this + 4);
  if (*(int *)(param_1 + 4) <= *(int *)(this + 4)) {
    iVar1 = *(int *)(param_1 + 4);
  }
  *(int *)(this + 4) = iVar1;
  iVar1 = *(int *)(this + 8);
  if (*(int *)(this + 8) <= *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  *(int *)(this + 8) = iVar1;
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) < *(int *)(this + 0xc)) {
    iVar1 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar1;
  return;
}


