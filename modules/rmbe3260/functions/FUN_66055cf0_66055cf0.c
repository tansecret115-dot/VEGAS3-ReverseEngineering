/* Module: rmbe3260.dll
   Function: FUN_66055cf0
   Address: 66055cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66055cf0(int param_1)

{
  undefined4 uVar1;
  DWORD DVar2;
  
  uVar1 = FUN_66057870(*(uint **)(param_1 + 0x1e));
  DVar2 = GetTickCount();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(short *)(param_1 + 0x1c) = (short)DVar2;
  return;
}


