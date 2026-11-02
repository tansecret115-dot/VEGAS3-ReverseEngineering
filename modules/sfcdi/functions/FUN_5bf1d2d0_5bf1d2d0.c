/* Module: sfcdi.dll
   Function: FUN_5bf1d2d0
   Address: 5bf1d2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1d2d0(HWND param_1,int param_2)

{
  ULONG_PTR *pUVar1;
  HWND pHVar2;
  HWND pHVar3;
  int *piVar4;
  uint uVar5;
  
  pUVar1 = *(ULONG_PTR **)(*(int *)(param_2 + 0xc) + 0x40);
  if (*(int *)(param_2 + 8) != -0x25d) {
    if (*(int *)(param_2 + 8) == -0x259) {
      uVar5 = 0x8001;
      piVar4 = (int *)0x0;
      pHVar3 = (HWND)0x0;
      pHVar2 = GetParent(param_1);
      FUN_5bf2fd50(pHVar2,pHVar3,piVar4,uVar5);
    }
    return 0;
  }
  FUN_5bf35f80(0,param_1,*pUVar1,1,(uchar *)pUVar1[0x43]);
  return 1;
}


