/* Module: mp3rw.dll
   Function: FUN_0043ec40
   Address: 0043ec40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043ec40(int *param_1,char param_2)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0xd) != 200) && (*(int *)((int)param_1 + 0xd) != 0xc9)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0xd);
    (**(code **)*param_1)(param_1);
  }
  iVar1 = FUN_0043ecb0(param_1);
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (iVar1 == 2) {
    if (param_2 != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x32;
      (**(code **)*param_1)(param_1);
    }
    FUN_00453410((int)param_1);
    return 2;
  }
  return iVar1;
}


