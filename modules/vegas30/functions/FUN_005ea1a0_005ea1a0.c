/* Module: vegas30.exe
   Function: FUN_005ea1a0
   Address: 005ea1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ea1a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPCSTR lpString2;
  int iVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_005bb1d0(0x25,param_2,param_3,param_4,param_1,1,param_5);
  if (-1 < iVar2) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_3 + 0x24) + 8) + param_4 * 4);
    if (DAT_0065ad70 == 0) {
      iVar3 = FUN_005c6910(iVar1,0xffffffff);
      if (iVar3 != 0) {
        lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x50ff);
        iVar4 = lstrcmpA(*(LPCSTR *)(iVar3 + 0x20),lpString2);
        if (iVar4 == 0) {
          if ((((*(uint *)(iVar1 + 0x10) & 0x200000) != 0) && (*(int *)(iVar3 + 0x18) != 0)) &&
             (iVar4 = FUN_005f13f0(*(undefined4 *)(iVar1 + 4)), iVar4 != 0)) {
            uVar5 = ftol();
            *(undefined8 *)(iVar1 + 0x20) = uVar5;
          }
          FUN_005c69a0(iVar3,*(int *)(iVar3 + 0x18) + 0x170);
        }
      }
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffcfffff;
    }
    else if ((*(uint *)(iVar1 + 0x10) & 0x200000) != 0) {
      *(int *)(param_3 + 0x24c) = iVar1;
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_3 + 0x3b0);
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_3 + 0x3b4);
      return iVar2;
    }
  }
  return iVar2;
}


