/* Module: vegas30.exe
   Function: FUN_004280a0
   Address: 004280a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004280a0(undefined4 param_1)

{
  int iVar1;
  
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x80) = param_1;
    FUN_00426760(param_1,0,0,0,0,0);
    FUN_00424100(iVar1,0);
    return 0;
  }
  return 1;
}


