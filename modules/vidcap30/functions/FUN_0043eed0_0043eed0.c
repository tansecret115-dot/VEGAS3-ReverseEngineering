/* Module: vidcap30.exe
   Function: FUN_0043eed0
   Address: 0043eed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043eed0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int local_e8 [8];
  undefined1 local_c8 [200];
  
  uVar3 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0x86;
  local_e8[3] = 0x82;
  local_e8[4] = 0x68;
  local_e8[5] = 100;
  local_e8[6] = 0x70;
  local_e8[7] = 0x6e;
  FUN_00460850(*(undefined4 *)(param_1 + 0xd4),0xd,200,local_c8);
  piVar2 = local_e8 + 2;
  do {
    uVar1 = _SfGetUIFont_4(*piVar2);
    _SfGetTextExtent_16(uVar1,local_c8,0xffffffff,local_e8);
    local_e8[0] = local_e8[0] + 10;
    if (local_e8[0] < *(int *)(param_1 + 0x14c4) - *(int *)(param_1 + 0x14bc)) {
      FUN_00460850(*(undefined4 *)(param_1 + 0xd4),0x30,uVar1,0);
      break;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 6);
  FUN_00460850(*(undefined4 *)(param_1 + 0xd4),0xf,0,param_2);
  return;
}


