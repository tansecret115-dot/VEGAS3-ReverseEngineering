/* Module: encn3260.dll
   Function: FUN_66494b60
   Address: 66494b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66494b60(int param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(int *)(param_1 + 0x1f2) != 0) {
    *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
    *(undefined4 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 0x1ee) = 0;
    *(undefined4 *)(param_1 + 0x1a2) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1f2) = 1;
  DVar1 = GetTickCount();
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x1ee) = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  *(DWORD *)(param_1 + 0x1fe) = DVar1;
  return;
}


