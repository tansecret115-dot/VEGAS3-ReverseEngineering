/* Module: erv23260.dll
   Function: FUN_637f8470
   Address: 637f8470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_637f8470(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 7) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      *param_3 = *(undefined4 *)((int)this + param_2 * 0x144 + 0x13c);
      *param_4 = *(undefined4 *)((int)this + param_2 * 0x144 + 0x140);
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  switch(iVar1) {
  case 1:
    *param_3 = 0x80;
    *param_4 = 0x60;
    return 0;
  case 2:
    *param_3 = 0xb0;
    *param_4 = 0x90;
    return 0;
  case 3:
    *param_3 = 0x160;
    *param_4 = 0x120;
    return 0;
  case 4:
    *param_3 = 0x2c0;
    *param_4 = 0x240;
    return 0;
  case 5:
    *param_3 = 0x580;
    *param_4 = 0x480;
    return 0;
  case 6:
    *param_3 = *(undefined4 *)(param_1 + 0x80);
    *param_4 = *(undefined4 *)(param_1 + 0x84);
    return 0;
  default:
    *param_3 = 0;
    *param_4 = 0;
    return 0;
  }
}


