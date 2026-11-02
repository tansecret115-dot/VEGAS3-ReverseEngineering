/* Module: vegas30.exe
   Function: FUN_004d5d90
   Address: 004d5d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_004d5d90(int param_1,undefined4 param_2,LONG param_3,LONG param_4,undefined4 param_5)

{
  int *piVar1;
  POINT pt;
  BOOL BVar2;
  undefined4 uVar3;
  int *piVar4;
  uint local_8;
  
  local_8 = 0;
  piVar4 = (int *)(param_1 + 0x34);
  do {
    piVar1 = (int *)*piVar4;
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect((RECT *)(piVar1 + 2),pt);
    if (BVar2 != 0) {
      uVar3 = (**(code **)(*piVar1 + 0xc))(param_1,param_2,param_3,param_4,param_5);
      return uVar3;
    }
    piVar4 = piVar4 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 4);
  return 0x7f88;
}


