/* Module: vegas30.exe
   Function: FUN_004ee240
   Address: 004ee240
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004ee240(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_20 [4];
  undefined4 local_10;
  
  piVar1 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  local_20[0] = 0x412;
  local_20[1] = *(undefined4 *)(param_1 + 8);
  local_20[3] = *(undefined4 *)(param_2 + 0x210);
  local_10 = *(undefined4 *)(param_2 + 0x20c);
  (**(code **)(*DAT_0064b474 + 0xc))(DAT_0064b474,local_20);
  return local_20[2] != 0;
}


