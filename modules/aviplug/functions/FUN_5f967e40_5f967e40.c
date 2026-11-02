/* Module: aviplug.dll
   Function: FUN_5f967e40
   Address: 5f967e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f967e40(void)

{
  uint uVar1;
  uint uVar2;
  
  _CIpow();
  uVar1 = ftol();
  uVar2 = (int)uVar1 >> 0x1f;
  uVar1 = (uVar2 ^ uVar1) + (uVar2 & 1);
  return ((int)((uVar1 & 1) + uVar1) >> 1 ^ uVar2) + (uVar2 & 1);
}


