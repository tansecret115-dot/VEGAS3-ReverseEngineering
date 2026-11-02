/* Module: extmondrv.dll
   Function: FUN_00403110
   Address: 00403110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403110(int param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  hMem = GlobalAlloc(0x40,0x18);
  this = GlobalLock(hMem);
  if (this != (LPVOID)0x0) {
    puVar1 = FUN_00403380(this,param_1,*(undefined4 *)(param_1 + 0x20),
                          *(undefined4 *)(param_1 + 0x24),0);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00455e4c,param_2);
      return 0;
    }
  }
  *param_2 = 0;
  return 0x8007000e;
}


