/* Module: oggplug.dll
   Function: FUN_00441050
   Address: 00441050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00441050(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 8;
  uVar1 = param_1 << 0x18;
  do {
    if ((uVar1 & 0x80000000) == 0) {
      uVar1 = uVar1 << 1;
    }
    else {
      uVar1 = uVar1 * 2 ^ 0x4c11db7;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


