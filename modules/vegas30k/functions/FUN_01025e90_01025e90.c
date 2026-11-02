/* Module: vegas30k.dll
   Function: FUN_01025e90
   Address: 01025e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01025e90(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  undefined4 *puStack_24;
  int *piStack_14;
  int *piStack_8;
  
  iVar1 = param_2;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    puStack_24 = &param_1;
    iVar2 = (**(code **)*param_1)(param_1,&DAT_011e6908);
    if (-1 < iVar2) {
      FUN_01023f30(&puStack_24,iVar1,unaff_retaddr,param_1);
      (**(code **)(*piStack_8 + 0x10))(piStack_8,&puStack_24,0x18);
      (**(code **)(*piStack_14 + 8))(piStack_14);
    }
    return iVar2;
  }
  return -0x7fffbffd;
}


