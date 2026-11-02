/* Module: aviplug.dll
   Function: FUN_5f945650
   Address: 5f945650
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f945650(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  
  if (param_1[0x50] != 0) {
    return 0;
  }
  piVar1 = param_1 + 1;
  (**(code **)(param_1[1] + 0x40))(piVar1,param_1[0x4e]);
  iVar2 = (**(code **)(*piVar1 + 0x50))(piVar1,0,0x3ff00000);
  if (-1 < iVar2) {
    iVar3 = (**(code **)(*param_1 + 0xc))(param_1,unaff_ESI);
    if (iVar3 != 0) {
      (**(code **)(*piVar1 + 0x40))(piVar1,param_1[0x4e]);
      return iVar2;
    }
    iVar2 = -0x7ffbbf39;
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  return iVar2;
}


