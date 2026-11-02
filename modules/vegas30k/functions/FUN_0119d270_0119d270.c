/* Module: vegas30k.dll
   Function: FUN_0119d270
   Address: 0119d270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0119d270(int param_1)

{
  DWORD DVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x618) + -1;
  *(int *)(param_1 + 0x618) = iVar2;
  if (((*(int *)(param_1 + 0x24) == 0) && ((*(uint *)(param_1 + 0x20) & 0x200) == 0)) &&
     (iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x824) = 0;
    *(undefined4 *)(param_1 + 0x8b0) = 1;
    FUN_011af240();
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x814),200);
    while (DVar1 == 0x102) {
      *(undefined4 *)(param_1 + 0x824) = 0;
      DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x814),200);
    }
  }
  return 0;
}


