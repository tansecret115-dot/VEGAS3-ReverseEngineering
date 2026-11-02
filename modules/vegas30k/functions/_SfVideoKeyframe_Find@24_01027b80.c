/* Module: vegas30k.dll
   Function: _SfVideoKeyframe_Find@24
   Address: 01027b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8
_SfVideoKeyframe_Find_24
          (int param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
                    /* 0x27b80  1256  _SfVideoKeyframe_Find@24 */
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  uVar7 = 0xffffffff;
  uVar8 = 0xffffffff;
  iVar2 = 0;
  iVar6 = -1;
  if (0 < iVar4) {
    do {
      iVar3 = iVar2;
      puVar5 = (uint *)(piVar1[1] * iVar3 + piVar1[2]);
      if ((param_5 != 0xffffffff) || (param_6 != 0xffffffff)) {
        if ((iVar6 < 0) ||
           ((((param_3 != 0 || (param_4 != 0)) || (0 < (int)uVar8)) ||
            ((-1 < (int)uVar8 || ((int)puVar5[1] < 0)))))) {
          if ((param_5 == param_3) && (param_6 == param_4)) {
            uVar8 = puVar5[1];
            uVar7 = *puVar5;
            if (((int)param_6 <= (int)uVar8) && (((int)param_6 < (int)uVar8 || (param_5 < uVar7))))
            goto LAB_01027c3a;
          }
        }
        else {
          iVar2 = piVar1[2];
          iVar6 = piVar1[1] * iVar6;
          uVar7 = *(uint *)(iVar6 + iVar2);
          uVar8 = *(uint *)(iVar6 + 4 + iVar2);
          puVar5 = (uint *)(iVar6 + iVar2);
LAB_01027c3a:
          param_3 = uVar7;
          param_4 = uVar8;
        }
      }
      uVar7 = *puVar5;
      uVar8 = puVar5[1];
      if ((uVar7 == param_3) && (uVar8 == param_4)) {
        uVar7 = 0;
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = puVar5;
          return CONCAT44(param_2,iVar3);
        }
        goto LAB_01027c5f;
      }
      iVar2 = iVar3 + 1;
      iVar6 = iVar3;
    } while (iVar3 + 1 < iVar4);
  }
  iVar3 = -1;
LAB_01027c5f:
  return CONCAT44(uVar7,iVar3);
}


