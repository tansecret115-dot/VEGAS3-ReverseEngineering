/* Module: vidcap30.exe
   Function: FUN_0052d760
   Address: 0052d760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052d760(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0052d610(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_0052d650(param_1);
    return uVar2;
  }
  return 0x80070057;
}


