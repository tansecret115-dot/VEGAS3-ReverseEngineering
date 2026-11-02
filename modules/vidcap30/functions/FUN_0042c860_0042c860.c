/* Module: vidcap30.exe
   Function: FUN_0042c860
   Address: 0042c860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042c860(int param_1)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  int **ppiStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10 [4];
  
  puStack_1c = (undefined1 *)local_10;
  piStack_30 = *(int **)(param_1 + 0x3b4);
  piStack_24 = *(int **)(param_1 + 0x360);
  piStack_20 = (int *)&DAT_005a1968;
  local_10[0] = 0;
  piStack_28 = &DAT_005a35a8;
  piStack_2c = (int *)&DAT_005a2438;
  ppiStack_34 = (int **)0x42c896;
  iVar1 = (**(code **)(*piStack_30 + 0x18))();
  if (iVar1 < 0) {
    ppiStack_34 = &piStack_28;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x18))
                      (*(int **)(param_1 + 0x3b4),&DAT_005a2438,&DAT_005a35f8,
                       *(undefined4 *)(param_1 + 0x360),&DAT_005a1968);
    if (iVar1 < 0) {
      return -0x7ffbfb50;
    }
  }
  ppiStack_34 = &piStack_20;
  ppuVar6 = &puStack_1c;
  puVar5 = &stack0xffffffec;
  puStack_1c = (undefined1 *)0x0;
  piStack_20 = (int *)0x0;
  piVar4 = piStack_28;
  iVar1 = (**(code **)(*piStack_28 + 0x10))(piStack_28,puVar5);
  if (-1 < iVar1) {
    ppiVar3 = &piStack_20;
    piStack_24 = piStack_20;
    ppiStack_34 = (int **)0x0;
    piStack_20 = (int *)0x7d;
    iVar1 = (**(code **)(*ppuVar6 + 0x14))(ppuVar6,&ppiStack_34);
    if ((-1 < iVar1) &&
       ((piVar2 = piStack_2c, (int)piStack_30 < (int)piVar4 ||
        (piVar2 = piVar4, (int)piStack_2c < (int)piStack_30)))) {
      piStack_30 = piVar2;
    }
    iVar1 = (*(code *)(*ppiVar3)[3])(ppiVar3,piStack_30,ppuVar6,puVar5);
  }
  if (ppuVar6 != (undefined1 **)0x0) {
    (**(code **)(*ppuVar6 + 8))(ppuVar6);
  }
  return iVar1;
}


