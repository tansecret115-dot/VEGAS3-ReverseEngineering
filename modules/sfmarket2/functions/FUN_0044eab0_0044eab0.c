/* Module: sfmarket2.dll
   Function: FUN_0044eab0
   Address: 0044eab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044eab0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0044e7d0(param_1,0x3d,0x18d);
  iVar1 = setjmp3((int)param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_0047d5e0((int)param_1,param_2);
  return 0;
}


