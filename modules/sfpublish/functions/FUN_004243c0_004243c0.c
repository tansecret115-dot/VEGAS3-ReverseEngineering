/* Module: sfpublish.dll
   Function: FUN_004243c0
   Address: 004243c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004243c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  puVar1 = param_4;
  *param_4 = 0;
  param_4 = (undefined4 *)0x0;
  iVar2 = (**(code **)(*param_1 + 0xc4))(param_1,param_3,&param_4);
  if (-1 < iVar2) {
    iVar2 = FUN_00424130(unaff_ESI,param_1,puVar1);
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar2;
}


