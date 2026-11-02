/* Module: vidcap30.exe
   Function: FUN_00577190
   Address: 00577190
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00577190(int param_1)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = (ushort)(uVar1 >> 0x10);
  if ((uVar1 != 0) && ((uVar1 < 3 || (uVar1 == 7)))) {
    return CONCAT22(uVar2,*(undefined2 *)(param_1 + 0x24));
  }
  return (uint)uVar2 << 0x10;
}


