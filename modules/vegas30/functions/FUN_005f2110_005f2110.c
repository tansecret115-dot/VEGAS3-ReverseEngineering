/* Module: vegas30.exe
   Function: FUN_005f2110
   Address: 005f2110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_005f2110(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_005f13f0(2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) != 0)) {
    if (*(int *)(*(int *)(iVar1 + 0x2c) + 4) == 0) {
      return 0;
    }
    uVar2 = ftol();
    return uVar2;
  }
  return 0;
}


