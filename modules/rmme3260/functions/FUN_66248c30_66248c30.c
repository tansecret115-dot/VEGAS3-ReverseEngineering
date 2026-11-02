/* Module: rmme3260.dll
   Function: FUN_66248c30
   Address: 66248c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66248c30(int param_1)

{
  HDC hdc;
  int iVar1;
  BITMAPINFO *pBVar2;
  uint *puVar3;
  BITMAPINFO local_430 [24];
  undefined4 local_8;
  
  local_8 = 0x80004005;
  FUN_66248b50(param_1);
  if (*(int *)(param_1 + 0x1198) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1194) == 0) {
    return 0x80004005;
  }
  pBVar2 = local_430;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pBVar2->bmiHeader).biSize = 0;
    pBVar2 = (BITMAPINFO *)&(pBVar2->bmiHeader).biWidth;
  }
  FUN_6624ae60((uint *)(param_1 + 0x48),(DWORD *)local_430);
  iVar1 = FUN_6624f7a0((int)local_430);
  *(int *)(param_1 + 0x2c) = iVar1;
  pBVar2 = local_430;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pBVar2->bmiHeader).biSize = 0;
    pBVar2 = (BITMAPINFO *)&(pBVar2->bmiHeader).biWidth;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0xac);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0xb0);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x18))((int *)(iVar1 + 0x18));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    iVar1 = GetSystemMetrics(0);
    *(int *)(param_1 + 0x3c) = iVar1;
    iVar1 = GetSystemMetrics(1);
  }
  *(int *)(param_1 + 0x40) = iVar1;
  if ((*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x34)) ||
     (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38))) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
  }
  FUN_6624fc50((uint *)local_430,0x428,*(int *)(param_1 + 0x2c),*(uint *)(param_1 + 0x3c),
               *(uint *)(param_1 + 0x40),(undefined1 *)0x0,0);
  puVar3 = (uint *)(param_1 + 0xd40);
  for (iVar1 = 0x111; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2c) == 9) {
    hdc = GetDC((HWND)0x0);
    GetSystemPaletteEntries(hdc,0,0x100,(LPPALETTEENTRY)local_430[0].bmiColors);
    ReleaseDC((HWND)0x0,hdc);
  }
  iVar1 = FUN_6624b3d0((uint *)(param_1 + 0x48),(uint *)(param_1 + 0xd40),local_430,
                       *(uint *)(param_1 + 0x11a8),0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1198) = 1;
    return 0;
  }
  return local_8;
}


