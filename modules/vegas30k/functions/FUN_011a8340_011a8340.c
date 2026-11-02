/* Module: vegas30k.dll
   Function: FUN_011a8340
   Address: 011a8340
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011a8340(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7fc) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x7ec) & 1) == 0) {
    return -0x7fff0001;
  }
  iVar3 = (**(code **)(param_1 + 0x7dc))
                    (param_1,0x10,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                     0x3ff00000,0,0,param_2,param_3,0,0);
  piVar1 = *(int **)(param_1 + 0x7fc);
  uVar2 = piVar1[3];
  if ((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) == 0)) {
    iVar3 = (**(code **)(*piVar1 + 0x94))(piVar1,param_2,param_3);
  }
  if (-1 < iVar3) {
    *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) | 0x800;
    iVar3 = (**(code **)(param_1 + 0x7dc))
                      (param_1,0x11,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                       0x3ff00000,0,0,param_2,param_3,0,0);
    return iVar3;
  }
  FUN_011a8420();
  return iVar3;
}


