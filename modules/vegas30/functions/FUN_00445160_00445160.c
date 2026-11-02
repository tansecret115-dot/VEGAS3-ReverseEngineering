/* Module: vegas30.exe
   Function: FUN_00445160
   Address: 00445160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00445160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xac), iVar1 != 0)) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      if ((*(uint *)(param_1 + 0x9c) & 0x200) != 0) {
        return *(undefined4 *)(iVar1 + 0x1fc);
      }
      break;
    case 2:
    case 3:
      return *(undefined4 *)(iVar1 + 0x138);
    case 4:
      uVar2 = FUN_005ba4b0(*(undefined4 *)(param_1 + 0x88),0);
      uVar2 = FUN_005ba980(*(undefined4 *)(param_1 + 0x88),uVar2,0);
      return uVar2;
    case 6:
      return *(undefined4 *)(iVar1 + 0x13c);
    }
  }
  return 0;
}


