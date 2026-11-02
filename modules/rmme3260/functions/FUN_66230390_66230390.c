/* Module: rmme3260.dll
   Function: FUN_66230390
   Address: 66230390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66230390(undefined4 *param_1)

{
  int *this;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_5;
  
  *param_1 = &PTR_FUN_6626bf78;
  param_1[1] = &PTR_LAB_6626bf68;
  param_1[2] = &PTR_FUN_6626bf60;
  *(byte *)((int)param_1 + 0x6d) = *(byte *)((int)param_1 + 0x6d) | 0x80;
  (**(code **)(**(int **)((int)param_1 + 0x91) + 4))();
  this = param_1 + 0x12;
  while( true ) {
    if (this == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1[0x16];
    }
    if (iVar1 < 1) break;
    piVar2 = (int *)FUN_66250ae0(this);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if ((*(byte *)((int)param_1 + 0x6d) & 0x20) != 0) {
    puVar3 = operator_new(0x28);
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_662522d0(puVar3);
    }
    (**(code **)(*piVar2 + 4))(piVar2);
    local_5 = 0x44;
    (**(code **)(*piVar2 + 0x10))(piVar2,&local_5,1);
    FUN_66250b60(this,piVar2);
    iVar1 = param_1[0x10];
    iVar4 = *(int *)(iVar1 + 0x10) + -1;
    *(int *)(iVar1 + 8) = iVar4;
    *(int *)(iVar1 + 0xc) = iVar4;
    iVar1 = param_1[0x11];
    iVar4 = *(int *)(iVar1 + 0x10) + -1;
    *(int *)(iVar1 + 8) = iVar4;
    *(int *)(iVar1 + 0xc) = iVar4;
    FUN_66231ab0(param_1);
    FUN_66231130(param_1);
  }
  if (((param_1[4] != 0) && (iVar1 = *(int *)((int)param_1 + 0x81), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x10) & 1) != 0)) {
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) & 0xfe;
    (**(code **)(*(int *)param_1[4] + 0x14))
              ((int *)param_1[4],*(undefined4 *)(*(int *)((int)param_1 + 0x81) + 0xc));
  }
  piVar2 = (int *)param_1[7];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[7] = 0;
  }
  piVar2 = (int *)param_1[8];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[8] = 0;
  }
  piVar2 = (int *)param_1[9];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[9] = 0;
  }
  piVar2 = (int *)param_1[10];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[10] = 0;
  }
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[5] = 0;
  }
  piVar2 = (int *)param_1[6];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[6] = 0;
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))(1);
    param_1[0xe] = 0;
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))(1);
    param_1[0xf] = 0;
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))(1);
    param_1[0x10] = 0;
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))(1);
    param_1[0x11] = 0;
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete((void *)param_1[0x19]);
    param_1[0x19] = 0;
  }
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete((void *)param_1[0x17]);
    param_1[0x17] = 0;
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete((void *)param_1[0x18]);
    param_1[0x18] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete((void *)param_1[0x1a]);
    param_1[0x1a] = 0;
  }
  if (*(void **)((int)param_1 + 0x73) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x73));
    *(undefined4 *)((int)param_1 + 0x73) = 0;
  }
  if (*(void **)((int)param_1 + 0x7b) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x7b));
    *(undefined4 *)((int)param_1 + 0x7b) = 0;
  }
  iVar1 = *(int *)((int)param_1 + 0x81);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x10) & 1) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x81) + 8))(*(int **)((int)param_1 + 0x81));
    *(undefined4 *)((int)param_1 + 0x81) = 0;
  }
  if (*(int *)((int)param_1 + 0x81) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x81) + 8) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x81) + 8))(*(int **)((int)param_1 + 0x81));
    *(undefined4 *)((int)param_1 + 0x81) = 0;
  }
  if (*(int *)((int)param_1 + 0x85) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x85) + 8) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x85) + 8))(*(int **)((int)param_1 + 0x85));
    *(undefined4 *)((int)param_1 + 0x85) = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x89);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x89) = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x8d);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x8d) = 0;
  }
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[4] = 0;
  }
  (**(code **)(**(int **)((int)param_1 + 0x91) + 8))();
  if (*(undefined4 **)((int)param_1 + 0x91) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x91))(1);
    *(undefined4 *)((int)param_1 + 0x91) = 0;
  }
  FUN_66250a40(this);
  return;
}


