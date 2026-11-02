/* Module: sfcdi.dll
   Function: FUN_5bf34570
   Address: 5bf34570
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf34570(HANDLE param_1,int param_2,int *param_3)

{
  HANDLE pvVar1;
  uint uVar2;
  int local_8;
  undefined4 local_4;
  
  pvVar1 = param_1;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  uVar2 = FUN_5bf342d0(pvVar1,(int *)&param_1,&local_4);
  if (-1 < (int)uVar2) {
    uVar2 = FUN_5bf344a0(pvVar1,param_2,&local_8,(int *)&param_1);
    if (-1 < (int)uVar2) {
      if (param_3 != (int *)0x0) {
        *param_3 = local_8;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


