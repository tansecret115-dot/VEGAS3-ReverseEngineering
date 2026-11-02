/* Module: sfppack3.dll
   Function: FUN_5cc538c0
   Address: 5cc538c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc538c0(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 auStack_8 [2];
  
  if ((param_2 == 0) && (param_3 == 0)) {
    return 0;
  }
  piVar3 = (int *)0x0;
  if (param_2 != 0) {
    if (-1 < param_2) goto LAB_5cc538ef;
    piVar3 = (int *)-param_2;
  }
  param_2 = 0;
LAB_5cc538ef:
  iVar4 = 0;
  if ((param_3 == 0) || (iVar4 = param_3, -1 < param_3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = -param_3;
    iVar4 = 0;
  }
  uVar1 = FUN_5cc53920(param_1,param_2,iVar2,piVar3,iVar4,0,0,auStack_8);
  return uVar1;
}


