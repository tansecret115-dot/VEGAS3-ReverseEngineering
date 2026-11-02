/* Module: sctplug.dll
   Function: FUN_0041f050
   Address: 0041f050
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f050(HANDLE param_1,LPCVOID param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_3;
  *param_3 = 0;
  if (param_2 != (LPCVOID)0x0) {
    iVar2 = FUN_00414210(param_1,0x64696361,param_2,0x18,(int *)&param_3);
    if (iVar2 < 0) {
      return iVar2;
    }
    *puVar1 = 0x20;
  }
  return 0;
}


