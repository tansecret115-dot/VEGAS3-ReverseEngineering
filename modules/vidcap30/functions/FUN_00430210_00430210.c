/* Module: vidcap30.exe
   Function: FUN_00430210
   Address: 00430210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00430210(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (((0x7f < uVar1) && (uVar1 < 0x100)) && ((uVar1 & 0x7f) <= *(uint *)(param_1 + 0xac))) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)((uVar1 & 0x7f) * 0x20 + 0xc4 + param_1);
  }
  return;
}


