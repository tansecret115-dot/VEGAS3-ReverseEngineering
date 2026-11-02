/* Module: sftrans1.dll
   Function: FUN_0046ee70
   Address: 0046ee70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ee70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)&param_1;
  iVar1 = (**(code **)*param_1)(param_1);
  if (-1 < iVar1) {
    (**(code **)(DAT_0056b170 + 0xc))(&DAT_0056b170,piVar2,0x18);
    (**(code **)(*piVar2 + 8))(piVar2);
    return;
  }
  return;
}


