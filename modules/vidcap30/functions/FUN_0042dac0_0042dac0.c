/* Module: vidcap30.exe
   Function: FUN_0042dac0
   Address: 0042dac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042dac0(int *param_1)

{
  int iVar1;
  HGLOBAL hMem;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar4 = param_1;
  iVar1 = param_1[9];
  iVar5 = iVar1 + 1;
  hMem = GlobalAlloc(0x40,iVar5 * 0x28 + 4);
  piVar2 = GlobalLock(hMem);
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar5;
    piVar2 = piVar2 + 1;
    if (piVar2 != (int *)0x0) {
      FUN_0057b870(piVar2);
      param_1 = (int *)0x0;
      if (0 < iVar5) {
        do {
          piVar6 = piVar4;
          piVar7 = piVar2;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          (**(code **)(*(int *)piVar4[6] + 4))((int *)piVar4[6]);
          piVar4 = (int *)piVar4[1];
          *piVar2 = (int)(piVar2 + -10);
          piVar2[1] = (int)piVar4;
          if (param_1 == (int *)0x0) {
            *piVar2 = 0;
          }
          if (param_1 == (int *)iVar1) {
            piVar2[1] = 0;
          }
          param_1 = (int *)((int)param_1 + 1);
          piVar2 = piVar2 + 10;
        } while ((int)param_1 < iVar5);
      }
      return 0;
    }
  }
  return 0x80004005;
}


