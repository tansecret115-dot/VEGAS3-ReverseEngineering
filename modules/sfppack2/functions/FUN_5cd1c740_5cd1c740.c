/* Module: sfppack2.dll
   Function: FUN_5cd1c740
   Address: 5cd1c740
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cd1c740(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  bool bVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  BOOL BVar3;
  RECT *pRVar4;
  uint uVar5;
  
  if (((*(byte *)(param_1 + 0xc) & 0x81) != 0) ||
     (pt.y = param_3, pt.x = param_2, BVar3 = PtInRect((RECT *)(param_1 + 0x3c),pt), BVar3 == 0)) {
    return 0xffffffff;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x80000) == 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      pRVar4 = (RECT *)(param_1 + 0xb8);
      do {
        pt_01.y = param_3;
        pt_01.x = param_2;
        BVar3 = PtInRect(pRVar4,pt_01);
        if (BVar3 != 0) {
          *param_5 = uVar5;
          *param_4 = 1 << ((byte)uVar5 & 0x1f);
          if ((*(uint *)(param_1 + 0xc) & 0x10) != 0) {
            if ((*(uint *)(param_1 + 0xc) & 8) == 0) {
              bVar2 = *(int *)(param_1 + 200 + uVar5 * 0x24) < param_3;
            }
            else {
              bVar2 = *(int *)(param_1 + 200 + uVar5 * 0x24) < param_2;
            }
            if (bVar2) {
              if (uVar5 != 0) {
                return 5;
              }
            }
            else if (uVar5 != 1) {
              return 5;
            }
            *param_4 = 3;
          }
          return 5;
        }
        uVar5 = uVar5 + 1;
        pRVar4 = (RECT *)&pRVar4[2].top;
      } while (uVar5 < *(uint *)(param_1 + 0x24));
    }
  }
  else {
    uVar5 = 0;
    *param_4 = 0;
    bVar2 = false;
    if (*(int *)(param_1 + 0x24) != 0) {
      pRVar4 = (RECT *)(param_1 + 0xb8);
      do {
        *param_4 = *param_4 | 1 << ((byte)uVar5 & 0x1f);
        pt_00.y = param_3;
        pt_00.x = param_2;
        BVar3 = PtInRect(pRVar4,pt_00);
        if (BVar3 != 0) {
          bVar2 = true;
          *param_5 = uVar5;
        }
        uVar5 = uVar5 + 1;
        pRVar4 = (RECT *)&pRVar4[2].top;
      } while (uVar5 < *(uint *)(param_1 + 0x24));
      if (bVar2) {
        return 5;
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x104);
  *param_5 = uVar5;
  *param_4 = *(uint *)(param_1 + 0x100);
  piVar1 = (int *)(param_1 + 0xb8 + uVar5 * 0x24);
  pt_02.y = param_3;
  pt_02.x = param_2;
  BVar3 = PtInRect((RECT *)(param_1 + 0x60),pt_02);
  if (BVar3 == 0) {
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


