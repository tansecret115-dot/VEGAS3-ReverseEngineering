/* Module: rmto3260.dll
   Function: FUN_662d1800
   Address: 662d1800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d1800(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char local_404 [1024];
  
  iVar3 = 0;
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_662d6330(puVar1);
  }
  if (piVar2 == (int *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  if (-1 < iVar3) {
    sprintf(local_404,s__s_imap_txt_6630ab78,param_1[9]);
    iVar3 = (**(code **)(*piVar2 + 4))(piVar2,local_404);
  }
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*param_1 + 0x48))(param_1,param_2,piVar2);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  return iVar3;
}


