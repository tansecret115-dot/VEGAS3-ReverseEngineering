/* Module: vegas30k.dll
   Function: FUN_0119c8a0
   Address: 0119c8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0119c8a0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 3) != 0) {
    *(undefined4 *)(param_1 + 0x8bc) = 1;
    if ((-1 < param_3) && (*(int *)(param_1 + 0x6a4) != 0)) {
      param_2 = *(undefined4 *)(param_1 + 0x4fc);
      uVar1 = ftol();
      FUN_01194980(uVar1);
    }
    return 0;
  }
  return 0x8000ffff;
}


