/* Module: vidcap30.exe
   Function: FUN_00554d70
   Address: 00554d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00554d70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x71);
  if (*(int *)((int)param_1 + 0xd) != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  if (iVar1 == 3) {
    if (*(int *)((int)param_1 + 0x75) == 3) {
      iVar3 = 10;
      goto LAB_00554dbc;
    }
  }
  else if (4 < iVar1) {
    iVar3 = iVar1 * 6;
    goto LAB_00554dbc;
  }
  iVar3 = iVar1 * 4 + 2;
LAB_00554dbc:
  uVar2 = (**(code **)param_1[1])(param_1,0,iVar3 * 0x24);
  *(int *)((int)param_1 + 0xdd) = iVar3;
  *(undefined4 *)((int)param_1 + 0xe1) = uVar2;
  if ((iVar1 == 3) && (*(int *)((int)param_1 + 0x75) == 3)) {
    uVar2 = FUN_00554f70(uVar2,3,0,1);
    uVar2 = FUN_00554ee0(uVar2,0,1,5,0,2);
    uVar2 = FUN_00554ee0(uVar2,2,1,0x3f,0,1);
    uVar2 = FUN_00554ee0(uVar2,1,1,0x3f,0,1);
    uVar2 = FUN_00554ee0(uVar2,0,6,0x3f,0,2);
    uVar2 = FUN_00554ee0(uVar2,0,1,0x3f,2,1);
    uVar2 = FUN_00554f70(uVar2,3,1,0);
    uVar2 = FUN_00554ee0(uVar2,2,1,0x3f,1,0);
    uVar2 = FUN_00554ee0(uVar2,1,1,0x3f,1,0);
    FUN_00554ee0(uVar2,0,1,0x3f,1,0);
    return;
  }
  uVar2 = FUN_00554f70(uVar2,iVar1,0,1);
  uVar2 = FUN_00554f20(uVar2,iVar1,1,5,0,2);
  uVar2 = FUN_00554f20(uVar2,iVar1,6,0x3f,0,2);
  uVar2 = FUN_00554f20(uVar2,iVar1,1,0x3f,2,1);
  uVar2 = FUN_00554f70(uVar2,iVar1,1,0);
  FUN_00554f20(uVar2,iVar1,1,0x3f,1,0);
  return;
}


