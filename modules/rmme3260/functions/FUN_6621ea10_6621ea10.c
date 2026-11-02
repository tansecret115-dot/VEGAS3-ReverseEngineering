/* Module: rmme3260.dll
   Function: FUN_6621ea10
   Address: 6621ea10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6621ea10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_14 = 0;
  local_8 = 0xffffffff;
  local_10 = -1;
  local_c = 0;
  iVar3 = -1;
  if (-1 < *(int *)((int)this + 4) + -1) {
    do {
      piVar1 = *(int **)(*(int *)this + local_c * 4);
      if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
        if (piVar1[3] == 0) {
          do {
            uVar2 = (**(code **)(*(int *)*piVar1 + 0x10))(piVar1 + 5,piVar1 + 4);
            piVar1[3] = uVar2;
            if (uVar2 == 0) break;
            if ((uint)*(ushort *)(piVar1 + 6) == piVar1[1]) {
              *(short *)(piVar1 + 6) = (short)piVar1[2];
              FUN_66250fc0(*(void **)((int)piVar1 + 0x1e),uVar2,*piVar1);
            }
            else {
              (**(code **)(*(int *)*piVar1 + 0x14))(uVar2);
              piVar1[3] = 0;
            }
          } while (piVar1[3] == 0);
          if (piVar1[3] == 0) goto LAB_6621eabc;
        }
        if ((uint)piVar1[5] < local_8) {
          local_10 = local_c;
          local_8 = piVar1[5];
        }
      }
LAB_6621eabc:
      local_c = local_c + 1;
      iVar3 = local_10;
    } while (local_c <= *(int *)((int)this + 4) + -1);
  }
  if (-1 < iVar3) {
    iVar3 = *(int *)(*(int *)this + iVar3 * 4);
    local_14 = *(undefined4 *)(iVar3 + 0xc);
    *param_1 = *(undefined4 *)(iVar3 + 0x14);
    param_1[1] = *(undefined4 *)(iVar3 + 0x18);
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar3 + 0x1c);
    *param_2 = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  return local_14;
}


