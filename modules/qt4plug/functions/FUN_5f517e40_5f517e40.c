/* Module: qt4plug.dll
   Function: FUN_5f517e40
   Address: 5f517e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f517e40(uint *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  puVar5 = (uint *)0x0;
  uVar3 = *param_1;
  bVar2 = false;
  bVar1 = true;
  uVar3 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
  if (7 < (int)uVar3) {
    do {
      uVar4 = param_1[1];
      uVar4 = (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 | (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
      if ((int)uVar4 < 0x51444351) {
        if (uVar4 != 0x51444350) {
          if (uVar4 == 0) {
            bVar1 = false;
          }
          else if ((uVar4 == 0x51444341) && (0x1b < uVar3)) {
            puVar5 = param_1 + 2;
          }
        }
      }
      else if ((uVar4 == 0x66726d61) && (param_1[2] == 0x324d4451)) {
        bVar2 = true;
      }
      param_1 = (uint *)((int)param_1 + uVar3);
      if (!bVar1) break;
      uVar3 = *param_1;
      uVar3 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
    } while (7 < (int)uVar3);
    if ((bVar2) && (puVar5 != (uint *)0x0)) {
      uVar3 = puVar5[3];
      uVar4 = (uint)*(short *)(param_2 + 8);
      puVar5[1] = (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 | (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
      uVar4 = FUN_5f518080(*(int *)(param_2 + 0xc));
      iVar6 = 0x1000;
      puVar5[2] = (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 | (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
      if ((int)uVar4 < 16000) {
        iVar6 = 0x400;
      }
      else if ((int)uVar4 < 32000) {
        iVar6 = 0x800;
      }
      puVar5[4] = iVar6 << 8;
      puVar5[5] = ((iVar6 >> 4) << 0x10 | iVar6 >> 4 & 0xff00U) << 8;
      iVar6 = (int)(iVar6 * ((uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 |
                            (uVar3 << 0x10 | uVar3 & 0xff00) << 8)) / (int)uVar4;
      uVar3 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
      uVar4 = uVar3 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      uVar3 = uVar3 - uVar4;
      puVar5[6] = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 * 0x10000 | uVar3 & 0xff00) << 8;
    }
  }
  return;
}


