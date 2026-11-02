/* Module: extmondrv.dll
   Function: FUN_0040aa80
   Address: 0040aa80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040aa80(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar3;
  undefined4 local_4;
  
  uVar2 = 0;
  local_4 = 0;
  if (0 < param_2) {
    return 0x80004002;
  }
  if (param_2 == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x448);
    if (*(int *)(param_1 + 0x448) == 0) {
      hMem = GlobalAlloc(0x40,0x48);
      this = GlobalLock(hMem);
      if (this == (LPVOID)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_0040b030(this,-(uint)(param_1 != 0x10) & param_1,&local_4,0,puVar1,param_4);
      }
      *puVar1 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
    }
    uVar2 = (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_004577a0,param_3);
  }
  return uVar2;
}


