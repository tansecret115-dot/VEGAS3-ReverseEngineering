/* Module: vegas30.exe
   Function: FUN_00585a10
   Address: 00585a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00585a10(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack_c;
  int *piStack_8;
  int local_4;
  
  iVar1 = FUN_005856a0();
  if (((iVar1 < 0) || (local_4 == 0)) ||
     (puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(), puVar2 == (undefined4 *)0x0)) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if ((iVar1 < 0) || (piVar3 = (int *)(**(code **)(*piStack_8 + 4))(), piVar3 == (int *)0x0)) {
    (**(code **)*puVar2)();
    return 0;
  }
  iVar1 = (**(code **)(*piVar3 + 4))();
  if ((-1 < iVar1) &&
     ((iVar1 = (**(code **)(*piStack_8 + 0xc))(puVar2,piVar3,&stack0x00000000), iVar1 == 0 &&
      (puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(), puVar4 != (undefined4 *)0x0)))) {
    puVar4[1] = uStack_c;
    iVar1 = (**(code **)(*piStack_8 + 0x10))(puVar2,piVar3,puVar4);
    if (-1 < iVar1) {
      (**(code **)(*param_1 + 0x14))(puVar4);
      (**(code **)(*param_1 + 0x18))(&stack0xffffffc8);
    }
    (**(code **)*puVar4)(1);
    (**(code **)*piVar3)(1);
    (**(code **)*puVar2)(1);
    return 0;
  }
  (**(code **)*piVar3)(1);
  (**(code **)*puVar2)(1);
  return 0;
}


