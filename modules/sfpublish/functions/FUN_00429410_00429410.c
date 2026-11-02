/* Module: sfpublish.dll
   Function: FUN_00429410
   Address: 00429410
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00429410(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004292c0(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_00429300(param_1);
    return uVar2;
  }
  return 0x80070057;
}


