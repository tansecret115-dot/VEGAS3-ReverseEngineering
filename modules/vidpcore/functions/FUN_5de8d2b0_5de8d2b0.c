/* Module: vidpcore.dll
   Function: FUN_5de8d2b0
   Address: 5de8d2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de8d2b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)*param_4;
  if ((*(byte *)(param_2 + 0x33) & 4) != 0) {
    FUN_5ded4b10((int *)*param_4,iVar1,param_1,1);
    return iVar1 + 1;
  }
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


