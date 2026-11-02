/* Module: vegas30k.dll
   Function: FUN_011940e0
   Address: 011940e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011940e0(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (((uVar1 & 0x100) != 0) && ((uVar1 & 0x200) != 0)) {
    *(uint *)(param_1 + 0x20) = uVar1 & 0xffff3dff;
    if (*(int *)(param_1 + 0x6a4) != 0) {
      FUN_01194d50(0);
    }
    if (*(int *)(param_1 + 0x618) == 0) {
      *(undefined4 *)(param_1 + 0x824) = 0;
      *(undefined4 *)(param_1 + 0x8b0) = 1;
      FUN_011af240();
      DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x814),200);
      while (DVar2 == 0x102) {
        *(undefined4 *)(param_1 + 0x824) = 0;
        DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x814),200);
      }
    }
    return 0;
  }
  return 0x8000ffff;
}


