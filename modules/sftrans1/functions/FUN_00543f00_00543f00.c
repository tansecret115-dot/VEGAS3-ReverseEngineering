/* Module: sftrans1.dll
   Function: FUN_00543f00
   Address: 00543f00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00543f00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x18) == 1) &&
     (iVar1 = *(int *)(param_1 + 0xc) + -1, *(int *)(param_1 + 0xc) = iVar1, iVar1 < 1)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    uVar2 = FUN_00544100(param_2);
    return uVar2;
  default:
    return 0;
  case 2:
    uVar2 = FUN_00543f90(param_2);
    return uVar2;
  case 3:
    uVar2 = FUN_00544080(param_2);
    return uVar2;
  }
}


