/* Module: g2plug.dll
   Function: FUN_5f864ac0
   Address: 5f864ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5f864ac0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_5f869b10;
  piVar2 = param_1;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_5f869b10,&param_1);
  if (iVar1 < 0) {
    return false;
  }
  iVar1 = (**(code **)(*piVar3 + 0x6c))(piVar3);
  (**(code **)(*piVar2 + 8))(piVar2);
  return 0 < iVar1;
}


