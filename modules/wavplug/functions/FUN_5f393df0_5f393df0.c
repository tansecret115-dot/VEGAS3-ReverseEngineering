/* Module: wavplug.dll
   Function: FUN_5f393df0
   Address: 5f393df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f393df0(LPCSTR param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    lstrcpynA((LPSTR)&param_1,param_1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    uVar1 = FUN_5f3c2a50((char *)&param_1);
    puVar2 = &DAT_5f3d9e28;
    do {
      if (*puVar2 == uVar1) {
        return 1;
      }
      puVar2 = puVar2 + 0x12;
    } while ((int)puVar2 < 0x5f3d9f90);
  }
  return 0;
}


