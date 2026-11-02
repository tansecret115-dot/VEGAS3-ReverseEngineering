/* Module: vegas30.exe
   Function: FUN_004690d0
   Address: 004690d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004690d0(int param_1)

{
  int *piVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  
  if ((DAT_0064761c & 0x800) != 0) {
    return 0;
  }
  pHVar3 = GetClipboardOwner();
  iVar2 = param_1;
  if (pHVar3 == *(HWND *)(param_1 + 4)) {
    piVar1 = *(int **)(param_1 + 0xcd4);
    if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
      FUN_004694a0(piVar1,0,0,0,0,&param_1,0);
      if (*(int *)(iVar2 + 0xadc) == 1) {
        return (uint)(param_1 == 0x32);
      }
      return (uint)(param_1 == 0x31);
    }
    return 0;
  }
  uVar4 = IsClipboardFormatAvailable(DAT_0064b4ac);
  return uVar4;
}


