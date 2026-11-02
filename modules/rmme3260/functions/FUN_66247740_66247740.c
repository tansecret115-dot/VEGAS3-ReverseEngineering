/* Module: rmme3260.dll
   Function: FUN_66247740
   Address: 66247740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66247740(HDC param_1)

{
  HWND hWnd;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HDC hDC;
  HDC local_8;
  
  if (((*(int *)((int)&param_1[0x127].unused + 2) != 0) ||
      (*(int *)((int)&param_1[0x126].unused + 2) != 0)) &&
     (*(int *)((int)&param_1[0x128].unused + 2) == 1)) {
    local_8 = param_1;
    iVar1 = FUN_6623f970(*(int *)((int)&param_1[0xe].unused + 2));
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0xfc) == 0)) {
      iVar1 = FUN_662406e0(*(int *)((int)&param_1[0xe].unused + 2));
      if (*(int *)(iVar1 + 0x1198) != 0) {
        FUN_6624b840((uint *)(iVar1 + 0x48),(uint *)(iVar1 + 0xd40),(uint *)&local_8);
        FUN_66247630(param_1,local_8);
        FUN_6624b8c0((uint *)(iVar1 + 0x48),(uint *)(iVar1 + 0xd40),(uint)local_8);
      }
      piVar2 = (int *)(*(int *)((int)&param_1[0xe].unused + 2) + 8);
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))(piVar2);
      if ((puVar3 != (undefined4 *)0x0) && (hWnd = (HWND)*puVar3, hWnd != (HWND)0x0)) {
        hDC = GetDC(hWnd);
        FUN_66247630(param_1,hDC);
        ReleaseDC(hWnd,hDC);
      }
    }
  }
  return;
}


