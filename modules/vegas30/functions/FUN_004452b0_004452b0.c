/* Module: vegas30.exe
   Function: FUN_004452b0
   Address: 004452b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_004452b0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_4;
  
  puVar4 = &local_4;
  puVar2 = (undefined1 *)0x0;
  local_4 = 0;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xac), iVar1 != 0)) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      return *(undefined1 **)(iVar1 + 0x140);
    case 2:
      return *(undefined1 **)(iVar1 + 0x78);
    case 3:
      return *(undefined1 **)(iVar1 + 0x7c);
    case 4:
      uVar3 = FUN_005ba4b0(*(undefined4 *)(param_1 + 0x88),0);
      puVar2 = (undefined1 *)FUN_005ba950(*(undefined4 *)(param_1 + 0x88),uVar3,0);
      break;
    case 5:
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))(*(int **)(param_1 + 0xb0));
      return (undefined1 *)puVar4;
    case 6:
      return *(undefined1 **)(iVar1 + 0x138);
    case 7:
      return *(undefined1 **)(iVar1 + 0x200);
    case 8:
      return *(undefined1 **)(iVar1 + 0x204);
    }
  }
  return puVar2;
}


