/* Module: sfppack2.dll
   Function: FUN_5cd41e28
   Address: 5cd41e28
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd41e28(undefined4 *param_1,undefined4 param_2,LPCSTR param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lstrcmpiA((LPCSTR)*param_4,param_3);
  if (iVar1 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_4[1] = 0;
    }
    else {
      param_4[2] = *param_1;
      param_4[3] = param_1[1];
      param_4[4] = param_1[2];
      param_4[5] = param_1[3];
      param_4[1] = param_4 + 2;
    }
    param_4[6] = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


