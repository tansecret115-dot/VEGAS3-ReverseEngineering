/* Module: vegas30.exe
   Function: FUN_004a9c80
   Address: 004a9c80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004a9c80(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_004a9cc0(param_1);
  uVar2 = FUN_004a9cc0(param_2);
  if (uVar1 < uVar2) {
    return 0xffffffff;
  }
  uVar1 = FUN_004a9cc0(param_1);
  uVar2 = FUN_004a9cc0(param_2);
  return (uint)(uVar2 < uVar1);
}


