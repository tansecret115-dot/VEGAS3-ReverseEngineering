/* Module: rmto3260.dll
   Function: FUN_662d4930
   Address: 662d4930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d4930(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = operator_new(0x26);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_662d69b0(puVar1);
  }
  if (piVar2 == (int *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*piVar2 + 4))(piVar2,param_1[7]);
  }
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*param_1 + 0x50))(param_1,piVar2);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  return iVar3;
}


