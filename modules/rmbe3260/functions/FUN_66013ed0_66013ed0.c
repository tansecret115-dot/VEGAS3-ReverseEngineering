/* Module: rmbe3260.dll
   Function: FUN_66013ed0
   Address: 66013ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66013ed0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte *local_10 [3];
  
  FUN_660143d0(local_10,param_2,param_3);
  if (*(int *)(local_10[0] + -8) == 0) {
    *param_4 = 0;
    FUN_6605b770((int *)local_10);
    return 0x80070057;
  }
  iVar1 = FUN_6605cad0((void *)(param_1 + 0x24),local_10[0],(int *)&param_3);
  if (iVar1 != 0) {
    uVar2 = (**(code **)*param_3)(param_3,&DAT_660658e8,param_4);
    FUN_6605b770((int *)local_10);
    return uVar2;
  }
  FUN_6605b770((int *)local_10);
  return 0x80040252;
}


