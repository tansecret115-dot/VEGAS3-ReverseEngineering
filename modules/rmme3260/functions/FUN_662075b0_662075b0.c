/* Module: rmme3260.dll
   Function: FUN_662075b0
   Address: 662075b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662075b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  iVar3 = -0x7ff8ffa9;
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)*param_2;
    param_2 = (int *)0x0;
    iVar3 = (*(code *)*puVar1)(piVar2,&DAT_6626b228,&param_2);
    if (-1 < iVar3) {
      FUN_66206ec0((void *)(param_1 + 0x48),param_2);
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
      }
    }
  }
  return iVar3;
}


