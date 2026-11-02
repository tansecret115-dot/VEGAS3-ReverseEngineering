/* Module: encn3260.dll
   Function: FUN_664d2440
   Address: 664d2440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664d2440(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  puVar3 = FUN_664bacb0(*(void **)(param_1 + 0xc),param_2);
  piVar1 = *(int **)(param_1 + 0x14);
  piVar4 = &local_8;
  iVar2 = *piVar1;
  puVar3 = (undefined4 *)FUN_664bab80((int)puVar3);
  (**(code **)(iVar2 + 0x20))(piVar1,*puVar3,piVar4);
  if (local_8 != 0) {
    *param_3 = local_8;
    return 0;
  }
  return 0x80004002;
}


