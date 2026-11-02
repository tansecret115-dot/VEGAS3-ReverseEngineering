/* Module: vegas30.exe
   Function: FUN_005b58e0
   Address: 005b58e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b58e0(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_ac [24];
  undefined4 local_94;
  
  *param_1 = 0;
  iVar1 = FUN_005b51d0();
  if (iVar1 == 0) {
    iVar1 = -0x7fffbffb;
  }
  else {
    iVar1 = FUN_005b51e0(0,local_ac);
    if (-1 < iVar1) {
      *param_1 = local_94;
      return iVar1;
    }
  }
  return iVar1;
}


