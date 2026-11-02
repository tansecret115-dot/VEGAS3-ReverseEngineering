/* Module: sftrkfx1.dll
   Function: FUN_5cbd16f0
   Address: 5cbd16f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cbd16f0(int param_1,int param_2,int param_3,int param_4,uint *param_5,uint *param_6)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  BOOL BVar4;
  uint uVar5;
  RECT *pRVar6;
  
  if (((*(byte *)(param_1 + 0xc) & 0x81) != 0) ||
     (pt.y = param_3, pt.x = param_2, BVar4 = PtInRect((RECT *)(param_1 + 0x3c),pt), BVar4 == 0)) {
    return 0xffffffff;
  }
  uVar5 = *(uint *)(param_1 + 0xc) & 0x80000;
  if (((uVar5 == 0) && (param_4 != 0)) || ((uVar5 != 0 && (param_4 == 0)))) {
    *param_5 = 0;
    uVar5 = 0;
    bVar3 = false;
    if (*(int *)(param_1 + 0x24) != 0) {
      pRVar6 = (RECT *)(param_1 + 0xb8);
      do {
        *param_5 = *param_5 | 1 << ((byte)uVar5 & 0x1f);
        pt_00.y = param_3;
        pt_00.x = param_2;
        BVar4 = PtInRect(pRVar6,pt_00);
        if (BVar4 != 0) {
          bVar3 = true;
          *param_6 = uVar5;
        }
        uVar5 = uVar5 + 1;
        pRVar6 = (RECT *)&pRVar6[2].top;
      } while (uVar5 < *(uint *)(param_1 + 0x24));
      if (bVar3) {
        return 5;
      }
    }
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      pRVar6 = (RECT *)(param_1 + 0xb8);
      do {
        pt_01.y = param_3;
        pt_01.x = param_2;
        BVar4 = PtInRect(pRVar6,pt_01);
        if (BVar4 != 0) {
          *param_6 = uVar5;
          *param_5 = 1 << ((byte)uVar5 & 0x1f);
          uVar2 = *(uint *)(param_1 + 0xc);
          if (((uVar2 & 0x10) != 0) && ((uVar2 & 0x100000) == 0)) {
            if ((uVar2 & 8) == 0) {
              bVar3 = *(int *)(param_1 + 200 + uVar5 * 0x24) < param_3;
            }
            else {
              bVar3 = *(int *)(param_1 + 200 + uVar5 * 0x24) < param_2;
            }
            if (bVar3) {
              if (uVar5 != 0) {
                return 5;
              }
            }
            else if (uVar5 != 1) {
              return 5;
            }
            *param_5 = 3;
          }
          return 5;
        }
        uVar5 = uVar5 + 1;
        pRVar6 = (RECT *)&pRVar6[2].top;
      } while (uVar5 < *(uint *)(param_1 + 0x24));
    }
  }
  uVar5 = *(uint *)(param_1 + 0x104);
  *param_6 = uVar5;
  *param_5 = *(uint *)(param_1 + 0x100);
  piVar1 = (int *)(param_1 + 0xb8 + uVar5 * 0x24);
  pt_02.y = param_3;
  pt_02.x = param_2;
  BVar4 = PtInRect((RECT *)(param_1 + 0x60),pt_02);
  if (BVar4 == 0) {
    if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
      return (uint)(piVar1[1] <= param_3);
    }
    return (uint)(param_2 < *piVar1);
  }
  if ((*(byte *)(param_1 + 0xc) & 8) != 0) {
    return (piVar1[1] <= param_3) + 2;
  }
  return (param_2 < *piVar1) + 2;
}


