/* Module: vfplugs.dll
   Function: FUN_0047c600
   Address: 0047c600
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_0047c600(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  uVar1 = *(uint *)(param_1 + 0x28);
  if (DVar2 < uVar1) {
    return ((DVar2 - uVar1) - 1) / 60000;
  }
  return (DVar2 - uVar1) / 60000;
}


