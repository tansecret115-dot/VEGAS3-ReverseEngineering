/* Module: rmbe3260.dll
   Function: FUN_6601bac0
   Address: 6601bac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601bac0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = param_2;
  piVar3 = param_1;
  bVar2 = false;
  if (param_1[0x30] != 0) {
    return 0x80040258;
  }
  if (param_2 != (undefined4 *)0x0) {
    param_1 = (int *)0x0;
    if (DAT_66075188 != (undefined4 *)0x0) {
      (**(code **)*DAT_66075188)(DAT_66075188,&DAT_66065c68,&param_1);
      (**(code **)*puVar4)(puVar4,&DAT_66065c68,0);
      if (param_1 == (int *)0x0) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if ((bVar2) || (DAT_66075170 != (-(uint)(piVar3 != (int *)0x10) & (uint)piVar3))) {
      if ((bVar2) && (DAT_66075170 == 0)) {
        DAT_66075170 = -(uint)(piVar3 != (int *)0x10) & (uint)piVar3;
      }
    }
    else {
      DAT_66075170 = 0;
    }
    piVar1 = *(int **)((int)piVar3 + 0x1ca);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)piVar3 + 0x1ca) = 0;
    }
    uVar5 = (**(code **)*puVar4)(puVar4,&DAT_66065c68,(undefined4 *)((int)piVar3 + 0x1ca));
    return uVar5;
  }
  return 0x80004003;
}


