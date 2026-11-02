/* Module: wavplug.dll
   Function: FUN_5f3883d0
   Address: 5f3883d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3883d0(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_4 == 2) {
    iVar1 = FUN_5f388520(param_1);
    if (((-1 < iVar1) && (param_2 != (undefined4 *)0x0)) && (7 < param_3)) {
      iVar1 = 0;
      *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 8);
      param_2[1] = 0;
    }
  }
  return iVar1;
}


