/* Module: vegas30.exe
   Function: FUN_00587a40
   Address: 00587a40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00587a40(int *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = param_1 + 3;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = *param_2;
    param_2 = param_2 + 1;
    piVar1 = piVar1 + 1;
  }
  param_1[1] = (int)param_3;
  if (param_3 == (undefined4 *)0x0) {
    (**(code **)(*param_1 + 8))();
    return -0x7ff8ffa9;
  }
  param_1[2] = param_4;
  param_2 = (int *)0x0;
  uVar5 = param_1[4];
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)param_3 = 0;
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  iVar3 = param_1[1];
  param_3 = (undefined4 *)0x0;
  if (param_1[3] != 0) {
    do {
      piVar1 = (int *)FUN_005880e0(param_3);
      if (piVar1 != (int *)0x0) {
        iVar2 = FUN_005880c0(piVar1);
        param_2 = (int *)(**(code **)(*piVar1 + 0xc))(iVar3,iVar2,&param_4);
        iVar3 = iVar3 + iVar2;
        FUN_00588100(piVar1);
      }
      param_3 = (undefined4 *)((int)param_3 + 1);
    } while (param_3 < (uint)param_1[3]);
    if ((int)param_2 < 0) {
      (**(code **)(*param_1 + 8))();
      return (int)param_2;
    }
  }
  return (int)param_2;
}


