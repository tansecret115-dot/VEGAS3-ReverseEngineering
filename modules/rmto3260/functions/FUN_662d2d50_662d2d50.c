/* Module: rmto3260.dll
   Function: FUN_662d2d50
   Address: 662d2d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662d2d50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar1 = operator_new(0x76);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_662d2ec0(puVar1);
  }
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = piVar2 + 4;
  }
  *param_1 = piVar3;
  if (piVar3 == (int *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  else {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  if (-1 < iVar4) {
    iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2);
  }
  return iVar4;
}


