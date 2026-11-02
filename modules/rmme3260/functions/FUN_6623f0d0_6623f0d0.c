/* Module: rmme3260.dll
   Function: FUN_6623f0d0
   Address: 6623f0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6623f0d0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  SCROLLINFO *pSVar3;
  SCROLLINFO local_28;
  undefined4 local_c;
  UINT local_8;
  
  if (*(int *)((int)this + 500) == 0) {
    FUN_6623f290(this,param_1);
  }
  iVar2 = *(int *)((int)this + 0x224);
  if (iVar2 != param_1) {
    if (iVar2 != 0) {
      *(int *)((int)this + 0x21c) = (param_1 * *(int *)((int)this + 0x21c)) / iVar2;
    }
    piVar1 = *(int **)((int)this + 0x68);
    local_8 = 0;
    local_c = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(piVar1,&local_c);
    }
    local_28.nPage = local_8;
    pSVar3 = &local_28;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      pSVar3->cbSize = 0;
      pSVar3 = (SCROLLINFO *)&pSVar3->fMask;
    }
    local_28.cbSize = 0x1c;
    local_28.fMask = 3;
    local_28.nMax = param_1;
    SetScrollInfo(*(HWND *)((int)this + 500),2,&local_28,1);
    *(int *)((int)this + 0x224) = param_1;
  }
  return;
}


