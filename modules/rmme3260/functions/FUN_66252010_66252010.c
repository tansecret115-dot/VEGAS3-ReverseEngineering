/* Module: rmme3260.dll
   Function: FUN_66252010
   Address: 66252010
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66252010(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_8;
  
  piVar2 = param_2;
  piVar1 = param_1;
  if ((param_2 != (int *)0x0) && (param_1 != (int *)0x0)) {
    iVar3 = *param_2;
    param_2 = (int *)0x0;
    local_8 = 0;
    iVar3 = (**(code **)(iVar3 + 0x14))(piVar2,&param_2,&local_8);
    while (-1 < iVar3) {
      (**(code **)(*piVar1 + 0xc))(piVar1,param_2,local_8);
      iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,&param_2,&local_8);
    }
    param_1 = (int *)0x0;
    iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,&param_2,&param_1);
    while (-1 < iVar3) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,param_2,param_1);
      (**(code **)(*param_1 + 8))(param_1);
      iVar3 = (**(code **)(*piVar2 + 0x28))(piVar2,&param_2,&param_1);
    }
    iVar3 = (**(code **)(*piVar2 + 0x34))(piVar2,&param_2,&param_1);
    while (-1 < iVar3) {
      (**(code **)(*piVar1 + 0x2c))(piVar1,param_2,param_1);
      (**(code **)(*param_1 + 8))(param_1);
      iVar3 = (**(code **)(*piVar2 + 0x38))(piVar2,&param_2,&param_1);
    }
  }
  return;
}


