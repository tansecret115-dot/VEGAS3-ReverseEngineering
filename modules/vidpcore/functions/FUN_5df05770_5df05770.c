/* Module: vidpcore.dll
   Function: FUN_5df05770
   Address: 5df05770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df05770(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  
  puVar1 = (undefined4 *)(param_1 + 0x308);
  FUN_5ded6070(*(undefined4 *)(param_1 + 0x308));
  *puVar1 = 0;
  iVar2 = FUN_5ded6140(puVar1,0x158,0xffffffff,0xffffffff,0x40000004,0,0,0);
  if (-1 < iVar2) {
    local_158 = 0;
    local_154 = 0x3fe00000;
    local_150 = 0;
    local_14c = 0x3fe00000;
    FUN_5ded4b10(*puVar1,0,&local_158,1);
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
  }
  return 0;
}


