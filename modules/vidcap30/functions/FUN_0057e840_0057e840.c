/* Module: vidcap30.exe
   Function: FUN_0057e840
   Address: 0057e840
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0057e840(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_EDI;
  int iVar5;
  int *piVar6;
  int iStack_c;
  int *piStack_8;
  int iStack_4;
  
  puVar1 = param_1;
  iStack_4 = (**(code **)(*(int *)param_1[-0x1c] + 0x18))();
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iStack_4) {
    do {
      iVar2 = (**(code **)(*(int *)puVar1[-0x1c] + 0x1c))(iVar5);
      piVar6 = (int *)(iVar2 + 0xc);
      uVar3 = (**(code **)(*piVar6 + 0x24))(piVar6,&iStack_c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((piStack_8 == (int *)0x1) &&
         (iVar2 = (**(code **)(*piVar6 + 0x18))(piVar6,&param_1), -1 < iVar2)) {
        piVar6 = &iStack_c;
        iVar4 = iVar4 + 1;
        iVar2 = (**(code **)*param_1)(param_1,&DAT_005a1c28);
        (**(code **)(*piStack_8 + 8))(piStack_8);
        if (iVar2 < 0) {
          return 0;
        }
        iVar2 = (**(code **)(*unaff_EDI + 0x20))(unaff_EDI);
        (**(code **)(*piVar6 + 8))(piVar6);
        if (iVar2 != 1) {
          return 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iStack_4);
  }
  return (uint)(iVar4 != 0);
}


