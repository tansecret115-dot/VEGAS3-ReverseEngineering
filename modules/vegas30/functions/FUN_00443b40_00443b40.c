/* Module: vegas30.exe
   Function: FUN_00443b40
   Address: 00443b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443b40(HANDLE param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  lVar2 = SfCDProject_IsProject(param_1,(ulong *)&param_2);
  if (lVar2 != 0) {
    return 0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = 0;
  }
  return 1;
}


