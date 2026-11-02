/* Module: vegas30.exe
   Function: FUN_00587020
   Address: 00587020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00587020(int param_1,int param_2)

{
  HGLOBAL hMem;
  undefined2 *puVar1;
  
  FUN_00586fd0();
  if (param_2 != 0) {
    hMem = GlobalAlloc(0x42,(2 - (uint)((*(uint *)(param_1 + 0x110) & 2) != 0)) * param_2);
    puVar1 = GlobalLock(hMem);
    *(undefined2 **)(param_1 + 8) = puVar1;
    if (puVar1 == (undefined2 *)0x0) {
      return 0x8007000e;
    }
    if ((*(byte *)(param_1 + 0x110) & 2) != 0) {
      *(undefined1 *)puVar1 = 0;
      *(int *)(param_1 + 0xc) = param_2;
      return 0;
    }
    *puVar1 = 0;
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 0;
}


