/* Module: vegas30k.dll
   Function: FUN_011c28f0
   Address: 011c28f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c28f0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar1 = (**(code **)(*param_1 + 0xc))(param_1,1,&param_2,0);
  }
  return uVar1;
}


