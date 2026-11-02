/* Module: vegas30.exe
   Function: FUN_005a5f00
   Address: 005a5f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a5f00(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar2 = *param_1;
  iVar3 = param_1[2];
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_005a5270(param_1[3],param_1[4],iVar3);
    iVar4 = param_1[6] - iVar4 * *param_1;
  }
  FUN_005a5490(param_1);
  FUN_005a52a0(param_1,0,iVar2,iVar3,*param_2,param_2[1],iVar4,iVar1);
  return;
}


