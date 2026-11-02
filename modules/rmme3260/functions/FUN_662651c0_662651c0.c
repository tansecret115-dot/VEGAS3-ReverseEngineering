/* Module: rmme3260.dll
   Function: FUN_662651c0
   Address: 662651c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662651c0(int param_1)

{
  undefined4 uVar1;
  DWORD DVar2;
  
  uVar1 = FUN_662675c0(*(uint **)(param_1 + 0x1e));
  DVar2 = GetTickCount();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(short *)(param_1 + 0x1c) = (short)DVar2;
  return;
}


