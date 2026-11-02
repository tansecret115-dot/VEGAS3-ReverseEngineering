/* Module: vidcap30.exe
   Function: FUN_00570cd0
   Address: 00570cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00570cd0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 local_1c [28];
  
  *param_2 = 0;
  if ((param_4 == 1) || (*(int *)(param_1 + 0x7e4) == 0)) {
    *(undefined4 *)(param_1 + 0x7e4) = 1;
    local_1c[0] = 0;
    *(undefined4 *)(param_1 + 2000) = 0;
    *(undefined4 *)(param_1 + 0x7dc) = 0;
    iVar1 = FUN_00570880(local_1c,0x19);
    if ((iVar1 < 0) || (iVar1 = FUN_0056e3f0(local_1c), iVar1 < 0)) {
      *(undefined4 *)(param_1 + 0x7d8) = 0x8004e12d;
    }
    else {
      iVar1 = FUN_0056ee60(local_1c,(undefined4 *)(param_1 + 0x7dc));
      *(int *)(param_1 + 0x7d8) = iVar1;
      if (iVar1 < 0) {
        if (iVar1 == -0x7ffb1ed3) goto LAB_00570e95;
      }
      else {
        if (iVar1 == 0x4e135) {
          if ((*(int *)(param_1 + 0x7f0) == 0) || (iVar1 = FUN_005746d0(), -1 < iVar1)) {
            if (*(int *)(param_1 + 0x680) == 0) {
              uVar2 = FUN_0056e620();
              *(uint *)(param_1 + 2000) = uVar2 & 0xffff;
              if ((uVar2 & 0xffff) == 0) {
                *(undefined4 *)(param_1 + 0x7d8) = 0x8004e140;
              }
              else if ((*(int *)(param_1 + 0x7f4) == 0) || (*(int *)(param_1 + 0x7f0) == 0)) {
                *(undefined4 *)(param_1 + 0x7d8) = 0x8004e14e;
              }
              else {
                *(undefined4 *)(param_1 + 0x7d8) = 0x4e137;
              }
            }
            else {
              uVar2 = FUN_0056e620();
              if (*(uint *)(param_1 + 0x684) == (uVar2 & 0xffff)) {
                *(undefined4 *)(param_1 + 0x7d8) = 0x4e136;
                *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_1 + 0x7c8);
              }
              else {
                *(undefined4 *)(param_1 + 0x7d8) = 0x8004e140;
              }
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x7d8) = 0x8004e14f;
          }
          goto LAB_00570e95;
        }
        if (*(int *)(param_1 + 0x680) != 0) {
          uVar2 = FUN_0056e620();
          if (*(uint *)(param_1 + 0x684) == (uVar2 & 0xffff)) {
            *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_1 + 0x7c8);
          }
          else {
            *(undefined4 *)(param_1 + 0x7d8) = 0x8004e140;
          }
          goto LAB_00570e95;
        }
      }
      uVar2 = FUN_0056e620();
      *(uint *)(param_1 + 2000) = uVar2 & 0xffff;
      if ((uVar2 & 0xffff) == 0) {
        *(undefined4 *)(param_1 + 0x7d8) = 0x8004e140;
      }
    }
  }
LAB_00570e95:
  *param_2 = *(undefined4 *)(param_1 + 0x7dc);
  *param_3 = *(undefined4 *)(param_1 + 2000);
  return *(undefined4 *)(param_1 + 0x7d8);
}


