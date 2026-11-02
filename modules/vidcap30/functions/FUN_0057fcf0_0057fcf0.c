/* Module: vidcap30.exe
   Function: FUN_0057fcf0
   Address: 0057fcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057fcf0(HANDLE param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  if (DVar1 == 0) {
    return 0;
  }
  if (DVar1 != 0xffffffff) {
    return 0x8000ffff;
  }
  uVar2 = FUN_005835c0();
  return uVar2;
}


