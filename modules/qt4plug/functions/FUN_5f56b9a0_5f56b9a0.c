/* Module: qt4plug.dll
   Function: FUN_5f56b9a0
   Address: 5f56b9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f56b9a0(HANDLE param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = param_4;
  pvVar1 = param_1;
  if (param_4 != (undefined4 *)0x0) {
    param_4 = (undefined4 *)*param_4;
  }
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  uVar3 = FUN_5f56b860(pvVar1,(int *)&param_1,&local_4);
  if (-1 < (int)uVar3) {
    param_4 = param_1;
    uVar3 = FUN_5f56b910(pvVar1,param_2,&local_8,(int *)&param_4);
    if ((int)uVar3 < 0) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_4;
        return uVar3;
      }
    }
    else {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_8;
      }
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_4;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


