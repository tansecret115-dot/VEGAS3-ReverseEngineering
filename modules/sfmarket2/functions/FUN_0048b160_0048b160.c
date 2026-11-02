/* Module: sfmarket2.dll
   Function: FUN_0048b160
   Address: 0048b160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048b160(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,param_2 << 5);
  iVar3 = 0;
  *piVar1 = 0;
  piVar1[1] = 0x1f;
  piVar1[2] = 0;
  piVar1[3] = 0x3f;
  piVar1[4] = 0;
  piVar1[5] = 0x1f;
  FUN_0048b1f0((int)param_1,piVar1);
  iVar2 = FUN_0048b640((int)param_1,(int)piVar1,1,param_2);
  if (0 < iVar2) {
    do {
      FUN_0048b7f0((int)param_1,piVar1,iVar3);
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 8;
    } while (iVar3 < iVar2);
  }
  *(int *)((int)param_1 + 0xa2) = iVar2;
  *(undefined4 *)(*param_1 + 0x14) = 0x5f;
  *(int *)(*param_1 + 0x18) = iVar2;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}


