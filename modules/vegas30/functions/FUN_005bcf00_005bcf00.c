/* Module: vegas30.exe
   Function: FUN_005bcf00
   Address: 005bcf00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bcf00(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_24 [4];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  piVar4 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_10 = *(undefined4 *)(param_1 + 0x690);
  local_24[1] = *(uint *)(param_1 + 0x10) & 0xffffff7f;
  local_24[2] = *(undefined4 *)(param_1 + 0x694);
  *(uint *)(param_1 + 0x10) = (*(uint *)(param_1 + 0x10) >> 7 & 1) << 7 | local_24[1];
  local_24[3] = *(undefined4 *)(param_1 + 4);
  iVar3 = 0;
  local_24[0] = 0x24;
  if (*(LPCSTR *)(param_1 + 0xc) == (LPCSTR)0x0) {
    local_14 = 0;
  }
  else {
    iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0xc));
    local_14 = iVar1 * 2 + 2;
  }
  local_8 = *(undefined4 *)(param_1 + 0x1c);
  local_4 = *(int *)(param_1 + 0x20);
  local_c = param_3;
  piVar4 = param_2;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_24,0x24,0);
  if (((-1 < iVar1) &&
      (((local_24[0] == 0 ||
        (iVar1 = FUN_005bbe70(param_2,*(undefined4 *)(param_1 + 0xc),local_24[0]), -1 < iVar1)) &&
       (iVar1 = local_4, local_4 != 0)))) &&
     (iVar2 = (**(code **)(*param_2 + 0x10))(param_2,&stack0xffffffc8,4,0), -1 < iVar2)) {
    if (0 < (int)piVar4) {
      do {
        iVar2 = FUN_005bd7b0(param_2,iVar1);
        if (iVar2 < 0) {
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)piVar4);
    }
    iVar3 = FUN_005bddf0(param_2,iVar1);
    if (-1 < iVar3) {
      switch(*(undefined4 *)(param_1 + 4)) {
      case 2:
        FUN_005bd0a0(param_2,iVar1,param_1);
        return;
      case 3:
        FUN_005bd2c0(param_2,iVar1);
        return;
      case 4:
        FUN_005bd4e0(param_2,iVar1);
        return;
      case 5:
        FUN_005bd4f0(param_2,iVar1);
      }
    }
  }
  return;
}


