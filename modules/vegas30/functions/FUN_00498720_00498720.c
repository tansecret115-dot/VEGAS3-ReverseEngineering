/* Module: vegas30.exe
   Function: FUN_00498720
   Address: 00498720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00498720(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_3;
  uVar4 = param_2;
  piVar3 = param_1;
  iVar6 = 0;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)*param_1;
  }
  if (0 < (int)param_1) {
    do {
      iVar1 = *(int *)(piVar3[2] + iVar6 * 4);
      if (((*(uint *)(iVar1 + 0x10) & 8) == 0) && ((*(uint *)(iVar1 + 0x10) & 0x100000) == 0)) {
        uVar2 = *(uint *)(*(int *)(iVar1 + 0x218) + 0x80);
        param_2 = uVar2 + uVar4;
        param_3 = *(int *)(*(int *)(iVar1 + 0x218) + 0x84) + iVar5 + (uint)CARRY4(uVar2,uVar4);
        FUN_005c7760(iVar1,&param_2,0,3,0);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_1);
  }
  return;
}


