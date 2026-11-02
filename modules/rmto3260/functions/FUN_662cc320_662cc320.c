/* Module: rmto3260.dll
   Function: FUN_662cc320
   Address: 662cc320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662cc320(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_662d0ba0(param_2);
  iVar2 = FUN_662f55e0(uVar1,param_3,param_4 & 0xffff);
  if (iVar2 == 0) {
    uVar3 = 0x80040304;
  }
  return uVar3;
}


