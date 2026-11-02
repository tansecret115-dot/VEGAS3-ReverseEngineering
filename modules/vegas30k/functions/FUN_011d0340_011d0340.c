/* Module: vegas30k.dll
   Function: FUN_011d0340
   Address: 011d0340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d0340(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = FUN_011cf420(1);
  *param_2 = (*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x224)) + iVar1;
  param_2[1] = 0;
  uVar2 = __allmul(*param_2,param_2[1],10000,0);
  *(undefined8 *)param_2 = uVar2;
  return 0;
}


