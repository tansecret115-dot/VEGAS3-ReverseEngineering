/* Module: sfmarket2.dll
   Function: FUN_0043a0f0
   Address: 0043a0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0043a0f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00439fa0(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_00439fe0(param_1);
    return uVar2;
  }
  return 0x80070057;
}


