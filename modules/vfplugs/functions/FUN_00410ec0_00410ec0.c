/* Module: vfplugs.dll
   Function: FUN_00410ec0
   Address: 00410ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00410ec0(int param_1)

{
  HDC pHVar1;
  HDC pHVar2;
  HBITMAP pHVar3;
  int iVar4;
  
  FUN_00411090(param_1);
  FUN_0043c7e0((undefined4 *)(param_1 + 0x150),0x1c,*(int *)(param_1 + 0xcc),*(int *)(param_1 + 200)
               ,(uint *)0x0,0,(int *)0x0);
  pHVar1 = GetDC((HWND)0x0);
  pHVar2 = CreateCompatibleDC(pHVar1);
  *(HDC *)(param_1 + 0x148) = pHVar2;
  ReleaseDC((HWND)0x0,pHVar1);
  pHVar3 = CreateDIBSection(*(HDC *)(param_1 + 0x148),(BITMAPINFO *)(param_1 + 0x150),0,
                            (void **)(param_1 + 0x17c),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x14c) = pHVar3;
  iVar4 = FUN_0043c970((undefined4 *)(param_1 + 0x180),0x1c,*(int *)(param_1 + 0xcc),
                       *(int *)(param_1 + 200),(uint *)0x0,0,0);
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  if (*(int *)(param_1 + 0x14c) == 0) {
    DeleteDC(*(HDC *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(void **)(param_1 + 0x17c) = (void *)0x0;
  }
  FUN_0043c7e0((undefined4 *)(param_1 + 0x18c),0x1c,*(int *)(param_1 + 0xcc),*(int *)(param_1 + 200)
               ,(uint *)0x0,0,(int *)0x0);
  pHVar1 = GetDC((HWND)0x0);
  pHVar2 = CreateCompatibleDC(pHVar1);
  *(HDC *)(param_1 + 0x184) = pHVar2;
  ReleaseDC((HWND)0x0,pHVar1);
  pHVar3 = CreateDIBSection(*(HDC *)(param_1 + 0x184),(BITMAPINFO *)(param_1 + 0x18c),0,
                            (void **)(param_1 + 0x1b8),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x188) = pHVar3;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  if (pHVar3 == (HBITMAP)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x184));
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(void **)(param_1 + 0x1b8) = (void *)0x0;
  }
  FUN_0043c7e0((undefined4 *)(param_1 + 0x1c8),0x1c,*(int *)(param_1 + 0xcc),*(int *)(param_1 + 200)
               ,(uint *)0x0,0,(int *)0x0);
  pHVar1 = GetDC((HWND)0x0);
  pHVar2 = CreateCompatibleDC(pHVar1);
  *(HDC *)(param_1 + 0x1c0) = pHVar2;
  ReleaseDC((HWND)0x0,pHVar1);
  pHVar3 = CreateDIBSection(*(HDC *)(param_1 + 0x1c0),(BITMAPINFO *)(param_1 + 0x1c8),0,
                            (void **)(param_1 + 500),(HANDLE)0x0,0);
  *(HBITMAP *)(param_1 + 0x1c4) = pHVar3;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (pHVar3 == (HBITMAP)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x1c0));
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(void **)(param_1 + 500) = (void *)0x0;
  }
  return 0;
}


