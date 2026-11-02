/* Module: encn3260.dll
   Function: FUN_664b5600
   Address: 664b5600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b5600(undefined4 *param_1,undefined4 param_2,LPCSTR param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = lstrcmpiA((LPCSTR)*param_4,param_3);
  if (iVar2 != 0) {
    return 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    param_4[2] = *param_1;
    param_4[3] = param_1[1];
    param_4[4] = param_1[2];
    uVar1 = param_1[3];
    param_4[1] = param_4 + 2;
    param_4[5] = uVar1;
    param_4[6] = 1;
    return 0;
  }
  param_4[1] = 0;
  param_4[6] = 1;
  return 0;
}


