/* Module: hhupd.exe
   Function: FUN_010069b0
   Address: 010069b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_010069b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)param_1[4])(param_1[0x22],param_1 + 0x1d,0x10);
  if (iVar1 == 0x10) {
    iVar1 = FUN_01006b70((char *)(param_1 + 0x2d),0x100,param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_01007370((undefined4 *)*param_1,4,0);
  return 0;
}


