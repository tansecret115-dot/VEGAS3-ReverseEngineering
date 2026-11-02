/* Module: stl2plg.dll
   Function: DllRegisterServer
   Address: 00406fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint DllRegisterServer(void)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x6fc0  4  DllRegisterServer */
  uVar1 = FUN_004203b0(DAT_00473530);
  uVar2 = FUN_004203b0(DAT_00473530);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = FUN_004203b0(DAT_00473530);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = FUN_004203b0(DAT_00473530);
  if (-1 < (int)uVar1) {
    uVar1 = uVar2;
  }
  uVar2 = FUN_004203b0(DAT_00473530);
  if ((int)uVar1 < 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}


