/* Module: vegas30.exe
   Function: FUN_0047f900
   Address: 0047f900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047f99e) */

uint FUN_0047f900(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
    return 0xffffffff;
  }
  lVar2 = ftol();
  uVar1 = lVar2 + *(int *)(param_1 + 0xac0);
  if ((0x7fffffffffffffff < uVar1) &&
     (((longlong)uVar1 < -0x100000000 || ((uint)uVar1 < 0xffffc000)))) {
    return 0xffffc000;
  }
  if ((longlong)uVar1 < 0x4000) {
    return (uint)uVar1;
  }
  return 0x3fff;
}


