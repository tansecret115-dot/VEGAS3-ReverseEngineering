/* Module: rmme3260.dll
   Function: FUN_6623f290
   Address: 6623f290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6623f290(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  HMODULE hInstance;
  HWND pHVar4;
  SCROLLINFO *pSVar5;
  LPVOID lpParam;
  SCROLLINFO local_28;
  undefined4 local_c;
  UINT local_8;
  
  puVar2 = (undefined4 *)(**(code **)(*(int *)((int)this + 0xc) + 0x10))((int)this + 0xc);
  pHVar4 = (HWND)*puVar2;
  iVar3 = GetSystemMetrics(2);
  if (*(int *)((int)this + 0xac) < iVar3) {
    iVar3 = *(int *)((int)this + 0xac) / 2;
  }
  lpParam = (LPVOID)0x0;
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  pHVar4 = CreateWindowExA(0,s_SCROLLBAR_66270144,(LPCSTR)0x0,0x40000001,
                           (*(int *)((int)this + 0xd4) - iVar3) + *(int *)((int)this + 0xac),
                           *(int *)((int)this + 0xd8),iVar3,*(int *)((int)this + 0xb0),pHVar4,
                           (HMENU)0x0,hInstance,lpParam);
  *(HWND *)((int)this + 500) = pHVar4;
  FUN_66250fc0(&DAT_6627cfa0,(uint)pHVar4,(int)this);
  local_8 = 0;
  pSVar5 = &local_28;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar5->cbSize = 0;
    pSVar5 = (SCROLLINFO *)&pSVar5->fMask;
  }
  piVar1 = *(int **)((int)this + 0x68);
  local_28.cbSize = 0x1c;
  local_28.fMask = 3;
  local_c = 0;
  local_28.nPage = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,&local_c);
    local_28.nPage = local_8;
  }
  local_28.nMax = param_1;
  SetScrollInfo(*(HWND *)((int)this + 500),2,&local_28,1);
  *(int *)((int)this + 0x224) = param_1;
  FUN_6623f420(this);
  return *(undefined4 *)((int)this + 500);
}


