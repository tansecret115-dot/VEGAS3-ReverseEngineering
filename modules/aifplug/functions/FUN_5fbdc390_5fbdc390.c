/* Module: aifplug.dll
   Function: FUN_5fbdc390
   Address: 5fbdc390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbdc390(HANDLE param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  int local_8;
  undefined4 local_4;
  
  pvVar1 = param_1;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar2 = FUN_5fbdbea0(pvVar1,&local_8,(undefined1 *)&param_1);
  if ((-1 < iVar2) && (param_1 == (HANDLE)0x41494646)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_4;
    }
    return 1;
  }
  return 0;
}


