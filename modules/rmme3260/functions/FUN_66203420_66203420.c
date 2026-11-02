/* Module: rmme3260.dll
   Function: FUN_66203420
   Address: 66203420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66203420(void *param_1,short param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_3;
  *param_3 = 0;
  param_3 = (undefined4 *)0x0;
  iVar2 = FUN_66203b40(param_1,param_2,(int *)&param_3);
  if ((-1 < iVar2) && (iVar2 != 0x40012)) {
    *puVar1 = 1;
  }
  return;
}


