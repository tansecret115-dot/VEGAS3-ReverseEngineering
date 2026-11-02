/* Module: tokr3260.dll
   Function: FUN_68052c60
   Address: 68052c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68052c60(int param_1,double *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_2014 [2043];
  undefined4 uStackY_28;
  
  FUN_6805a6a0();
  uVar1 = param_3[3];
  uVar2 = param_3[2];
  uVar3 = param_3[4];
  if (0 < (int)uVar2) {
    puVar8 = (undefined4 *)&stack0xfffffff0;
    puVar6 = local_2014;
    uVar7 = uVar2;
    do {
      *puVar8 = puVar6;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
      puVar9 = puVar6;
      for (iVar5 = 0x400; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      puVar6 = puVar6 + 0x400;
    } while (uVar7 != 0);
  }
  uStackY_28 = 0x68052cc8;
  iVar5 = FUN_68051b30(param_1,(undefined4 *)&stack0xfffffff0,param_3,uVar2,uVar3 * param_4);
  if (iVar5 == -999999) {
    return -1;
  }
  iVar4 = FUN_68051cb0((int *)&stack0xfffffff0,uVar2,uVar1);
  if (iVar4 < 0) {
    return -1;
  }
  uStackY_28 = 0x68052d13;
  iVar4 = FUN_680544b0((undefined4 *)&stack0xfffffff0,param_2,0x400,2,uVar2);
  if (iVar4 != -999999) {
    return iVar5;
  }
  return -1;
}


