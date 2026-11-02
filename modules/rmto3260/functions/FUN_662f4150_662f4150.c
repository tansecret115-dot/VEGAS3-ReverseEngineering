/* Module: rmto3260.dll
   Function: FUN_662f4150
   Address: 662f4150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f4150(int param_1)

{
  undefined4 uVar1;
  DWORD DVar2;
  
  uVar1 = FUN_662f47e0(*(uint **)(param_1 + 0x1e));
  DVar2 = GetTickCount();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(short *)(param_1 + 0x1c) = (short)DVar2;
  return;
}


