/* Module: vegas30.exe
   Function: FUN_00486b00
   Address: 00486b00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00486b00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined1 *local_14;
  int local_10;
  undefined4 local_c;
  undefined1 *local_8;
  int local_4;
  
  iVar1 = FUN_005fb200(1);
  if (-1 < iVar1) {
    FUN_0052dfc0(*(undefined4 *)(param_1 + 0xd98),param_1 + 0x368,0);
    if (iVar1 != 0x4e001) {
      uVar2 = FUN_005b8d80(*(undefined4 *)(param_1 + 0xd98));
      *(undefined8 *)(param_1 + 0x240) = uVar2;
      local_18 = 0x2273;
      local_14 = &LAB_00486eb0;
      local_c = 0x2275;
      local_8 = &LAB_00486ee0;
      *(undefined4 *)(param_1 + 0x234) = 4;
      *(undefined4 *)(param_1 + 0x228) = 1;
      local_10 = param_1;
      local_4 = param_1;
      iVar1 = FUN_00582f00(param_2,"E-mail",&local_18,2,0x1020);
      return iVar1;
    }
  }
  return iVar1;
}


