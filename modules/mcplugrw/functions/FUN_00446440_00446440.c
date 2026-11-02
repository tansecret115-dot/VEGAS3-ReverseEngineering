/* Module: mcplugrw.dll
   Function: FUN_00446440
   Address: 00446440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00446440(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00446160(param_1,0x3d,0x18d);
  iVar1 = setjmp3((int)param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_00474df0((int)param_1,param_2);
  return 0;
}


