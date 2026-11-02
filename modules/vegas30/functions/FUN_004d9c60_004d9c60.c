/* Module: vegas30.exe
   Function: FUN_004d9c60
   Address: 004d9c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d9c60(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(int *)(*(int *)(param_2 + 0x69c) + 0x50) == 2) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x69c) + 0x58);
    uVar2 = *(uint *)(iVar1 + 0x84);
    if ((-1 < (int)uVar2) && (uVar2 < 5)) {
      if (uVar2 == 0) {
        if (param_3 == 0) {
          fVar4 = (float10)_DAT_006106d0;
        }
        else if (param_3 < -599) {
          fVar4 = (float10)_DAT_00610fd8;
        }
        else {
          fVar4 = (float10)_CIpow();
        }
        if (fVar4 != (float10)*(float *)(param_2 + 0x48)) {
          *(float *)(param_2 + 0x48) = (float)fVar4;
          goto LAB_004d9df7;
        }
      }
      else if (uVar2 == 1) {
        fVar4 = (float10)_DAT_00610f20;
        if (param_3 < 1) {
          if (param_3 < 0) {
            fVar4 = (float10)_CIpow();
            fVar4 = fVar4 - (float10)_DAT_006106d0;
          }
        }
        else {
          fVar4 = (float10)_CIpow();
          fVar4 = (float10)_DAT_006106d0 - fVar4;
        }
        if (fVar4 != (float10)*(float *)(param_2 + 0x4c)) {
          *(float *)(param_2 + 0x4c) = (float)fVar4;
          goto LAB_004d9df7;
        }
      }
      else if (uVar2 == 2) {
        fVar4 = (float10)_DAT_00610f20;
        if (param_3 < 1) {
          if (param_3 < 0) {
            fVar4 = (float10)_CIpow();
            fVar4 = fVar4 - (float10)_DAT_006106d0;
          }
        }
        else {
          fVar4 = (float10)_CIpow();
          fVar4 = (float10)_DAT_006106d0 - fVar4;
        }
        if (fVar4 != (float10)*(float *)(param_2 + 0x50)) {
          *(float *)(param_2 + 0x50) = (float)fVar4;
          goto LAB_004d9df7;
        }
      }
      else {
        if (param_3 == 0) {
          fVar4 = (float10)_DAT_006106d0;
        }
        else if (param_3 < -599) {
          fVar4 = (float10)_DAT_00610fd8;
        }
        else {
          fVar4 = (float10)_CIpow();
        }
        if (fVar4 != (float10)*(float *)(param_2 + 0x40 + uVar2 * 8)) {
          *(float *)(param_2 + 0x40 + uVar2 * 8) = (float)fVar4;
LAB_004d9df7:
          if (param_2 == 0) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = *(undefined4 *)(param_2 + 0x44);
          }
          (**(code **)(*DAT_0064b144 + 0xd4))(DAT_0064b144,1,uVar3,0,0,0xffffffff,0xffffffff);
          InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)(iVar1 + 0x54),0);
          return;
        }
      }
    }
  }
  return;
}


