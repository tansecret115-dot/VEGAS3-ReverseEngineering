/* Module: vidcap30.exe
   Function: FUN_004489b0
   Address: 004489b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004489b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0044cae0(param_2);
  if (iVar1 == 4) {
    uVar2 = FUN_0045fcc0(*(undefined4 *)(param_1 + 8),0,&LAB_00460380,FUN_00460290,param_2);
    return uVar2;
  }
  if (iVar1 == 5) {
    uVar2 = FUN_00458c10(*(undefined4 *)(param_1 + 8),0,FUN_00459d80,&LAB_00459ab0,param_2);
    return uVar2;
  }
  return 0;
}


