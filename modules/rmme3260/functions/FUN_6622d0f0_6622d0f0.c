/* Module: rmme3260.dll
   Function: FUN_6622d0f0
   Address: 6622d0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_6622d0f0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_38 [9];
  GUID local_14;
  
  FUN_662650f0(local_38);
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_662522d0(puVar1);
  }
  (**(code **)(*piVar2 + 4))(piVar2);
  FUN_6622d170(piVar2);
  uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  piVar5 = piVar2;
  puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0x1c))(piVar2,uVar3);
  iVar4 = FUN_662651e0(&local_14,puVar1,(uint)piVar5);
  FUN_662652d0(&local_14.Data1,param_1);
  (**(code **)(*piVar2 + 8))(piVar2);
  FUN_662651a0(local_38);
  return iVar4;
}


