/* Module: mp3rw.dll
   Function: FUN_0043ecb0
   Address: 0043ecb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043ecb0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  switch(*(undefined4 *)((int)param_1 + 0xd)) {
  case 200:
    (**(code **)(*(int *)((int)param_1 + 0x1b9) + 4))(param_1);
    (**(code **)(*(int *)((int)param_1 + 0x51) + 8))(param_1);
    *(undefined4 *)((int)param_1 + 0xd) = 0xc9;
  case 0xc9:
    iVar1 = (*(code *)**(undefined4 **)((int)param_1 + 0x1b9))(param_1);
    if (iVar1 == 1) {
      FUN_0043ed70(param_1);
      *(undefined4 *)((int)param_1 + 0xd) = 0xca;
      return 1;
    }
    break;
  case 0xca:
    return 1;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar1 = (*(code *)**(undefined4 **)((int)param_1 + 0x1b9))(param_1);
    return iVar1;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  return iVar1;
}


