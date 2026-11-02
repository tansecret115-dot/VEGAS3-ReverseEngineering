/* Module: rmme3260.dll
   Function: FUN_662348a0
   Address: 662348a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662348a0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_1;
  if (param_1[3] != 0) {
    return 0x80040009;
  }
  if (param_2 == (int *)0x0) {
    return 0x80070057;
  }
  param_1[3] = (int)param_2;
  (**(code **)(*param_2 + 4))(param_2);
  param_2 = (int *)0x0;
  (*(code *)**(undefined4 **)piVar2[3])((undefined4 *)piVar2[3],&DAT_6626ad78,&param_2);
  if (param_2 != (int *)0x0) {
    piVar2[4] = (int)param_2;
  }
  if ((*(byte *)(piVar2[2] + 0x48) & 1) == 0) {
    param_1 = (int *)0x0;
    iVar4 = (*(code *)**(undefined4 **)piVar2[3])((undefined4 *)piVar2[3],&DAT_6626a708,&param_1);
    if (iVar4 == 0) {
      bVar3 = (**(code **)(*param_1 + 0xc))(param_1);
      *(byte *)(piVar2[2] + 0x48) = *(byte *)(piVar2[2] + 0x48) & 0xef | (bVar3 & 1) << 4;
      (**(code **)(*param_1 + 8))(param_1);
    }
    piVar1 = *(int **)(piVar2[2] + 0x1c);
    (**(code **)(*piVar1 + 0xc))(piVar1,piVar2[2]);
    *(byte *)(piVar2[2] + 0x48) = *(byte *)(piVar2[2] + 0x48) | 1;
  }
  iVar4 = piVar2[2];
  if ((*(byte *)(iVar4 + 0x48) & 2) != 0) {
    (**(code **)(*(int *)piVar2[3] + 0x30))
              ((int *)piVar2[3],*(undefined4 *)(iVar4 + 0x34),*(undefined4 *)(iVar4 + 0x38));
  }
  iVar4 = piVar2[2];
  if ((*(byte *)(iVar4 + 0x48) & 4) != 0) {
    (**(code **)(*(int *)piVar2[3] + 0x28))
              ((int *)piVar2[3],*(undefined4 *)(iVar4 + 0x3c),*(undefined4 *)(iVar4 + 0x40));
  }
  if ((*(byte *)(piVar2[2] + 0x48) & 8) != 0) {
    (**(code **)(*(int *)piVar2[4] + 0x18))((int *)piVar2[4],*(undefined4 *)(piVar2[2] + 0x44));
  }
  iVar4 = *(int *)(piVar2[2] + 0x5d);
  if ((iVar4 != 0) && (piVar2 = (int *)piVar2[4], piVar2 != (int *)0x0)) {
    iVar5 = (**(code **)(*piVar2 + 0x24))(piVar2,&param_1);
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1,iVar4);
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
  }
  return 0;
}


