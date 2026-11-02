/* Module: vidcap30.exe
   Function: FUN_0057f4a0
   Address: 0057f4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0057f4a0(undefined4 param_1,uint param_2,HANDLE param_3)

{
  BOOL BVar1;
  uint uVar2;
  
  if ((param_2 & 0xfffffffe) != 0) {
    return 0x80070057;
  }
  if (((param_2 & 1) != 0) && (param_3 != (HANDLE)0x0)) {
    BVar1 = ResetEvent(param_3);
    if (BVar1 == 0) {
      uVar2 = FUN_005835c0();
      return uVar2;
    }
  }
  if ((param_2 == 0) && (param_3 != (HANDLE)0x0)) {
    return 0x80070057;
  }
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_0057f720();
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  if (param_3 == (HANDLE)0x0) {
    uVar2 = FUN_0057f560();
    return uVar2 & (-1 < (int)uVar2) - 1;
  }
  uVar2 = FUN_0057f5c0(param_3);
  return uVar2 & (-1 < (int)uVar2) - 1;
}


