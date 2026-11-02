/* Module: vegas30.exe
   Function: FUN_00456bc0
   Address: 00456bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00456bc0(int param_1,LONG param_2,LONG param_3)

{
  int *piVar1;
  POINT pt;
  BOOL BVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  piVar5 = (int *)(param_1 + 0x50);
  do {
    piVar1 = (int *)*piVar5;
    pt.y = param_3;
    pt.x = param_2;
    BVar2 = PtInRect((RECT *)(piVar1 + 2),pt);
    if (BVar2 != 0) {
      uVar4 = piVar1[8];
      if (*(code **)(*piVar1 + 8) != (code *)0x0) {
        uVar3 = (**(code **)(*piVar1 + 8))(param_1,piVar1,param_2,param_3);
        uVar4 = uVar4 | uVar3;
      }
      return uVar4;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (uVar4 < 0x10);
  return 0;
}


