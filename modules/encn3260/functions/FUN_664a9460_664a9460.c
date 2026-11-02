/* Module: encn3260.dll
   Function: FUN_664a9460
   Address: 664a9460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664a9460(void *this,int param_1)

{
  int *piVar1;
  HWND hwnd;
  int iVar2;
  SCROLLINFO *pSVar3;
  SCROLLINFO local_28;
  UINT local_c [2];
  
  if (*(int *)((int)this + 0x1f0) == 0) {
    FUN_664a95e0(this,param_1);
  }
  iVar2 = *(int *)((int)this + 0x220);
  if (iVar2 != param_1) {
    if (iVar2 != 0) {
      *(int *)((int)this + 0x218) = (param_1 * *(int *)((int)this + 0x218)) / iVar2;
    }
    local_c[0] = 0;
    local_c[1] = 0;
    piVar1 = *(int **)((int)this + 0x68);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(piVar1,local_c);
    }
    hwnd = *(HWND *)((int)this + 0x1f0);
    pSVar3 = &local_28;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      pSVar3->cbSize = 0;
      pSVar3 = (SCROLLINFO *)&pSVar3->fMask;
    }
    local_28.cbSize = 0x1c;
    local_28.fMask = 3;
    local_28.nMax = param_1;
    local_28.nPage = local_c[0];
    SetScrollInfo(hwnd,2,&local_28,1);
    *(int *)((int)this + 0x220) = param_1;
  }
  return;
}


