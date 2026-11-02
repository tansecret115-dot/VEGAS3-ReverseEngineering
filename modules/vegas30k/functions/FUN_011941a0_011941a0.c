/* Module: vegas30k.dll
   Function: FUN_011941a0
   Address: 011941a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011941a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar1 & 0xffff3bff;
  if (((uVar1 & 0x10) == 0) && (iVar2 = FUN_0119c050(0), iVar2 < 0)) {
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x714) = 0;
  *(undefined4 *)(param_1 + 0x768) = 0;
  return 0;
}


