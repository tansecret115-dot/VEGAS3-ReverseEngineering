/* Module: vidcap30.exe
   Function: FUN_0042f720
   Address: 0042f720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042f720(void)

{
  int iVar1;
  
  iVar1 = FUN_00416e20();
  if (iVar1 == 0) {
    return 0x8004e00c;
  }
  iVar1 = FUN_0042e780();
  if (iVar1 != 0) {
    iVar1 = FUN_0042f6b0(iVar1);
    if (iVar1 != 0) {
      FUN_0042e600(iVar1,0);
    }
    FUN_00441a20();
    return 0;
  }
  return 0x8007000e;
}


