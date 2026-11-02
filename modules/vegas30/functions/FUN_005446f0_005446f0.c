/* Module: vegas30.exe
   Function: FUN_005446f0
   Address: 005446f0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall
FUN_005446f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar3 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_20[2] = param_3;
  local_20[3] = param_4;
  uVar2 = 0xffffffff;
  local_10 = param_5;
  local_c = param_6;
  local_20[0] = param_2;
  local_8 = param_7;
  local_4 = param_8;
  if (param_2 == 0xd) {
    uVar2 = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0xb) {
    if (((param_2 != 0xc) && (param_2 != 5)) && (param_2 != 9)) {
      piVar3 = local_20;
      piVar4 = (int *)(param_1 + 0x18);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
    }
    return false;
  }
  iVar1 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x3c),uVar2,local_20,1);
  SetEvent(*(HANDLE *)(param_1 + 4));
  SetEvent(*(HANDLE *)(param_1 + 0xc));
  return -1 < iVar1;
}


