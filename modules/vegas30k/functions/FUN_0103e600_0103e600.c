/* Module: vegas30k.dll
   Function: FUN_0103e600
   Address: 0103e600
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0103e600(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (iVar1 = *(int *)(param_1 + 0x39c), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x368);
    piVar3 = (int *)FUN_011376b0();
    *(int **)(param_1 + 0x388) = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
      if (*(undefined4 **)(iVar1 + 0x224) == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = **(undefined4 **)(iVar1 + 0x224);
      }
      iVar5 = FUN_011376f0(uVar2,uVar4);
      if (iVar5 != 0) {
        piVar3 = *(int **)(param_1 + 0x390);
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        *(undefined4 *)(param_1 + 0x390) = 0;
        piVar3 = (int *)FUN_011376d0();
        *(int **)(param_1 + 0x390) = piVar3;
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
    if (*(code **)(param_1 + 0x3ac) != (code *)0x0) {
      (**(code **)(param_1 + 0x3ac))(param_1,1,*(undefined4 *)(param_1 + 0x3b0),0,0,0,0);
    }
  }
  return *(int *)(param_1 + 0xc) == 0;
}


