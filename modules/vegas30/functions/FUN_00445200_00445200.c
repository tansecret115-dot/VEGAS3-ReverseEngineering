/* Module: vegas30.exe
   Function: FUN_00445200
   Address: 00445200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00445200(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xac), iVar1 != 0)) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      if ((*(uint *)(param_1 + 0x9c) & 0x200) != 0) {
        *(undefined4 *)(iVar1 + 0x1fc) = param_2;
        return;
      }
      break;
    case 2:
      *(undefined4 *)(iVar1 + 0x138) = param_2;
      return;
    case 3:
      *(undefined4 *)(iVar1 + 0x138) = param_2;
      return;
    case 4:
      uVar2 = FUN_005ba4b0(*(undefined4 *)(param_1 + 0x88),0);
      FUN_005ba990(*(undefined4 *)(param_1 + 0x88),param_2,uVar2,0);
      break;
    case 6:
      *(undefined4 *)(iVar1 + 0x13c) = param_2;
      return;
    }
  }
  return;
}


