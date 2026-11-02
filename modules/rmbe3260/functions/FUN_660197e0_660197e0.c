/* Module: rmbe3260.dll
   Function: FUN_660197e0
   Address: 660197e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660197e0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *local_10 [3];
  
  iVar1 = 0;
  FUN_66016940(local_10,param_2,param_3);
  if (*(int *)(local_10[0] + -8) == 0) {
    iVar1 = -0x7ff8ffa9;
  }
  if (-1 < iVar1) {
    iVar1 = FUN_6605cad0(param_1 + 1,local_10[0],(int *)&param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)*param_1)(param_1,&DAT_66065b48,param_4);
      FUN_6605b770((int *)local_10);
      return iVar1;
    }
    iVar1 = -0x7ff8ffa9;
  }
  FUN_6605b770((int *)local_10);
  return iVar1;
}


