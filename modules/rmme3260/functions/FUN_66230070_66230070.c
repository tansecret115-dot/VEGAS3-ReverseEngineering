/* Module: rmme3260.dll
   Function: FUN_66230070
   Address: 66230070
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66230070(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  int iVar4;
  int local_8;
  
  iVar4 = 0;
  if ((*(byte *)(param_1 + 0x2c) & 8) != 0) {
    return 0;
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 8;
  local_8 = param_1;
  while( true ) {
    if (param_1 == -0x45) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x55);
    }
    if (iVar2 < 1) break;
    piVar1 = *(int **)(*(int *)(param_1 + 0x49) + 8);
    local_8 = (**(code **)(*piVar1 + 0x18))(piVar1);
    iVar4 = **(int **)(param_1 + 0x18);
    iVar2 = FUN_66264760(this,*(ushort *)(param_1 + 0x1e));
    uVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_8,*(undefined4 *)(param_1 + 0x20),iVar2);
    iVar4 = (**(code **)(iVar4 + 0x3c))(uVar3);
    if (iVar4 != 0) break;
    (**(code **)(*piVar1 + 8))(piVar1);
    FUN_66250ae0((int *)(param_1 + 0x45));
  }
  piVar1 = *(int **)(param_1 + 0x65);
  if (piVar1 != (int *)0x0) {
    if (param_1 == -0x45) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x55);
    }
    if (0 < iVar2) {
      (**(code **)(*piVar1 + 0x10))(piVar1,1,*(undefined4 *)(param_1 + 0x59),0x32,0);
    }
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xf7;
  return iVar4;
}


