/* Module: mp3rw.dll
   Function: FUN_004254d0
   Address: 004254d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004254d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00425380(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_004253c0(param_1);
    return uVar2;
  }
  return 0x80070057;
}


