/* Module: 50comupd.exe
   Function: FUN_01006750
   Address: 01006750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006750(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)param_1[4])(param_1[0x22],param_1 + 0x1d,0x10);
  if ((iVar1 == 0x10) && (iVar1 = FUN_010068c8((char *)(param_1 + 0x2d),0x100,param_1), iVar1 != 0))
  {
    return 1;
  }
  FUN_01006dcb((undefined4 *)*param_1,4,0);
  return 0;
}


