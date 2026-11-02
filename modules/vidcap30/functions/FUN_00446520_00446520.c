/* Module: vidcap30.exe
   Function: FUN_00446520
   Address: 00446520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00446520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00448740(*(undefined4 *)(param_1 + 0x88),1);
    if (iVar1 != 0) {
      uVar2 = FUN_0044c6a0(iVar1);
      return uVar2;
    }
  }
  return 0;
}


