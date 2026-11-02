/* Module: sfmarket2.dll
   Function: FUN_0042e480
   Address: 0042e480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e480(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  puVar1 = param_4;
  *param_4 = 0;
  param_4 = (undefined4 *)0x0;
  iVar2 = (**(code **)(*param_1 + 0xc4))(param_1,param_3,&param_4);
  if (-1 < iVar2) {
    iVar2 = FUN_0042e1f0(unaff_ESI,param_1,puVar1);
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar2;
}


