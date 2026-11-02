/* Module: aviplug.dll
   Function: FUN_5f93e610
   Address: 5f93e610
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f93e610(undefined4 *param_1,uchar *param_2,int param_3,int param_4)

{
  LPDWORD pDVar1;
  int iVar2;
  HGLOBAL hMem;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = 0;
  hMem = GlobalAlloc(0x42,0x1c8);
  piVar3 = GlobalLock(hMem);
  if (piVar3 != (int *)0x0) {
    piVar3[2] = param_3;
    piVar3[0x1e] = -1;
    piVar3[0x20] = -1;
    piVar3[0x22] = -1;
    piVar3[3] = param_4;
    piVar3[0x68] = 0x20000000;
    piVar3[0x1f] = -1;
    piVar3[0x21] = -1;
    piVar3[0x23] = -1;
    piVar3[0x25] = -1;
    piVar3[0x14] = -1;
    if (param_3 == 0) {
      piVar3[0x24] = 1;
LAB_5f93e6b1:
      piVar3[0x68] = 0x8000000;
    }
    else {
      pDVar1 = (LPDWORD)(piVar3 + 0x24);
      iVar4 = FUN_5f942f90(param_2,pDVar1);
      if ((0x200 < (int)*pDVar1) || (iVar4 != 0)) {
        *pDVar1 = 0x200;
        goto LAB_5f93e6b1;
      }
    }
    _mbscpy((uchar *)(piVar3 + 0x27),param_2);
    param_2 = (uchar *)FUN_5f9797b0(piVar3 + 0x10,0x48,-1,-1,0x80000004);
    if ((int)param_2 < 0) goto LAB_5f93e929;
    piVar3[0x11] = -1;
    uVar7 = 0;
    if (param_3 != 0) {
      uVar6 = piVar3[0x24];
      if ((uVar6 == 0) || ((2 < uVar6 && (uVar6 != 4)))) {
        uVar7 = uVar6 + 0x17 & ~(uVar6 - 1);
        if ((uVar7 != 0x18) && (uVar7 - 0x18 < 8)) {
          uVar7 = uVar7 + uVar6;
        }
      }
      else {
        uVar7 = 0x18;
      }
    }
    uVar6 = ~(piVar3[0x24] - 1U) & piVar3[0x24] + 0x7ffU;
    puVar5 = FUN_5f943000((undefined4 *)0x0,uVar6 + uVar7,0,0,(SIZE_T *)(piVar3 + 1),(SIZE_T *)0x0);
    *piVar3 = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      puVar5 = FUN_5f943000((undefined4 *)0x0,1,0x100000,0,(SIZE_T *)(piVar3 + 0xe),(SIZE_T *)0x0);
      piVar3[0xd] = (int)puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        if (param_3 != 0) {
          puVar5 = (undefined4 *)*piVar3;
          piVar3[0xb] = (int)puVar5;
          *puVar5 = 0x46464952;
          puVar5[1] = uVar7 - 8;
          puVar5[2] = 0x58495641;
          puVar5[3] = 0x5453494c;
          puVar5[4] = uVar7 - 0x14;
          puVar5[5] = 0x69766f6d;
          if (0x18 < uVar7) {
            puVar5[6] = 0x4b4e554a;
            puVar5[7] = uVar7 - 0x20;
          }
        }
        puVar5 = (undefined4 *)(*piVar3 + uVar7);
        iVar4 = 0x44;
        piVar3[4] = (int)puVar5;
        piVar3[0xc] = (int)puVar5;
        *puVar5 = 0x46464952;
        puVar5[1] = uVar6 - 8;
        puVar5[2] = 0x20495641;
        piVar3[6] = (int)(puVar5 + 3);
        if (param_3 != 0) {
          iVar4 = 0x360;
        }
        puVar5[3] = 0x5453494c;
        puVar5[4] = iVar4;
        puVar5[5] = 0x6c726468;
        piVar3[7] = (int)(puVar5 + 6);
        puVar5[6] = 0x68697661;
        *(undefined4 *)(piVar3[7] + 4) = 0x38;
        *(int *)(piVar3[7] + 0x10) = piVar3[0x24];
        *(undefined4 *)(piVar3[7] + 0x14) = 0x800;
        if (param_3 != 0) {
          uVar7 = *(uint *)(piVar3[7] + 4);
          puVar5 = (undefined4 *)((uVar7 & 1) + uVar7 + 8 + piVar3[7]);
          *puVar5 = 0x5453494c;
          puVar5[1] = 0x104;
          puVar5[2] = 0x6c6d646f;
          piVar3[8] = (int)(puVar5 + 3);
          puVar5[3] = 0x686c6d64;
          *(undefined4 *)(piVar3[8] + 4) = 0xf8;
          uVar7 = *(uint *)(piVar3[8] + 4);
          puVar5 = (undefined4 *)((uVar7 & 1) + uVar7 + 8 + piVar3[8]);
          piVar3[9] = (int)puVar5;
          *puVar5 = 0x584e4653;
          *(undefined4 *)(piVar3[9] + 4) = 0x208;
        }
        uVar7 = *(uint *)(piVar3[6] + 4);
        puVar5 = (undefined4 *)((uVar7 & 1) + uVar7 + 8 + piVar3[6]);
        iVar2 = *(int *)(piVar3[4] + 4);
        *puVar5 = 0x4b4e554a;
        uVar7 = (iVar2 - iVar4) - 0x20;
        puVar5[1] = uVar7;
        puVar5 = (undefined4 *)((int)puVar5 + uVar7 + (uVar7 & 1) + 8);
        piVar3[10] = (int)puVar5;
        *puVar5 = 0x5453494c;
        *(undefined4 *)(piVar3[10] + 4) = 4;
        *(undefined4 *)(piVar3[10] + 8) = 0x69766f6d;
        piVar3[0x70] = piVar3[4] - *piVar3;
        piVar3[5] = (piVar3[10] - piVar3[4]) + 0xc;
        *(undefined4 *)piVar3[0xd] = 0x31786469;
        *(undefined4 *)(piVar3[0xd] + 4) = 0;
        *param_1 = piVar3;
        return (int)param_2;
      }
    }
  }
  param_2 = (uchar *)0x8007000e;
LAB_5f93e929:
  FUN_5f93e510(piVar3);
  *param_1 = 0;
  return (int)param_2;
}


