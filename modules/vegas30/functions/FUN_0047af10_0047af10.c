/* Module: vegas30.exe
   Function: FUN_0047af10
   Address: 0047af10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047afcd) */

undefined4 FUN_0047af10(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  undefined4 local_4;
  
  local_4 = 0;
  if ((param_1 == 0) || (piVar1 = *(int **)(param_1 + 0x54), piVar1 == (int *)0x0)) {
    return 0;
  }
  iVar6 = (int)(short)param_4;
  iVar5 = (int)(short)((uint)param_4 >> 0x10);
  if (param_2 < 0x203) {
    if (param_2 == 0x202) {
      uVar3 = FUN_0047a110(param_1,param_3,iVar6,iVar5);
      FUN_0047b0d0(param_1);
      return uVar3;
    }
    if (param_2 == 0x1f) {
      pHVar4 = GetCapture();
      if (pHVar4 == (HWND)*piVar1) {
        ReleaseCapture();
      }
      if ((*(byte *)(piVar1 + 10) & 7) != 0) {
        piVar2 = *(int **)(param_1 + 0x18);
        if (piVar2 != (int *)0x0) {
          iVar5 = *(int *)(param_1 + 0x44);
          if ((iVar5 < 0) || (*piVar2 + -1 < iVar5)) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(piVar2[2] + iVar5 * 4);
          }
          if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0xc) & 4) == 0)) {
            FUN_00479a40(param_1,iVar5);
          }
        }
        if (**(int **)(param_1 + 0x50) == 0x20) {
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x40);
        }
        else {
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x40);
        }
        FUN_004ea040(uVar3,0);
      }
      FUN_0047b0d0(param_1);
      if (-1 < piVar1[6]) {
        piVar1[6] = -1;
      }
      piVar1[1] = -1;
      piVar1[10] = piVar1[10] & 0xffffffe0;
      FUN_00479520(param_1);
      FUN_00477e00(param_1,0,1);
      return 0;
    }
    if (param_2 == 0x200) {
      pHVar4 = GetCapture();
      if (pHVar4 == (HWND)*piVar1) {
        uVar3 = FUN_0047b0e0(param_1,param_3,iVar6,iVar5);
        return uVar3;
      }
    }
    else if (param_2 == 0x201) {
      uVar3 = FUN_00479a60(param_1,param_3,iVar6,iVar5);
      return uVar3;
    }
  }
  else if (param_2 == 0x203) {
    local_4 = FUN_0047a000(param_1,param_3,iVar6,iVar5);
  }
  else if ((param_2 == 0x204) || (param_2 == 0x206)) {
    uVar3 = FUN_0047a800(param_1,param_3,iVar6,iVar5,param_2 == 0x206);
    return uVar3;
  }
  return local_4;
}


