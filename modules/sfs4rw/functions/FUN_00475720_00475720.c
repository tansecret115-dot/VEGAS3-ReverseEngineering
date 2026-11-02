/* Module: sfs4rw.dll
   Function: FUN_00475720
   Address: 00475720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475720(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x71);
  if (*(int *)((int)param_1 + 0xd) != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  if (iVar1 == 3) {
    if (*(int *)((int)param_1 + 0x75) == 3) {
      iVar4 = 10;
      goto LAB_0047576c;
    }
  }
  else if (4 < iVar1) {
    iVar4 = iVar1 * 6;
    goto LAB_0047576c;
  }
  iVar4 = iVar1 * 4 + 2;
LAB_0047576c:
  piVar2 = (int *)(**(code **)param_1[1])(param_1,0,iVar4 * 0x24);
  *(int *)((int)param_1 + 0xdd) = iVar4;
  *(int **)((int)param_1 + 0xe1) = piVar2;
  if ((iVar1 == 3) && (*(int *)((int)param_1 + 0x75) == 3)) {
    piVar2 = FUN_00475920(piVar2,3,0,1);
    puVar3 = FUN_00475890(piVar2,0,1,5,0,2);
    puVar3 = FUN_00475890(puVar3,2,1,0x3f,0,1);
    puVar3 = FUN_00475890(puVar3,1,1,0x3f,0,1);
    puVar3 = FUN_00475890(puVar3,0,6,0x3f,0,2);
    piVar2 = FUN_00475890(puVar3,0,1,0x3f,2,1);
    piVar2 = FUN_00475920(piVar2,3,1,0);
    puVar3 = FUN_00475890(piVar2,2,1,0x3f,1,0);
    puVar3 = FUN_00475890(puVar3,1,1,0x3f,1,0);
    FUN_00475890(puVar3,0,1,0x3f,1,0);
    return;
  }
  piVar2 = FUN_00475920(piVar2,iVar1,0,1);
  puVar3 = FUN_004758d0(piVar2,iVar1,1,5,0,2);
  puVar3 = FUN_004758d0(puVar3,iVar1,6,0x3f,0,2);
  piVar2 = FUN_004758d0(puVar3,iVar1,1,0x3f,2,1);
  piVar2 = FUN_00475920(piVar2,iVar1,1,0);
  FUN_004758d0(piVar2,iVar1,1,0x3f,1,0);
  return;
}


