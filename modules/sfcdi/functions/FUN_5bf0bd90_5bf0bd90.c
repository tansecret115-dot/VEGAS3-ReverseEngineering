/* Module: sfcdi.dll
   Function: FUN_5bf0bd90
   Address: 5bf0bd90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0bd90(byte *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  HGLOBAL hMem;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  else {
    if ((*param_1 & 2) == 0) {
      hMem = GlobalAlloc(0x42,iVar1 + 100);
      pvVar2 = GlobalLock(hMem);
      *(LPVOID *)(param_1 + 0x18) = pvVar2;
      if (pvVar2 == (LPVOID)0x0) {
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
      }
      else {
        *(int *)(param_1 + 0x14) = (int)pvVar2 + 100;
      }
    }
    else {
      pvVar2 = FUN_5bf0bd10(iVar1,*(uint *)(param_1 + 0x24),(undefined4 *)(param_1 + 0x18));
      *(LPVOID *)(param_1 + 0x14) = pvVar2;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0x8007000e;
    }
  }
  return 0;
}


