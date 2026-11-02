/* Module: oggplug.dll
   Function: FUN_00416260
   Address: 00416260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00416260(HANDLE param_1,LPCVOID param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_3;
  *param_3 = 0;
  if (param_2 != (LPCVOID)0x0) {
    iVar2 = FUN_004227c0(param_1,0x64696361,param_2,0x18,(int *)&param_3);
    if (iVar2 < 0) {
      return iVar2;
    }
    *puVar1 = 0x20;
  }
  return 0;
}


