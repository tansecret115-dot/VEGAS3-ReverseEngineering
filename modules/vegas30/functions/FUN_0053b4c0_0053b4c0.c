/* Module: vegas30.exe
   Function: FUN_0053b4c0
   Address: 0053b4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053b4c0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005382e0(1);
  iVar2 = (param_2 - *(int *)(param_1 + 0xac4)) / iVar1 + *(int *)(param_1 + 0xba8);
  iVar1 = FUN_0053add0(param_1 + 0xe80);
  if (((-1 < iVar2) && (iVar2 < iVar1)) && (param_3 != (int *)0x0)) {
    *param_3 = iVar2;
    return 1;
  }
  return 0;
}


