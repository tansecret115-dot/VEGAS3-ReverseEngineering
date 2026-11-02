/* Module: rmme3260.dll
   Function: FUN_6621d7a0
   Address: 6621d7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6621d7a0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_662509f0(puVar2);
  }
  param_1[0x36] = iVar3;
  if (iVar3 == 0) {
    iVar1 = -0x7ff8fff2;
  }
  param_1[9] = iVar1;
  return iVar1;
}


