/* Module: vidcap30.exe
   Function: FUN_0043a930
   Address: 0043a930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043a930(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  uVar1 = DAT_005bb838;
  iVar2 = FUN_0042c410(param_1 + 0xa48,param_2);
  if (-1 < iVar2) {
    FUN_00428c90(param_1 + 0xa48,local_8);
    FUN_0042efe0(uVar1,3,local_8);
    FUN_0042efe0(uVar1,0,local_8);
    FUN_0042efe0(uVar1,2,local_8);
    FUN_0043c6a0(param_1);
  }
  return iVar2;
}


