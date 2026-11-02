/* Module: vegas30.exe
   Function: FUN_0043f490
   Address: 0043f490
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0043f490(HSFCD__ *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong local_8;
  ulong local_4;
  
  uVar2 = FUN_0043e210();
  iVar1 = __alldiv(uVar2,10000,0);
  SfCD_GetProcessTime(param_1,2,&local_4);
  SfCD_GetProcessTime(param_1,3,&local_8);
  return (local_4 + local_8 + iVar1) / param_2;
}


