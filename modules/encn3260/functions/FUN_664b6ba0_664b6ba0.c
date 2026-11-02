/* Module: encn3260.dll
   Function: FUN_664b6ba0
   Address: 664b6ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664b6ba0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_70 [26];
  undefined4 local_8;
  
  piVar2 = param_1;
  piVar1 = param_1 + 0x2da;
  puVar4 = local_70;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_70[0] = 0x6c;
  local_70[1] = 1;
  local_8 = 0x200;
  iVar3 = (**(code **)(*(int *)param_1[0x21b] + 0x18))((int *)param_1[0x21b],local_70,piVar1,0);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(int *)piVar2[0x21b] + 0x10))((int *)piVar2[0x21b],0,&param_1,0);
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,piVar2[1]);
      piVar2[2] = piVar2[1];
      piVar1 = (int *)*piVar1;
      (**(code **)(*piVar1 + 0x70))(piVar1,param_1);
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return iVar3;
}


