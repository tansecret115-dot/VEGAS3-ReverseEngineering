/* Module: tokr3260.dll
   Function: FUN_680536c0
   Address: 680536c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_680536c0(double *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_2014 [2043];
  undefined4 uStackY_28;
  
  FUN_6805a6a0();
  iVar3 = param_2[3];
  iVar1 = param_2[2];
  iVar2 = param_2[4];
  if (0 < iVar1) {
    puVar7 = (undefined4 *)&stack0xfffffff0;
    puVar5 = local_2014;
    iVar6 = iVar1;
    do {
      *puVar7 = puVar5;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
      puVar8 = puVar5;
      for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      puVar5 = puVar5 + 0x400;
    } while (iVar6 != 0);
  }
  iVar2 = FUN_68053520((undefined4 *)&stack0xfffffff0,param_2,iVar1,iVar2 * param_3);
  if (iVar2 == -999999) {
    return -1;
  }
  iVar3 = FUN_68051cb0((int *)&stack0xfffffff0,iVar1,iVar3);
  if (iVar3 < 0) {
    return -1;
  }
  uStackY_28 = 0x6805376f;
  iVar3 = FUN_680544b0((undefined4 *)&stack0xfffffff0,param_1,0x400,2,iVar1);
  if (iVar3 != -999999) {
    return iVar2;
  }
  return -1;
}


