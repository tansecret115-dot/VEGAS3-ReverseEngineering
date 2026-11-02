/* Module: tokr3260.dll
   Function: FUN_68053790
   Address: 68053790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_68053790(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar1 = param_1 - (int)param_2;
  do {
    iVar2 = FUN_68053920(iVar4);
    *param_2 = iVar2;
    *(int *)(iVar1 + (int)param_2) = iVar5;
    iVar5 = iVar5 + *param_2;
    iVar4 = iVar4 + 1;
    param_2 = param_2 + 1;
  } while (iVar4 < 0x20);
  iVar1 = 0;
  *(int *)(param_1 + 0x80) = iVar5;
  do {
    uVar3 = FUN_68053980(iVar1);
    *param_3 = uVar3;
    iVar1 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (iVar1 < 8);
  iVar1 = 1;
  *param_4 = 0;
  do {
    param_4 = param_4 + 1;
    uVar3 = FUN_680539f0(iVar1);
    *param_4 = uVar3;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  iVar1 = 0;
  do {
    fVar6 = FUN_68053830(iVar1,0);
    *param_5 = (float)fVar6;
    iVar1 = iVar1 + 1;
    param_5 = param_5 + 1;
  } while (iVar1 < 0x40);
  return;
}


